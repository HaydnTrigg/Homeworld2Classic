#if 0
#ifndef __LEVELDESC_H__
#define __LEVELDESC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LevelDesc
{
public:
    enum Source
    {
        LS_Invalid = 0,
        LS_Campaign,
        LS_Multiplayer,
        LS_Profile,
        LS_NumberSources,
    };
    enum
    {
        MAX_PLAYERS = 6, // 0x0006
        STRING_LENGTH = 64, // 0x0040 '@'
    };
    struct PlayerDesc
    {
        wchar_t m_name[64]; // 0x0
        unsigned __int32 m_raceID; // 0x80
        __int32 m_simId; // 0x84
        float m_resources; // 0x88
        PlayerDesc();
    };
    static_assert(sizeof(PlayerDesc) == 140, "Invalid PlayerDesc size");
    typedef MD5Hash Guid;
    LevelDesc();
    LevelDesc::Source m_source; // 0x0
    char m_name[64]; // 0x4
    char m_path[260]; // 0x44
    MD5Hash m_guid; // 0x148
    unsigned __int32 m_maxPlayers; // 0x1B4
    LevelDesc::PlayerDesc m_playerDesc[6]; // 0x1B8
    wchar_t m_levelDesc[64]; // 0x500
    _inline ~LevelDesc(); /* compiler_generated() */
};
static_assert(sizeof(LevelDesc) == 1408, "Invalid LevelDesc size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LEVELDESC_H__
#endif
