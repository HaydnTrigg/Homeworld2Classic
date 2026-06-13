#if 0
#ifndef __PLAYERDESC_H__
#define __PLAYERDESC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct Net::PlayerDescription
{
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_name; // 0x0
    std::vector<char,std::allocator<char> > m_data; // 0x18
    PlayerDescription(Net::PlayerDescription const &); /* compiler_generated() */
    PlayerDescription(_DPN_PLAYER_INFO const &);
    PlayerDescription();
    void Build(_DPN_PLAYER_INFO &) const;
    _inline ~PlayerDescription(); /* compiler_generated() */
    _inline Net::PlayerDescription &operator=(Net::PlayerDescription const &); /* compiler_generated() */
};
static_assert(sizeof(Net::PlayerDescription) == 36, "Invalid Net::PlayerDescription size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __PLAYERDESC_H__
#endif
