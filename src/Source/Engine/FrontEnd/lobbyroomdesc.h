#if 0
#ifndef __LOBBYROOMDESC_H__
#define __LOBBYROOMDESC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LobbyRoomDesc
{
public:
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_name; // 0x0
    __int32 m_groupID; // 0x18
    __int32 m_numWaiting; // 0x1C
    __int32 m_maxWaiting; // 0x20
    __int32 m_numGames; // 0x24
    __int32 m_numPlaying; // 0x28
    LobbyRoomDesc(LobbyRoomDesc const &); /* compiler_generated() */
    _inline LobbyRoomDesc(); /* compiler_generated() */
    _inline ~LobbyRoomDesc(); /* compiler_generated() */
    LobbyRoomDesc &operator=(LobbyRoomDesc const &); /* compiler_generated() */
};
static_assert(sizeof(LobbyRoomDesc) == 44, "Invalid LobbyRoomDesc size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LOBBYROOMDESC_H__
#endif
