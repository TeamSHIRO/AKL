/*
 * File: main.cpp
 * Description: Entry point for the process.
 *
 * Copyright (C) 2025 TheMonHub
 * SPDX-License-Identifier: Apache-2.0
 */

#include "exit.hpp"
#include "input/cli.hpp"

int main(const int argc, char** argv) {
  cli::ParseCliInput(argc, argv);
  ExitProcess(0);
}