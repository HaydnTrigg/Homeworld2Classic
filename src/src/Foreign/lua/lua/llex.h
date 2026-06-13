#if 0
#ifndef __LLEX_H__
#define __LLEX_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum RESERVED
{
    TK_AND = 257, // 0x0101
    TK_BREAK = 258, // 0x0102
    TK_DO = 259, // 0x0103
    TK_ELSE = 260, // 0x0104
    TK_ELSEIF = 261, // 0x0105
    TK_END = 262, // 0x0106
    TK_FOR = 263, // 0x0107
    TK_FUNCTION = 264, // 0x0108
    TK_IF = 265, // 0x0109
    TK_LOCAL = 266, // 0x010A
    TK_NIL = 267, // 0x010B
    TK_NOT = 268, // 0x010C
    TK_OR = 269, // 0x010D
    TK_REPEAT = 270, // 0x010E
    TK_RETURN = 271, // 0x010F
    TK_THEN = 272, // 0x0110
    TK_UNTIL = 273, // 0x0111
    TK_WHILE = 274, // 0x0112
    TK_NAME = 275, // 0x0113
    TK_CONCAT = 276, // 0x0114
    TK_DOTS = 277, // 0x0115
    TK_EQ = 278, // 0x0116
    TK_GE = 279, // 0x0117
    TK_LE = 280, // 0x0118
    TK_NE = 281, // 0x0119
    TK_NUMBER = 282, // 0x011A
    TK_STRING = 283, // 0x011B
    TK_EOS = 284, // 0x011C
};

/* ---------- definitions */

union SemInfo
{
    double r; // 0x0
    TString *ts; // 0x0
};
static_assert(sizeof(SemInfo) == 8, "Invalid SemInfo size");

struct Token
{
    __int32 token; // 0x0
    SemInfo seminfo; // 0x8
};
static_assert(sizeof(Token) == 16, "Invalid Token size");

struct LexState
{
    __int32 current; // 0x0
    Token t; // 0x8
    Token lookahead; // 0x18
    FuncState *fs; // 0x28
    lua_State *L; // 0x2C
    zio *z; // 0x30
    __int32 linenumber; // 0x34
    __int32 lastline; // 0x38
    TString *source; // 0x3C
};
static_assert(sizeof(LexState) == 64, "Invalid LexState size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LLEX_H__
#endif
