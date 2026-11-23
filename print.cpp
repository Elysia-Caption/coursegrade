// print Module Implementation
// Created: stardust  2026-11-23 17:21:04

// SPDX-License-Identifier: AGPL-3.0-or-later
// SPDX-FileCopyrightText: 2026 FreeTech <open-src@qq.com>

#include "print.h"
#include <print>
using std::print;

// 第二层的分解
void print(CourseGrade& cg)
{
    print("Course: {}\nCredit: {}\n", "software construction and implementation", 5);
    print("name      total\n");
    for(auto &g: cg){
        print("{:<10}{:<.1f}\n", g.name, g.total);
    }
}