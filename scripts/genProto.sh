#!/usr/bin/env bash

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

MY_INSTALL_DIR="${SCRIPT_DIR}/../../local"
PATH="$MY_INSTALL_DIR/bin:$PATH"

PROTO_FILE="greeter.proto"
PROTO_DIR="${SCRIPT_DIR}/../proto"
GEN_DIR="${SCRIPT_DIR}/../gen"

protoc -I=$PROTO_DIR --cpp_out=$GEN_DIR "${PROTO_DIR}/${PROTO_FILE}"
protoc -I=$PROTO_DIR --grpc_out=$GEN_DIR \
       --plugin=protoc-gen-grpc=$MY_INSTALL_DIR/bin/grpc_cpp_plugin \
       "${PROTO_DIR}/${PROTO_FILE}"
