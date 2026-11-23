// readGrade Module Interface
// Created: stardust  2026-11-23 20:54:16

// SPDX-License-Identifier: AGPL-3.0-or-later
// SPDX-FileCopyrightText: 2026 FreeTech <open-src@qq.com>

#pragma once
#include "coursegrade.h"
#include <istream>

extern std::istream& operator>>(std::istream& is, Grade& g);