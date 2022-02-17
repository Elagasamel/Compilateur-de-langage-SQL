
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     SELECT = 258,
     CREATE = 259,
     DROP = 260,
     TABLE = 261,
     FROM = 262,
     DOLLAR = 263,
     ASC = 264,
     DESC = 265,
     DISTINCT = 266,
     ALTER = 267,
     ADD = 268,
     GROUP = 269,
     BY = 270,
     AVG = 271,
     COUNT = 272,
     FIRST = 273,
     LAST = 274,
     MAX = 275,
     MIN = 276,
     SUM = 277,
     NUME = 278,
     IDENT = 279,
     WHERE = 280,
     LIKE = 281,
     INSERT = 282,
     INTO = 283,
     VALUES = 284,
     GRANT = 285,
     ON = 286,
     TO = 287,
     PRIMARY = 288,
     KEY = 289,
     CONSTRAINT = 290,
     UPDATE = 291,
     DELETE = 292,
     DATATYPE = 293,
     NUM = 294,
     ID = 295,
     SET = 296,
     ORDER = 297,
     COL = 298,
     FOREIGN = 299,
     REFERENCES = 300,
     FIN = 301,
     NE = 302,
     EQ = 303,
     GE = 304,
     LE = 305,
     OR = 306,
     AND = 307
   };
#endif
/* Tokens.  */
#define SELECT 258
#define CREATE 259
#define DROP 260
#define TABLE 261
#define FROM 262
#define DOLLAR 263
#define ASC 264
#define DESC 265
#define DISTINCT 266
#define ALTER 267
#define ADD 268
#define GROUP 269
#define BY 270
#define AVG 271
#define COUNT 272
#define FIRST 273
#define LAST 274
#define MAX 275
#define MIN 276
#define SUM 277
#define NUME 278
#define IDENT 279
#define WHERE 280
#define LIKE 281
#define INSERT 282
#define INTO 283
#define VALUES 284
#define GRANT 285
#define ON 286
#define TO 287
#define PRIMARY 288
#define KEY 289
#define CONSTRAINT 290
#define UPDATE 291
#define DELETE 292
#define DATATYPE 293
#define NUM 294
#define ID 295
#define SET 296
#define ORDER 297
#define COL 298
#define FOREIGN 299
#define REFERENCES 300
#define FIN 301
#define NE 302
#define EQ 303
#define GE 304
#define LE 305
#define OR 306
#define AND 307




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


