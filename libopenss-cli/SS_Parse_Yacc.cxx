/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

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

/* Line 268 of yacc.c  */
#line 20 "SS_Parse_Yacc.yxx"

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include <vector>
#include <iostream>

#include "SS_Input_Manager.hxx"


#include "SS_Parse_Interval.hxx"
#include "SS_Parse_Range.hxx"
#include "SS_Parse_Target.hxx"
#include "SS_Parse_Result.hxx"

using namespace OpenSpeedShop::cli;

void yyerror(const char *);
extern char *yytext;
extern int yylex();
extern int yywrap();
extern ParseResult *p_parse_result;
extern void ParseRangeTrace(int t);


/* Line 268 of yacc.c  */
#line 47 "SS_Parse_Yacc.yxx"

#include "SS_Input_Manager.hxx"
#include "SS_Parse_Interval.hxx"
#include "SS_Parse_Range.hxx"
#include "SS_Parse_Target.hxx"
#include "SS_Parse_Result.hxx"

using namespace OpenSpeedShop::cli;


/* Line 268 of yacc.c  */
#line 110 "y.tab.c"

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
     ATTACH_HEAD = 258,
     CLONE_HEAD = 259,
     CLOSE_HEAD = 260,
     CREATE_HEAD = 261,
     COMPARE_HEAD = 262,
     DETACH_HEAD = 263,
     DISABLE_HEAD = 264,
     ENABLE_HEAD = 265,
     FOCUS_HEAD = 266,
     GO_HEAD = 267,
     PAUSE_HEAD = 268,
     CONT_HEAD = 269,
     RESTORE_HEAD = 270,
     SAVE_HEAD = 271,
     SETARGS_HEAD = 272,
     SETPARAM_HEAD = 273,
     STATUS_HEAD = 274,
     VIEW_HEAD = 275,
     VIEW_HEAD_OLD = 276,
     DATA_HEAD = 277,
     CVIEWCREATE_HEAD = 278,
     CVIEWDELETE_HEAD = 279,
     CVIEW_HEAD = 280,
     CVIEWINFO_HEAD = 281,
     CVIEWCLUSTER_HEAD = 282,
     LIST_GENERIC_HEAD = 283,
     GEN_CLEAR_BREAK_HEAD = 284,
     GEN_EXIT_HEAD = 285,
     GEN_OPEN_GUI_HEAD = 286,
     GEN_HELP_HEAD = 287,
     GEN_HISTORY_HEAD = 288,
     GEN_LOG_HEAD = 289,
     GEN_PLAYBACK_HEAD = 290,
     GEN_RECORD_HEAD = 291,
     GEN_SETBREAK_HEAD = 292,
     GEN_WAIT_HEAD = 293,
     GEN_ECHO_HEAD = 294,
     GEN_INFO_HEAD = 295,
     JUST_QUIT_HEAD = 296,
     RANK_ID = 297,
     HOST_ID = 298,
     THREAD_ID = 299,
     ARGS_ID = 300,
     FILE_ID = 301,
     EXP_ID = 302,
     PROCESS_ID = 303,
     LINE_ID = 304,
     VIEW_ID = 305,
     METRIC_ID = 306,
     FORMAT_ID = 307,
     MODIFIER_ID = 308,
     INTERVAL_ID = 309,
     INSTRUMENTOR_ID = 310,
     COMMA = 311,
     SEMICOLON = 312,
     COLON = 313,
     END_LINE = 314,
     EQUAL = 315,
     DOUBLE_COLON = 316,
     REDIRECT = 317,
     APPEND = 318,
     LPAREN = 319,
     RPAREN = 320,
     IPNUMBER_64 = 321,
     HEXNUMBER = 322,
     NUMBER = 323,
     DOUBLE = 324,
     NAME = 325
   };
#endif
/* Tokens.  */
#define ATTACH_HEAD 258
#define CLONE_HEAD 259
#define CLOSE_HEAD 260
#define CREATE_HEAD 261
#define COMPARE_HEAD 262
#define DETACH_HEAD 263
#define DISABLE_HEAD 264
#define ENABLE_HEAD 265
#define FOCUS_HEAD 266
#define GO_HEAD 267
#define PAUSE_HEAD 268
#define CONT_HEAD 269
#define RESTORE_HEAD 270
#define SAVE_HEAD 271
#define SETARGS_HEAD 272
#define SETPARAM_HEAD 273
#define STATUS_HEAD 274
#define VIEW_HEAD 275
#define VIEW_HEAD_OLD 276
#define DATA_HEAD 277
#define CVIEWCREATE_HEAD 278
#define CVIEWDELETE_HEAD 279
#define CVIEW_HEAD 280
#define CVIEWINFO_HEAD 281
#define CVIEWCLUSTER_HEAD 282
#define LIST_GENERIC_HEAD 283
#define GEN_CLEAR_BREAK_HEAD 284
#define GEN_EXIT_HEAD 285
#define GEN_OPEN_GUI_HEAD 286
#define GEN_HELP_HEAD 287
#define GEN_HISTORY_HEAD 288
#define GEN_LOG_HEAD 289
#define GEN_PLAYBACK_HEAD 290
#define GEN_RECORD_HEAD 291
#define GEN_SETBREAK_HEAD 292
#define GEN_WAIT_HEAD 293
#define GEN_ECHO_HEAD 294
#define GEN_INFO_HEAD 295
#define JUST_QUIT_HEAD 296
#define RANK_ID 297
#define HOST_ID 298
#define THREAD_ID 299
#define ARGS_ID 300
#define FILE_ID 301
#define EXP_ID 302
#define PROCESS_ID 303
#define LINE_ID 304
#define VIEW_ID 305
#define METRIC_ID 306
#define FORMAT_ID 307
#define MODIFIER_ID 308
#define INTERVAL_ID 309
#define INSTRUMENTOR_ID 310
#define COMMA 311
#define SEMICOLON 312
#define COLON 313
#define END_LINE 314
#define EQUAL 315
#define DOUBLE_COLON 316
#define REDIRECT 317
#define APPEND 318
#define LPAREN 319
#define RPAREN 320
#define IPNUMBER_64 321
#define HEXNUMBER 322
#define NUMBER 323
#define DOUBLE 324
#define NAME 325




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 59 "SS_Parse_Yacc.yxx"

int64_t ival;
double dval;
char *string;
void *parserange;



/* Line 293 of yacc.c  */
#line 295 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 307 "y.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  312
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1203

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  143
/* YYNRULES -- Number of rules.  */
#define YYNRULES  463
/* YYNRULES -- Number of states.  */
#define YYNSTATES  625

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   325

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    12,    17,    23,    28,    34,
      37,    39,    41,    43,    45,    47,    49,    51,    53,    55,
      57,    59,    61,    63,    65,    67,    69,    71,    73,    75,
      77,    79,    81,    83,    85,    87,    89,    91,    93,    95,
      97,    99,   101,   103,   105,   107,   109,   111,   113,   115,
     117,   120,   125,   129,   131,   134,   136,   138,   140,   142,
     144,   147,   152,   156,   158,   161,   163,   166,   171,   175,
     177,   178,   180,   182,   185,   188,   191,   195,   199,   203,
     206,   211,   215,   216,   218,   220,   222,   225,   230,   234,
     236,   239,   241,   243,   245,   247,   250,   255,   259,   261,
     264,   269,   273,   275,   278,   280,   282,   284,   287,   292,
     296,   297,   299,   301,   304,   309,   313,   314,   316,   318,
     321,   326,   330,   331,   333,   336,   341,   345,   346,   348,
     350,   353,   358,   362,   363,   365,   367,   370,   375,   378,
     383,   387,   390,   395,   399,   401,   404,   407,   410,   413,
     417,   421,   425,   429,   433,   437,   440,   444,   449,   451,
     454,   457,   461,   466,   468,   471,   474,   478,   483,   484,
     486,   488,   490,   493,   497,   502,   504,   507,   511,   516,
     518,   522,   525,   530,   532,   536,   539,   544,   546,   550,
     553,   558,   560,   564,   567,   572,   574,   576,   579,   583,
     588,   591,   595,   600,   602,   605,   607,   609,   611,   613,
     615,   617,   619,   621,   624,   629,   633,   635,   638,   640,
     642,   644,   646,   648,   651,   656,   660,   662,   665,   670,
     674,   676,   680,   682,   685,   689,   692,   697,   701,   703,
     706,   708,   710,   712,   714,   716,   718,   720,   722,   724,
     726,   728,   730,   732,   734,   736,   738,   740,   742,   744,
     746,   748,   750,   752,   754,   756,   758,   760,   762,   764,
     766,   768,   770,   772,   774,   776,   778,   780,   782,   784,
     786,   788,   790,   792,   794,   796,   798,   800,   802,   804,
     806,   809,   814,   818,   819,   821,   824,   828,   833,   834,
     836,   838,   841,   846,   850,   851,   853,   855,   859,   862,
     867,   871,   873,   876,   881,   885,   886,   888,   891,   896,
     900,   902,   905,   908,   911,   914,   918,   922,   926,   930,
     934,   938,   941,   946,   950,   951,   953,   955,   958,   961,
     963,   965,   967,   969,   972,   973,   977,   979,   983,   985,
     989,   991,   992,   997,  1002,  1004,  1007,  1009,  1011,  1013,
    1015,  1017,  1020,  1021,  1025,  1027,  1031,  1033,  1035,  1038,
    1040,  1043,  1046,  1047,  1051,  1053,  1057,  1059,  1062,  1063,
    1067,  1069,  1073,  1075,  1079,  1082,  1083,  1087,  1089,  1093,
    1095,  1099,  1102,  1103,  1107,  1109,  1113,  1115,  1119,  1122,
    1123,  1127,  1129,  1133,  1135,  1139,  1141,  1143,  1149,  1153,
    1155,  1159,  1161,  1163,  1165,  1167,  1171,  1174,  1176,  1180,
    1184,  1188,  1192,  1196,  1199,  1201,  1205,  1207,  1209,  1211,
    1215,  1221,  1225,  1229,  1234,  1236,  1238,  1242,  1244,  1247,
    1249,  1253,  1255,  1259,  1263,  1267,  1269,  1271,  1275,  1277,
    1280,  1281,  1285,  1287,  1291,  1293,  1295,  1298,  1299,  1303,
    1305,  1309,  1311,  1314
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      72,     0,    -1,    59,    -1,    73,    59,    -1,    73,    59,
      59,    -1,    73,    62,    70,    59,    -1,    73,    62,    70,
      59,    59,    -1,    73,    63,    70,    59,    -1,    73,    63,
      70,    59,    59,    -1,     1,    59,    -1,    74,    -1,    77,
      -1,    80,    -1,    85,    -1,    88,    -1,    83,    -1,   112,
      -1,    89,    -1,    92,    -1,    94,    -1,    96,    -1,    98,
      -1,   100,    -1,   102,    -1,   103,    -1,   105,    -1,   107,
      -1,   109,    -1,   111,    -1,   119,    -1,   113,    -1,   114,
      -1,   115,    -1,   116,    -1,   118,    -1,   122,    -1,   125,
      -1,   127,    -1,   128,    -1,   138,    -1,   129,    -1,   132,
      -1,   134,    -1,   136,    -1,   139,    -1,   141,    -1,   143,
      -1,   145,    -1,   147,    -1,     3,    -1,     3,    75,    -1,
       3,    75,     1,    59,    -1,     3,     1,    59,    -1,    76,
      -1,    75,    76,    -1,   149,    -1,   208,    -1,   153,    -1,
     196,    -1,     4,    -1,     4,    78,    -1,     4,    78,     1,
      59,    -1,     4,     1,    59,    -1,    79,    -1,    78,    79,
      -1,   149,    -1,     5,    81,    -1,     5,    81,     1,    59,
      -1,     5,     1,    59,    -1,    82,    -1,    -1,   149,    -1,
     208,    -1,   208,   149,    -1,   149,   208,    -1,   208,   208,
      -1,   208,   208,   149,    -1,   149,   208,   208,    -1,   208,
     149,   208,    -1,    14,    84,    -1,    14,    84,     1,    59,
      -1,    14,     1,    59,    -1,    -1,   149,    -1,   208,    -1,
       6,    -1,     6,    86,    -1,     6,    86,     1,    59,    -1,
       6,     1,    59,    -1,    87,    -1,    86,    87,    -1,   208,
      -1,   153,    -1,   196,    -1,   212,    -1,     7,   120,    -1,
       7,   120,     1,    59,    -1,     7,     1,    59,    -1,     8,
      -1,     8,    90,    -1,     8,    90,     1,    59,    -1,     8,
       1,    59,    -1,    91,    -1,    90,    91,    -1,   149,    -1,
     153,    -1,   196,    -1,     9,    93,    -1,     9,    93,     1,
      59,    -1,     9,     1,    59,    -1,    -1,   149,    -1,   208,
      -1,    10,    95,    -1,    10,    95,     1,    59,    -1,    10,
       1,    59,    -1,    -1,   149,    -1,   208,    -1,    11,    97,
      -1,    11,    97,     1,    59,    -1,    11,     1,    59,    -1,
      -1,   149,    -1,    12,    99,    -1,    12,    99,     1,    59,
      -1,    12,     1,    59,    -1,    -1,   149,    -1,   208,    -1,
      13,   101,    -1,    13,   101,     1,    59,    -1,    13,     1,
      59,    -1,    -1,   149,    -1,   208,    -1,    15,   163,    -1,
      15,   163,     1,    59,    -1,    15,   167,    -1,    15,   167,
       1,    59,    -1,    15,     1,    59,    -1,    16,   104,    -1,
      16,   104,     1,    59,    -1,    16,     1,    59,    -1,   163,
      -1,   149,   163,    -1,   163,   149,    -1,   163,   208,    -1,
     208,   163,    -1,   149,   163,   208,    -1,   149,   208,   163,
      -1,   163,   149,   208,    -1,   163,   208,   149,    -1,   208,
     149,   163,    -1,   208,   163,   149,    -1,    17,   106,    -1,
      17,     1,    59,    -1,    17,   106,     1,    59,    -1,   161,
      -1,   149,   161,    -1,    18,   108,    -1,    18,     1,    59,
      -1,    18,   108,     1,    59,    -1,   185,    -1,   149,   185,
      -1,    19,   110,    -1,    19,     1,    59,    -1,    19,   110,
       1,    59,    -1,    -1,   149,    -1,   208,    -1,    21,    -1,
      21,   120,    -1,    21,     1,    59,    -1,    21,   120,     1,
      59,    -1,    22,    -1,    22,   120,    -1,    22,     1,    59,
      -1,    22,   120,     1,    59,    -1,    27,    -1,    27,     1,
      59,    -1,    27,   120,    -1,    27,   120,     1,    59,    -1,
      23,    -1,    23,     1,    59,    -1,    23,   120,    -1,    23,
     120,     1,    59,    -1,    24,    -1,    24,     1,    59,    -1,
      24,   117,    -1,    24,   117,     1,    59,    -1,    26,    -1,
      26,     1,    59,    -1,    26,   117,    -1,    26,   117,     1,
      59,    -1,   180,    -1,   208,    -1,    25,   120,    -1,    25,
       1,    59,    -1,    25,   120,     1,    59,    -1,    20,   120,
      -1,    20,     1,    59,    -1,    20,   120,     1,    59,    -1,
     121,    -1,   120,   121,    -1,   149,    -1,   208,    -1,   192,
      -1,   198,    -1,   153,    -1,   180,    -1,   202,    -1,   189,
      -1,    28,   123,    -1,    28,   123,     1,    59,    -1,    28,
       1,    59,    -1,   124,    -1,   123,   124,    -1,   149,    -1,
     208,    -1,   153,    -1,   196,    -1,   204,    -1,    29,   126,
      -1,    29,   126,     1,    59,    -1,    29,     1,    59,    -1,
      68,    -1,    39,    70,    -1,    39,    70,     1,    59,    -1,
      39,     1,    59,    -1,    30,    -1,    30,     1,    59,    -1,
      32,    -1,    32,   130,    -1,    32,   208,   130,    -1,    32,
     208,    -1,    32,   130,     1,    59,    -1,    32,     1,    59,
      -1,   131,    -1,   130,   131,    -1,    70,    -1,     3,    -1,
       4,    -1,     5,    -1,     6,    -1,     7,    -1,    14,    -1,
      22,    -1,     8,    -1,     9,    -1,    10,    -1,    11,    -1,
      12,    -1,    13,    -1,    15,    -1,    16,    -1,    17,    -1,
      18,    -1,    19,    -1,    21,    -1,    20,    -1,    27,    -1,
      23,    -1,    24,    -1,    26,    -1,    25,    -1,    28,    -1,
      29,    -1,    39,    -1,    30,    -1,    32,    -1,    33,    -1,
      40,    -1,    34,    -1,    31,    -1,    35,    -1,    36,    -1,
      37,    -1,    38,    -1,    42,    -1,    43,    -1,    48,    -1,
      44,    -1,    45,    -1,    46,    -1,    47,    -1,    49,    -1,
      51,    -1,    52,    -1,    50,    -1,    33,   133,    -1,    33,
     133,     1,    59,    -1,    33,     1,    59,    -1,    -1,    68,
      -1,    40,   135,    -1,    40,     1,    59,    -1,    40,   135,
       1,    59,    -1,    -1,   149,    -1,   208,    -1,    34,   137,
      -1,    34,   137,     1,    59,    -1,    34,     1,    59,    -1,
      -1,   163,    -1,    31,    -1,    31,     1,    59,    -1,    35,
     140,    -1,    35,   140,     1,    59,    -1,    35,     1,    59,
      -1,   163,    -1,    36,   142,    -1,    36,   142,     1,    59,
      -1,    36,     1,    59,    -1,    -1,   163,    -1,    37,   144,
      -1,    37,   144,     1,    59,    -1,    37,     1,    59,    -1,
     148,    -1,   149,   148,    -1,   148,   149,    -1,   155,   148,
      -1,   148,   155,    -1,   149,   155,   148,    -1,   149,   148,
     155,    -1,   155,   149,   148,    -1,   155,   148,   149,    -1,
     148,   149,   155,    -1,   148,   155,   149,    -1,    38,   146,
      -1,    38,   146,     1,    59,    -1,    38,     1,    59,    -1,
      -1,   149,    -1,   208,    -1,   149,   208,    -1,   208,   149,
      -1,    41,    -1,    68,    -1,    67,    -1,    70,    -1,    47,
     151,    -1,    -1,    47,   150,     1,    -1,   152,    -1,   151,
      56,   152,    -1,    68,    -1,    68,    58,    68,    -1,   155,
      -1,    -1,   153,    57,   154,   155,    -1,   153,    57,     1,
      59,    -1,   156,    -1,   155,   156,    -1,   157,    -1,   164,
      -1,   168,    -1,   172,    -1,   176,    -1,    43,   159,    -1,
      -1,    43,   158,     1,    -1,   160,    -1,   159,    56,   160,
      -1,    70,    -1,   184,    -1,    45,   162,    -1,    70,    -1,
      46,   167,    -1,    46,   166,    -1,    -1,    46,   165,     1,
      -1,   167,    -1,   166,    56,   167,    -1,    70,    -1,    48,
     170,    -1,    -1,    48,   169,     1,    -1,   171,    -1,   170,
      56,   171,    -1,    68,    -1,    68,    58,    68,    -1,    44,
     174,    -1,    -1,    44,   173,     1,    -1,   175,    -1,   174,
      56,   175,    -1,    68,    -1,    68,    58,    68,    -1,    42,
     178,    -1,    -1,    42,   177,     1,    -1,   179,    -1,   178,
      56,   179,    -1,    68,    -1,    68,    58,    68,    -1,    50,
     182,    -1,    -1,    50,   181,     1,    -1,   183,    -1,   182,
      56,   183,    -1,    68,    -1,    68,    58,    68,    -1,    68,
      -1,    66,    -1,   197,    61,   188,    60,   186,    -1,   188,
      60,   186,    -1,   187,    -1,   186,    56,   187,    -1,    68,
      -1,    69,    -1,    70,    -1,    70,    -1,    54,    70,   190,
      -1,    54,   190,    -1,   191,    -1,   190,    56,   191,    -1,
      68,    58,    68,    -1,    68,    58,    69,    -1,    69,    58,
      68,    -1,    69,    58,    69,    -1,    51,   193,    -1,   194,
      -1,   193,    56,   194,    -1,   195,    -1,    68,    -1,    69,
      -1,    64,   193,    65,    -1,   197,    61,    70,    58,    70,
      -1,   197,    61,    70,    -1,   197,    58,    70,    -1,   197,
      64,   193,    65,    -1,   197,    -1,   197,    -1,   196,    56,
     197,    -1,    70,    -1,    52,   199,    -1,   200,    -1,   199,
      56,   200,    -1,   201,    -1,   201,    60,    68,    -1,   201,
      60,    69,    -1,   201,    60,    70,    -1,    70,    -1,   203,
      -1,   202,    56,   203,    -1,    70,    -1,    49,   206,    -1,
      -1,    49,   205,     1,    -1,   207,    -1,   207,    58,   207,
      -1,    68,    -1,    67,    -1,    53,   210,    -1,    -1,    53,
     209,     1,    -1,   211,    -1,   210,    56,   211,    -1,    70,
      -1,    55,   213,    -1,    70,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   101,   101,   102,   103,   105,   107,   110,   112,   115,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   138,
     140,   141,   142,   143,   144,   146,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   165,
     166,   167,   168,   171,   172,   175,   176,   177,   178,   183,
     184,   185,   186,   189,   190,   193,   198,   199,   200,   202,
     204,   205,   206,   207,   208,   210,   211,   212,   213,   219,
     220,   221,   223,   224,   225,   230,   231,   232,   233,   236,
     237,   240,   241,   242,   243,   248,   249,   250,   255,   256,
     257,   258,   261,   262,   265,   266,   267,   272,   273,   274,
     276,   277,   278,   283,   284,   285,   287,   288,   289,   294,
     295,   296,   298,   299,   304,   305,   306,   308,   309,   310,
     315,   316,   317,   319,   320,   321,   326,   327,   328,   329,
     330,   335,   336,   337,   340,   342,   343,   344,   345,   347,
     348,   349,   350,   351,   352,   358,   359,   360,   362,   363,
     368,   369,   370,   372,   373,   378,   379,   380,   382,   383,
     384,   390,   391,   392,   393,   398,   399,   400,   401,   406,
     407,   408,   409,   414,   415,   416,   417,   422,   423,   424,
     425,   430,   431,   432,   433,   436,   437,   443,   444,   445,
     451,   452,   453,   456,   457,   460,   461,   462,   463,   464,
     465,   466,   467,   472,   473,   474,   477,   478,   482,   483,
     485,   487,   488,   493,   494,   495,   497,   502,   503,   504,
     509,   510,   515,   516,   517,   518,   519,   520,   522,   523,
     525,   527,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   545,
     547,   549,   550,   551,   552,   553,   555,   557,   558,   559,
     560,   561,   562,   563,   564,   565,   566,   567,   568,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     586,   587,   588,   590,   591,   596,   597,   598,   600,   601,
     602,   607,   608,   609,   611,   612,   617,   618,   623,   624,
     625,   627,   632,   633,   634,   636,   637,   642,   643,   644,
     647,   649,   650,   651,   652,   654,   655,   656,   657,   658,
     659,   664,   665,   666,   669,   670,   671,   672,   673,   677,
     684,   685,   686,   690,   691,   691,   694,   695,   698,   699,
     702,   703,   703,   704,   707,   708,   711,   712,   713,   714,
     715,   718,   719,   719,   722,   723,   726,   727,   739,   752,
     755,   758,   759,   759,   762,   763,   766,   769,   770,   770,
     773,   774,   777,   778,   781,   782,   782,   785,   786,   789,
     790,   793,   794,   794,   797,   798,   801,   802,   805,   806,
     806,   809,   810,   813,   814,   817,   818,   827,   829,   833,
     834,   837,   838,   839,   842,   846,   848,   851,   852,   859,
     862,   865,   868,   873,   876,   877,   881,   882,   883,   884,
     887,   888,   889,   890,   891,   894,   895,   898,   901,   904,
     905,   908,   909,   910,   911,   914,   918,   919,   922,   934,
     935,   935,   938,   939,   942,   943,   946,   947,   947,   950,
     951,   954,   957,   960
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ATTACH_HEAD", "CLONE_HEAD",
  "CLOSE_HEAD", "CREATE_HEAD", "COMPARE_HEAD", "DETACH_HEAD",
  "DISABLE_HEAD", "ENABLE_HEAD", "FOCUS_HEAD", "GO_HEAD", "PAUSE_HEAD",
  "CONT_HEAD", "RESTORE_HEAD", "SAVE_HEAD", "SETARGS_HEAD",
  "SETPARAM_HEAD", "STATUS_HEAD", "VIEW_HEAD", "VIEW_HEAD_OLD",
  "DATA_HEAD", "CVIEWCREATE_HEAD", "CVIEWDELETE_HEAD", "CVIEW_HEAD",
  "CVIEWINFO_HEAD", "CVIEWCLUSTER_HEAD", "LIST_GENERIC_HEAD",
  "GEN_CLEAR_BREAK_HEAD", "GEN_EXIT_HEAD", "GEN_OPEN_GUI_HEAD",
  "GEN_HELP_HEAD", "GEN_HISTORY_HEAD", "GEN_LOG_HEAD", "GEN_PLAYBACK_HEAD",
  "GEN_RECORD_HEAD", "GEN_SETBREAK_HEAD", "GEN_WAIT_HEAD", "GEN_ECHO_HEAD",
  "GEN_INFO_HEAD", "JUST_QUIT_HEAD", "RANK_ID", "HOST_ID", "THREAD_ID",
  "ARGS_ID", "FILE_ID", "EXP_ID", "PROCESS_ID", "LINE_ID", "VIEW_ID",
  "METRIC_ID", "FORMAT_ID", "MODIFIER_ID", "INTERVAL_ID",
  "INSTRUMENTOR_ID", "COMMA", "SEMICOLON", "COLON", "END_LINE", "EQUAL",
  "DOUBLE_COLON", "REDIRECT", "APPEND", "LPAREN", "RPAREN", "IPNUMBER_64",
  "HEXNUMBER", "NUMBER", "DOUBLE", "NAME", "$accept", "command_line",
  "command_desc", "exp_attach_com", "exp_attach_args",
  "exp_attach_element", "exp_clone_com", "exp_clone_args",
  "exp_clone_element", "exp_close_com", "exp_close_args", "exp_close_arg",
  "exp_cont_com", "exp_cont_arg", "exp_create_com", "exp_create_args",
  "exp_create_element", "exp_compare_com", "exp_detach_com",
  "exp_detach_args", "exp_detach_element", "exp_disable_com",
  "exp_disable_arg", "exp_enable_com", "exp_enable_arg", "exp_focus_com",
  "exp_focus_arg", "exp_go_com", "exp_go_arg", "exp_pause_com",
  "exp_pause_arg", "exp_restore_com", "exp_save_com", "exp_save_arg",
  "exp_setargs_com", "exp_setargs_arg", "exp_setparam_com",
  "exp_setparam_arg", "exp_status_com", "exp_status_arg", "exp_view_com",
  "exp_data_com", "c_view_cluster_create_com", "c_view_create_com",
  "c_view_delete_com", "c_view_info_com", "cvid_args", "c_view_com",
  "view_com", "set_view_args", "set_view_element", "list_generic_com",
  "list_generic_arg", "list_generic_element", "gen_clear_break_com",
  "gen_clear_break_arg", "gen_echo_com", "gen_exit_com", "gen_help_com",
  "gen_help_args", "gen_help_arg", "gen_history_com", "gen_history_arg",
  "gen_info_com", "info_arg", "gen_log_com", "gen_log_arg",
  "gen_open_gui_com", "gen_playback_com", "gen_playback_arg",
  "gen_record_com", "gen_record_arg", "gen_setbreak_com",
  "gen_setbreak_arg", "gen_wait_com", "gen_wait_arg", "just_quit_com",
  "address_description", "expId_list_spec", "$@1", "expId_list",
  "expId_range", "target_list", "$@2", "target", "target_element",
  "host_list_spec", "$@3", "host_list", "host_name", "args_spec",
  "args_name", "file_spec", "file_list_spec", "$@4", "file_list",
  "file_name", "pid_list_spec", "$@5", "pid_list", "pid_range",
  "thread_list_spec", "$@6", "thread_list", "thread_range",
  "rank_list_spec", "$@7", "rank_list", "rank_range", "view_id_list_spec",
  "$@8", "view_id_list", "view_id_range", "ip_address", "param",
  "param_val_list", "param_val", "param_name", "expInterval_list_spec",
  "expInterval_list", "expInterval", "expMetric_list_spec",
  "expMetric_list", "expMetric_expr", "expMetric", "expType_list",
  "expType", "expFormat_list_spec", "expFormat_list", "expFormat_expr",
  "expFormatType", "viewType_list", "viewType", "lineno_range_spec", "$@9",
  "lineno_range", "lineno", "modifier_list_spec", "$@10", "modifier_list",
  "modifier_name", "instrumentor_list_spec", "instrumentor_name", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    72,    72,    72,    72,    72,    72,    72,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    74,
      74,    74,    74,    75,    75,    76,    76,    76,    76,    77,
      77,    77,    77,    78,    78,    79,    80,    80,    80,    81,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    83,
      83,    83,    84,    84,    84,    85,    85,    85,    85,    86,
      86,    87,    87,    87,    87,    88,    88,    88,    89,    89,
      89,    89,    90,    90,    91,    91,    91,    92,    92,    92,
      93,    93,    93,    94,    94,    94,    95,    95,    95,    96,
      96,    96,    97,    97,    98,    98,    98,    99,    99,    99,
     100,   100,   100,   101,   101,   101,   102,   102,   102,   102,
     102,   103,   103,   103,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   105,   105,   105,   106,   106,
     107,   107,   107,   108,   108,   109,   109,   109,   110,   110,
     110,   111,   111,   111,   111,   112,   112,   112,   112,   113,
     113,   113,   113,   114,   114,   114,   114,   115,   115,   115,
     115,   116,   116,   116,   116,   117,   117,   118,   118,   118,
     119,   119,   119,   120,   120,   121,   121,   121,   121,   121,
     121,   121,   121,   122,   122,   122,   123,   123,   124,   124,
     124,   124,   124,   125,   125,   125,   126,   127,   127,   127,
     128,   128,   129,   129,   129,   129,   129,   129,   130,   130,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     132,   132,   132,   133,   133,   134,   134,   134,   135,   135,
     135,   136,   136,   136,   137,   137,   138,   138,   139,   139,
     139,   140,   141,   141,   141,   142,   142,   143,   143,   143,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   145,   145,   145,   146,   146,   146,   146,   146,   147,
     148,   148,   148,   149,   150,   149,   151,   151,   152,   152,
     153,   154,   153,   153,   155,   155,   156,   156,   156,   156,
     156,   157,   158,   157,   159,   159,   160,   160,   161,   162,
     163,   164,   165,   164,   166,   166,   167,   168,   169,   168,
     170,   170,   171,   171,   172,   173,   172,   174,   174,   175,
     175,   176,   177,   176,   178,   178,   179,   179,   180,   181,
     180,   182,   182,   183,   183,   184,   184,   185,   185,   186,
     186,   187,   187,   187,   188,   189,   189,   190,   190,   191,
     191,   191,   191,   192,   193,   193,   194,   194,   194,   194,
     195,   195,   195,   195,   195,   196,   196,   197,   198,   199,
     199,   200,   200,   200,   200,   201,   202,   202,   203,   204,
     205,   204,   206,   206,   207,   207,   208,   209,   208,   210,
     210,   211,   212,   213
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     3,     4,     5,     4,     5,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     3,     1,     2,     1,     1,     1,     1,     1,
       2,     4,     3,     1,     2,     1,     2,     4,     3,     1,
       0,     1,     1,     2,     2,     2,     3,     3,     3,     2,
       4,     3,     0,     1,     1,     1,     2,     4,     3,     1,
       2,     1,     1,     1,     1,     2,     4,     3,     1,     2,
       4,     3,     1,     2,     1,     1,     1,     2,     4,     3,
       0,     1,     1,     2,     4,     3,     0,     1,     1,     2,
       4,     3,     0,     1,     2,     4,     3,     0,     1,     1,
       2,     4,     3,     0,     1,     1,     2,     4,     2,     4,
       3,     2,     4,     3,     1,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     2,     3,     4,     1,     2,
       2,     3,     4,     1,     2,     2,     3,     4,     0,     1,
       1,     1,     2,     3,     4,     1,     2,     3,     4,     1,
       3,     2,     4,     1,     3,     2,     4,     1,     3,     2,
       4,     1,     3,     2,     4,     1,     1,     2,     3,     4,
       2,     3,     4,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     4,     3,     1,     2,     1,     1,
       1,     1,     1,     2,     4,     3,     1,     2,     4,     3,
       1,     3,     1,     2,     3,     2,     4,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     3,     0,     1,     2,     3,     4,     0,     1,
       1,     2,     4,     3,     0,     1,     1,     3,     2,     4,
       3,     1,     2,     4,     3,     0,     1,     2,     4,     3,
       1,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     2,     4,     3,     0,     1,     1,     2,     2,     1,
       1,     1,     1,     2,     0,     3,     1,     3,     1,     3,
       1,     0,     4,     4,     1,     2,     1,     1,     1,     1,
       1,     2,     0,     3,     1,     3,     1,     1,     2,     1,
       2,     2,     0,     3,     1,     3,     1,     2,     0,     3,
       1,     3,     1,     3,     2,     0,     3,     1,     3,     1,
       3,     2,     0,     3,     1,     3,     1,     3,     2,     0,
       3,     1,     3,     1,     3,     1,     1,     5,     3,     1,
       3,     1,     1,     1,     1,     3,     2,     1,     3,     3,
       3,     3,     3,     2,     1,     3,     1,     1,     1,     3,
       5,     3,     3,     4,     1,     1,     3,     1,     2,     1,
       3,     1,     3,     3,     3,     1,     1,     3,     1,     2,
       0,     3,     1,     3,     1,     1,     2,     0,     3,     1,
       3,     1,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     339,     2,     0,     0,    10,    11,    12,    15,    13,    14,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    16,    30,    31,    32,    33,    34,    29,    35,
      36,    37,    38,    40,    41,    42,    43,    39,    44,    45,
      46,    47,    48,     9,     0,   392,   362,   385,   372,   344,
     378,   457,   437,     0,    53,    55,    57,   350,   354,   356,
     357,   358,   359,   360,    58,   435,    56,     0,     0,    63,
      65,     0,     0,    69,    71,    72,     0,     0,     0,    89,
      92,    93,    91,    94,     0,   399,     0,     0,     0,   448,
       0,   203,   205,   209,   210,   212,   207,   208,   211,   446,
     206,     0,     0,   102,   104,   105,   106,     0,     0,   111,
     112,     0,     0,   117,   118,     0,     0,   123,     0,     0,
     128,   129,     0,     0,   134,   135,     0,     0,    83,    84,
       0,     0,   376,     0,     0,     0,     0,     0,   144,     0,
       0,     0,     0,     0,   158,     0,   414,     0,     0,   163,
       0,     0,     0,     0,   169,   170,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   195,   196,     0,     0,
       0,     0,     0,     0,     0,   450,     0,   216,   218,   220,
     221,   222,   219,     0,   226,     0,     0,     0,     0,   241,
     242,   243,   244,   245,   248,   249,   250,   251,   252,   253,
     246,   254,   255,   256,   257,   258,   260,   259,   247,   262,
     263,   265,   264,   261,   266,   267,   269,   274,   270,   271,
     273,   275,   276,   277,   278,   268,   272,   279,   280,   282,
     283,   284,   285,   281,   286,   289,   287,   288,   240,     0,
     238,   235,     0,   294,     0,     0,     0,   305,     0,     0,
     311,     0,     0,   316,     0,   341,   340,   342,     0,   320,
       0,     0,     0,     0,   335,   336,     0,     0,     0,     0,
     299,   300,     1,     3,     0,     0,    52,   396,     0,   391,
     394,   406,   405,   366,     0,   361,   364,   367,   389,     0,
     384,   387,     0,   371,   374,   348,     0,   343,   346,   382,
       0,   377,   380,   461,     0,   456,   459,     0,    54,     0,
     355,     0,    62,     0,    64,    68,     0,    74,    73,    75,
      88,   463,   462,     0,    90,    97,   403,     0,   398,   401,
       0,   427,   428,   423,   424,   426,   434,   445,   438,   439,
     441,     0,     0,     0,   416,   417,     0,   204,     0,   101,
       0,   103,   109,     0,   115,     0,   121,     0,   126,     0,
     132,     0,    81,     0,   140,   370,     0,     0,   143,     0,
     145,     0,   146,   147,     0,   148,   156,   369,   368,     0,
     159,   161,     0,   164,     0,     0,   166,     0,   201,     0,
     173,     0,   177,     0,   184,     0,   188,     0,   198,     0,
     192,     0,   180,     0,   215,   455,   454,     0,   449,   452,
       0,   217,   225,     0,   231,   307,   237,     0,   239,   234,
     292,     0,   303,     0,   310,     0,   314,     0,   319,     0,
     322,   324,   321,     0,   323,     0,   333,     0,   337,   338,
     229,     0,   296,     0,     4,     0,     0,     0,   393,     0,
     363,     0,     0,   386,     0,   373,     0,     0,   345,     0,
       0,   379,     0,   458,     0,    51,     0,     0,   436,    61,
      67,    77,    78,    76,    87,     0,   400,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   415,     0,    96,
     447,   100,   108,   114,   120,   125,   131,    80,   137,   139,
     142,   149,   150,   151,   152,   153,   154,   157,   162,   411,
     412,   413,   408,   409,   414,     0,   167,   202,   174,   178,
     186,   190,   199,   194,   182,   451,     0,   214,   224,   236,
     291,   302,   309,   313,   318,   329,   330,   326,   325,   328,
     327,   332,   228,   297,     5,     7,   397,   395,   365,   390,
     388,   375,   349,   347,   383,   381,   460,   353,   352,   404,
     402,   429,   425,   432,   431,     0,   440,   442,   443,   444,
     419,   420,   421,   422,   418,     0,     0,   453,     6,     8,
       0,   433,   410,   407,   430
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    42,    43,    44,    93,    94,    45,   108,   109,    46,
     112,   113,    47,   167,    48,   118,   119,    49,    50,   142,
     143,    51,   148,    52,   152,    53,   156,    54,   159,    55,
     163,    56,    57,   176,    58,   182,    59,   187,    60,   193,
      61,    62,    63,    64,    65,    66,   205,    67,    68,   130,
     131,    69,   216,   217,    70,   225,    71,    72,    73,   279,
     280,    74,   284,    75,   309,    76,   286,    77,    78,   289,
      79,   292,    80,   298,    81,   303,    82,   299,   132,   336,
     337,   338,   133,   507,    97,    98,    99,   324,   325,   326,
     184,   418,   173,   100,   332,   333,   174,   101,   340,   341,
     342,   102,   329,   330,   331,   103,   318,   319,   320,   134,
     367,   368,   369,   327,   189,   552,   553,   190,   135,   384,
     385,   136,   373,   374,   375,   104,   105,   137,   378,   379,
     380,   138,   139,   221,   447,   448,   449,   140,   344,   345,
     346,   123,   362
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -363
static const yytype_int16 yypact[] =
{
    1125,   -34,   738,   130,   228,   761,   690,   834,   322,   363,
     236,   667,   812,   826,    35,   175,    54,    15,   861,   703,
      76,   161,   197,   435,   724,   868,   226,    27,    53,   566,
     634,   503,   110,   173,    56,   327,   423,   971,    55,   984,
    -363,  -363,    67,   171,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,    34,    28,    95,    30,    33,    39,
      48,    62,  -363,   786,  -363,  -363,    93,   515,  -363,  -363,
    -363,  -363,  -363,  -363,    77,  -363,  -363,    86,   437,  -363,
    -363,   107,   702,  -363,   117,    13,   123,   121,   798,  -363,
      93,    77,  -363,  -363,   151,   148,    44,   147,   261,  -363,
     262,  -363,  -363,    93,  -363,  -363,  -363,  -363,   169,  -363,
    -363,   167,   863,  -363,  -363,    93,    77,   183,   730,  -363,
    -363,   187,   824,  -363,  -363,   195,   836,  -363,   202,   853,
    -363,  -363,   203,   927,  -363,  -363,   207,   986,  -363,  -363,
     212,    33,  -363,   991,   993,   223,   998,    12,    13,    32,
     225,   216,  1003,   247,  -363,   234,   239,  1005,   227,  -363,
     242,   258,   252,  1010,  -363,  -363,   263,   293,   268,   350,
     274,   398,   279,   611,   283,  1012,  -363,  -363,   295,   636,
     301,  1018,   303,   665,   312,    16,   105,  -363,  -363,    93,
      77,  -363,  -363,   315,  -363,  1020,   318,   323,   324,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,   571,
    -363,   931,   328,  -363,  1025,   329,  1027,  -363,   332,  1034,
    -363,   336,  1039,  -363,   347,  -363,  -363,  -363,  1041,   596,
    1133,  1126,   348,  1050,   117,   358,   349,  1057,   355,  1062,
    -363,  -363,  -363,   359,   351,   353,  -363,   361,   426,   373,
    -363,  -363,  -363,  -363,   429,   377,  -363,  -363,   381,   442,
     391,  -363,   452,   399,  -363,   396,   455,   402,  -363,   401,
     461,   407,  -363,  -363,   463,   418,  -363,   416,  -363,   142,
    -363,   408,  -363,   420,  -363,  -363,   422,   117,   117,   358,
    -363,  -363,  -363,   424,  -363,  -363,   419,   485,   431,  -363,
      44,  -363,  -363,   433,  -363,  -363,   194,  -363,   436,  -363,
     441,   486,   502,    73,   439,  -363,   505,  -363,   498,  -363,
     510,  -363,  -363,   511,  -363,   512,  -363,   565,  -363,   567,
    -363,   568,  -363,   572,  -363,  -363,   573,   577,  -363,   586,
     117,   600,   117,   358,   600,   358,  -363,  -363,  -363,   588,
    -363,  -363,   589,  -363,   280,   579,  -363,   591,  -363,   592,
    -363,   593,  -363,   597,  -363,   601,  -363,   608,  -363,   610,
    -363,   612,  -363,   613,  -363,  -363,  -363,   674,  -363,   618,
     626,  -363,  -363,   633,  -363,  -363,  -363,   635,  -363,   931,
    -363,   641,  -363,   642,  -363,   643,  -363,   646,  -363,   651,
     515,   596,   515,  1133,   358,   250,  -363,   662,  -363,  -363,
    -363,   663,  -363,   664,  -363,   689,   693,   609,  -363,    28,
    -363,    95,   691,  -363,    30,  -363,    33,   695,  -363,    39,
     701,  -363,    48,  -363,    62,  -363,   699,   515,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,   711,  -363,   148,     7,    44,
     713,   718,    44,   147,   289,    88,   133,   439,    73,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,   734,  -363,  -363,   735,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,    16,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,   515,  -363,   515,  -363,  -363,
    -363,  -363,  -363,  -363,   737,   739,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,   515,  -363,
    -363,  -363,  -363,  -363,   744,    26,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,   280,   280,  -363,  -363,  -363,
     736,  -363,  -363,   734,  -363
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -363,  -363,  -363,  -363,  -363,   717,  -363,  -363,   704,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,   697,  -363,  -363,  -363,
     669,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,   792,  -363,  -363,   346,
    -109,  -363,  -363,   602,  -363,  -363,  -363,  -363,  -363,   538,
    -272,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -278,     2,  -363,
    -363,   337,    41,  -363,   -35,   -95,  -363,  -363,  -363,   330,
     639,  -363,    17,  -363,  -363,  -363,   -85,  -363,  -363,  -363,
     341,  -363,  -363,  -363,   344,  -363,  -363,  -363,   366,    64,
    -363,  -363,   309,  -363,   659,   251,   235,   427,  -363,   475,
     335,  -363,  -362,   365,  -363,    37,   -17,  -363,  -363,   343,
    -363,  -363,   482,  -363,  -363,  -363,   306,    22,  -363,  -363,
     386,  -363,  -363
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -438
static const yytype_int16 yytable[] =
{
     191,   301,   350,   334,    95,   110,   114,   458,   518,   144,
     149,   153,   157,   160,   164,   168,   185,   177,   183,   188,
     194,   387,   472,   474,   106,    83,   115,   122,   214,   218,
     150,   154,   178,   161,   165,   169,   170,   179,   300,   304,
     195,   310,   121,    96,   146,   207,   120,   207,   145,   222,
     287,   290,   293,   281,   223,   180,   306,   288,   171,   305,
      89,   311,    89,   519,   220,    91,    91,   312,   219,    85,
      86,    87,   601,    88,    89,    90,   215,   198,   171,    89,
      91,   171,   519,   445,   446,   186,   405,   206,   387,   206,
     387,   621,   387,   316,   387,    95,   317,    92,   328,   181,
     387,    89,   171,   172,   387,   172,   450,   335,   370,   376,
     110,   282,   371,   372,    92,   106,   339,   358,    85,    86,
      87,   224,    88,    89,    90,   307,   125,   126,   127,    91,
     128,   107,   343,   351,    96,  -171,   357,   359,  -171,  -171,
     122,   381,   382,   506,   144,   352,   129,    85,    86,    87,
     349,    88,    89,    90,   215,   121,   610,   611,    91,   120,
     605,   321,   200,   322,  -213,   323,   355,  -213,  -213,  -293,
      91,   191,  -293,  -293,   285,    92,   175,    89,   283,   146,
     412,   414,   360,   145,  -351,  -351,  -351,   458,  -351,   -59,
    -351,   361,   -59,   -59,   410,   578,   415,   580,   202,   411,
     413,   612,   613,    85,    86,    87,   350,    88,    89,    90,
     365,   125,   126,   127,    91,   128,   366,   377,   218,   171,
    -175,   171,    89,  -175,  -175,   388,   389,   212,    91,   111,
     313,   129,  -304,   314,   315,  -304,  -304,   155,   222,    85,
      86,    87,   392,    88,    89,    90,   394,   125,   126,   127,
      91,   128,   520,   220,   396,   521,  -183,   219,   522,  -183,
    -183,   398,   400,   386,   471,   473,   402,   129,    85,    86,
      87,   404,    88,    89,    90,    89,   125,   126,   127,    91,
     128,    91,   408,    89,   416,  -179,   417,   -70,  -179,  -179,
     -70,   -70,   181,   421,   429,  -122,   129,   186,  -122,  -122,
    -437,   470,   424,   475,    85,    86,    87,   479,    88,    89,
      90,   426,   125,   126,   127,    91,   128,   295,   296,   425,
     297,   -95,   428,   147,   -95,   -95,   478,   430,   291,   381,
     382,   383,   129,   432,   508,    85,    86,    87,   434,    88,
      89,    90,   436,   125,   126,   127,    91,   128,   549,   550,
     551,   431,  -200,   376,   438,  -200,  -200,   607,   608,   609,
     440,   513,   442,   129,   151,   197,   199,   201,   203,    89,
     209,   444,   213,   171,   452,    91,   350,   454,   350,   511,
     512,  -110,   455,   456,  -110,  -110,  -315,   460,   462,  -315,
    -315,   464,    85,    86,    87,   466,    88,    89,    90,   433,
     125,   126,   127,    91,   128,    89,   468,   476,   480,  -172,
      89,   591,  -172,  -172,   482,   544,    91,   546,   484,   487,
     129,   485,  -116,   486,   294,  -116,  -116,   488,   542,   489,
     490,   545,   541,   491,   543,   575,   204,   577,   353,   492,
      85,    86,    87,   493,    88,    89,    90,   494,   125,   126,
     127,    91,   128,   495,   497,   496,   498,  -176,   499,   500,
    -176,  -176,   501,   502,   503,    85,    86,    87,   129,    88,
      89,    90,   598,   576,   504,   505,   579,   515,    92,   509,
     350,   510,   350,   514,    89,   125,   516,   517,    91,   519,
     295,   296,   523,   297,  -187,   528,   -60,  -187,  -187,   -60,
     -60,   524,   376,   350,   228,   376,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   525,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,    91,    85,    86,    87,
     526,    88,  -232,    90,   529,  -232,  -232,   226,   129,   531,
     532,   533,   457,   278,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   435,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   534,  -230,   535,   536,  -230,  -230,
    -233,   537,   538,  -233,  -233,   227,   539,   439,    85,    86,
      87,   278,    88,    89,    90,   540,   171,   547,   548,   554,
     556,   557,   558,    85,    86,    87,   559,    88,    89,    90,
     560,   125,   126,   127,    91,   128,   443,   561,   158,   562,
    -185,   563,   564,  -185,  -185,   565,   566,   586,    85,    86,
      87,   129,    88,    89,    90,   567,   125,   126,   127,    91,
     128,   124,   568,  -306,   569,  -197,  -306,  -306,  -197,  -197,
     570,   571,   572,   356,   196,   573,   129,    85,    86,    87,
     574,    88,    89,    90,    89,   125,   126,   127,    91,   128,
      91,   581,   582,   583,  -181,   208,  -127,  -181,  -181,  -127,
    -127,   393,    85,    86,    87,   129,    88,    89,    90,    84,
     125,   126,   127,    91,   128,    85,    86,    87,   584,    88,
      89,    90,   585,   125,   126,   127,    91,   128,   597,   589,
     129,   -66,   116,   592,   -66,   -66,    85,    86,    87,   594,
      88,    89,    90,   129,   125,   126,   127,    91,   128,   599,
      85,    86,    87,   603,    88,    89,    90,   347,   604,  -107,
     615,    91,  -107,  -107,   129,   616,   618,   -49,   619,   363,
     -49,   -49,   620,    85,    86,    87,   624,    88,    92,    90,
     348,   391,   354,   162,    91,   364,   117,   211,   451,   459,
     -85,   588,   420,   -85,   -85,   395,   600,   166,    85,    86,
      87,    92,    88,    89,    90,   141,   593,   397,   590,    91,
      85,    86,    87,   595,    88,   -50,    90,   423,   -50,   -50,
     622,    91,   555,   117,   399,   587,    92,   -86,   527,    89,
     -86,   -86,   192,   614,   390,    91,   606,   623,    92,   210,
     530,  -133,   617,    89,  -133,  -133,    85,    86,    87,    91,
      88,    89,    90,  -113,   602,   -82,  -113,  -113,   -82,   -82,
     596,     0,     0,   -98,     0,  -119,   -98,   -98,  -119,  -119,
       0,     0,     0,     0,    92,    85,    86,    87,    89,    88,
      89,    90,  -124,     0,    91,  -124,  -124,     0,   125,     0,
    -168,    91,   -99,  -168,  -168,   -99,   -99,  -191,   401,     0,
    -191,  -191,     0,    92,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   302,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,     0,   308,  -130,   403,     0,  -130,
    -130,     0,   406,     0,   407,     0,     0,     0,     0,   409,
       0,   278,     0,     0,   419,     0,   422,     0,     0,     0,
       0,   427,     0,   437,     0,     0,     0,     0,    89,   441,
       0,   453,     0,     0,    91,     0,   461,     0,   463,     0,
    -334,    89,     0,  -334,  -334,   465,     0,    91,     0,     0,
     467,     0,   469,  -298,     0,   -79,  -298,  -298,   -79,   -79,
    -136,   477,  -138,  -136,  -136,  -138,  -138,  -141,   481,     0,
    -141,  -141,  -155,   483,  -160,  -155,  -155,  -160,  -160,  -165,
       0,  -189,  -165,  -165,  -189,  -189,     0,  -193,     0,  -223,
    -193,  -193,  -223,  -223,  -290,     0,  -301,  -290,  -290,  -301,
    -301,     0,     0,  -308,     0,     0,  -308,  -308,  -312,     0,
    -317,  -312,  -312,  -317,  -317,     0,     0,     0,     0,  -331,
       0,     0,  -331,  -331,     0,     0,  -227,     0,     0,  -227,
    -227,  -295,     0,     0,  -295,  -295,     1,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,     0,    85,    86,
      87,     0,    88,    89,    90,    85,    86,    87,     0,    88,
       0,    90,     0,     0,    41,     0,     0,     0,     0,     0,
       0,     0,     0,   295,   296,     0,   297,     0,     0,     0,
     295,   296,     0,   297
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-363))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      17,    36,    97,    88,     2,     3,     4,   279,   370,     7,
       8,     9,    10,    11,    12,    13,     1,    15,    16,    17,
      18,   130,   300,   301,     2,    59,     4,     5,     1,    27,
       8,     9,    15,    11,    12,    13,     1,    15,    36,    37,
      18,    39,     5,     2,     7,    23,     5,    25,     7,    27,
      33,    34,    35,    31,     1,     1,     1,     1,    46,    37,
      47,    39,    47,    56,    27,    53,    53,     0,    27,    42,
      43,    44,    65,    46,    47,    48,    49,     1,    46,    47,
      53,    46,    56,    67,    68,    70,   171,    23,   197,    25,
     199,    65,   201,    59,   203,    93,    68,    70,    68,    45,
     209,    47,    46,    70,   213,    70,     1,    68,    64,   126,
     108,     1,    68,    69,    70,    93,    68,   115,    42,    43,
      44,    68,    46,    47,    48,    70,    50,    51,    52,    53,
      54,     1,    70,    56,    93,    59,   114,   115,    62,    63,
     118,    68,    69,     1,   142,    59,    70,    42,    43,    44,
      57,    46,    47,    48,    49,   118,    68,    69,    53,   118,
     522,    66,     1,    68,    59,    70,    59,    62,    63,    59,
      53,   188,    62,    63,     1,    70,     1,    47,    68,   142,
     178,   179,    59,   142,    42,    43,    44,   459,    46,    59,
      48,    70,    62,    63,   177,   473,   179,   475,     1,   177,
     178,    68,    69,    42,    43,    44,   301,    46,    47,    48,
      59,    50,    51,    52,    53,    54,    68,    70,   216,    46,
      59,    46,    47,    62,    63,    56,    59,     1,    53,     1,
      59,    70,    59,    62,    63,    62,    63,     1,   216,    42,
      43,    44,    59,    46,    47,    48,    59,    50,    51,    52,
      53,    54,    58,   216,    59,    61,    59,   216,    64,    62,
      63,    59,    59,     1,   299,   300,    59,    70,    42,    43,
      44,    59,    46,    47,    48,    47,    50,    51,    52,    53,
      54,    53,    59,    47,    59,    59,    70,    59,    62,    63,
      62,    63,    45,    59,     1,    59,    70,    70,    62,    63,
      61,   299,    60,   301,    42,    43,    44,   305,    46,    47,
      48,    59,    50,    51,    52,    53,    54,    67,    68,    61,
      70,    59,    59,     1,    62,    63,   304,    59,     1,    68,
      69,    70,    70,    59,   351,    42,    43,    44,    59,    46,
      47,    48,    59,    50,    51,    52,    53,    54,    68,    69,
      70,     1,    59,   370,    59,    62,    63,    68,    69,    70,
      59,   359,    59,    70,     1,    19,    20,    21,    22,    47,
      24,    59,    26,    46,    59,    53,   471,    59,   473,   357,
     358,    59,    59,    59,    62,    63,    59,    59,    59,    62,
      63,    59,    42,    43,    44,    59,    46,    47,    48,     1,
      50,    51,    52,    53,    54,    47,    59,    59,    59,    59,
      47,   496,    62,    63,    59,   413,    53,   415,    59,    58,
      70,    70,    59,    70,     1,    62,    63,     1,   411,    56,
       1,   414,   410,    56,   412,   470,     1,   472,     1,    58,
      42,    43,    44,     1,    46,    47,    48,    56,    50,    51,
      52,    53,    54,     1,    58,    56,     1,    59,    56,    58,
      62,    63,     1,    56,     1,    42,    43,    44,    70,    46,
      47,    48,   507,   471,    56,    59,   474,    58,    70,    59,
     575,    59,   577,    59,    47,    50,     1,    56,    53,    56,
      67,    68,    56,    70,    59,    56,    59,    62,    63,    62,
      63,    60,   519,   598,     1,   522,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    58,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    42,    43,    44,
      58,    46,    59,    48,    59,    62,    63,     1,    70,    59,
      59,    59,     1,    70,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     1,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    59,    59,    59,    59,    62,    63,
      59,    59,    59,    62,    63,     1,    59,     1,    42,    43,
      44,    70,    46,    47,    48,    59,    46,    59,    59,    70,
      59,    59,    59,    42,    43,    44,    59,    46,    47,    48,
      59,    50,    51,    52,    53,    54,     1,    59,     1,    59,
      59,    59,    59,    62,    63,     1,    58,    68,    42,    43,
      44,    70,    46,    47,    48,    59,    50,    51,    52,    53,
      54,     1,    59,    59,    59,    59,    62,    63,    62,    63,
      59,    59,    59,     1,     1,    59,    70,    42,    43,    44,
      59,    46,    47,    48,    47,    50,    51,    52,    53,    54,
      53,    59,    59,    59,    59,     1,    59,    62,    63,    62,
      63,     1,    42,    43,    44,    70,    46,    47,    48,     1,
      50,    51,    52,    53,    54,    42,    43,    44,    59,    46,
      47,    48,    59,    50,    51,    52,    53,    54,    59,    68,
      70,    59,     1,    68,    62,    63,    42,    43,    44,    68,
      46,    47,    48,    70,    50,    51,    52,    53,    54,    68,
      42,    43,    44,    70,    46,    47,    48,     1,    70,    59,
      56,    53,    62,    63,    70,    60,    59,    59,    59,     1,
      62,    63,    58,    42,    43,    44,    70,    46,    70,    48,
      93,   142,   108,     1,    53,   118,    55,    25,   216,   281,
      59,   491,   183,    62,    63,     1,   517,     1,    42,    43,
      44,    70,    46,    47,    48,     1,   499,     1,   494,    53,
      42,    43,    44,   502,    46,    59,    48,   188,    62,    63,
     615,    53,   425,    55,     1,   489,    70,    59,   383,    47,
      62,    63,     1,   528,     1,    53,   523,   616,    70,     1,
     388,    59,   566,    47,    62,    63,    42,    43,    44,    53,
      46,    47,    48,    59,   519,    59,    62,    63,    62,    63,
     504,    -1,    -1,    59,    -1,    59,    62,    63,    62,    63,
      -1,    -1,    -1,    -1,    70,    42,    43,    44,    47,    46,
      47,    48,    59,    -1,    53,    62,    63,    -1,    50,    -1,
      59,    53,    59,    62,    63,    62,    63,    59,     1,    -1,
      62,    63,    -1,    70,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     1,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    -1,     1,    59,     1,    -1,    62,
      63,    -1,     1,    -1,     1,    -1,    -1,    -1,    -1,     1,
      -1,    70,    -1,    -1,     1,    -1,     1,    -1,    -1,    -1,
      -1,     1,    -1,     1,    -1,    -1,    -1,    -1,    47,     1,
      -1,     1,    -1,    -1,    53,    -1,     1,    -1,     1,    -1,
      59,    47,    -1,    62,    63,     1,    -1,    53,    -1,    -1,
       1,    -1,     1,    59,    -1,    59,    62,    63,    62,    63,
      59,     1,    59,    62,    63,    62,    63,    59,     1,    -1,
      62,    63,    59,     1,    59,    62,    63,    62,    63,    59,
      -1,    59,    62,    63,    62,    63,    -1,    59,    -1,    59,
      62,    63,    62,    63,    59,    -1,    59,    62,    63,    62,
      63,    -1,    -1,    59,    -1,    -1,    62,    63,    59,    -1,
      59,    62,    63,    62,    63,    -1,    -1,    -1,    -1,    59,
      -1,    -1,    62,    63,    -1,    -1,    59,    -1,    -1,    62,
      63,    59,    -1,    -1,    62,    63,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    42,    43,
      44,    -1,    46,    47,    48,    42,    43,    44,    -1,    46,
      -1,    48,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    68,    -1,    70,    -1,    -1,    -1,
      67,    68,    -1,    70
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    59,    72,    73,    74,    77,    80,    83,    85,    88,
      89,    92,    94,    96,    98,   100,   102,   103,   105,   107,
     109,   111,   112,   113,   114,   115,   116,   118,   119,   122,
     125,   127,   128,   129,   132,   134,   136,   138,   139,   141,
     143,   145,   147,    59,     1,    42,    43,    44,    46,    47,
      48,    53,    70,    75,    76,   149,   153,   155,   156,   157,
     164,   168,   172,   176,   196,   197,   208,     1,    78,    79,
     149,     1,    81,    82,   149,   208,     1,    55,    86,    87,
     153,   196,   208,   212,     1,    50,    51,    52,    54,    70,
     120,   121,   149,   153,   180,   189,   192,   198,   202,   203,
     208,     1,    90,    91,   149,   153,   196,     1,    93,   149,
     208,     1,    95,   149,   208,     1,    97,   149,     1,    99,
     149,   208,     1,   101,   149,   208,     1,    84,   149,   208,
       1,    46,    70,   163,   167,     1,   104,   149,   163,   208,
       1,    45,   106,   149,   161,     1,    70,   108,   149,   185,
     188,   197,     1,   110,   149,   208,     1,   120,     1,   120,
       1,   120,     1,   120,     1,   117,   180,   208,     1,   120,
       1,   117,     1,   120,     1,    49,   123,   124,   149,   153,
     196,   204,   208,     1,    68,   126,     1,     1,     1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    70,   130,
     131,   208,     1,    68,   133,     1,   137,   163,     1,   140,
     163,     1,   142,   163,     1,    67,    68,    70,   144,   148,
     149,   155,     1,   146,   149,   208,     1,    70,     1,   135,
     149,   208,     0,    59,    62,    63,    59,    68,   177,   178,
     179,    66,    68,    70,   158,   159,   160,   184,    68,   173,
     174,   175,   165,   166,   167,    68,   150,   151,   152,    68,
     169,   170,   171,    70,   209,   210,   211,     1,    76,    57,
     156,    56,    59,     1,    79,    59,     1,   208,   149,   208,
      59,    70,   213,     1,    87,    59,    68,   181,   182,   183,
      64,    68,    69,   193,   194,   195,   197,    70,   199,   200,
     201,    68,    69,    70,   190,   191,     1,   121,    56,    59,
       1,    91,    59,     1,    59,     1,    59,     1,    59,     1,
      59,     1,    59,     1,    59,   167,     1,     1,    59,     1,
     163,   208,   149,   208,   149,   163,    59,    70,   162,     1,
     161,    59,     1,   185,    60,    61,    59,     1,    59,     1,
      59,     1,    59,     1,    59,     1,    59,     1,    59,     1,
      59,     1,    59,     1,    59,    67,    68,   205,   206,   207,
       1,   124,    59,     1,    59,    59,    59,     1,   131,   130,
      59,     1,    59,     1,    59,     1,    59,     1,    59,     1,
     149,   155,   148,   155,   148,   149,    59,     1,   208,   149,
      59,     1,    59,     1,    59,    70,    70,    58,     1,    56,
       1,    56,    58,     1,    56,     1,    56,    58,     1,    56,
      58,     1,    56,     1,    56,    59,     1,   154,   197,    59,
      59,   208,   208,   149,    59,    58,     1,    56,   193,    56,
      58,    61,    64,    56,    60,    58,    58,   190,    56,    59,
     203,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,   208,   163,   208,   149,   163,   149,    59,    59,    68,
      69,    70,   186,   187,    70,   188,    59,    59,    59,    59,
      59,    59,    59,    59,    59,     1,    58,    59,    59,    59,
      59,    59,    59,    59,    59,   155,   149,   155,   148,   149,
     148,    59,    59,    59,    59,    59,    68,   179,   160,    68,
     175,   167,    68,   152,    68,   171,   211,    59,   155,    68,
     183,    65,   194,    70,    70,   193,   200,    68,    69,    70,
      68,    69,    68,    69,   191,    56,    60,   207,    59,    59,
      58,    65,   187,   186,    70
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
      int yyn = yypact[*yyssp];
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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
          yyp++;
          yyformat++;
        }
  }
  return 0;
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


/*----------.
| yyparse.  |
`----------*/

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
  if (yypact_value_is_default (yyn))
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
        case 3:

/* Line 1806 of yacc.c  */
#line 102 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushParseTarget(); }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 103 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushParseTarget(); }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 106 "SS_Parse_Yacc.yxx"
    {p_parse_result->setRedirectTarget((yyvsp[(3) - (4)].string));p_parse_result->pushParseTarget(); }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 108 "SS_Parse_Yacc.yxx"
    {p_parse_result->setRedirectTarget((yyvsp[(3) - (5)].string));p_parse_result->pushParseTarget(); }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 111 "SS_Parse_Yacc.yxx"
    {p_parse_result->setAppendTarget((yyvsp[(3) - (4)].string));p_parse_result->pushParseTarget(); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 113 "SS_Parse_Yacc.yxx"
    {p_parse_result->setAppendTarget((yyvsp[(3) - (5)].string));p_parse_result->pushParseTarget(); }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 118 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_EXP_ATTACH);}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 119 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_EXP_CLONE);}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 120 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_EXP_CLOSE);}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 121 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_EXP_CREATE);}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 122 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_EXP_COMPARE);}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 123 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_EXP_CONT);}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 124 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_EXP_DATA);}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 125 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_EXP_DETACH);}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 126 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_EXP_DISABLE);}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 127 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_EXP_ENABLE);}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 128 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_EXP_FOCUS);}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 129 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_EXP_GO);}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 130 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_EXP_PAUSE);}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 131 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_EXP_RESTORE);}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 132 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_EXP_SAVE);}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 133 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_EXP_SETARGS);}
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 134 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_EXP_SETPARAM);}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 135 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_EXP_STATUS);}
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 136 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_EXP_VIEW);}
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 138 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_VIEW);}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 140 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_C_VIEW_CLUSTERS);}
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 141 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_C_VIEW_CREATE);}
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 142 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_C_VIEW_DELETE);}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 143 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_C_VIEW_INFO);}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 144 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_C_VIEW);}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 146 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_LIST_GENERIC);}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 148 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_CLEAR_BREAK);}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 149 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_ECHO);}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 150 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_EXIT);}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 151 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_OPEN_GUI);}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 152 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_HELP);}
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 153 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_HISTORY);}
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 154 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_INFO);}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 155 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_LOG);}
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 156 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_PLAYBACK);}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 157 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_RECORD);}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 158 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_SETBREAK);}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 159 "SS_Parse_Yacc.yxx"
    {p_parse_result->setCommandType(CMD_WAIT);}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 160 "SS_Parse_Yacc.yxx"
    {exit(0);}
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 497 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushBreakId((yyvsp[(1) - (1)].ival));}
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 502 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushString((yyvsp[(2) - (2)].string));}
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 515 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp();}
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 525 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp((yyvsp[(1) - (1)].string));}
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 527 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_EXP_ATTACH].name);}
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 528 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_EXP_CLONE].name);}
    break;

  case 243:

/* Line 1806 of yacc.c  */
#line 529 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_EXP_CLOSE].name);}
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 530 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_EXP_CREATE].name);}
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 531 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_EXP_COMPARE].name);}
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 532 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_EXP_CONT].name);}
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 533 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_EXP_DATA].name);}
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 534 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_EXP_DETACH].name);}
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 535 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_EXP_DISABLE].name);}
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 536 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_EXP_ENABLE].name);}
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 537 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_EXP_FOCUS].name);}
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 538 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_EXP_GO].name);}
    break;

  case 253:

/* Line 1806 of yacc.c  */
#line 539 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_EXP_PAUSE].name);}
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 540 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_EXP_RESTORE].name);}
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 541 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_EXP_SAVE].name);}
    break;

  case 256:

/* Line 1806 of yacc.c  */
#line 542 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_EXP_SETARGS].name);}
    break;

  case 257:

/* Line 1806 of yacc.c  */
#line 543 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_EXP_SETPARAM].name);}
    break;

  case 258:

/* Line 1806 of yacc.c  */
#line 544 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_EXP_STATUS].name);}
    break;

  case 259:

/* Line 1806 of yacc.c  */
#line 545 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_EXP_VIEW].name);}
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 547 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_VIEW].name);}
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 549 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_C_VIEW_CLUSTERS].name);}
    break;

  case 262:

/* Line 1806 of yacc.c  */
#line 550 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_C_VIEW_CREATE].name);}
    break;

  case 263:

/* Line 1806 of yacc.c  */
#line 551 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_C_VIEW_DELETE].name);}
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 552 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_C_VIEW_INFO].name);}
    break;

  case 265:

/* Line 1806 of yacc.c  */
#line 553 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_C_VIEW].name);}
    break;

  case 266:

/* Line 1806 of yacc.c  */
#line 555 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_LIST_GENERIC].name);}
    break;

  case 267:

/* Line 1806 of yacc.c  */
#line 557 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_CLEAR_BREAK].name);}
    break;

  case 268:

/* Line 1806 of yacc.c  */
#line 558 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_ECHO].name);}
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 559 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_EXIT].name);}
    break;

  case 270:

/* Line 1806 of yacc.c  */
#line 560 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_HELP].name);}
    break;

  case 271:

/* Line 1806 of yacc.c  */
#line 561 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_HISTORY].name);}
    break;

  case 272:

/* Line 1806 of yacc.c  */
#line 562 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_INFO].name);}
    break;

  case 273:

/* Line 1806 of yacc.c  */
#line 563 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_LOG].name);}
    break;

  case 274:

/* Line 1806 of yacc.c  */
#line 564 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_OPEN_GUI].name);}
    break;

  case 275:

/* Line 1806 of yacc.c  */
#line 565 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_PLAYBACK].name);}
    break;

  case 276:

/* Line 1806 of yacc.c  */
#line 566 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_RECORD].name);}
    break;

  case 277:

/* Line 1806 of yacc.c  */
#line 567 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_SETBREAK].name);}
    break;

  case 278:

/* Line 1806 of yacc.c  */
#line 568 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp(cmd_desc[CMD_WAIT].name);}
    break;

  case 279:

/* Line 1806 of yacc.c  */
#line 570 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp("-r");}
    break;

  case 280:

/* Line 1806 of yacc.c  */
#line 571 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp("-h");}
    break;

  case 281:

/* Line 1806 of yacc.c  */
#line 572 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp("-p");}
    break;

  case 282:

/* Line 1806 of yacc.c  */
#line 573 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp("-t");}
    break;

  case 283:

/* Line 1806 of yacc.c  */
#line 574 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp("-a");}
    break;

  case 284:

/* Line 1806 of yacc.c  */
#line 575 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp("-f");}
    break;

  case 285:

/* Line 1806 of yacc.c  */
#line 576 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp("-x");}
    break;

  case 286:

/* Line 1806 of yacc.c  */
#line 577 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp("-l");}
    break;

  case 287:

/* Line 1806 of yacc.c  */
#line 578 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp("-m");}
    break;

  case 288:

/* Line 1806 of yacc.c  */
#line 579 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp("-F");}
    break;

  case 289:

/* Line 1806 of yacc.c  */
#line 580 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHelp("-c");}
    break;

  case 294:

/* Line 1806 of yacc.c  */
#line 591 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushHistoryPoint((yyvsp[(1) - (1)].ival));}
    break;

  case 340:

/* Line 1806 of yacc.c  */
#line 684 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushAddressPoint((yyvsp[(1) - (1)].ival));}
    break;

  case 341:

/* Line 1806 of yacc.c  */
#line 685 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushAddressPoint((yyvsp[(1) - (1)].ival));}
    break;

  case 342:

/* Line 1806 of yacc.c  */
#line 686 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushAddressPoint((yyvsp[(1) - (1)].string));}
    break;

  case 344:

/* Line 1806 of yacc.c  */
#line 691 "SS_Parse_Yacc.yxx"
    {p_parse_result->setError("Bad pid list entry.");}
    break;

  case 348:

/* Line 1806 of yacc.c  */
#line 698 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushExpIdPoint((yyvsp[(1) - (1)].ival));}
    break;

  case 349:

/* Line 1806 of yacc.c  */
#line 699 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushExpIdRange((yyvsp[(1) - (3)].ival),(yyvsp[(3) - (3)].ival));}
    break;

  case 351:

/* Line 1806 of yacc.c  */
#line 703 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushParseTarget();}
    break;

  case 362:

/* Line 1806 of yacc.c  */
#line 719 "SS_Parse_Yacc.yxx"
    {p_parse_result->setError("Bad host list entry.");}
    break;

  case 366:

/* Line 1806 of yacc.c  */
#line 726 "SS_Parse_Yacc.yxx"
    {p_parse_result->currentTarget()->pushHostPoint((yyvsp[(1) - (1)].string));}
    break;

  case 367:

/* Line 1806 of yacc.c  */
#line 727 "SS_Parse_Yacc.yxx"
    {p_parse_result->currentTarget()->pushHostPoint((yyvsp[(1) - (1)].ival));}
    break;

  case 369:

/* Line 1806 of yacc.c  */
#line 752 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushString((yyvsp[(1) - (1)].string));}
    break;

  case 372:

/* Line 1806 of yacc.c  */
#line 759 "SS_Parse_Yacc.yxx"
    {p_parse_result->setError("Bad file list entry.");}
    break;

  case 376:

/* Line 1806 of yacc.c  */
#line 766 "SS_Parse_Yacc.yxx"
    {p_parse_result->currentTarget()->pushFilePoint((yyvsp[(1) - (1)].string));}
    break;

  case 378:

/* Line 1806 of yacc.c  */
#line 770 "SS_Parse_Yacc.yxx"
    {p_parse_result->setError("Bad pid list entry.");}
    break;

  case 382:

/* Line 1806 of yacc.c  */
#line 777 "SS_Parse_Yacc.yxx"
    {p_parse_result->currentTarget()->pushPidRange((yyvsp[(1) - (1)].ival),(yyvsp[(1) - (1)].ival));}
    break;

  case 383:

/* Line 1806 of yacc.c  */
#line 778 "SS_Parse_Yacc.yxx"
    {p_parse_result->currentTarget()->pushPidRange((yyvsp[(1) - (3)].ival),(yyvsp[(3) - (3)].ival));}
    break;

  case 385:

/* Line 1806 of yacc.c  */
#line 782 "SS_Parse_Yacc.yxx"
    {p_parse_result->setError("Bad thread list entry.");}
    break;

  case 389:

/* Line 1806 of yacc.c  */
#line 789 "SS_Parse_Yacc.yxx"
    {p_parse_result->currentTarget()->pushThreadRange((yyvsp[(1) - (1)].ival),(yyvsp[(1) - (1)].ival));}
    break;

  case 390:

/* Line 1806 of yacc.c  */
#line 790 "SS_Parse_Yacc.yxx"
    {p_parse_result->currentTarget()->pushThreadRange((yyvsp[(1) - (3)].ival),(yyvsp[(3) - (3)].ival));}
    break;

  case 392:

/* Line 1806 of yacc.c  */
#line 794 "SS_Parse_Yacc.yxx"
    {p_parse_result->setError("Bad rank list entry.");}
    break;

  case 396:

/* Line 1806 of yacc.c  */
#line 801 "SS_Parse_Yacc.yxx"
    {p_parse_result->currentTarget()->pushRankRange((yyvsp[(1) - (1)].ival),(yyvsp[(1) - (1)].ival));}
    break;

  case 397:

/* Line 1806 of yacc.c  */
#line 802 "SS_Parse_Yacc.yxx"
    {p_parse_result->currentTarget()->pushRankRange((yyvsp[(1) - (3)].ival),(yyvsp[(3) - (3)].ival));}
    break;

  case 399:

/* Line 1806 of yacc.c  */
#line 806 "SS_Parse_Yacc.yxx"
    {p_parse_result->setError("Bad rank list entry.");}
    break;

  case 403:

/* Line 1806 of yacc.c  */
#line 813 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushViewSet((yyvsp[(1) - (1)].ival),(yyvsp[(1) - (1)].ival));}
    break;

  case 404:

/* Line 1806 of yacc.c  */
#line 814 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushViewSet((yyvsp[(1) - (3)].ival),(yyvsp[(3) - (3)].ival));}
    break;

  case 407:

/* Line 1806 of yacc.c  */
#line 828 "SS_Parse_Yacc.yxx"
    {p_parse_result->setParam((yyvsp[(1) - (5)].string),(yyvsp[(3) - (5)].string));}
    break;

  case 408:

/* Line 1806 of yacc.c  */
#line 830 "SS_Parse_Yacc.yxx"
    {p_parse_result->setParam(NULL,(yyvsp[(1) - (3)].string));}
    break;

  case 411:

/* Line 1806 of yacc.c  */
#line 837 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushParamVal((yyvsp[(1) - (1)].ival));}
    break;

  case 412:

/* Line 1806 of yacc.c  */
#line 838 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushParamVal((yyvsp[(1) - (1)].dval));}
    break;

  case 413:

/* Line 1806 of yacc.c  */
#line 839 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushParamVal((yyvsp[(1) - (1)].string));}
    break;

  case 415:

/* Line 1806 of yacc.c  */
#line 847 "SS_Parse_Yacc.yxx"
    {p_parse_result->setIntervalAttribute((yyvsp[(2) - (3)].string));}
    break;

  case 419:

/* Line 1806 of yacc.c  */
#line 860 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushInterval((yyvsp[(1) - (3)].ival),(yyvsp[(3) - (3)].ival));}
    break;

  case 420:

/* Line 1806 of yacc.c  */
#line 863 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushInterval((yyvsp[(1) - (3)].ival),(yyvsp[(3) - (3)].dval));}
    break;

  case 421:

/* Line 1806 of yacc.c  */
#line 866 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushInterval((yyvsp[(1) - (3)].dval),(yyvsp[(3) - (3)].ival));}
    break;

  case 422:

/* Line 1806 of yacc.c  */
#line 869 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushInterval((yyvsp[(1) - (3)].dval),(yyvsp[(3) - (3)].dval));}
    break;

  case 423:

/* Line 1806 of yacc.c  */
#line 873 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushMetricList((ParseRange *)(yyvsp[(2) - (2)].parserange));}
    break;

  case 424:

/* Line 1806 of yacc.c  */
#line 876 "SS_Parse_Yacc.yxx"
    {(yyval.parserange) = p_parse_result->ExpMetric("list",(ParseRange *)(yyvsp[(1) - (1)].parserange));}
    break;

  case 425:

/* Line 1806 of yacc.c  */
#line 877 "SS_Parse_Yacc.yxx"
    {(yyval.parserange) = p_parse_result->ExpMetricList((ParseRange *)(yyvsp[(1) - (3)].parserange),(ParseRange *)(yyvsp[(3) - (3)].parserange));}
    break;

  case 426:

/* Line 1806 of yacc.c  */
#line 881 "SS_Parse_Yacc.yxx"
    {(yyval.parserange) = p_parse_result->ExpMetric("single",(ParseRange *)(yyvsp[(1) - (1)].parserange));}
    break;

  case 427:

/* Line 1806 of yacc.c  */
#line 882 "SS_Parse_Yacc.yxx"
    {(yyval.parserange) = p_parse_result->ExpMetricConstant((yyvsp[(1) - (1)].ival));}
    break;

  case 428:

/* Line 1806 of yacc.c  */
#line 883 "SS_Parse_Yacc.yxx"
    {(yyval.parserange) = p_parse_result->ExpMetricConstant((yyvsp[(1) - (1)].dval));}
    break;

  case 429:

/* Line 1806 of yacc.c  */
#line 884 "SS_Parse_Yacc.yxx"
    {(yyval.parserange) = p_parse_result->ExpMetric("parens",(ParseRange *)(yyvsp[(2) - (3)].parserange));}
    break;

  case 430:

/* Line 1806 of yacc.c  */
#line 887 "SS_Parse_Yacc.yxx"
    {(yyval.parserange) = p_parse_result->ExpMetric((yyvsp[(1) - (5)].string),(yyvsp[(3) - (5)].string),(yyvsp[(5) - (5)].string));}
    break;

  case 431:

/* Line 1806 of yacc.c  */
#line 888 "SS_Parse_Yacc.yxx"
    {(yyval.parserange) = p_parse_result->ExpMetric((yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].string));}
    break;

  case 432:

/* Line 1806 of yacc.c  */
#line 889 "SS_Parse_Yacc.yxx"
    {(yyval.parserange) = p_parse_result->ExpMetric(NULL,(yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].string));}
    break;

  case 433:

/* Line 1806 of yacc.c  */
#line 890 "SS_Parse_Yacc.yxx"
    {(yyval.parserange) = p_parse_result->ExpMetricExpr((yyvsp[(1) - (4)].string),(ParseRange *)(yyvsp[(3) - (4)].parserange));}
    break;

  case 434:

/* Line 1806 of yacc.c  */
#line 891 "SS_Parse_Yacc.yxx"
    {(yyval.parserange) = p_parse_result->ExpMetric((yyvsp[(1) - (1)].string));}
    break;

  case 435:

/* Line 1806 of yacc.c  */
#line 894 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushExpType((yyvsp[(1) - (1)].string));}
    break;

  case 436:

/* Line 1806 of yacc.c  */
#line 895 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushExpType((yyvsp[(3) - (3)].string));}
    break;

  case 438:

/* Line 1806 of yacc.c  */
#line 901 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushFormatList((ParseRange *)(yyvsp[(2) - (2)].parserange));}
    break;

  case 439:

/* Line 1806 of yacc.c  */
#line 904 "SS_Parse_Yacc.yxx"
    {(yyval.parserange) = p_parse_result->ExpFormat("list",(ParseRange *)(yyvsp[(1) - (1)].parserange));}
    break;

  case 440:

/* Line 1806 of yacc.c  */
#line 905 "SS_Parse_Yacc.yxx"
    {(yyval.parserange) = p_parse_result->ExpFormatList((ParseRange *)(yyvsp[(1) - (3)].parserange),(ParseRange *)(yyvsp[(3) - (3)].parserange));}
    break;

  case 441:

/* Line 1806 of yacc.c  */
#line 908 "SS_Parse_Yacc.yxx"
    {(yyval.parserange) = p_parse_result->ExpFormatConstant((yyvsp[(1) - (1)].string));}
    break;

  case 442:

/* Line 1806 of yacc.c  */
#line 909 "SS_Parse_Yacc.yxx"
    {(yyval.parserange) = p_parse_result->ExpFormatConstant((yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].ival));}
    break;

  case 443:

/* Line 1806 of yacc.c  */
#line 910 "SS_Parse_Yacc.yxx"
    {(yyval.parserange) = p_parse_result->ExpFormatConstant((yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].dval));}
    break;

  case 444:

/* Line 1806 of yacc.c  */
#line 911 "SS_Parse_Yacc.yxx"
    {(yyval.parserange) = p_parse_result->ExpFormatConstant((yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].string));}
    break;

  case 448:

/* Line 1806 of yacc.c  */
#line 922 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushViewType((yyvsp[(1) - (1)].string));}
    break;

  case 450:

/* Line 1806 of yacc.c  */
#line 935 "SS_Parse_Yacc.yxx"
    {p_parse_result->setError("Bad line number entry.");}
    break;

  case 452:

/* Line 1806 of yacc.c  */
#line 938 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushLineNoPoint((yyvsp[(1) - (1)].ival));}
    break;

  case 453:

/* Line 1806 of yacc.c  */
#line 939 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushLineNoRange((yyvsp[(1) - (3)].ival),(yyvsp[(3) - (3)].ival));}
    break;

  case 457:

/* Line 1806 of yacc.c  */
#line 947 "SS_Parse_Yacc.yxx"
    {p_parse_result->setError("Bad modifier list entry.");}
    break;

  case 461:

/* Line 1806 of yacc.c  */
#line 954 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushModifiers((yyvsp[(1) - (1)].string));}
    break;

  case 463:

/* Line 1806 of yacc.c  */
#line 960 "SS_Parse_Yacc.yxx"
    {p_parse_result->pushInstrumentors((yyvsp[(1) - (1)].string));}
    break;



/* Line 1806 of yacc.c  */
#line 3483 "y.tab.c"
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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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



/* Line 2067 of yacc.c  */
#line 963 "SS_Parse_Yacc.yxx"



/***************************************************/
void 
yyerror(const char *s)
{
#if DEBUG_CLI
    fprintf(stderr, "yyerror ---- s=%s, yytext=%s\n", s, (char *)yytext);
#endif
    p_parse_result->setError((char *)yytext);
}

/***************************************************/
/***************************************************/
/*
    Count will be 4 for 32 bit IP numbers and
    8 for 64 bit IP numbers.
    
    Lex will have weeded out most syntactical problems.
    
    The return value will need to change to long long
    soon.
    
 */
char *
ip_number(char *input_str,int count)
{
    int i;
    char *ptr1 = input_str;
    uint64_t num = 0;
    uint64_t t_num = 0;
    
    for (i=0;i<count;++i) {
    	num = num << 8;
	t_num = strtoul(ptr1,&ptr1,10);
	/* Check for invalid value */
	if (t_num > 255) {
	    p_parse_result->setError(input_str,"ip_number");
	}
    	num += t_num;
	ptr1++;
   }
   
    /*return (int64_t)num;*/
   return strdup(input_str);
}

/***************************************************/
/*
    This is a memory leak. I need to keep track
    of the allocations of memory and free them
    up periodically.
 */
char *
copy_string(char *p_old)
{
    char *p_buf = (char *)malloc(strlen(p_old)+1);
    strcpy(p_buf,p_old);
    return p_buf;
}
/***************************************************/




