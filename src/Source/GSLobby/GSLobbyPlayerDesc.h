#if 0
#ifndef __GSLOBBYPLAYERDESC_H__
#define __GSLOBBYPLAYERDESC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class GSLobbyPlayerDesc
{
public:
    _inline GSLobbyPlayerDesc(GSLobbyPlayerDesc const &); /* compiler_generated() */
    GSLobbyPlayerDesc();
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_room; // 0x18
    bool m_bViewingSetup; // 0x30
    _inline ~GSLobbyPlayerDesc(); /* compiler_generated() */
    _inline GSLobbyPlayerDesc &operator=(GSLobbyPlayerDesc const &); /* compiler_generated() */
};
static_assert(sizeof(GSLobbyPlayerDesc) == 52, "Invalid GSLobbyPlayerDesc size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __GSLOBBYPLAYERDESC_H__
#endif
