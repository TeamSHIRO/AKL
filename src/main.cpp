/*
 * File: main.cpp
 * Description: Entry point for the process.
 *
 * Copyright (C) 2025 TheMonHub
 * SPDX-License-Identifier: Apache-2.0
 */

#include "exit.hpp"
#include "output.hpp"
#include "verbose.hpp"

int main() {
  output::Log("Hello World!");
  ExitProcess(0);
}