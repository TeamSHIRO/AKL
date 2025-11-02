cmake_minimum_required(VERSION 3.29 FATAL_ERROR)

project(AKL
        VERSION 0.1.0
        DESCRIPTION "A linker for !SHIRO's formats."
        HOMEPAGE_URL https://github.com/TeamSHIRO/AKL
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(AKL_COMMON_SOURCES
        src/main.cpp
)

add_executable(AKL ${AKL_COMMON_SOURCES})
target_include_directories(AKL PRIVATE include)