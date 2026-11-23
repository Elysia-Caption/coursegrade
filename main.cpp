// A program that calculates the scores of all students in a course
// Created: Wei Gong  2026-11-16 16:43:44

// SPDX-License-Identifier: AGPL-3.0-or-later
// SPDX-FileCopyrightText: 2026 FreeTech <open-src@qq.com>

// CourseGrade calculation using a top-down, stepwise refinement approach

#include "read.h"
#include "computesort.h"
#include "print.h"

int main()
{
    CourseGrade courseGrade;

    read(courseGrade);
    computeSort(courseGrade);
    print(courseGrade);

    return 0;
}