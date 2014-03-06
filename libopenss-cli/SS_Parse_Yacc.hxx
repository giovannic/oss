/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
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

/* Line 2068 of yacc.c  */
#line 59 "SS_Parse_Yacc.yxx"

int64_t ival;
double dval;
char *string;
void *parserange;



/* Line 2068 of yacc.c  */
#line 199 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


