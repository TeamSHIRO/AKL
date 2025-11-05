/*
 * File: assert_helper.hpp
 * Description: Define assertion function and macro helper
 *
 * Copyright (C) 2025 TheMonHub
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef AKL_ASSERT_HELPER_HPP
#define AKL_ASSERT_HELPER_HPP

// NOLINTBEGIN(*-include-cleaner)
#include <string>

#include "error_code.hpp"
#include "log.hpp"
// NOLINTEND(*-include-cleaner)

#ifndef NDEBUG
// don't call this func directly, use macro.
inline void assertm_impl(const bool expr, const std::string& msg,
                         const char* file, const int line,
                         const char* func) noexcept {
  if (!expr) {
    log::Error("\033[31m\nAssertion failed!\033[0m\n- Message: " + msg +
                   "\n- Location: " + file + ":" + std::to_string(line) + " (" +
                   func + ")\n",
               error_code::kAssertionFailed);
  }
}

// NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
#define ASSERTM(expr, msg) \
  assertm_impl((expr), (msg), __FILE__, __LINE__, __func__)
#else
#define ASSERTM(expr, msg)
#endif

#endif  //AKL_ASSERT_HELPER_HPP
