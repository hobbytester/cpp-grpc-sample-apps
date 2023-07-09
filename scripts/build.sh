#!/usr/bin/env bash

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )
BUILD_DIR=${SCRIPT_DIR}/../build

rm -rf $BUILD_DIR
mkdir -p $BUILD_DIR

pushd $BUILD_DIR
cmake .. && make -j 4
popd
