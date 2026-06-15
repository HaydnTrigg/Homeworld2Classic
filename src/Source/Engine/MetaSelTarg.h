#if 0
#ifndef __METASELTARG_H__
#define __METASELTARG_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum MetaSelTargFlags
{
    MST_Selected = (1 << 0),
    MST_Selecting = (1 << 1),
    MST_MouseOver = (1 << 2),
    MST_Clickable = (1 << 3),
    MST_BandBoxable = (1 << 4),
};

/* ---------- definitions */

class MetaSelTarg :
    public SelTarg
{
public:
    _inline MetaSelTarg(MetaSelTarg const &); /* compiler_generated() */
    _inline MetaSelTarg(float);
    ~MetaSelTarg();
    _inline Selection const *getSelection() const;
    _inline unsigned __int32 getFlags() const;
    _inline float getPriority() const;
    void setSelection(Selection const *);
    _inline void setFlags(unsigned __int32);
    _inline void setPriority(float);
private:
    unsigned __int32 m_flags; // 0x18
    float m_priority; // 0x1C
    Selection m_selection; // 0x20
public:
    _inline MetaSelTarg &operator=(MetaSelTarg const &); /* compiler_generated() */
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(MetaSelTarg) == 84, "Invalid MetaSelTarg size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline MetaSelTarg::MetaSelTarg(float) // 0x62FF69
{
    mangled_assert("??0MetaSelTarg@@QAE@M@Z");
    todo("implement");
}

_inline Selection const *MetaSelTarg::getSelection() const // 0x6315DA
{
    mangled_assert("?getSelection@MetaSelTarg@@QBEPBVSelection@@XZ");
    todo("implement");
}

_inline unsigned __int32 MetaSelTarg::getFlags() const // 0x45A82E
{
    mangled_assert("?getFlags@MetaSelTarg@@QBEIXZ");
    todo("implement");
}

_inline float MetaSelTarg::getPriority() const // 0x6315C1
{
    mangled_assert("?getPriority@MetaSelTarg@@QBEMXZ");
    todo("implement");
}

_inline void MetaSelTarg::setFlags(unsigned __int32) // 0x632D67
{
    mangled_assert("?setFlags@MetaSelTarg@@QAEXI@Z");
    todo("implement");
}

_inline void MetaSelTarg::setPriority(float) // 0x632D71
{
    mangled_assert("?setPriority@MetaSelTarg@@QAEXM@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __METASELTARG_H__
#endif
