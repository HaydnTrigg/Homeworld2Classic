#if 0
#ifndef __LOBBYPLAYERDESC_H__
#define __LOBBYPLAYERDESC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LobbyPlayerDesc
{
public:
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_name; // 0x0
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_room; // 0x18
    bool m_bViewingSetup; // 0x30
    LobbyPlayerDesc(LobbyPlayerDesc const &); /* compiler_generated() */
    _inline LobbyPlayerDesc(); /* compiler_generated() */
    _inline ~LobbyPlayerDesc(); /* compiler_generated() */
    LobbyPlayerDesc &operator=(LobbyPlayerDesc const &); /* compiler_generated() */
};
static_assert(sizeof(LobbyPlayerDesc) == 52, "Invalid LobbyPlayerDesc size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LOBBYPLAYERDESC_H__
#endif
