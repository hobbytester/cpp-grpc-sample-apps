# C++ gRPC Playground

This playground notes is refered from https://grpc.io/docs/languages/cpp/quickstart/

## Prepare Environment

- All tools and dependecies packages are installed at `MY_INSTALL_DIR`
```
export MY_INSTALL_DIR=~/data/97_Hobbies/04_gRPC/local
mkdir -p $MY_INSTALL_DIR
export PATH="$MY_INSTALL_DIR/bin:$PATH"
```
- Install `cmake` 3.13 or later
```
brew install cmake
cmake --version
```
- Install other required tools
```
brew install autoconf automake libtool pkg-config
```
- Build and install gRPC and Protocol Buffers
```
git clone --recurse-submodules -b v1.56.0 --depth 1 --shallow-submodules https://github.com/grpc/grpc
cd grpc
mkdir -p cmake/build
pushd cmake/build
cmake -DgRPC_INSTALL=ON \
      -DgRPC_BUILD_TESTS=OFF \
      -DCMAKE_INSTALL_PREFIX=$MY_INSTALL_DIR \
      ../..
make -j 8
make install
popd
```

## Define and generate gRPC code
- Create `sample.proto` file in `./proto/`
```
syntax = "proto3";

package sample;

service SampleService {
    rpc SampleMethod (SampleRequest) returns (SampleResponse) {}
}

message SampleRequest {
    string request_sample_field = 1;
}

message SampleResponse {
    string response_sample_field = 1;
}
```
- Generate gRPC code
```
export PROTO_DIR="./proto"
export GEN_DIR="./gen_sample"
protoc -I=$PROTO_DIR --cpp_out=$GEN_DIR $PROTO_DIR/sample.proto
protoc -I=$PROTO_DIR --grpc_out=$GEN_DIR \
       --plugin=protoc-gen-grpc=$MY_INSTALL_DIR/bin/grpc_cpp_plugin \
       $PROTO_DIR/sample.proto
```

## Run and test
- Build all
```
./scripts/genProto.sh
./scripts/build.sh
```
- Run Server
```
./build/server
```
- Run client
```
./build/client
```