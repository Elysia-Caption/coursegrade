// score Module Implementation
// Created: stardust  2026-11-23 18:39:16

// SPDX-License-Identifier: AGPL-3.0-or-later
// SPDX-FileCopyrightText: 2026 FreeTech <open-src@qq.com>

#include"score.h"
#include "median.h"

// 第三层的分解
double score(const Grade& g)
{
    return 0.2 * g.midterm + 0.4 * g.final + 0.4 * median(g.homework);
}