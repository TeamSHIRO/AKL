/*
 * File: verbose.hpp
 * Description: Handle verbose output
 *
 * Copyright (C) 2025 TheMonHub
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef AKL_VERBOSE_HPP
#define AKL_VERBOSE_HPP

#include <mutex>

#include "output.hpp"

/*
 * Convention that you'll (hopefully) use.
 * Level 1: Shows input, output
 * Level 2: + Internal linking process
 * Level 3: + akl dev debug
 */

namespace verbose {
inline int vness = 0;  // please don't use this directly, you're not that dumb.
inline std::mutex v_mutex;
inline int get_vness() {
  const std::scoped_lock lock(v_mutex);
  return vness;
}
inline void set_vness(const int level) {
  const std::scoped_lock lock(v_mutex);
  vness = level;
}
}  // namespace verbose

namespace output {
template <typename T>
void LogVerbose(T msg, const int v_level) {
  if (v_level >= verbose::get_vness()) {
    Log(msg);
  }
}
}  // namespace output

#endif  //AKL_VERBOSE_HPP
