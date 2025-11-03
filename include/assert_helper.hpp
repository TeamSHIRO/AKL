/*
 * File: assert_helper.hpp
 * Description: Define assert helper macro
 *
 * Copyright (C) 2025 TheMonHub
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef AKL_ASSERT_HELPER_HPP
#define AKL_ASSERT_HELPER_HPP

#include <cassert>

#define ASSERTM(exp, msg) assert((exp) && (msg))

#endif  //AKL_ASSERT_HELPER_HPP
