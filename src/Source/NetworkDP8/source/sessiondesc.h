#if 0
#ifndef __SESSIONDESC_H__
#define __SESSIONDESC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct Net::SessionDescription
{
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_name; // 0x0
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_password; // 0x18
    unsigned __int32 m_nbPlayers; // 0x30
    unsigned __int32 m_maxPlayers; // 0x34
    std::vector<char,std::allocator<char> > m_data; // 0x38
    _GUID m_guidApplication; // 0x44
    SessionDescription(Net::SessionDescription const &); /* compiler_generated() */
    SessionDescription(_DPN_APPLICATION_DESC const &);
    SessionDescription();
    void Build(_DPN_APPLICATION_DESC &) const;
    _inline ~SessionDescription(); /* compiler_generated() */
    _inline Net::SessionDescription &operator=(Net::SessionDescription const &); /* compiler_generated() */
};
static_assert(sizeof(Net::SessionDescription) == 84, "Invalid Net::SessionDescription size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SESSIONDESC_H__
#endif
