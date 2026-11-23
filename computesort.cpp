// computeSort Module implementation
// Created: stardust  2026-11-23 17:20:25

// SPDX-License-Identifier: AGPL-3.0-or-later
// SPDX-FileCopyrightText: 2026 FreeTech <open-src@qq.com>

#include "coursegrade.h"

#include <print>
#include <algorithm>

#include "score.h"

// 第二层的分解
void computeSort(CourseGrade& cg)
{
    std::print("Processing all student grades... \n");
    for(auto& g: cg){
        g.total = score(g);  //假定能够进行score(g)操作
    }
    std::ranges::stable_sort(cg, [](auto& g1, auto& g2){
        return g1.total <= g2.total;
    });
    std::print("Processing done!\n\n");
}