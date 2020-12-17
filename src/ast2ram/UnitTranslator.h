/*
 * Souffle - A Datalog Compiler
 * Copyright (c) 2020 The Souffle Developers. All rights reserved
 * Licensed under the Universal Permissive License v 1.0 as shown at:
 * - https://opensource.org/licenses/UPL
 * - <souffle root>/licenses/SOUFFLE-UPL.txt
 */

/************************************************************************
 *
 * @file UnitTranslator.h
 *
 * Abstract class providing an interface for translating an
 * ast::TranslationUnit into a ram::TranslationUnit.
 *
 ***********************************************************************/

#pragma once

namespace souffle::ast {
class TranslationUnit;
}

namespace souffle::ram {
class TranslationUnit;
}

namespace souffle::ast2ram {

class UnitTranslator {
public:
    virtual Own<ram::TranslationUnit> translateUnit(const ast::TranslationUnit& tu) = 0;
};

}  // namespace souffle::ast2ram
