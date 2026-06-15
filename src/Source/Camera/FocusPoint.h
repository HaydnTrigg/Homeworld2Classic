#if 0
#ifndef __FOCUSPOINT_H__
#define __FOCUSPOINT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FocusPoint
{
public:
    FocusPoint(FocusPoint const &); /* compiler_generated() */
    FocusPoint(char const *, vector3 const &, vector3 const &);
    _inline char const *GetName() const;
    _inline vector3 const &GetTargetPosition() const;
    _inline vector3 const &GetEyePosition() const;
    struct NameSearchPred
    {
        _inline NameSearchPred(char const *);
        bool operator()(FocusPoint *);
    private:
        char const *m_name; // 0x0
    };
    static_assert(sizeof(NameSearchPred) == 4, "Invalid NameSearchPred size");
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x0
    vector3 m_targetPosition; // 0x18
    vector3 m_eyePosition; // 0x24
public:
    _inline ~FocusPoint(); /* compiler_generated() */
    FocusPoint &operator=(FocusPoint const &); /* compiler_generated() */
};
static_assert(sizeof(FocusPoint) == 48, "Invalid FocusPoint size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline char const *FocusPoint::GetName() const // 0x4DD032
{
    mangled_assert("?GetName@FocusPoint@@QBEPBDXZ");
    todo("implement");
}

_inline vector3 const &FocusPoint::GetTargetPosition() const // 0x64D578
{
    mangled_assert("?GetTargetPosition@FocusPoint@@QBEABVvector3@@XZ");
    todo("implement");
}

_inline vector3 const &FocusPoint::GetEyePosition() const // 0x64D564
{
    mangled_assert("?GetEyePosition@FocusPoint@@QBEABVvector3@@XZ");
    todo("implement");
}

_inline FocusPoint::NameSearchPred::NameSearchPred(char const *) // 0x7243F2
{
    mangled_assert("??0NameSearchPred@FocusPoint@@QAE@PBD@Z");
    todo("implement");
}

_inline bool FocusPoint::NameSearchPred::operator()(FocusPoint *) // 0x7244E7
{
    mangled_assert("??RNameSearchPred@FocusPoint@@QAE_NPAV1@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __FOCUSPOINT_H__
#endif
