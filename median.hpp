// median Module Interface
// Created: stardust  2026-11-23 21:08:03

// SPDX-License-Identifier: AGPL-3.0-or-later
// SPDX-FileCopyrightText: 2026 FreeTech <open-src@qq.com>
#pragma once

#include <ranges>
#include <algorithm>
#include <stdexcept>
#include <numeric>

// 第四层的分解
template<typename T>
concept Numeric = std::integral<T> || std::floating_point<T>;

template<std::ranges::forward_range R>
    requires Numeric<std::ranges::range_value_t<R>>
double median(R&& data)
{
    auto temp = std::ranges::to<std::vector<double>>(data);// 创建一个临时容器temp

    if (temp.empty())
        throw std::domain_error("median of an empty range");

    auto size = std::ssize(temp);
    // 计算无序范围中值
    auto mid = temp.begin() + size / 2;
    std::ranges::nth_element(temp, mid); // nth_element使用了Quickselect算法
    // 来计算无序范围中值，Avg. TC = O(N)

    if (size % 2 != 0) {
        return *mid;
    }
    // 提取左中值：前半部分的最大值
    auto left_max = std::ranges::max_element(temp.begin(), mid);
    // 使用 std::midpoint 防止极端值相加溢出
    return std::midpoint(*left_max, *mid);
}
