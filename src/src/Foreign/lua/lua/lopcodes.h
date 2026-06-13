#if 0
#ifndef __LOPCODES_H__
#define __LOPCODES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum OpCode
{
    OP_END = 0,
    OP_RETURN,
    OP_CALL,
    OP_TAILCALL,
    OP_PUSHNIL,
    OP_POP,
    OP_PUSHINT,
    OP_PUSHSTRING,
    OP_PUSHNUM,
    OP_PUSHNEGNUM,
    OP_PUSHUPVALUE,
    OP_GETLOCAL,
    OP_GETGLOBAL,
    OP_GETTABLE,
    OP_GETDOTTED,
    OP_GETINDEXED,
    OP_PUSHSELF,
    OP_CREATETABLE,
    OP_SETLOCAL,
    OP_SETGLOBAL,
    OP_SETTABLE,
    OP_SETLIST,
    OP_SETMAP,
    OP_ADD,
    OP_ADDI,
    OP_SUB,
    OP_MULT,
    OP_DIV,
    OP_POW,
    OP_CONCAT,
    OP_MINUS,
    OP_NOT,
    OP_JMPNE,
    OP_JMPEQ,
    OP_JMPLT,
    OP_JMPLE,
    OP_JMPGT,
    OP_JMPGE,
    OP_JMPT,
    OP_JMPF,
    OP_JMPONT,
    OP_JMPONF,
    OP_JMP,
    OP_PUSHNILJMP,
    OP_FORPREP,
    OP_FORLOOP,
    OP_LFORPREP,
    OP_LFORLOOP,
    OP_CLOSURE,
};

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LOPCODES_H__
#endif
