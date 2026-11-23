// read Module Implementation
// Created: stardust  2026-11-23 17:18:49

// SPDX-License-Identifier: AGPL-3.0-or-later
// SPDX-FileCopyrightText: 2026 FreeTech <open-src@qq.com>
#include "read.h"

#include <print>
#include <fstream>
#include <sstream>

#include "readgrade.h"

// 第二层分解，暂时不考虑错误处理
void read(CourseGrade& cg)
{
    std::print("Reading all student grades (name midterm final homework) from a file... \n");
    std::ifstream ifs("../../coursegrade.dat");
    // read and store all the grades
    std::string line;
    std::istringstream iss;
    while (std::getline(ifs, line)) { // std::getline按行读取成功时，返回good的ifs
        iss.str(line); // 字符串输入流iss封装字符串line进行流式输入
        Grade g; // 假定能够对g进行iss >> g读取操作
        if (iss >> g) {
            cg.push_back(g); // 读取成绩成功后，添加g到cg中
        } else {
            iss.clear();
        }
    }
    if(ifs.eof()) std::print("Reading done!\n\n");  // 读取完毕则打印
}