#!/bin/bash

cd "$(dirname "$0")"/..
mkdir -p "$(dirname "$0")"/clang_tidy_build
cmake -S . -B "$(dirname "$0")"/clang_tidy_build -DCMAKE_EXPORT_COMPILE_COMMANDS=ON
run-clang-tidy '^(?!.*_deps/)(?=.*\.c(pp)?).*' -p "$(dirname "$0")"/clang_tidy_build -quiet
