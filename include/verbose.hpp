/*
 * File: verbose.hpp
 * Description: Handle verbose output and setting.
 *
 * Copyright (C) 2025 TheMonHub
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef AKL_VERBOSE_HPP
#define AKL_VERBOSE_HPP

#include <atomic>
#include <string>

#include "assert_helper.hpp"
#include "log.hpp"

/*
 * Verbosity behavior:
 * Level 1: Shows input, output
 * Level 2: + Prints link symbols and counts
 * Level 3: + Prints detailed processing steps
 */

namespace verbose {
extern std::atomic<int> verbosity;
}  // namespace verbose

namespace log {
template <typename T>
void LogVerbose(const T& msg, const int v_level) {
  ASSERTM(v_level <= 3 && v_level >= 0,
          "Internal: Verbosity level requirement for logging must be between 0 and 3; Recieved parameter: " +
              std::to_string(v_level));
  ASSERTM(verbose::verbosity <= 3 && verbose::verbosity >= 0,
          "Current verbosity level must be between 0 and 3; Current: " +
              std::to_string(verbose::verbosity));
  if (v_level <= verbose::verbosity) {
    Log(msg);
  }
}
}  // namespace log

#endif  //AKL_VERBOSE_HPP
