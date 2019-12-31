/*---------------------------------------------------------------------------------------------
*  Copyright (c) 2020 Nicolas Jinchereau. All rights reserved.
*  Licensed under the MIT License. See License.txt in the project root for license information.
*--------------------------------------------------------------------------------------------*/

#pragma once
#include <string>
#include "ASTNode.h"

class FunctionParameter : public ASTNode
{
public:
    std::string typeName;
    std::string id;

    virtual void Print(std::stringstream& stream, int indent, int tabWidth)
    {
        stream << MakeIndent(indent, tabWidth) << "FunctionParameter " << typeName << " " << id << std::endl;
    }
};
