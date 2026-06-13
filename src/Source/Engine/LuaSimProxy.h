#if 0
#ifndef __LUASIMPROXY_H__
#define __LUASIMPROXY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LuaSimProxyLib
{
public:
    void Bind(LuaConfig &, SimProxy *);
    void UnBind(LuaConfig &);
private:
    std::vector<LuaBinding::Obj,std::allocator<LuaBinding::Obj> > m_exported; // 0x0
public:
    LuaSimProxyLib(LuaSimProxyLib const &); /* compiler_generated() */
    _inline LuaSimProxyLib(); /* compiler_generated() */
    _inline ~LuaSimProxyLib(); /* compiler_generated() */
    LuaSimProxyLib &operator=(LuaSimProxyLib const &); /* compiler_generated() */
};
static_assert(sizeof(LuaSimProxyLib) == 12, "Invalid LuaSimProxyLib size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LUASIMPROXY_H__
#endif
