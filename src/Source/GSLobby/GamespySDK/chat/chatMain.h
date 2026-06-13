#if 0
#ifndef __CHATMAIN_H__
#define __CHATMAIN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct ciConnection
{
    CHATBool connected; // 0x0
    CHATBool connecting; // 0x4
    CHATBool disconnected; // 0x8
    void (*nickErrorCallback)(void *, __int32, char const *, void *); // 0xC
    void (*fillInUserCallback)(void *, unsigned __int32, char *, void *); // 0x10
    void (*connectCallback)(void *, CHATBool, void *); // 0x14
    void *connectParam; // 0x18
    ciSocket chatSocket; // 0x1C
    char nick[64]; // 0x36C
    char name[128]; // 0x3AC
    char user[128]; // 0x42C
    unsigned __int32 IP; // 0x4AC
    char server[128]; // 0x4B0
    __int32 port; // 0x530
    chatGlobalCallbacks globalCallbacks; // 0x534
    HashImplementation *channelTable; // 0x548
    DArrayImplementation *enteringChannelList; // 0x54C
    ciServerMessageFilter *filterList; // 0x550
    ciServerMessageFilter *lastFilter; // 0x554
    __int32 nextID; // 0x558
    DArrayImplementation *callbackList; // 0x55C
    CHATBool quiet; // 0x560
    char secretKey[128]; // 0x564
};
static_assert(sizeof(ciConnection) == 1508, "Invalid ciConnection size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CHATMAIN_H__
#endif
