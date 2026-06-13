#if 0
#ifndef __SOBID_H__
#define __SOBID_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SobID
{
public:
    SobID(SobID const &);
    SobID(unsigned __int32);
    unsigned __int32 getNumberPartOfID() const;
    unsigned __int32 getID() const;
    Sob *getSobPtr() const;
    SobWithMesh *getSobMeshPtr() const;
    Ship *getShipPtr() const;
    Sob *getAliveSobPtr() const;
    void explicitlySetID(unsigned __int32, Sob *);
    void IDSobDied();
    void AssignID(Sob *);
    _inline void reset();
    static bool Initialize();
    static bool Shutdown();
    void SetLoadID(unsigned __int32);
private:
    void CreateShared(unsigned __int32, Sob *);
    boost::shared_ptr<SobIDShared> m_shared; // 0x0
    unsigned __int32 m_id; // 0x8
public:
    _inline ~SobID(); /* compiler_generated() */
    _inline SobID &operator=(SobID const &); /* compiler_generated() */
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(SobID) == 12, "Invalid SobID size");

/* ---------- prototypes */

extern _inline bool operator<(SobID const &x, SobID const &y);
extern _inline bool operator==(SobID const &x, SobID const &y);
extern _inline bool operator!=(SobID const &x, SobID const &y);

/* ---------- globals */

/* ---------- public code */

_extern void _sub_4859D9(SobID *const);
_inline void SobID::reset() // 0x4859D9
{
    mangled_assert("?reset@SobID@@QAEXXZ");
    todo("implement");
    _sub_4859D9(this);
}

_extern bool _sub_53BE7F(SobID const &, SobID const &);
_inline bool operator<(SobID const &x, SobID const &y) // 0x53BE7F
{
    mangled_assert("??M@YG_NABVSobID@@0@Z");
    todo("implement");
    bool __result = _sub_53BE7F(x, y);
    return __result;
}

_extern bool _sub_486F51(SobID const &, SobID const &);
_inline bool operator==(SobID const &x, SobID const &y) // 0x486F51
{
    mangled_assert("??8@YG_NABVSobID@@0@Z");
    todo("implement");
    bool __result = _sub_486F51(x, y);
    return __result;
}

_extern bool _sub_49D7F2(SobID const &, SobID const &);
_inline bool operator!=(SobID const &x, SobID const &y) // 0x49D7F2
{
    mangled_assert("??9@YG_NABVSobID@@0@Z");
    todo("implement");
    bool __result = _sub_49D7F2(x, y);
    return __result;
}

/* ---------- private code */

#endif // __SOBID_H__
#endif
