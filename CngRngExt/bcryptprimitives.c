// Copyright (c) 2024 Tipz Team
// SPDX-License-Identifier: BSD-2-Clause

#include <minwindef.h>
#include <ntsecapi.h>

BOOLEAN ProcessPrng(PBYTE pbData, SIZE_T cbData) {
    return SystemFunction036(pbData, cbData);
}
