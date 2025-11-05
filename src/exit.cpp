/*
 * File: exit.cpp
 * Description: Define exit function
 *
 * Copyright (C) 2025 TheMonHub
 * SPDX-License-Identifier: Apache-2.0
 */

#include "exit.hpp"

#include <cstdlib>
#include <mutex>

_Noreturn void ExitProcess(const int code) {
  static std::once_flag once;
  // NOLINTNEXTLINE(*-mt-unsafe)
  std::call_once(once, [code]() { exit(code); });
  while (true) {
  }
}