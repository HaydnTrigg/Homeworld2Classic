#if 0
#ifndef __MESSAGEUTIL_H__
#define __MESSAGEUTIL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MessageUtil
{
public:
    static void LoadMessages(LuaConfig &lc, char const *tableName, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > *messages, unsigned __int32 maxMessages);
};
static_assert(sizeof(MessageUtil) == 1, "Invalid MessageUtil size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MESSAGEUTIL_H__
#endif
