#if 0
#ifndef __CDKEYCLIENT_H__
#define __CDKEYCLIENT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CDKeyClient
{
public:
    static void ComputeResponse(char const *, char const *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
};
static_assert(sizeof(CDKeyClient) == 1, "Invalid CDKeyClient size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CDKEYCLIENT_H__
#endif
