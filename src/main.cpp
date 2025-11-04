/*
 * File: main.cpp
 * Description: Entry point for the process.
 *
 * Copyright (C) 2025 TheMonHub
 * SPDX-License-Identifier: Apache-2.0
 */

#include "assert_helper.hpp"
#include "exit.hpp"
#include "log.hpp"

int main() {
  ASSERTM(1 == 2, "Funny enough");
  log::Log("Hello World!");
  ExitProcess(0);
}