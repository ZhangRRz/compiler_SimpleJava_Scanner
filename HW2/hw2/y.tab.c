/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "B073040025.y"

    #include <stdio.h>
    #include <string.h>
    #include <math.h>
    extern int lineNum;
    extern int charNum;

    int yylex();
    double ans = 0;
    void dealwithError(int);
    void ErrorMsg(int);
    void yyerror();
    void format_print();
    char msg[256];
    char temp[256];
    int flag = 1;

    int current_block_stack = 1;
    char symbol_table[10][20][25];
    int symbol_table_next_avalible_index[10] = {0,0,0,0,0,0,0,0,0,0};

    void create();
    void blockReset();
    int lookup(char* str);
    void insert(char* str);
    void IDduplicateJudge(char* str);
    char* conflictID;


#line 100 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 244 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   668

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  111
/* YYNRULES -- Number of rules.  */
#define YYNRULES  173
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  299

#define YYUNDEFTOK  2
#define YYMAXUTOK   299


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    53,    53,    54,    54,    58,    58,    60,    60,    64,
      64,    71,    72,    73,    74,    78,    79,    80,    81,    82,
      82,    94,    94,    98,    98,   101,   107,   107,   110,   110,
     113,   116,   119,   124,   125,   128,   132,   133,   135,   137,
     138,   140,   141,   141,   141,   144,   145,   147,   147,   147,
     150,   151,   151,   153,   156,   156,   162,   165,   168,   172,
     172,   183,   183,   183,   185,   188,   199,   199,   199,   199,
     199,   201,   201,   201,   201,   201,   201,   201,   201,   201,
     203,   204,   204,   205,   205,   206,   206,   211,   213,   213,
     217,   221,   224,   221,   232,   232,   240,   240,   248,   248,
     252,   261,   261,   266,   266,   272,   272,   276,   277,   278,
     281,   282,   284,   285,   285,   287,   287,   287,   291,   298,
     298,   300,   300,   300,   303,   303,   303,   306,   306,   306,
     314,   315,   318,   321,   324,   327,   330,   333,   342,   342,
     347,   347,   354,   354,   354,   357,   359,   360,   360,   365,
     365,   371,   373,   375,   382,   382,   387,   387,   392,   392,
     395,   395,   395,   398,   398,   399,   400,   398,   405,   405,
     407,   413,   416,   423
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PLUS", "MINUS", "MUL", "DIV", "EQ",
  "PLUS1", "MINUS1", "LP", "RP", "LB", "RB", "LLB", "RLB", "FUNC_LP",
  "THESAME", "NotEQ", "GTEEQ", "LOWEQ", "GTE", "LOW", "NUMBER", "NEWLINE",
  "SEMICOLON", "COMMA", "NEW", "TYPE_RW", "ID", "STATIC", "FINAL",
  "class_RW", "fr_RW", "STRING", "SPACE", "PRINT", "READ", "MAIN",
  "while_RW", "for_RW", "ELSE", "IF", "RETURN", "Comment_end", "$accept",
  "lines", "$@1", "$@2", "$@3", "$@4", "things_In_A_Line", "$@5",
  "expression", "$@6", "$@7", "term", "$@8", "$@9", "factor",
  "NUMorarrayElementOrNOT", "arrayElementOrNOT", "$@10", "$@11",
  "unary_expr", "METHODCALL", "$@12", "$@13", "parameter", "$@14",
  "PREFIX", "$@15", "POSTFIX", "group", "$@16", "valDeclare", "$@17",
  "$@18", "$@19", "$@20", "$@21", "$@22", "$@23", "$@24", "$@25", "$@26",
  "$@27", "$@28", "$@29", "$@30", "otherargs", "$@31", "$@32", "$@33",
  "id_list", "$@34", "initialize_or_not", "$@35", "$@36", "classDeclare",
  "$@37", "$@38", "classHead", "$@39", "classBody", "methodDeclare",
  "$@40", "$@41", "metohdhead", "$@42", "type_and_name", "return_type",
  "argument", "$@43", "$@44", "$@45", "metohdBody", "statement", "$@46",
  "$@47", "$@48", "$@49", "$@50", "$@51", "$@52", "bool_expr", "INFIX",
  "if_statement", "$@53", "$@54", "if_statement_head", "$@55", "$@56",
  "if_statement_body", "else_block", "$@57", "$@58", "else_block_head",
  "else_block_body", "onlyelse", "loop", "$@59", "$@60", "$@61",
  "loophead", "$@62", "$@63", "$@64", "$@65", "$@66", "$@67",
  "forloopstart", "loopbody", "llb", "rlb", "newline", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299
};
# endif

#define YYPACT_NINF (-190)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-171)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -190,   223,  -190,    13,  -190,  -190,  -190,  -190,  -190,   118,
      47,    82,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,  -190,  -190,  -190,  -190,  -190,    43,   136,  -190,
     151,   232,  -190,  -190,    50,  -190,     7,  -190,    -2,  -190,
      56,    59,    38,    37,  -190,    79,  -190,  -190,   140,  -190,
    -190,    74,   622,   109,   116,   117,    81,   135,   150,   153,
     170,   175,   177,   179,   186,   202,   184,   184,  -190,  -190,
    -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,   203,  -190,
    -190,  -190,  -190,   205,  -190,   205,  -190,  -190,  -190,  -190,
    -190,  -190,  -190,  -190,  -190,   184,   205,  -190,   184,   205,
    -190,   184,  -190,   108,   180,   235,  -190,   190,  -190,  -190,
    -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,   127,   127,    48,    48,   165,  -190,   184,  -190,
     184,   192,   165,   197,   192,  -190,   217,  -190,   184,  -190,
     165,  -190,   184,  -190,  -190,   225,   201,   634,   568,   192,
     242,   622,   622,   541,   552,   541,   622,   136,   136,  -190,
    -190,   246,   184,  -190,   184,  -190,   265,  -190,   246,  -190,
      17,  -190,   249,  -190,   148,   184,  -190,    84,   184,  -190,
     277,  -190,   266,   121,    26,   273,  -190,  -190,   189,   194,
      13,    95,   278,    25,   281,  -190,     8,  -190,   268,   279,
     198,  -190,   321,   280,  -190,   365,   280,   287,   192,  -190,
    -190,  -190,   205,  -190,  -190,   409,   280,  -190,  -190,   453,
     280,  -190,  -190,   267,   286,  -190,  -190,  -190,   291,  -190,
    -190,  -190,  -190,  -190,  -190,  -190,  -190,   595,  -190,  -190,
    -190,  -190,   280,  -190,   280,  -190,  -190,  -190,   271,   192,
    -190,   184,   280,  -190,   280,  -190,  -190,  -190,   568,  -190,
     246,   541,  -190,  -190,    15,  -190,  -190,   184,  -190,  -190,
    -190,   296,  -190,   165,   298,   246,   192,  -190,   497,   280,
    -190,   246,  -190,  -190,   280,  -190,   285,   622,  -190,  -190,
     231,   276,  -190,  -190,   316,  -190,   634,   154,  -190
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,    56,    54,    53,    59,   171,    35,
     110,    41,    61,    66,    98,   111,    31,   121,   124,   107,
     160,   163,   153,   142,   127,     5,     3,     0,    25,    30,
       0,    36,    37,    38,     0,    34,     0,    16,     0,    17,
       0,     0,     0,     0,     7,     0,     9,    18,     0,    19,
      32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,    23,
      12,    26,    28,    58,    57,    46,   119,    39,    41,    45,
      40,    14,    13,     0,    96,     0,   103,    85,    81,   105,
      83,    64,   109,   108,    15,     0,     0,   140,     0,   158,
     156,     0,    55,    41,     0,    36,    72,     0,    43,    48,
      62,    67,    99,   122,   125,   161,   164,   143,   128,   173,
       6,     4,     0,     0,    33,    33,     0,    94,     0,   101,
       0,     0,     0,   112,     0,     8,   146,   138,     0,    10,
       0,   154,     0,     2,    60,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    22,    24,    27,
      29,   120,     0,     2,     0,     2,    90,    86,    82,   113,
       0,    84,    87,   151,     0,     0,     2,     0,     0,     2,
       0,    73,     0,     0,    50,     0,    63,    68,     0,     0,
     131,     0,     0,    41,     0,   169,     0,   168,     0,     0,
       0,     2,     0,     0,     2,     0,     0,     0,     0,   106,
     115,    88,     0,   149,     2,     0,     0,   159,     2,     0,
       0,   172,    20,     0,     0,    44,    51,    49,     0,   123,
     126,   132,   133,   136,   137,   134,   135,     0,   162,   165,
     144,   129,     0,    97,     0,   104,    92,   114,     0,     0,
     147,     0,     0,   141,     0,   157,    74,    65,     0,    69,
     130,     0,    95,   102,     0,   116,    89,     0,     2,   139,
     155,     0,    52,     0,     0,    93,     0,     2,     0,     0,
      75,    70,   166,   117,     0,   150,     0,     0,   148,    76,
       0,     0,   167,    77,     0,    78,     0,     0,    79
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -190,     0,  -190,  -190,  -190,  -190,  -190,  -190,   -51,  -190,
    -190,   147,  -190,  -190,   149,   299,     1,  -190,  -190,  -190,
    -190,  -190,  -190,    76,  -190,  -190,  -190,  -190,  -190,  -190,
     178,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -142,
    -190,  -125,  -190,  -190,  -190,  -190,  -190,  -190,  -190,   137,
    -190,  -190,  -190,  -190,  -190,   183,  -190,  -190,  -190,  -190,
    -190,   138,   185,  -190,  -190,  -190,  -190,  -190,  -190,  -190,
    -151,  -190,  -190,  -190,  -190,  -190,  -190,  -190,   126,  -190,
    -190,  -190,  -190,    64,  -190,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,  -190,  -190,  -190,  -190,  -190,   125,   -35,  -189,
     -56
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   202,    67,    66,    95,    98,    26,   101,    27,   122,
     123,    28,   124,   125,    29,    30,   105,    55,   147,    32,
      33,    56,   148,   185,   258,    34,    51,    75,    35,    52,
      36,    57,   149,    58,   150,   228,   273,    53,   145,   223,
     271,   286,   291,   294,   296,    91,   132,   134,   131,   171,
     249,   172,   207,   264,    37,   162,   128,    38,    59,   203,
      39,   164,   130,    40,   133,    41,    42,   170,   208,   248,
     276,   206,    43,   126,    60,   151,    61,   152,    65,   156,
     192,   237,    44,   175,   138,    45,    64,   155,   216,   135,
     267,   251,   174,   279,    46,    47,   178,   142,   140,    48,
      62,   153,    63,   154,   261,   287,   198,   220,    49,   222,
     120
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       1,   104,    31,    84,   199,    86,   167,   186,    81,    87,
      97,   121,     8,   100,   243,    88,     3,   245,     4,   -33,
     -33,   -33,    83,     5,     6,     7,   -33,   253,   209,    68,
      69,   255,    82,   -80,    90,    80,    50,   -42,     9,   136,
     -33,   -33,   139,   210,   103,   143,    68,    69,   127,    16,
     129,     4,   226,   262,    54,   263,     5,     6,     7,   -71,
      87,   137,    94,   269,   141,   270,    88,    92,    70,    89,
       8,     9,   163,    77,   165,   161,    93,   103,   102,    78,
      85,   168,   176,   247,   -80,    90,   179,    68,    69,   177,
     285,   109,   -47,     8,   -42,   288,   183,   184,    68,    69,
     188,   189,   191,    96,   191,   200,   201,   266,   204,   217,
     274,    54,   231,   232,   233,   234,   235,   236,   -47,   214,
     -42,   106,   218,   107,    68,    69,   -39,   -39,     3,   108,
       4,   -33,   -33,   -33,   225,     5,     6,     7,   -33,   213,
     -33,    71,    72,   180,   -33,   -33,   -33,   -33,   -33,   -33,
       9,   283,   -33,   -33,     8,   194,   103,    68,    69,    73,
      74,    16,     8,   110,    99,   205,     3,   298,     4,   -33,
     -33,   -33,   212,     5,     6,     7,   215,   250,   111,   219,
     113,    31,   112,    68,    69,   114,   260,   115,     9,   116,
     -33,   144,    68,    69,   103,   268,   117,    68,    69,    16,
     229,    68,    69,    31,   205,   230,    31,   184,   119,   241,
     191,   277,   118,   275,   215,   -42,    31,   146,   219,     8,
      31,   166,   281,     2,     3,   169,     4,   -33,   -33,   -33,
     182,     5,     6,     7,    68,    69,   290,     8,   181,    76,
     -40,   -40,   292,   -40,   -40,   297,     9,   -11,   -33,    68,
      69,    10,    11,    12,    13,    14,    15,    16,   173,    17,
      18,    19,    20,    21,    22,    23,    24,    25,   278,   157,
     158,   187,   -91,   159,   160,   211,   224,   278,     3,    31,
       4,   -33,   -33,   -33,   227,     5,     6,     7,    76,   238,
     240,     8,   221,   239,   246,   221,   256,   257,   259,   265,
       9,   -11,   -33,   280,   293,    10,    11,    12,    13,    14,
      15,    16,   289,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     3,   282,     4,   -33,   -33,   -33,   295,     5,
       6,     7,   195,    79,   272,     8,  -100,   196,   242,   197,
     252,   284,   244,   254,     9,   -11,   -33,     0,     0,    10,
      11,    12,    13,    14,    15,    16,     0,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     3,     0,     4,   -33,
     -33,   -33,     0,     5,     6,     7,     0,     0,     0,     8,
    -118,     0,     0,     0,     0,     0,     0,     0,     9,   -11,
     -33,     0,     0,    10,    11,    12,    13,    14,    15,    16,
       0,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       3,     0,     4,   -33,   -33,   -33,     0,     5,     6,     7,
       0,     0,     0,     8,  -145,     0,     0,     0,     0,     0,
       0,     0,     9,   -11,   -33,     0,     0,    10,    11,    12,
      13,    14,    15,    16,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     3,     0,     4,   -33,   -33,   -33,
       0,     5,     6,     7,     0,     0,     0,     8,  -170,     0,
       0,     0,     0,     0,     0,     0,     9,   -11,   -33,     0,
       0,    10,    11,    12,    13,    14,    15,    16,     0,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     3,     0,
       4,   -33,   -33,   -33,     0,     5,     6,     7,     0,     0,
       0,     8,  -152,     0,     0,     0,     0,     0,     0,     0,
       9,   -11,   -33,     0,     0,    10,    11,    12,    13,    14,
      15,    16,     0,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   190,     0,     4,   -33,   -33,   -33,     0,     5,
       6,     7,     0,     0,     0,     0,     0,     0,   -33,   -33,
     -33,   -33,   -33,   -33,     9,     0,     0,     0,     0,     3,
     103,     4,   -33,   -33,   -33,    16,     5,     6,     7,   -33,
      10,   193,    12,    13,     0,    15,     0,     0,    17,    18,
      19,     9,     0,     0,   -33,    24,     3,   103,     4,   -33,
     -33,   -33,    16,     5,     6,     7,   -33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     9,     0,
     -33,     0,     0,     3,   103,     4,   -33,   -33,   -33,    16,
       5,     6,     7,   -33,     0,     3,     0,     4,   -33,   -33,
     -33,     0,     5,     6,     7,     9,     0,   -33,     0,     0,
       0,   103,     0,     0,     0,     0,    16,     9,     0,     0,
       0,     0,     0,   103,     0,     0,     0,     0,    16
};

static const yytype_int16 yycheck[] =
{
       0,    52,     1,    38,   155,    40,   131,   149,     1,     1,
      45,    67,    14,    48,   203,     7,     1,   206,     3,     4,
       5,     6,    24,     8,     9,    10,    11,   216,    11,     3,
       4,   220,    25,    25,    26,    34,    23,    12,    23,    95,
      25,    26,    98,    26,    29,   101,     3,     4,    83,    34,
      85,     3,    26,   242,    29,   244,     8,     9,    10,    12,
       1,    96,    25,   252,    99,   254,     7,    29,    25,    10,
      14,    23,   128,    23,   130,   126,    38,    29,     4,    29,
      24,   132,   138,   208,    25,    26,   142,     3,     4,   140,
     279,    10,    10,    14,    12,   284,   147,   148,     3,     4,
     151,   152,   153,    24,   155,   156,   162,   249,   164,    25,
     261,    29,    17,    18,    19,    20,    21,    22,    10,   175,
      12,    12,   178,     7,     3,     4,     8,     9,     1,    12,
       3,     4,     5,     6,    13,     8,     9,    10,    11,   174,
      13,     5,     6,   143,    17,    18,    19,    20,    21,    22,
      23,   276,    25,    26,    14,   154,    29,     3,     4,     8,
       9,    34,    14,    28,    24,   165,     1,    13,     3,     4,
       5,     6,    24,     8,     9,    10,   176,   212,    28,   179,
      10,   180,    29,     3,     4,    10,   237,    10,    23,    10,
      25,    11,     3,     4,    29,   251,    10,     3,     4,    34,
      11,     3,     4,   202,   204,    11,   205,   258,    24,    11,
     261,   267,    10,   264,   214,    12,   215,    27,   218,    14,
     219,    29,   273,     0,     1,    28,     3,     4,     5,     6,
      29,     8,     9,    10,     3,     4,   287,    14,    13,     7,
       8,     9,    11,     8,     9,   296,    23,    24,    25,     3,
       4,    28,    29,    30,    31,    32,    33,    34,    41,    36,
      37,    38,    39,    40,    41,    42,    43,    44,   268,   122,
     123,    29,     7,   124,   125,    26,    10,   277,     1,   278,
       3,     4,     5,     6,    11,     8,     9,    10,     7,    11,
      11,    14,    15,    25,     7,    15,    29,    11,     7,    28,
      23,    24,    25,     7,    28,    28,    29,    30,    31,    32,
      33,    34,    27,    36,    37,    38,    39,    40,    41,    42,
      43,    44,     1,    25,     3,     4,     5,     6,    12,     8,
       9,    10,   154,    34,   258,    14,    15,   154,   201,   154,
     214,   277,   204,   218,    23,    24,    25,    -1,    -1,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    37,    38,
      39,    40,    41,    42,    43,    44,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    -1,    -1,    14,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    37,    38,    39,    40,    41,    42,    43,    44,
       1,    -1,     3,     4,     5,     6,    -1,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    37,    38,    39,    40,
      41,    42,    43,    44,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    -1,    -1,    14,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      37,    38,    39,    40,    41,    42,    43,    44,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    37,    38,    39,    40,    41,    42,
      43,    44,     1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,     1,
      29,     3,     4,     5,     6,    34,     8,     9,    10,    11,
      28,    29,    30,    31,    -1,    33,    -1,    -1,    36,    37,
      38,    23,    -1,    -1,    26,    43,     1,    29,     3,     4,
       5,     6,    34,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      25,    -1,    -1,     1,    29,     3,     4,     5,     6,    34,
       8,     9,    10,    11,    -1,     1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    10,    23,    -1,    13,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    34,    23,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    46,     0,     1,     3,     8,     9,    10,    14,    23,
      28,    29,    30,    31,    32,    33,    34,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    51,    53,    56,    59,
      60,    61,    64,    65,    70,    73,    75,    99,   102,   105,
     108,   110,   111,   117,   127,   130,   139,   140,   144,   153,
      23,    71,    74,    82,    29,    62,    66,    76,    78,   103,
     119,   121,   145,   147,   131,   123,    48,    47,     3,     4,
      25,     5,     6,     8,     9,    72,     7,    23,    29,    60,
      61,     1,    25,    24,   153,    24,   153,     1,     7,    10,
      26,    90,    29,    38,    25,    49,    24,   153,    50,    24,
     153,    52,     4,    29,    53,    61,    12,     7,    12,    10,
      28,    28,    29,    10,    10,    10,    10,    10,    10,    24,
     155,   155,    54,    55,    57,    58,   118,   153,   101,   153,
     107,    93,    91,   109,    92,   134,   155,   153,   129,   155,
     143,   153,   142,   155,    11,    83,    27,    63,    67,    77,
      79,   120,   122,   146,   148,   132,   124,    56,    56,    59,
      59,    53,   100,   155,   106,   155,    29,    96,    53,    28,
     112,    94,    96,    41,   137,   128,   155,    53,   141,   155,
      46,    13,    29,    53,    53,    68,    94,    29,    53,    53,
       1,    53,   125,    29,    61,    75,   110,   117,   151,   125,
      53,   155,    46,   104,   155,    46,   116,    97,   113,    11,
      26,    26,    24,   153,   155,    46,   133,    25,   155,    46,
     152,    15,   154,    84,    10,    13,    26,    11,    80,    11,
      11,    17,    18,    19,    20,    21,    22,   126,    11,    25,
      11,    11,   104,   154,   116,   154,     7,    96,   114,    95,
     153,   136,   133,   154,   152,   154,    29,    11,    69,     7,
      53,   149,   154,   154,    98,    28,    94,   135,   155,   154,
     154,    85,    68,    81,   125,    53,   115,   155,    46,   138,
       7,    53,    25,    96,   138,   154,    86,   150,   154,    27,
      53,    87,    11,    28,    88,    12,    89,    53,    13
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    47,    46,    48,    46,    49,    46,    50,
      46,    51,    51,    51,    51,    51,    51,    51,    51,    52,
      51,    54,    53,    55,    53,    53,    57,    56,    58,    56,
      56,    56,    56,    59,    59,    59,    59,    59,    59,    60,
      60,    61,    62,    63,    61,    64,    64,    66,    67,    65,
      68,    69,    68,    70,    71,    70,    70,    72,    72,    74,
      73,    76,    77,    75,    75,    75,    78,    79,    80,    81,
      75,    82,    83,    84,    85,    86,    87,    88,    89,    75,
      90,    91,    90,    92,    90,    93,    90,    94,    95,    94,
      96,    97,    98,    96,   100,    99,   101,    99,   103,   102,
     104,   106,   105,   107,   105,   109,   108,   110,   110,   110,
     111,   111,   112,   113,   112,   114,   115,   112,   116,   118,
     117,   119,   120,   117,   121,   122,   117,   123,   124,   117,
     125,   125,   126,   126,   126,   126,   126,   126,   128,   127,
     129,   127,   131,   132,   130,   133,   134,   135,   134,   136,
     134,   137,   138,   139,   141,   140,   142,   140,   143,   140,
     145,   146,   144,   147,   148,   149,   150,   144,   151,   151,
     152,   153,   154,   155
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     2,     2,     2,     2,     1,     1,     1,     0,
       5,     0,     4,     0,     4,     1,     0,     4,     0,     4,
       1,     1,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     0,     6,     2,     2,     0,     0,     6,
       1,     0,     4,     1,     0,     3,     1,     1,     1,     0,
       4,     0,     0,     5,     2,     7,     0,     0,     0,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     0,    18,
       0,     0,     3,     0,     3,     0,     3,     1,     0,     4,
       1,     0,     0,     5,     0,     7,     0,     6,     0,     3,
       1,     0,     7,     0,     6,     0,     5,     1,     2,     2,
       1,     1,     0,     0,     3,     0,     0,     6,     1,     0,
       4,     0,     0,     6,     0,     0,     6,     0,     0,     6,
       3,     1,     1,     1,     1,     1,     1,     1,     0,     7,
       0,     6,     0,     0,     6,     1,     1,     0,     8,     0,
       7,     1,     1,     1,     0,     7,     0,     6,     0,     5,
       0,     0,     6,     0,     0,     0,     0,    12,     1,     1,
       1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 3:
#line 54 "B073040025.y"
                            {
        /*printf("30\n");*/
        format_print();
    }
#line 1730 "y.tab.c"
    break;

  case 5:
#line 58 "B073040025.y"
                      {
    }
#line 1737 "y.tab.c"
    break;

  case 7:
#line 60 "B073040025.y"
                        {
        /*printf("30\n");*/
        format_print();
    }
#line 1746 "y.tab.c"
    break;

  case 9:
#line 64 "B073040025.y"
                   {
        dealwithError(4);
        yyerrok;
        format_print();
    }
#line 1756 "y.tab.c"
    break;

  case 11:
#line 71 "B073040025.y"
                 {}
#line 1762 "y.tab.c"
    break;

  case 12:
#line 72 "B073040025.y"
                           {strcat(msg," ; ");}
#line 1768 "y.tab.c"
    break;

  case 13:
#line 73 "B073040025.y"
                           {strcat(msg," ; ");}
#line 1774 "y.tab.c"
    break;

  case 14:
#line 74 "B073040025.y"
                       {
        dealwithError(3);
        yyerrok;
    }
#line 1783 "y.tab.c"
    break;

  case 15:
#line 78 "B073040025.y"
                          {strcat(msg," ; ");}
#line 1789 "y.tab.c"
    break;

  case 19:
#line 82 "B073040025.y"
          {strcat(msg," { ");format_print();}
#line 1795 "y.tab.c"
    break;

  case 20:
#line 82 "B073040025.y"
                                                                {strcat(msg," } ");}
#line 1801 "y.tab.c"
    break;

  case 21:
#line 94 "B073040025.y"
                    {strcat(msg, " + ");}
#line 1807 "y.tab.c"
    break;

  case 22:
#line 94 "B073040025.y"
                                               {
        /* printf("3\n"); */

    }
#line 1816 "y.tab.c"
    break;

  case 23:
#line 98 "B073040025.y"
                       {strcat(msg, " - ");}
#line 1822 "y.tab.c"
    break;

  case 24:
#line 98 "B073040025.y"
                                                 {
        /* printf("4\n"); */
        }
#line 1830 "y.tab.c"
    break;

  case 25:
#line 101 "B073040025.y"
           {
        /* printf("5\n"); */
    }
#line 1838 "y.tab.c"
    break;

  case 26:
#line 107 "B073040025.y"
             {strcat(msg, " * ");}
#line 1844 "y.tab.c"
    break;

  case 27:
#line 107 "B073040025.y"
                                          {
        /* printf("6\n"); */
    }
#line 1852 "y.tab.c"
    break;

  case 28:
#line 110 "B073040025.y"
               {strcat(msg, " / ");}
#line 1858 "y.tab.c"
    break;

  case 29:
#line 110 "B073040025.y"
                                            {
        /* printf("7\n");*/
    }
#line 1866 "y.tab.c"
    break;

  case 30:
#line 113 "B073040025.y"
             {
        /* printf("8\n"); */
    }
#line 1874 "y.tab.c"
    break;

  case 31:
#line 116 "B073040025.y"
             {
        strcat(msg, (yyvsp[0].strVal));
    }
#line 1882 "y.tab.c"
    break;

  case 32:
#line 119 "B073040025.y"
                   { /* Error happened, discard token until it find NUMBER. */
        /*printf("9\n");*/
        yyerrok;     /* Error recovery. */
    }
#line 1891 "y.tab.c"
    break;

  case 34:
#line 125 "B073040025.y"
            {
        /* printf("10\n"); */
    }
#line 1899 "y.tab.c"
    break;

  case 35:
#line 128 "B073040025.y"
             {
        /* printf("11\n"); */
        strcat(msg, (yyvsp[0].strVal));
    }
#line 1908 "y.tab.c"
    break;

  case 37:
#line 133 "B073040025.y"
                {
    }
#line 1915 "y.tab.c"
    break;

  case 39:
#line 137 "B073040025.y"
                              {strcat(msg, (yyvsp[0].strVal));}
#line 1921 "y.tab.c"
    break;

  case 41:
#line 140 "B073040025.y"
                     {strcat(msg, (yyvsp[0].strVal));}
#line 1927 "y.tab.c"
    break;

  case 42:
#line 141 "B073040025.y"
         { strcat(msg, (yyvsp[0].strVal));}
#line 1933 "y.tab.c"
    break;

  case 43:
#line 141 "B073040025.y"
                                {strcat(msg, " [ ");}
#line 1939 "y.tab.c"
    break;

  case 44:
#line 141 "B073040025.y"
                                                                    {strcat(msg, " ] ");}
#line 1945 "y.tab.c"
    break;

  case 47:
#line 147 "B073040025.y"
               {strcat(msg, (yyvsp[0].strVal));}
#line 1951 "y.tab.c"
    break;

  case 48:
#line 147 "B073040025.y"
                                     {strcat(msg, " ( ");}
#line 1957 "y.tab.c"
    break;

  case 49:
#line 147 "B073040025.y"
                                                                       {
        strcat(msg, " ) ");
    }
#line 1965 "y.tab.c"
    break;

  case 51:
#line 151 "B073040025.y"
                      {strcat(msg, " , ");}
#line 1971 "y.tab.c"
    break;

  case 53:
#line 153 "B073040025.y"
               {
        strcat(msg, (yyvsp[0].strVal));
    }
#line 1979 "y.tab.c"
    break;

  case 54:
#line 156 "B073040025.y"
            {
        strcat(msg, (yyvsp[0].strVal));
    }
#line 1987 "y.tab.c"
    break;

  case 55:
#line 159 "B073040025.y"
          {
        strcat(msg, " - ");
    }
#line 1995 "y.tab.c"
    break;

  case 56:
#line 162 "B073040025.y"
           {
        strcat(msg, " + ");
    }
#line 2003 "y.tab.c"
    break;

  case 57:
#line 165 "B073040025.y"
                {
        strcat(msg, (yyvsp[0].strVal));
    }
#line 2011 "y.tab.c"
    break;

  case 58:
#line 168 "B073040025.y"
            {
        strcat(msg, (yyvsp[0].strVal));
    }
#line 2019 "y.tab.c"
    break;

  case 59:
#line 172 "B073040025.y"
       {strcat(msg, " ( ");}
#line 2025 "y.tab.c"
    break;

  case 60:
#line 172 "B073040025.y"
                                          {
        /* printf("12\n"); */
        strcat(msg, " ) ");
    }
#line 2034 "y.tab.c"
    break;

  case 61:
#line 183 "B073040025.y"
           {strcat(msg, "static ");}
#line 2040 "y.tab.c"
    break;

  case 62:
#line 183 "B073040025.y"
                                             {strcat(msg, (yyvsp[0].strVal));strcat(msg, " ");}
#line 2046 "y.tab.c"
    break;

  case 63:
#line 183 "B073040025.y"
                                                                                        {
    }
#line 2053 "y.tab.c"
    break;

  case 64:
#line 185 "B073040025.y"
                             {
        /*printf("valDeclare -2\n");*/
    }
#line 2061 "y.tab.c"
    break;

  case 65:
#line 188 "B073040025.y"
                            {
        /*printf("valDeclare -2\n");*/
        strcat(msg, (yyvsp[-6].strVal));
        strcat(msg, " ");
        strcat(msg, (yyvsp[-5].strVal));
        strcat(msg, " = ");
        strcat(msg, "new ");
        strcat(msg, (yyvsp[-2].strVal));
        strcat(msg, " ( ");
        strcat(msg, ") ");
    }
#line 2077 "y.tab.c"
    break;

  case 66:
#line 199 "B073040025.y"
            {strcat(msg, "final ");}
#line 2083 "y.tab.c"
    break;

  case 67:
#line 199 "B073040025.y"
                                             {strcat(msg, (yyvsp[0].strVal));strcat(msg, " ");}
#line 2089 "y.tab.c"
    break;

  case 68:
#line 199 "B073040025.y"
                                                                                    {strcat(msg, (yyvsp[0].strVal));}
#line 2095 "y.tab.c"
    break;

  case 69:
#line 199 "B073040025.y"
                                                                                                          {strcat(msg, " = ");}
#line 2101 "y.tab.c"
    break;

  case 70:
#line 199 "B073040025.y"
                                                                                                                                           {
    }
#line 2108 "y.tab.c"
    break;

  case 71:
#line 201 "B073040025.y"
              {strcat(msg, (yyvsp[0].strVal));}
#line 2114 "y.tab.c"
    break;

  case 72:
#line 201 "B073040025.y"
                                    {strcat(msg, " [ ");}
#line 2120 "y.tab.c"
    break;

  case 73:
#line 201 "B073040025.y"
                                                             {strcat(msg, " ] ");}
#line 2126 "y.tab.c"
    break;

  case 74:
#line 201 "B073040025.y"
                                                                                      {strcat(msg, (yyvsp[0].strVal));}
#line 2132 "y.tab.c"
    break;

  case 75:
#line 201 "B073040025.y"
                                                                                                            {strcat(msg, " = ");}
#line 2138 "y.tab.c"
    break;

  case 76:
#line 201 "B073040025.y"
                                                                                                                                      {strcat(msg, " new ");}
#line 2144 "y.tab.c"
    break;

  case 77:
#line 201 "B073040025.y"
                                                                                                                                                                      {strcat(msg, (yyvsp[-12].strVal));}
#line 2150 "y.tab.c"
    break;

  case 78:
#line 201 "B073040025.y"
                                                                                                                                                                                            {strcat(msg, " [ ");}
#line 2156 "y.tab.c"
    break;

  case 79:
#line 201 "B073040025.y"
                                                                                                                                                                                                                                {strcat(msg, " ] ");}
#line 2162 "y.tab.c"
    break;

  case 80:
#line 203 "B073040025.y"
          {}
#line 2168 "y.tab.c"
    break;

  case 81:
#line 204 "B073040025.y"
         {strcat(msg, " = ");}
#line 2174 "y.tab.c"
    break;

  case 83:
#line 205 "B073040025.y"
            {strcat(msg, " , ");}
#line 2180 "y.tab.c"
    break;

  case 85:
#line 206 "B073040025.y"
            {dealwithError(2);}
#line 2186 "y.tab.c"
    break;

  case 86:
#line 206 "B073040025.y"
                                                 {
        yyerrok;
    }
#line 2194 "y.tab.c"
    break;

  case 87:
#line 211 "B073040025.y"
                      {
    }
#line 2201 "y.tab.c"
    break;

  case 88:
#line 213 "B073040025.y"
                              {strcat(msg, " , ");}
#line 2207 "y.tab.c"
    break;

  case 89:
#line 213 "B073040025.y"
                                                            {
    }
#line 2214 "y.tab.c"
    break;

  case 90:
#line 217 "B073040025.y"
       {
        IDduplicateJudge((yyvsp[0].strVal));
        strcat(msg, (yyvsp[0].strVal));
    }
#line 2223 "y.tab.c"
    break;

  case 91:
#line 221 "B073040025.y"
         {
        IDduplicateJudge((yyvsp[0].strVal));
        strcat(msg, (yyvsp[0].strVal));
    }
#line 2232 "y.tab.c"
    break;

  case 92:
#line 224 "B073040025.y"
         {strcat(msg, " = ");}
#line 2238 "y.tab.c"
    break;

  case 94:
#line 232 "B073040025.y"
                          {
        //  { 在下一行
        /*printf("25\n");*/
        format_print();

        printf("line %d: { \n", ++lineNum);

    }
#line 2251 "y.tab.c"
    break;

  case 95:
#line 239 "B073040025.y"
                            {strcat(msg," } ");}
#line 2257 "y.tab.c"
    break;

  case 96:
#line 240 "B073040025.y"
                    {
        //  { 在同一行
        strcat(msg," { ");
        /*printf("25\n");*/
        format_print();

    }
#line 2269 "y.tab.c"
    break;

  case 97:
#line 246 "B073040025.y"
                            {strcat(msg," } ");}
#line 2275 "y.tab.c"
    break;

  case 98:
#line 248 "B073040025.y"
                    {strcat(msg,(yyvsp[0].strVal));strcat(msg," ");}
#line 2281 "y.tab.c"
    break;

  case 99:
#line 248 "B073040025.y"
                                                         {
        strcat(msg, (yyvsp[0].strVal));
    }
#line 2289 "y.tab.c"
    break;

  case 101:
#line 261 "B073040025.y"
                           {
        format_print();

        printf("line %d: { \n", ++lineNum);
    }
#line 2299 "y.tab.c"
    break;

  case 102:
#line 265 "B073040025.y"
                            {strcat(msg," } ");}
#line 2305 "y.tab.c"
    break;

  case 103:
#line 266 "B073040025.y"
                    {
        strcat(msg, " { ");
        format_print();

    }
#line 2315 "y.tab.c"
    break;

  case 104:
#line 270 "B073040025.y"
                            {strcat(msg," } ");}
#line 2321 "y.tab.c"
    break;

  case 105:
#line 272 "B073040025.y"
                             {strcat(msg, " ( ");}
#line 2327 "y.tab.c"
    break;

  case 106:
#line 272 "B073040025.y"
                                                              {
        strcat(msg, " ) ");
    }
#line 2335 "y.tab.c"
    break;

  case 107:
#line 276 "B073040025.y"
         {strcat(msg, (yyvsp[0].strVal));}
#line 2341 "y.tab.c"
    break;

  case 108:
#line 277 "B073040025.y"
                       {strcat(msg, (yyvsp[0].strVal));}
#line 2347 "y.tab.c"
    break;

  case 109:
#line 278 "B073040025.y"
                     {strcat(msg, (yyvsp[0].strVal));IDduplicateJudge((yyvsp[0].strVal));}
#line 2353 "y.tab.c"
    break;

  case 110:
#line 281 "B073040025.y"
            {strcat(msg, (yyvsp[0].strVal));strcat(msg, " ");}
#line 2359 "y.tab.c"
    break;

  case 111:
#line 282 "B073040025.y"
            {strcat(msg, (yyvsp[0].strVal));strcat(msg, " ");}
#line 2365 "y.tab.c"
    break;

  case 112:
#line 284 "B073040025.y"
          {}
#line 2371 "y.tab.c"
    break;

  case 113:
#line 285 "B073040025.y"
              {strcat(msg, (yyvsp[0].strVal));strcat(msg, " ");}
#line 2377 "y.tab.c"
    break;

  case 114:
#line 285 "B073040025.y"
                                                                    {
    }
#line 2384 "y.tab.c"
    break;

  case 115:
#line 287 "B073040025.y"
                     {strcat(msg, " , ");}
#line 2390 "y.tab.c"
    break;

  case 116:
#line 287 "B073040025.y"
                                                   {strcat(msg, (yyvsp[0].strVal));strcat(msg, " ");}
#line 2396 "y.tab.c"
    break;

  case 117:
#line 287 "B073040025.y"
                                                                                                         {
    }
#line 2403 "y.tab.c"
    break;

  case 119:
#line 298 "B073040025.y"
                                {strcat(msg, " = ");}
#line 2409 "y.tab.c"
    break;

  case 120:
#line 298 "B073040025.y"
                                                                  {
    }
#line 2416 "y.tab.c"
    break;

  case 121:
#line 300 "B073040025.y"
           {strcat(msg, "print");}
#line 2422 "y.tab.c"
    break;

  case 122:
#line 300 "B073040025.y"
                                     {strcat(msg, " ( ");}
#line 2428 "y.tab.c"
    break;

  case 123:
#line 300 "B073040025.y"
                                                                        {
        strcat(msg, " ) ");
    }
#line 2436 "y.tab.c"
    break;

  case 124:
#line 303 "B073040025.y"
           {strcat(msg, "read");}
#line 2442 "y.tab.c"
    break;

  case 125:
#line 303 "B073040025.y"
                                    {strcat(msg, " ( ");}
#line 2448 "y.tab.c"
    break;

  case 126:
#line 303 "B073040025.y"
                                                                       {
        strcat(msg, " ) ");
    }
#line 2456 "y.tab.c"
    break;

  case 127:
#line 306 "B073040025.y"
             {strcat(msg, "return");}
#line 2462 "y.tab.c"
    break;

  case 128:
#line 306 "B073040025.y"
                                        {strcat(msg, " ( ");}
#line 2468 "y.tab.c"
    break;

  case 129:
#line 306 "B073040025.y"
                                                                           {
        strcat(msg, " ) ");
    }
#line 2476 "y.tab.c"
    break;

  case 131:
#line 315 "B073040025.y"
                {dealwithError(5);yyerrok;}
#line 2482 "y.tab.c"
    break;

  case 132:
#line 318 "B073040025.y"
               {
        strcat(msg, " == ");
    }
#line 2490 "y.tab.c"
    break;

  case 133:
#line 321 "B073040025.y"
            {
        strcat(msg, " != ");
    }
#line 2498 "y.tab.c"
    break;

  case 134:
#line 324 "B073040025.y"
          {
        strcat(msg, " > ");
    }
#line 2506 "y.tab.c"
    break;

  case 135:
#line 327 "B073040025.y"
          {
        strcat(msg, " < ");
    }
#line 2514 "y.tab.c"
    break;

  case 136:
#line 330 "B073040025.y"
            {
        strcat(msg, " >= ");
    }
#line 2522 "y.tab.c"
    break;

  case 137:
#line 333 "B073040025.y"
            {
        strcat(msg, " <= ");
    }
#line 2530 "y.tab.c"
    break;

  case 138:
#line 342 "B073040025.y"
                                 {
        format_print();

        printf("line %d: { \n", ++lineNum);
    }
#line 2540 "y.tab.c"
    break;

  case 139:
#line 346 "B073040025.y"
                                   {strcat(msg," } ");}
#line 2546 "y.tab.c"
    break;

  case 140:
#line 347 "B073040025.y"
                            {
        strcat(msg, " { ");
        format_print();

    }
#line 2556 "y.tab.c"
    break;

  case 141:
#line 351 "B073040025.y"
                                   {strcat(msg," } ");}
#line 2562 "y.tab.c"
    break;

  case 142:
#line 354 "B073040025.y"
                      {strcat(msg,(yyvsp[0].strVal));}
#line 2568 "y.tab.c"
    break;

  case 143:
#line 354 "B073040025.y"
                                           {strcat(msg," ( ");}
#line 2574 "y.tab.c"
    break;

  case 144:
#line 354 "B073040025.y"
                                                                            {
        strcat(msg," ) ");
    }
#line 2582 "y.tab.c"
    break;

  case 147:
#line 360 "B073040025.y"
                                         {
        format_print();

        printf("line %d: { \n", ++lineNum);
    }
#line 2592 "y.tab.c"
    break;

  case 148:
#line 364 "B073040025.y"
                                 {strcat(msg," } ");}
#line 2598 "y.tab.c"
    break;

  case 149:
#line 365 "B073040025.y"
                                  {
        strcat(msg, " { ");
        format_print();

     }
#line 2608 "y.tab.c"
    break;

  case 150:
#line 369 "B073040025.y"
                                  {strcat(msg," } ");}
#line 2614 "y.tab.c"
    break;

  case 151:
#line 371 "B073040025.y"
                     {strcat(msg,(yyvsp[0].strVal));}
#line 2620 "y.tab.c"
    break;

  case 153:
#line 375 "B073040025.y"
               {strcat(msg,(yyvsp[0].strVal));}
#line 2626 "y.tab.c"
    break;

  case 154:
#line 382 "B073040025.y"
                        {
        format_print();

        printf("line %d: { \n", ++lineNum);
    }
#line 2636 "y.tab.c"
    break;

  case 155:
#line 386 "B073040025.y"
                          {strcat(msg," } ");}
#line 2642 "y.tab.c"
    break;

  case 156:
#line 387 "B073040025.y"
                   {
        strcat(msg, " { ");
        format_print();

    }
#line 2652 "y.tab.c"
    break;

  case 157:
#line 391 "B073040025.y"
                          {strcat(msg," } ");}
#line 2658 "y.tab.c"
    break;

  case 158:
#line 392 "B073040025.y"
                       {format_print();lineNum++;}
#line 2664 "y.tab.c"
    break;

  case 159:
#line 392 "B073040025.y"
                                                                        {strcat(msg," ; ");}
#line 2670 "y.tab.c"
    break;

  case 160:
#line 395 "B073040025.y"
                   {strcat(msg,(yyvsp[0].strVal));}
#line 2676 "y.tab.c"
    break;

  case 161:
#line 395 "B073040025.y"
                                        {strcat(msg," ( ");}
#line 2682 "y.tab.c"
    break;

  case 162:
#line 395 "B073040025.y"
                                                                         {
        strcat(msg," ) ");
    }
#line 2690 "y.tab.c"
    break;

  case 163:
#line 398 "B073040025.y"
             {strcat(msg,(yyvsp[0].strVal));}
#line 2696 "y.tab.c"
    break;

  case 164:
#line 398 "B073040025.y"
                                  {strcat(msg," ( ");}
#line 2702 "y.tab.c"
    break;

  case 165:
#line 399 "B073040025.y"
                           {strcat(msg," ; ");}
#line 2708 "y.tab.c"
    break;

  case 166:
#line 400 "B073040025.y"
                        {strcat(msg," ; ");}
#line 2714 "y.tab.c"
    break;

  case 167:
#line 401 "B073040025.y"
                 {
        strcat(msg," ) ");
    }
#line 2722 "y.tab.c"
    break;

  case 171:
#line 413 "B073040025.y"
       {
    current_block_stack++;
}
#line 2730 "y.tab.c"
    break;

  case 172:
#line 416 "B073040025.y"
       {
    blockReset();
    current_block_stack--;
}
#line 2739 "y.tab.c"
    break;

  case 173:
#line 423 "B073040025.y"
                 {
        charNum = 0;
        lineNum++;
    }
#line 2748 "y.tab.c"
    break;


#line 2752 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
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
  return yyresult;
}
#line 428 "B073040025.y"


int main(){
    create();
    yyparse();
    return 0;
}
void yyerror() {flag = 0;}

void ErrorMsg(int errortype) {
    switch(errortype){
        case 1:
            printf(">>>>>>>>>>: duplicate declare at line %d, Var name \"%s\"\n", lineNum,conflictID);
            break;
        case 2:
            printf(">>>>>>>>>>: declare format error at line %d, char %d(not counting space)\n", lineNum,charNum);
            break;
        case 3:
            printf(">>>>>>>>>>: need ';' at EOL at line %d, char %d(not counting space)\n", lineNum,charNum);
            break;
        case 4:
            printf(">>>>>>>>>>: else without if at line %d, char %d(not counting space)\n", lineNum,charNum);
            break;
        case 5:
            printf(">>>>>>>>>>: error boolean expression at line %d, char %d(not counting space)\n", lineNum,charNum);
            break;
        default:
            break;
    }
        flag = 0;
        errortype = 0;
};

void format_print(){
    if(flag == 1){
            printf("line %d: %s\n", lineNum, msg);
            memset(msg, 0, 256);
        }
    else{
        flag = 1;
        memset(msg, 0, 256);
    }
}

void dealwithError(int etype){
    ErrorMsg(etype);
    flag = 1;
}



//-------------------------------------------
// symbol table function to use
//-------------------------------------------
void blockReset(){
    for(int j = 0; j < 20; j++)
        for(int k= 0; k < 25; k++)
            symbol_table[current_block_stack][j][k] = '\0';
    symbol_table_next_avalible_index[current_block_stack] = 0;
}


void create(){ /*reset*/
    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 20; j++)
            for(int k= 0; k < 25; k++)
                symbol_table[i][j][k]='\0';
}

int lookup(char* str){
    if(symbol_table[current_block_stack][0][0]=='\0')
        return 0; /*empty symbol table*/
    for(int i = 0; i < symbol_table_next_avalible_index[current_block_stack]; i++){
        for(int j = 0; j < 25;j++){
            if(symbol_table[current_block_stack][i][j]=='\0' && str[j]=='\0'){
                return 1;
            }
            if(symbol_table[current_block_stack][i][j]!=str[j])
                break;
        }
    }
    return 0;
}

void insert(char* str){
    for(int i = 0; i < 25;i++){
        symbol_table[current_block_stack][symbol_table_next_avalible_index[current_block_stack]][i]=str[i];
        if(str[i]=='\0') break;
    }
    symbol_table_next_avalible_index[current_block_stack]++;
}

void IDduplicateJudge(char* str){
    if(lookup(str)){
        conflictID = str;
        dealwithError(1);
    }
    else
        insert(str);
}
