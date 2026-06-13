#if 0
#ifndef __PEERPLAYERS_H__
#define __PEERPLAYERS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct piPlayer
{
    char nick[64]; // 0x0
    PEERBool inRoom[3]; // 0x40
    PEERBool local; // 0x4C
    unsigned __int32 IP; // 0x50
    __int32 profileID; // 0x54
    PEERBool gotIPAndProfileID; // 0x58
    __int32 flags[3]; // 0x5C
    unsigned long lastPingSend; // 0x68
    unsigned long lastPingRecv; // 0x6C
    unsigned long lastXping; // 0x70
    PEERBool waitingForPing; // 0x74
    __int32 pingsReturned; // 0x78
    __int32 pingsLostConsecutive; // 0x7C
    __int32 pingAverage; // 0x80
    __int32 pingHistory[4]; // 0x84
    __int32 pingHistoryNum; // 0x94
    __int32 numPings; // 0x98
    PEERBool xpingSent; // 0x9C
    PEERBool inPingRoom; // 0xA0
    PEERBool inXpingRoom; // 0xA4
    PEERBool mustPing; // 0xA8
};
static_assert(sizeof(piPlayer) == 172, "Invalid piPlayer size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __PEERPLAYERS_H__
#endif
