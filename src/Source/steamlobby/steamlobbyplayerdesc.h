#if 0
#ifndef __STEAMLOBBYPLAYERDESC_H__
#define __STEAMLOBBYPLAYERDESC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SteamLobbyPlayerDesc
{
public:
    _inline SteamLobbyPlayerDesc(SteamLobbyPlayerDesc const &); /* compiler_generated() */
    SteamLobbyPlayerDesc();
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_room; // 0x18
    bool m_bViewingSetup; // 0x30
    _inline ~SteamLobbyPlayerDesc(); /* compiler_generated() */
    _inline SteamLobbyPlayerDesc &operator=(SteamLobbyPlayerDesc const &); /* compiler_generated() */
};
static_assert(sizeof(SteamLobbyPlayerDesc) == 52, "Invalid SteamLobbyPlayerDesc size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __STEAMLOBBYPLAYERDESC_H__
#endif
