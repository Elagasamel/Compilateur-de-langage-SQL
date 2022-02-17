
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 2 "req.y"
 
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
extern int yylineno;
extern char* yytext;
extern FILE *yyin;


/* Line 189 of yacc.c  */
#line 83 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 229 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   206

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNRULES -- Number of states.  */
#define YYNSTATES  199

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    60,     2,     2,     2,     2,     2,
      56,    57,    59,     2,    58,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      48,    53,    47,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    49,    50,    51,    52,    54,    55
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    12,    15,    17,    19,
      21,    23,    25,    27,    29,    36,    44,    52,    61,    65,
      68,    73,    75,    77,    79,    81,    88,    92,    96,   100,
     110,   114,   119,   131,   146,   153,   160,   162,   164,   168,
     170,   178,   189,   197,   202,   207,   210,   213,   218,   219,
     222,   228,   236,   247,   251,   253,   257,   259,   263,   265,
     269,   272,   275,   276,   281,   286,   294,   302,   303,   307,
     311,   313,   317,   323,   327,   331,   335,   339,   343,   347,
     351,   355
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      62,     0,    -1,    -1,    62,    63,    -1,    46,    -1,    64,
      46,    -1,     1,    46,    -1,    65,    -1,    67,    -1,    68,
      -1,    69,    -1,    72,    -1,    73,    -1,    74,    -1,     3,
      76,     7,    77,    78,    79,    -1,     3,    66,    56,    76,
      57,     7,    77,    -1,     3,    11,    76,     7,    77,    78,
      79,    -1,     3,    76,     7,    77,    78,    14,    15,    76,
      -1,     3,    76,     1,    -1,     3,     1,    -1,     3,    76,
       7,     1,    -1,    16,    -1,    17,    -1,    18,    -1,    19,
      -1,     4,     6,    40,    56,    75,    57,    -1,     4,     6,
       1,    -1,     5,     6,    40,    -1,     5,     6,     1,    -1,
      12,     6,    40,    13,    33,    34,    56,    40,    57,    -1,
      12,     6,     1,    -1,     5,     6,    40,     1,    -1,    12,
       6,    40,    13,    35,    40,    33,    34,    56,    76,    57,
      -1,    12,     6,    40,    13,    44,    34,    56,    40,    57,
      45,    77,    56,    40,    57,    -1,    12,     6,    40,     5,
      33,    34,    -1,    12,     6,    40,     5,    35,    40,    -1,
      40,    -1,    39,    -1,    70,    58,    71,    -1,    70,    -1,
      27,    28,    77,    29,    56,    71,    57,    -1,    27,    28,
      77,    56,    76,    57,    29,    56,    71,    57,    -1,    36,
      77,    41,    76,    53,    71,    78,    -1,    37,     7,    77,
      78,    -1,    40,    38,    58,    75,    -1,    40,    38,    -1,
      40,    40,    -1,    40,    38,    58,     1,    -1,    -1,    40,
       1,    -1,    33,    34,    56,    40,    57,    -1,    35,    40,
      33,    34,    56,    76,    57,    -1,    44,    34,    56,    40,
      57,    45,    77,    56,    40,    57,    -1,    40,    58,    76,
      -1,    40,    -1,    40,    58,     1,    -1,    59,    -1,    40,
      58,    77,    -1,    40,    -1,    40,    58,     1,    -1,    25,
      80,    -1,    25,     1,    -1,    -1,    42,    15,    76,    10,
      -1,    42,    15,    76,     9,    -1,    42,    15,    76,     9,
      58,    76,    10,    -1,    42,    15,    76,    10,    58,    76,
       9,    -1,    -1,    80,    54,    80,    -1,    80,    55,    80,
      -1,    81,    -1,    70,    53,    70,    -1,    70,    53,    60,
      70,    60,    -1,    70,    48,    70,    -1,    70,    47,    70,
      -1,    70,    52,    70,    -1,    70,    51,    70,    -1,    70,
      50,    70,    -1,    70,    49,    70,    -1,    70,    54,    70,
      -1,    70,    55,    70,    -1,    70,    26,    70,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    23,    23,    24,    27,    28,    29,    32,    33,    34,
      35,    36,    37,    38,    41,    42,    43,    44,    45,    46,
      47,    51,    52,    53,    54,    57,    58,    61,    62,    65,
      66,    67,    68,    69,    70,    71,    73,    74,    76,    77,
      80,    81,    84,    87,    90,    91,    92,    93,    94,    94,
      95,    96,    97,    99,   100,   101,   102,   105,   106,   107,
     110,   111,   112,   115,   116,   117,   118,   119,   121,   122,
     123,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SELECT", "CREATE", "DROP", "TABLE",
  "FROM", "DOLLAR", "ASC", "DESC", "DISTINCT", "ALTER", "ADD", "GROUP",
  "BY", "AVG", "COUNT", "FIRST", "LAST", "MAX", "MIN", "SUM", "NUME",
  "IDENT", "WHERE", "LIKE", "INSERT", "INTO", "VALUES", "GRANT", "ON",
  "TO", "PRIMARY", "KEY", "CONSTRAINT", "UPDATE", "DELETE", "DATATYPE",
  "NUM", "ID", "SET", "ORDER", "COL", "FOREIGN", "REFERENCES", "FIN",
  "'>'", "'<'", "NE", "EQ", "GE", "LE", "'='", "OR", "AND", "'('", "')'",
  "','", "'*'", "'\"'", "$accept", "program", "Ligne", "S", "ST1",
  "function", "ST3", "ST4", "ST5", "F", "VALEUR", "ST7", "ST8", "ST9",
  "listesdeschamps", "attributeList", "tablename", "ST2", "ST6", "COND",
  "E", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,    62,    60,   302,
     303,   304,   305,    61,   306,   307,    40,    41,    44,    42,
      34
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    62,    63,    63,    63,    64,    64,    64,
      64,    64,    64,    64,    65,    65,    65,    65,    65,    65,
      65,    66,    66,    66,    66,    67,    67,    68,    68,    69,
      69,    69,    69,    69,    69,    69,    70,    70,    71,    71,
      72,    72,    73,    74,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    76,    76,    76,    76,    77,    77,    77,
      78,    78,    78,    79,    79,    79,    79,    79,    80,    80,
      80,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     6,     7,     7,     8,     3,     2,
       4,     1,     1,     1,     1,     6,     3,     3,     3,     9,
       3,     4,    11,    14,     6,     6,     1,     1,     3,     1,
       7,    10,     7,     4,     4,     2,     2,     4,     0,     2,
       5,     7,    10,     3,     1,     3,     1,     3,     1,     3,
       2,     2,     0,     4,     4,     7,     7,     0,     3,     3,
       1,     3,     5,     3,     3,     3,     3,     3,     3,     3,
       3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     3,     0,     7,     8,     9,    10,    11,    12,
      13,     6,    19,     0,    21,    22,    23,    24,    54,    56,
       0,     0,     0,     0,     0,     0,    58,     0,     0,     5,
       0,     0,     0,    18,     0,    26,     0,    28,     0,    30,
       0,     0,     0,     0,    62,     0,    55,    53,     0,    20,
      62,    48,    31,     0,     0,     0,     0,    59,    57,     0,
       0,    43,    62,     0,    67,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    61,    37,
      36,     0,    60,    70,    67,     0,     0,     0,    14,     0,
       0,    49,    45,    46,     0,    25,    34,    35,     0,     0,
       0,    39,     0,     0,    62,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    16,    15,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    40,
       0,    42,    81,    74,    73,    78,    77,    76,    75,     0,
      71,    79,    80,    68,    69,    17,     0,     0,     0,    47,
      44,     0,     0,     0,     0,    38,     0,     0,    64,    63,
      50,     0,     0,    29,     0,     0,     0,    72,     0,     0,
       0,     0,     0,     0,    41,     0,     0,    51,     0,    32,
       0,    65,    66,     0,     0,     0,     0,    52,    33
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    12,    13,    14,    30,    15,    16,    17,   111,
     112,    18,    19,    20,    79,    31,    37,    71,    98,    92,
      93
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -80
static const yytype_int16 yypact[] =
{
     -80,    72,   -80,   -41,    22,    -4,     8,    11,    51,    54,
      84,   -80,   -80,    50,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -25,   -80,   -80,   -80,   -80,    40,   -80,
      47,    88,    31,    34,    62,    54,    63,    64,    54,   -80,
     112,     2,   -25,   -80,    77,   -80,    67,   -80,    21,   -80,
       7,    56,    82,   -25,    95,    54,   -80,   -80,    79,   -80,
      95,    53,   -80,    57,    -8,    68,   -25,   -80,   -80,    81,
       5,   -80,    95,   128,    -5,   103,    98,    28,   105,    83,
     107,   102,   109,   104,   111,    61,    89,    61,   -80,   -80,
     -80,    78,    59,   -80,   115,    54,   132,   134,   -80,    97,
     121,   -80,   100,   -80,   106,   -80,   -80,   -80,   108,   126,
     110,   113,   116,   131,    95,    61,    61,    61,    61,    61,
      61,    61,   -29,    61,    61,    61,    61,   -80,   -80,   -25,
     -25,   123,   127,    25,   125,   129,   133,   130,    61,   -80,
     118,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,    61,
     -80,   -80,   -80,   -80,   -80,   -80,   101,   119,   122,   -80,
     -80,   120,   124,   135,   136,   -80,    61,   137,   114,   117,
     -80,   -25,   138,   -80,   -25,   139,   141,   -80,   -25,   -25,
     142,    54,   143,    54,   -80,   158,   170,   -80,   140,   -80,
     145,   -80,   -80,   146,   147,   148,   149,   -80,   -80
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -69,
     -79,   -80,   -80,   -80,    49,   -23,   -31,   -44,    86,   -10,
     -80
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -49
static const yytype_int16 yytable[] =
{
      40,    91,    32,    56,    51,    21,    88,    54,   114,    96,
      89,    90,    63,    60,    33,    28,    74,    34,    57,    58,
      64,    68,    62,    22,    72,    82,   159,    83,    94,   101,
      69,   149,    45,    23,    29,    47,    84,    97,    24,    25,
      26,    27,    28,    86,    89,    90,   142,   143,   144,   145,
     146,   147,   148,   150,   151,   152,    91,    91,    75,   165,
      76,    29,    28,    49,   128,    77,   102,   -27,   103,    78,
     141,    46,     2,     3,    48,     4,     5,     6,    59,    35,
     167,    29,   -48,    67,     7,    65,    75,   176,    76,    43,
      80,    38,    81,    77,    36,    44,    39,    78,    41,     8,
      89,    90,    50,    42,   115,    53,   155,   156,     9,    10,
     168,   169,    66,   125,   126,   153,   154,    36,    11,    55,
      70,    52,    36,    61,    85,   116,   117,   118,   119,   120,
     121,   122,   123,   124,    87,    95,    73,    99,   100,   104,
     105,   106,   107,   108,   109,   110,   113,   129,   180,   130,
     188,   182,   190,   131,   132,   185,   186,    97,   133,   136,
     140,   158,   134,   157,   135,   161,   137,   163,   191,   162,
     164,   138,   178,   139,   166,   179,   170,   172,   171,   192,
     127,   173,   160,   181,   183,     0,   195,   196,     0,     0,
       0,   174,     0,   175,     0,     0,   193,   177,   184,   187,
     189,   194,     0,     0,     0,   197,   198
};

static const yytype_int16 yycheck[] =
{
      23,    70,     6,     1,    35,    46,     1,    38,    87,    14,
      39,    40,     5,    44,     6,    40,    60,     6,    41,    42,
      13,    52,     1,     1,    55,    33,     1,    35,    72,     1,
      53,    60,     1,    11,    59,     1,    44,    42,    16,    17,
      18,    19,    40,    66,    39,    40,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,    33,   138,
      35,    59,    40,     1,    95,    40,    38,    46,    40,    44,
     114,    40,     0,     1,    40,     3,     4,     5,     1,    28,
     149,    59,    57,     1,    12,    29,    33,   166,    35,     1,
      33,     7,    35,    40,    40,     7,    46,    44,    58,    27,
      39,    40,    40,    56,    26,    41,   129,   130,    36,    37,
       9,    10,    56,    54,    55,   125,   126,    40,    46,     7,
      25,    58,    40,    56,    56,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    53,     7,    57,    34,    40,    34,
      57,    34,    40,    34,    40,    34,    57,    15,   171,    15,
     181,   174,   183,    56,    33,   178,   179,    42,    58,    33,
      29,    34,    56,    40,    56,    40,    56,    34,    10,    40,
      40,    58,    58,    57,    56,    58,    57,    57,    56,     9,
      94,    57,   133,    45,    45,    -1,    40,    40,    -1,    -1,
      -1,    56,    -1,    57,    -1,    -1,    56,    60,    57,    57,
      57,    56,    -1,    -1,    -1,    57,    57
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    62,     0,     1,     3,     4,     5,    12,    27,    36,
      37,    46,    63,    64,    65,    67,    68,    69,    72,    73,
      74,    46,     1,    11,    16,    17,    18,    19,    40,    59,
      66,    76,     6,     6,     6,    28,    40,    77,     7,    46,
      76,    58,    56,     1,     7,     1,    40,     1,    40,     1,
      40,    77,    58,    41,    77,     7,     1,    76,    76,     1,
      77,    56,     1,     5,    13,    29,    56,     1,    77,    76,
      25,    78,    77,    57,    78,    33,    35,    40,    44,    75,
      33,    35,    33,    35,    44,    56,    76,    53,     1,    39,
      40,    70,    80,    81,    78,     7,    14,    42,    79,    34,
      40,     1,    38,    40,    34,    57,    34,    40,    34,    40,
      34,    70,    71,    57,    71,    26,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    54,    55,    79,    77,    15,
      15,    56,    33,    58,    56,    56,    33,    56,    58,    57,
      29,    78,    70,    70,    70,    70,    70,    70,    70,    60,
      70,    70,    70,    80,    80,    76,    76,    40,    34,     1,
      75,    40,    40,    34,    40,    71,    56,    70,     9,    10,
      57,    56,    57,    57,    56,    57,    71,    60,    58,    58,
      76,    45,    76,    45,    57,    76,    76,    57,    77,    57,
      77,    10,     9,    56,    56,    40,    40,    57,    57
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 5:

/* Line 1455 of yacc.c  */
#line 28 "req.y"
    { printf("Requete correcte \n"); }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 29 "req.y"
    { yyerrok; }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 41 "req.y"
    { printf("Requete correcte \n"); }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 42 "req.y"
    { printf ("Requete correcte: \n \t fonction effectuée avec succès!\n");}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 43 "req.y"
    { printf("Requete correcte \n"); }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 44 "req.y"
    { printf("Requete correcte \n"); }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 45 "req.y"
    { printf("syntax error : \n \t Mot clé FROM manquant !!!\n");}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 46 "req.y"
    { printf ("syntax error : \n \t Requete incomplete !!!\n");}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 47 "req.y"
    {printf("syntax error : \n\t Nom de la table manquant apres from ou nom de table invalid !!!\n");}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 57 "req.y"
    {printf("Requete correcte: \n\t table crée avec succès\n");}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 58 "req.y"
    {printf("syntax error : \n\t nom du table manquant !!!\n");}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 61 "req.y"
    {printf("Requete correcte:\n\t table supprimée \n");}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 62 "req.y"
    {printf("syntax error : \n \t nom du table manquant !!!\n");}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 65 "req.y"
    {printf("Requete correcte:\n\t clé primaire ajoutée \n");}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 66 "req.y"
    {printf("syntax error : \n\t nom du table manquant !!!\n");}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 67 "req.y"
    {printf("syntax error : \n\t requette manquante !!!\n");}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 68 "req.y"
    {printf("Requete correcte:\t liste des clés primaires modifiée \n");}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 69 "req.y"
    {printf("Requete correcte:\t clé étrangère ajoutée \n");}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 70 "req.y"
    {printf("Requete correcte:\n\t clé primaire supprimée \n");}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 71 "req.y"
    {printf("Requete correcte:\n\t clé supprimée \n");}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 80 "req.y"
    {printf("Requete correcte: \n\t valeur(s) inséreée(s) \n");}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 81 "req.y"
    {printf("Requete correcte: \n\t valeur(s) inséreée(s) dans les colonnes \n");}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 84 "req.y"
    {printf("Requete correcte: \n\t valeur(s) mise(s) à jour \n");}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 87 "req.y"
    { printf ("Requete correcte:\n\t colonne supprimée \n");}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 91 "req.y"
    { printf ("Requete correcte\n");}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 92 "req.y"
    {printf("syntax error \n \ttype inconnu !!!\n");}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 93 "req.y"
    {printf("syntax error \n\tChamps manquant !!!\n");}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 94 "req.y"
    {printf("syntax error \n\t type manquant !!!\n");}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 95 "req.y"
    {printf("Requete correcte:\n\tclé primaire attribuée\n");}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 96 "req.y"
    {printf("Requete correcte:\n\tclé primaire attribuée\n");}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 97 "req.y"
    {printf("Requete correcte:\n\tclé étrangère attribuée\n");}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 101 "req.y"
    {printf("syntax error: \n\tChamps manquant !!!\n");}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 107 "req.y"
    {printf("syntax error :\n\tnom de la table manquant !!!\n");}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 110 "req.y"
    { printf("Requete correcte \n"); }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 111 "req.y"
    { printf( "syntax error \n\t erreur dans la condition\n");}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 112 "req.y"
    { printf("Requete correcte \n"); }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 115 "req.y"
    {printf("\t trie decroissante\n");}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 116 "req.y"
    {printf("\t trie croissante\n");}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 119 "req.y"
    { printf("Requete correcte \n"); }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 123 "req.y"
    { printf("Requete correcte \n"); }
    break;



/* Line 1455 of yacc.c  */
#line 1874 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 138 "req.y"

/************************* Section du code C *************************/
//Fonctions et programme principal
FILE *yyin;


int yyerror(char *s) {
 // printf("%s\n",s);
}

int main(void) {
	yyin = fopen("requete", "r");
	yyparse();
return 0;
}


