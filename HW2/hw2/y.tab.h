/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    PLUS = 258,
    MINUS = 259,
    MUL = 260,
    DIV = 261,
    EQ = 262,
    PLUS1 = 263,
    MINUS1 = 264,
    LP = 265,
    RP = 266,
    LB = 267,
    RB = 268,
    LLB = 269,
    RLB = 270,
    FUNC_LP = 271,
    THESAME = 272,
    NotEQ = 273,
    GTEEQ = 274,
    LOWEQ = 275,
    GTE = 276,
    LOW = 277,
    NUMBER = 278,
    NEWLINE = 279,
    SEMICOLON = 280,
    COMMA = 281,
    NEW = 282,
    TYPE_RW = 283,
    ID = 284,
    STATIC = 285,
    FINAL = 286,
    class_RW = 287,
    fr_RW = 288,
    STRING = 289,
    SPACE = 290,
    PRINT = 291,
    READ = 292,
    MAIN = 293,
    while_RW = 294,
    for_RW = 295,
    ELSE = 296,
    IF = 297,
    RETURN = 298,
    Comment_end = 299
  };
#endif
/* Tokens.  */
#define PLUS 258
#define MINUS 259
#define MUL 260
#define DIV 261
#define EQ 262
#define PLUS1 263
#define MINUS1 264
#define LP 265
#define RP 266
#define LB 267
#define RB 268
#define LLB 269
#define RLB 270
#define FUNC_LP 271
#define THESAME 272
#define NotEQ 273
#define GTEEQ 274
#define LOWEQ 275
#define GTE 276
#define LOW 277
#define NUMBER 278
#define NEWLINE 279
#define SEMICOLON 280
#define COMMA 281
#define NEW 282
#define TYPE_RW 283
#define ID 284
#define STATIC 285
#define FINAL 286
#define class_RW 287
#define fr_RW 288
#define STRING 289
#define SPACE 290
#define PRINT 291
#define READ 292
#define MAIN 293
#define while_RW 294
#define for_RW 295
#define ELSE 296
#define IF 297
#define RETURN 298
#define Comment_end 299

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 30 "B073040025.y"

    char strVal[256];

#line 149 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
