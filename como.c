/*
 * Copyright (c) 2016 Ryan McCullagh <me@ryanmccullagh.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <object.h>
#include <assert.h>

#include "como_ast.h"
#include "como_stack.h"
#include "como_compiler.h"
#include "como_debug.h"
#include "como_opcode.h"
#include "como_globals.h"
#include "como_parser.h"
#include "como_lexer.h"

int yyparse(ast_node **ast, yyscan_t scanner);

int main(int argc, char **argv)
{
    (void)argc;

    if(argc < 2) 
    {
        printf("Usage: como FILE\n");
        return 0;
    }

    return como_ast_create(argv[1]);
}
