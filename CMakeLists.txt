# Copyright (C) 2025 TheMonHub
# SPDX-License-Identifier: LicenseRef-Apache-2.0-NoModNotice

cmake_minimum_required(VERSION 3.29 FATAL_ERROR)

project(AKL
        VERSION 0.1.0
        DESCRIPTION "A linker for !SHIRO's format."
        HOMEPAGE_URL https://github.com/TeamSHIRO/AKL
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(AKL src/main.cpp)
target_include_directories(AKL PRIVATE include)