#!/bin/bash

cd "$(dirname "$0")"
mkdir -p clang_tidy_build
cmake -S .. -B clang_tidy_build -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -G Ninja
cmake --build clang_tidy_build
run-clang-tidy '^(?!.*(\.asm|\.asm.inc|_deps/))' -p clang_tidy_build -quiet -fix