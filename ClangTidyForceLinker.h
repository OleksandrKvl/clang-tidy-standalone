//===- ClangTidyForceLinker.h - clang-tidy --------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_CLANGTIDYFORCELINKER_H
#define LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_CLANGTIDYFORCELINKER_H

#include "clang/Config/config.h"
#include "llvm/Support/Compiler.h"

namespace clang {
namespace tidy {
// This anchor is used to force the linker to link the MiscModule.
extern volatile int MiscModuleAnchorSource;
static int LLVM_ATTRIBUTE_UNUSED MiscModuleAnchorDestination =
    MiscModuleAnchorSource;
} // namespace tidy
} // namespace clang

#endif
