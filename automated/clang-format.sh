#!/bin/bash

cd "$(dirname "$0")"/..
shopt -s globstar
find . -type f \( -name "*.cpp" -o -name "*.h" -o -name "*.hpp" -o -name "*.c" \) -not -path "*/_deps/*" -not -path "*/llvm/*" -not -path "*/CMakeFiles/*" -not -path "*/_CPack_Packages/*" -exec clang-format -i -style=file --dry-run --Werror --verbose {} +