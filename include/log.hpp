/*
 * File: output.hpp
 * Description: Handle console output
 *
 * Copyright (C) 2025 TheMonHub
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef AKL_LOG_HPP
#define AKL_LOG_HPP

#include <iostream>
#include <mutex>

#include "exit.hpp"

namespace log {
namespace internal {
inline std::mutex output_mutex;
constexpr auto kOutputPrefix = "akl: ";
}  // namespace internal

template <typename T>
void Log(const T& msg) {
  const std::scoped_lock lock(internal::output_mutex);
  // NOLINTNEXTLINE(cppcoreguidelines-pro-bounds-array-to-pointer-decay, hicpp-no-array-decay)
  std::cout << internal::kOutputPrefix << msg << "\n";
}
template <typename T>
void Warn(const T& msg) {
  const std::scoped_lock lock(internal::output_mutex);
  std::cerr << internal::kOutputPrefix << "\033[33mwarning:\033[0m " << msg
            << "\n";
}
template <typename T>
void Error(const T& msg, const int code = 0) {
  const std::scoped_lock lock(internal::output_mutex);
  std::cerr << internal::kOutputPrefix << "\033[31merror:\033[0m " << msg
            << "\n";
  if (code != 0) {
    ExitProcess(code);
  }
}
}  // namespace log

#endif  //AKL_LOG_HPP