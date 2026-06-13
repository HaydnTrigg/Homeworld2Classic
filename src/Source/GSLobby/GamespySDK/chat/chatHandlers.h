#if 0
#ifndef __CHATHANDLERS_H__
#define __CHATHANDLERS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct ciServerMessageType
{
    char *command; // 0x0
    void (*handler)(void *, ciServerMessage *); // 0x4
};
static_assert(sizeof(ciServerMessageType) == 8, "Invalid ciServerMessageType size");

struct ciServerMessageFilter
{
    __int32 type; // 0x0
    unsigned long timeout; // 0x4
    char *name; // 0x8
    char *name2; // 0xC
    void *callback; // 0x10
    void *callback2; // 0x14
    void *param; // 0x18
    void *data; // 0x1C
    __int32 ID; // 0x20
    ciServerMessageFilter *pnext; // 0x24
};
static_assert(sizeof(ciServerMessageFilter) == 40, "Invalid ciServerMessageFilter size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CHATHANDLERS_H__
#endif
