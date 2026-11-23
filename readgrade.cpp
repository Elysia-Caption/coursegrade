// readGrade module implementation
// Created: stardust  2026-11-23 18:35:53

// SPDX-License-Identifier: AGPL-3.0-or-later
// SPDX-FileCopyrightText: 2026 FreeTech <open-src@qq.com>

#include "readgrade.h"
#include <print>
using std::print;

// 第三层分解，暂时不考虑错误处理
std::istream& operator>>(std::istream& is, Grade& g)
{
    print("  Reading a student grade... ");
    if (is) is >> g.name >> g.midterm >> g.final;
    if (is){
        for (double h;is >> h;)
            g.homework.push_back(h);

        if(is.eof()) {
            is.clear();
            print("Done!  {}\n", g.name);
        }
    }
    if(!is) print("Error!\n");
    return is;
}

