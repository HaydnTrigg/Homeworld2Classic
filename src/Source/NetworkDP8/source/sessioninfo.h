#if 0
#ifndef __SESSIONINFO_H__
#define __SESSIONINFO_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct Net::SessionInfo
{
    Net::Address m_hostAddress; // 0x0
    Net::Address m_deviceAddress; // 0x4
    _GUID m_instance; // 0x8
    unsigned __int32 m_latency; // 0x18
    __int32 m_maxPlayer; // 0x1C
    __int32 m_nbPlayer; // 0x20
    bool m_password; // 0x24
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_name; // 0x28
    std::vector<unsigned char,std::allocator<unsigned char> > m_response; // 0x40
    _inline SessionInfo(Net::SessionInfo const &); /* compiler_generated() */
    SessionInfo(_DPNMSG_ENUM_HOSTS_RESPONSE const &);
    _inline ~SessionInfo(); /* compiler_generated() */
    _inline Net::SessionInfo &operator=(Net::SessionInfo const &); /* compiler_generated() */
};
static_assert(sizeof(Net::SessionInfo) == 76, "Invalid Net::SessionInfo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SESSIONINFO_H__
#endif
