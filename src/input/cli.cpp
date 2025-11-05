/*
 * File: cli.cpp
 * Description: Handle command line interface input.
 *
 * Copyright (C) 2025 TheMonHub
 * SPDX-License-Identifier: Apache-2.0
 */

#include "input/cli.hpp"

#include <string>
#include <vector>

#include "log.hpp"

namespace cli {
// Placeholder parser
void ParseCliInput(const int argc, char** argv) {
  // NOLINTNEXTLINE(*-pro-bounds-pointer-arithmetic)
  const std::vector<std::string> args(argv, argv + argc);
  for (const auto& arg : args) {
    log::Log("argument: " + arg);
  }
}
}  // namespace cli