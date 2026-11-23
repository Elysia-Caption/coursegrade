// Grade, CourseGrade Data Module Interface
// Created: stardust  2026-11-23 20:47:27

// SPDX-License-Identifier: AGPL-3.0-or-later
// SPDX-FileCopyrightText: 2026 FreeTech <open-src@qq.com>

#pragma once

#include <vector>
#include <string>

// 顶层分解
struct Grade //类型定义
{
    std::string name;
    double midterm;
    double final;
    std::vector<double> homework;
    double total;
};

using CourseGrade = std::vector<Grade>; //类型别名