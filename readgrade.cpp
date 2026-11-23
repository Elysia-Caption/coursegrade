// readGrade module implementation
// Created: stardust  2026-11-23 18:35:53

// SPDX-License-Identifier: AGPL-3.0-or-later
// SPDX-FileCopyrightText: 2026 FreeTech <open-src@qq.com>

#include "readgrade.h"
#include <print>
using std::print;

#include <exception>
using std::invalid_argument;

// 第三层分解，添加错误检测
std::istream& operator>>(std::istream& is, Grade& g)
{
    print("  Reading a student grade... ");
    if (is) is >> g.name >> g.midterm >> g.final;
    if(!is.eof()&&is.fail())
        throw invalid_argument("Incorrect name, midterm and final grade.");

    if (is) {
        for (double h; is >> h;)
            g.homework.push_back(h);

        if(!is.eof() && is.fail())
            throw invalid_argument("Incorrect homework grade.");

        if(is.eof() && g.homework.size() != 0) {
            is.clear();
            print("Done!  {}\n", g.name);
        }
    }
    if (!is) print("Error!\n");
    return is;
}

