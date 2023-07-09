#!/bin/bash

MY_INSTALL_DIR=~/data/97_Hobbies/04_gRPC/local
PATH="$MY_INSTALL_DIR/bin:$PATH"

PROTO_FILE="greeter.proto"

PROTO_DIR="./proto"
GEN_DIR="./gen_sample"

protoc -I=$PROTO_DIR --cpp_out=$GEN_DIR "${PROTO_DIR}/${PROTO_FILE}"
protoc -I=$PROTO_DIR --grpc_out=$GEN_DIR \
       --plugin=protoc-gen-grpc=$MY_INSTALL_DIR/bin/grpc_cpp_plugin \
       "${PROTO_DIR}/${PROTO_FILE}"
