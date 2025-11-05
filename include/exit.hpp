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

noreturn void ExitProcess(int code = 0);

#endif  //AKL_EXIT_HPP
