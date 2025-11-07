/*
 * File: verbose.cpp
 * Description: Define verbosity variable.
 *
 * Copyright (C) 2025 TheMonHub
 * SPDX-License-Identifier: Apache-2.0
 */

#include "verbose.hpp"

#include <atomic>

namespace verbose {
#ifndef NDEBUG
std::atomic<int> verbosity = 3;
#else
std::atomic<int> verbosity = 0;
#endif
}  // namespace verbose