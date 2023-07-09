#include <string>
#include <iostream>

void logInfo(std::string message) {
    std::cout << "[INFO] " << message << std::endl;
}

int main(int argc, char** argv) {
    logInfo("Cpp gRPC Server is RUNNING...");


    logInfo("Cpp gRPC Server is EXITING...");
    return 0;
}