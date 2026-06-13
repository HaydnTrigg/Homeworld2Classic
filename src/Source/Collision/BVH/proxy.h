#if 0
#ifndef __PROXY_H__
#define __PROXY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Collision::Proxy
{
public:
    virtual _inline ~Proxy() = 0;
    _inline void *GetUserData() const;
    _inline Collision::AABB const &GetAABB() const;
    virtual void Update(Collision::AABB const &);
    _inline unsigned __int32 GetAttributeMask() const;
    _inline unsigned __int32 GetCollisionMask() const;
    _inline void SetAttributeMask(unsigned __int32);
    _inline void SetCollisionMask(unsigned __int32);
    unsigned __int32 GetCollisionGroup() const;
    _inline void SetCollisionGroup(unsigned __int32);
    Proxy(Collision::Proxy const &); /* compiler_generated() */
protected:
    Proxy(Collision::AABB const &, void *);
    void *m_userData; // 0x4
    Collision::AABB m_aabb; // 0x8
    unsigned __int32 m_attributeMask; // 0x20
    unsigned __int32 m_collisionMask; // 0x24
    unsigned __int32 m_collisionGroup; // 0x28
public:
    Collision::Proxy &operator=(Collision::Proxy const &); /* compiler_generated() */
};
static_assert(sizeof(Collision::Proxy) == 44, "Invalid Collision::Proxy size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_661460(Collision::Proxy *const);
_inline Collision::Proxy::~Proxy() // 0x661460
{
    mangled_assert("??1Proxy@Collision@@UAE@XZ");
    todo("implement");
    _sub_661460(this);
}

_extern void *_sub_6615FD(Collision::Proxy const *const);
_inline void *Collision::Proxy::GetUserData() const // 0x6615FD
{
    mangled_assert("?GetUserData@Proxy@Collision@@QBEPAXXZ");
    todo("implement");
    void * __result = _sub_6615FD(this);
    return __result;
}

_extern Collision::AABB const &_sub_6615E9(Collision::Proxy const *const);
_inline Collision::AABB const &Collision::Proxy::GetAABB() const // 0x6615E9
{
    mangled_assert("?GetAABB@Proxy@Collision@@QBEABVAABB@2@XZ");
    todo("implement");
    Collision::AABB const & __result = _sub_6615E9(this);
    return __result;
}

_extern unsigned __int32 _sub_664082(Collision::Proxy const *const);
_inline unsigned __int32 Collision::Proxy::GetAttributeMask() const // 0x664082
{
    mangled_assert("?GetAttributeMask@Proxy@Collision@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_664082(this);
    return __result;
}

_extern unsigned __int32 _sub_664086(Collision::Proxy const *const);
_inline unsigned __int32 Collision::Proxy::GetCollisionMask() const // 0x664086
{
    mangled_assert("?GetCollisionMask@Proxy@Collision@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_664086(this);
    return __result;
}

_extern void _sub_477C85(Collision::Proxy *const, unsigned __int32);
_inline void Collision::Proxy::SetAttributeMask(unsigned __int32) // 0x477C85
{
    mangled_assert("?SetAttributeMask@Proxy@Collision@@QAEXI@Z");
    todo("implement");
    _sub_477C85(this, arg);
}

_extern void _sub_477CB9(Collision::Proxy *const, unsigned __int32);
_inline void Collision::Proxy::SetCollisionMask(unsigned __int32) // 0x477CB9
{
    mangled_assert("?SetCollisionMask@Proxy@Collision@@QAEXI@Z");
    todo("implement");
    _sub_477CB9(this, arg);
}

_extern void _sub_477CAF(Collision::Proxy *const, unsigned __int32);
_inline void Collision::Proxy::SetCollisionGroup(unsigned __int32) // 0x477CAF
{
    mangled_assert("?SetCollisionGroup@Proxy@Collision@@QAEXI@Z");
    todo("implement");
    _sub_477CAF(this, arg);
}

/* ---------- private code */

#endif // __PROXY_H__
#endif
