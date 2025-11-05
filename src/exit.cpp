/*
 * File: exit.cpp
 * Description: define exit function
 *
 * Copyright (C) 2025 TheMonHub
 * SPDX-License-Identifier: Apache-2.0
 */

#include "exit.hpp"

#include <chrono>
#include <cstdlib>
#include <limits>
#include <mutex>
#include <thread>

noreturn void ExitProcess(const int code) {
  static std::once_flag once;
  // NOLINTNEXTLINE(*-mt-unsafe)
  std::call_once(once, [code]() { exit(code); });
  while (true) {
    std::this_thread::sleep_until(
        std::chrono::system_clock::now() +
        std::chrono::hours(std::numeric_limits<int>::max()));
  }
}