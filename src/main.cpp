/*
 * File: main.cpp
 * Description: Entry point for the process.
 *
 * Copyright (C) 2025 TheMonHub
 * SPDX-License-Identifier: Apache-2.0
 */

#include "exit.hpp"
#include "log.hpp"
#include "verbose.hpp"

int main() {
  log::LogVerbose("Hello World!", 1);
  log::Log("Hello World!");
  ExitProcess(0);
}