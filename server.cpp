#include <csignal>
#include <string>
#include <iostream>
#include <grpc++/grpc++.h>
#include "gen/greeter.grpc.pb.h"

std::unique_ptr<grpc::Server> gServer;

void logInfo(std::string message) {
    std::cout << "[INFO] " << message << std::endl;
}

void logMetadata(std::string key, std::string value) {
    std::cout << "[INFO] Metadata [" << key << "]:[" << value << "]" << std::endl;
}

void SignalHandler(int sigNum) {
    logInfo("Handle SIGINT");
    if (gServer != NULL) {
        logInfo("Server is shutdown!!!");
        gServer->Shutdown();
    }
}

class GreeterServiceImpl final : public Greeter::GreeterService::Service {
    grpc::Status SayHi(grpc::ServerContext* context, const Greeter::HiRequest* request, Greeter::HiResponse* response) override {
        validateClientMetadata(context->client_metadata());
        logInfo("Serving RPC SayHi: " + request->target_name());
        response->set_message("Hi there!");
        return grpc::Status::OK;
    }

    grpc::Status SayHiAgain(grpc::ServerContext* context, const Greeter::HiRequest* request, Greeter::HiResponse* response) override {
        validateClientMetadata(context->client_metadata());
        logInfo("Serving RPC SayHiAgain: " + request->target_name());
        response->set_message("Hello there");
        return grpc::Status::OK;
    }

    private:
        void validateClientMetadata(std::multimap<grpc::string_ref, grpc::string_ref> metadata) {
            std::multimap<grpc::string_ref, grpc::string_ref>::iterator itr;
            for (itr = metadata.begin(); itr != metadata.end(); ++itr) {
                grpc::string_ref key = itr->first;
                grpc::string_ref value = itr->second;
                logMetadata(std::string(key.begin(), key.end()), std::string(value.begin(), value.end()));
            }
        }
};

void RunServer() {
    GreeterServiceImpl greeterService;

    grpc::ServerBuilder serverBuilder;
    std::string server_address{"localhost:50051"};
    serverBuilder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    serverBuilder.RegisterService(&greeterService);

    gServer = serverBuilder.BuildAndStart();
    logInfo("Server listening on " + server_address);
    gServer->Wait();
}

int main(int argc, char** argv) {
    logInfo("Cpp gRPC Server App is RUNNING...");
    signal(SIGINT, SignalHandler);

    RunServer();

    logInfo("Cpp gRPC Server App is EXITING...");
    return 0;
}