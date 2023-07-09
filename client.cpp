#include <string>
#include <iostream>

void logInfo(std::string message) {
    std::cout << "[INFO] " << message << std::endl;
}

int main(int argc, char** argv) {
    logInfo("Cpp gRPC Client is RUNNING...");


    logInfo("Cpp gRPC Client is EXITING...");
    return 0;
}