#if 0
#ifndef __GSLOBBYROOMDESC_H__
#define __GSLOBBYROOMDESC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class GSLobbyRoomDesc
{
public:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x0
    __int32 m_groupID; // 0x18
    __int32 m_numWaiting; // 0x1C
    __int32 m_maxWaiting; // 0x20
    __int32 m_numGames; // 0x24
    __int32 m_numPlaying; // 0x28
    unsigned __int32 m_userData; // 0x2C
    _inline GSLobbyRoomDesc(GSLobbyRoomDesc const &); /* compiler_generated() */
    GSLobbyRoomDesc(); /* compiler_generated() */
    _inline ~GSLobbyRoomDesc(); /* compiler_generated() */
    _inline GSLobbyRoomDesc &operator=(GSLobbyRoomDesc const &); /* compiler_generated() */
};
static_assert(sizeof(GSLobbyRoomDesc) == 48, "Invalid GSLobbyRoomDesc size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __GSLOBBYROOMDESC_H__
/* combined */
#ifndef __GSLOBBYROOMDESC_H__
#define __GSLOBBYROOMDESC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class GSLobbyRoomDesc
{
public:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x0
    __int32 m_groupID; // 0x18
    __int32 m_numWaiting; // 0x1C
    __int32 m_maxWaiting; // 0x20
    __int32 m_numGames; // 0x24
    __int32 m_numPlaying; // 0x28
    unsigned __int32 m_userData; // 0x2C
    GSLobbyRoomDesc(GSLobbyRoomDesc const &); /* compiler_generated() */
    _inline GSLobbyRoomDesc(); /* compiler_generated() */
    _inline ~GSLobbyRoomDesc(); /* compiler_generated() */
    GSLobbyRoomDesc &operator=(GSLobbyRoomDesc const &); /* compiler_generated() */
};
static_assert(sizeof(GSLobbyRoomDesc) == 48, "Invalid GSLobbyRoomDesc size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __GSLOBBYROOMDESC_H__
#endif
