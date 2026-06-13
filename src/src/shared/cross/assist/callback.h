#if 0
#ifndef __CALLBACK_H__
#define __CALLBACK_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Callback::CBBase
{
private:
    __int32 m_count; // 0x4
public:
    CBBase(Callback::CBBase const &); /* compiler_generated() */
    _inline CBBase();
protected:
    virtual _inline ~CBBase();
public:
    _inline Callback::CBBase *AddRef();
    _inline void Release();
    Callback::CBBase &operator=(Callback::CBBase const &); /* compiler_generated() */
};
static_assert(sizeof(Callback::CBBase) == 8, "Invalid Callback::CBBase size");

class Callback::Obj0nRetInternal :
    public Callback::CBBase
{
public:
    virtual void Do() const = 0;
    Obj0nRetInternal(Callback::Obj0nRetInternal const &); /* compiler_generated() */
    Obj0nRetInternal(); /* compiler_generated() */
    virtual ~Obj0nRetInternal() override; /* compiler_generated() */
    Callback::Obj0nRetInternal &operator=(Callback::Obj0nRetInternal const &); /* compiler_generated() */
};
static_assert(sizeof(Callback::Obj0nRetInternal) == 8, "Invalid Callback::Obj0nRetInternal size");

class Callback::Obj0nRet
{
public:
    typedef Callback::Obj0nRetInternal Type;
    Callback::Obj0nRetInternal *m_obj; // 0x0
    static Callback::Obj0nRet Bind(Callback::Obj0nRetInternal *);
    Obj0nRet(Callback::Obj0nRet const &);
    Obj0nRet();
    ~Obj0nRet();
    Callback::Obj0nRet &operator=(Callback::Obj0nRet const &);
    bool empty() const;
    void reset();
    void operator()() const;
};
static_assert(sizeof(Callback::Obj0nRet) == 4, "Invalid Callback::Obj0nRet size");

class Callback::Obj1wRetInternal<bool,enum AnimEventContext::ModeChange> :
    public Callback::CBBase
{
public:
    virtual bool Do(AnimEventContext::ModeChange) const = 0;
    Obj1wRetInternal<bool,enum AnimEventContext::ModeChange>(Callback::Obj1wRetInternal<bool,enum AnimEventContext::ModeChange> const &); /* compiler_generated() */
    _inline Obj1wRetInternal<bool,enum AnimEventContext::ModeChange>(); /* compiler_generated() */
    virtual _inline ~Obj1wRetInternal<bool,enum AnimEventContext::ModeChange>() override; /* compiler_generated() */
    Callback::Obj1wRetInternal<bool,enum AnimEventContext::ModeChange> &operator=(Callback::Obj1wRetInternal<bool,enum AnimEventContext::ModeChange> const &); /* compiler_generated() */
};
static_assert(sizeof(Callback::Obj1wRetInternal<bool,enum AnimEventContext::ModeChange>) == 8, "Invalid Callback::Obj1wRetInternal<bool,enum AnimEventContext::ModeChange> size");

class Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange>
{
public:
    typedef Callback::Obj1wRetInternal<bool,enum AnimEventContext::ModeChange> Type;
    Callback::Obj1wRetInternal<bool,enum AnimEventContext::ModeChange> *m_obj; // 0x0
    static _inline Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange> Bind(Callback::Obj1wRetInternal<bool,enum AnimEventContext::ModeChange> *p);
    _inline Obj1wRet<bool,enum AnimEventContext::ModeChange>(Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange> const &);
    _inline Obj1wRet<bool,enum AnimEventContext::ModeChange>();
    _inline ~Obj1wRet<bool,enum AnimEventContext::ModeChange>();
    _inline Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange> &operator=(Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange> const &);
    bool empty() const;
    _inline void reset();
    bool operator()(AnimEventContext::ModeChange) const;
};
static_assert(sizeof(Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange>) == 4, "Invalid Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_51E2A1(Callback::CBBase *const);
_inline Callback::CBBase::CBBase() // 0x51E2A1
{
    mangled_assert("??0CBBase@Callback@@QAE@XZ");
    todo("implement");
    _sub_51E2A1(this);
}

_extern void _sub_51E4EC(Callback::CBBase *const);
_inline Callback::CBBase::~CBBase() // 0x51E4EC
{
    mangled_assert("??1CBBase@Callback@@MAE@XZ");
    todo("implement");
    _sub_51E4EC(this);
}

_extern Callback::CBBase *_sub_513529(Callback::CBBase *const);
_inline Callback::CBBase *Callback::CBBase::AddRef() // 0x513529
{
    mangled_assert("?AddRef@CBBase@Callback@@QAEPAV12@XZ");
    todo("implement");
    Callback::CBBase * __result = _sub_513529(this);
    return __result;
}

_extern void _sub_51357B(Callback::CBBase *const);
_inline void Callback::CBBase::Release() // 0x51357B
{
    mangled_assert("?Release@CBBase@Callback@@QAEXXZ");
    todo("implement");
    _sub_51357B(this);
}

_extern _sub_51E24E(Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange> *const);
_inline Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange>::Obj1wRet<bool,enum AnimEventContext::ModeChange>() // 0x51E24E
{
    mangled_assert("??0?$Obj1wRet@_NW4ModeChange@AnimEventContext@@@Callback@@QAE@XZ");
    todo("implement");
    _sub_51E24E(this);
}

_extern Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange> _sub_51E882(Callback::Obj1wRetInternal<bool,enum AnimEventContext::ModeChange> *);
_inline Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange> Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange>::Bind(Callback::Obj1wRetInternal<bool,enum AnimEventContext::ModeChange> *p) // 0x51E882
{
    mangled_assert("?Bind@?$Obj1wRet@_NW4ModeChange@AnimEventContext@@@Callback@@SG?AV12@PAV?$Obj1wRetInternal@_NW4ModeChange@AnimEventContext@@@2@@Z");
    todo("implement");
    Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange> __result = _sub_51E882(p);
    return __result;
}

_extern _sub_513430(Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange> *const, Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange> const &);
_inline Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange>::Obj1wRet<bool,enum AnimEventContext::ModeChange>(Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange> const &) // 0x513430
{
    mangled_assert("??0?$Obj1wRet@_NW4ModeChange@AnimEventContext@@@Callback@@QAE@ABV01@@Z");
    todo("implement");
    _sub_513430(this, arg);
}

_extern void _sub_513464(Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange> *const);
_inline Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange>::~Obj1wRet<bool,enum AnimEventContext::ModeChange>() // 0x513464
{
    mangled_assert("??1?$Obj1wRet@_NW4ModeChange@AnimEventContext@@@Callback@@QAE@XZ");
    todo("implement");
    _sub_513464(this);
}

_extern Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange> &_sub_513469(Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange> *const, Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange> const &);
_inline Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange> &Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange>::operator=(Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange> const &) // 0x513469
{
    mangled_assert("??4?$Obj1wRet@_NW4ModeChange@AnimEventContext@@@Callback@@QAEAAV01@ABV01@@Z");
    todo("implement");
    Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange> & __result = _sub_513469(this, arg);
    return __result;
}

_extern bool _sub_5134DC(Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange> const *const, AnimEventContext::ModeChange);
_inline bool Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange>::operator()(AnimEventContext::ModeChange) const // 0x5134DC
{
    mangled_assert("??R?$Obj1wRet@_NW4ModeChange@AnimEventContext@@@Callback@@QBE_NW4ModeChange@AnimEventContext@@@Z");
    todo("implement");
    bool __result = _sub_5134DC(this, arg);
    return __result;
}

_extern void _sub_51380B(Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange> *const);
_inline void Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange>::reset() // 0x51380B
{
    mangled_assert("?reset@?$Obj1wRet@_NW4ModeChange@AnimEventContext@@@Callback@@QAEXXZ");
    todo("implement");
    _sub_51380B(this);
}

/* ---------- private code */

#endif // __CALLBACK_H__
#endif
