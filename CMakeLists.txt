cmake_minimum_required(VERSION 3.26)

project("grpc_sample_apps")

set(CMAKE_CXX_STANDARD 14)

include_directories("../local/include/")

add_library(grpc_gen_proto
    "./gen/greeter.grpc.pb.cc"
    "./gen/greeter.grpc.pb.h"
    "./gen/greeter.pb.cc"
    "./gen/greeter.pb.h"
)

target_link_libraries(grpc_gen_proto
    ${_PROTOBUF_LIBPROTOBUF}
    ${_REFLECTION}
    ${_GRPC_GRPCPP}
)

foreach(_target server client)
    add_executable(${_target} "${_target}.cpp")
    target_link_libraries(${_target}
        grpc_gen_proto
        ${_PROTOBUF_LIBPROTOBUF}
        ${_REFLECTION}
        ${_GRPC_GRPCPP}
    )
endforeach()