// A program that calculates the scores of all students in a course
// Created: Wei Gong  2026-11-16 16:43:44

// SPDX-License-Identifier: AGPL-3.0-or-later
// SPDX-FileCopyrightText: 2026 FreeTech <open-src@qq.com>

// CourseGrade calculation using a top-down, stepwise refinement approach

#include <print>

#include "read.h"
#include "computesort.h"
#include "print.h"

// 测试远程仓库
void g()
{
    int i = 10;
    std::print("I am Captian!");
}

// 测试 2
void f()
{ std::print("AAA"); }

// 测试 3
void h()
{
    std::println("我是岑蕲轩");
}


// 第1次重构，添加错误处理
int main()
{
    CourseGrade courseGrade;
    try {
        read(courseGrade);
        computeSort(courseGrade);
        print(courseGrade);
    } catch (const std::exception& e) {
        std::print("error: {}\n", e.what());
    } catch (...) {
        std::print("Other error!\n");
    }

    return 0;
}