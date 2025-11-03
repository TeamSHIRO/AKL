/*
 * File: verbose.hpp
 * Description: Handle verbose output
 *
 * Copyright (C) 2025 TheMonHub
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef AKL_VERBOSE_HPP
#define AKL_VERBOSE_HPP

#include <cassert>
#include <mutex>

#include "assert_helper.hpp"
#include "log.hpp"

/*
 * Convention that you'll (hopefully) use.
 * Level 1: Shows input, output
 * Level 2: + Internal linking process
 * Level 3: + akl dev debug
 */

namespace verbose {
inline int vness = 0;  // please don't use this directly, you're not that dumb.
inline std::mutex v_mutex;
inline int get_verbosity() {
  const std::scoped_lock lock(v_mutex);
  return vness;
}
template <const int level>
void set_verbosity() {
  static_assert(level >= 0, "Verbosity level cannot be negative");
  static_assert(level < 3, "Verbosity level cannot be greater than 3");

  const std::scoped_lock lock(v_mutex);
  vness = level;
}
inline void increase_verbosity() {
  const std::scoped_lock lock(v_mutex);
  vness++;
  ASSERTM(vness >= 0 && vness <= 3, "Verbosity level must be between 0 and 3");
}
}  // namespace verbose

namespace log {
template <typename T>
void LogVerbose(T msg, const int v_level) {
  if (v_level >= verbose::get_verbosity()) {
    Log(msg);
  }
}
}  // namespace log

#endif  //AKL_VERBOSE_HPP
