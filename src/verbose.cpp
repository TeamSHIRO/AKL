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
std::atomic<int> verbosity = 0;
}  // namespace verbose