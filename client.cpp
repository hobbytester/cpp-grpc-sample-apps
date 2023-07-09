#include <string>
#include <iostream>
#include <grpc++/grpc++.h>
#include "gen/greeter.grpc.pb.h"

void logInfo(std::string message) {
    std::cout << "[INFO] " << message << std::endl;
}

void logRpcError(grpc::StatusCode code, std::string message) {
    std::cerr << "[ERROR] RPC failure " << code << ": " << message << std::endl;
}

class GreeterClient {
    private:
        std::unique_ptr<Greeter::GreeterService::Stub> stub;

    public:
        GreeterClient(std::shared_ptr<grpc::Channel> channel)
            : stub {Greeter::GreeterService::NewStub(channel)} {}

        void SendHiRequest(const std::string &targetName) {
            Greeter::HiRequest rpcRequest;
            rpcRequest.set_target_name(targetName);

            Greeter::HiResponse rpcResponse;
            grpc::ClientContext context;
            grpc::Status status = stub->SayHi(&context, rpcRequest, &rpcResponse);

            checkRpcStatus(status, rpcResponse);
        }

        void SendHiRequestAgain(const std::string &targetName) {
            Greeter::HiRequest rpcRequest;
            rpcRequest.set_target_name(targetName);

            Greeter::HiResponse rpcResponse;
            grpc::ClientContext context;
            grpc::Status status = stub->SayHiAgain(&context, rpcRequest, &rpcResponse);

            checkRpcStatus(status, rpcResponse);
        }

    private:
        void checkRpcStatus(grpc::Status &status, Greeter::HiResponse &rpcResponse) {
            if (status.ok()) {
                std::string message = rpcResponse.message();
                logInfo("RPC success: " + message);
            } else {
                logRpcError(status.error_code(), status.error_message());
            }
        }
};

int main(int argc, char** argv) {
    logInfo("Cpp gRPC Client App is RUNNING...");

    std::string server_address{"localhost:50051"};
    GreeterClient client{grpc::CreateChannel(server_address, grpc::InsecureChannelCredentials())};
    client.SendHiRequest("ubuntu");
    client.SendHiRequestAgain("debian");

    logInfo("Cpp gRPC Client App is EXITING...");
    return 0;
}