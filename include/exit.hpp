/*
 * File: exit.hpp
 * Description: Handle process exit
 *
 * Copyright (C) 2025 TheMonHub
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef AKL_EXIT_HPP
#define AKL_EXIT_HPP

#include <stdnoreturn.h>

#include <cstdlib>
#include <mutex>

noreturn inline void ExitProcess(const int code) {
  static std::mutex exit_mutex;
  const std::scoped_lock lock(exit_mutex);
  exit(code);  // NOLINT(*-mt-unsafe)
}

#endif  //AKL_EXIT_HPP
