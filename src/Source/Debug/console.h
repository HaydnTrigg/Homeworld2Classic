#if 0
#ifndef __CONSOLE_H__
#define __CONSOLE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct ConFunctionTable
{
    void (*print)(char const *, char const *); // 0x0
    void (*lineFeed)(); // 0x4
    void (*clear)(); // 0x8
    void (*keywordAdd)(char const *); // 0xC
    void (*keywordRmv)(char const *); // 0x10
    bool (*setInputCB)(void (*)(unsigned __int32, char *), unsigned __int32); // 0x14
    bool (*setCharInputCB)(void (*)(unsigned __int32, char *), unsigned __int32); // 0x18
    bool (*setShutdownCB)(void (*)(unsigned __int32), unsigned __int32); // 0x1C
    bool (*consoleActivate)(unsigned __int32); // 0x20
    void (*consoleValidate)(); // 0x24
};
static_assert(sizeof(ConFunctionTable) == 40, "Invalid ConFunctionTable size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CONSOLE_H__
/* combined */
#ifndef __CONSOLE_H__
#define __CONSOLE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CONSOLE_H__
#endif
