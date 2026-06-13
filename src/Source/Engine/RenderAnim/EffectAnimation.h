#if 0
#ifndef __EFFECTANIMATION_H__
#define __EFFECTANIMATION_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class EffectAnimation
{
public:
    typedef __int32 MarkerID;
    typedef std::vector<int,std::allocator<int> > MarkerCont;
    EffectAnimation(EffectAnimation const &); /* compiler_generated() */
    EffectAnimation(char const *, float, bool, float, float);
    EffectAnimation();
    _inline void setName(char const *);
    _inline void setParent(char const *);
    _inline void setLength(float);
    _inline void setLooping(bool);
    _inline void setRange(float, float);
    void addMarker(__int32);
    void addChild(EffectAnimation const *);
    _inline char const *getName() const;
    _inline char const *getParent() const;
    _inline float getLength() const;
    _inline float getOneOverLength() const;
    _inline bool isLooping() const;
    _inline std::vector<int,std::allocator<int> > const &getMarkers() const;
    _inline float getMin() const;
    _inline float getMax() const;
    _inline unsigned __int32 getNumChildren() const;
    _inline EffectAnimation const *getChild(unsigned __int32) const;
    typedef std::vector<EffectAnimation const *,std::allocator<EffectAnimation const *> > ChildrenCont;
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_parent; // 0x18
    float m_length; // 0x30
    float m_ooLength; // 0x34
    bool m_bLoop; // 0x38
    float m_min; // 0x3C
    float m_max; // 0x40
    std::vector<int,std::allocator<int> > m_markers; // 0x44
    std::vector<EffectAnimation const *,std::allocator<EffectAnimation const *> > m_children; // 0x50
public:
    _inline ~EffectAnimation(); /* compiler_generated() */
    EffectAnimation &operator=(EffectAnimation const &); /* compiler_generated() */
};
static_assert(sizeof(EffectAnimation) == 92, "Invalid EffectAnimation size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_517FB4(EffectAnimation *const, char const *);
_inline void EffectAnimation::setName(char const *) // 0x517FB4
{
    mangled_assert("?setName@EffectAnimation@@QAEXPBD@Z");
    todo("implement");
    _sub_517FB4(this, arg);
}

_extern void _sub_517FD1(EffectAnimation *const, char const *);
_inline void EffectAnimation::setParent(char const *) // 0x517FD1
{
    mangled_assert("?setParent@EffectAnimation@@QAEXPBD@Z");
    todo("implement");
    _sub_517FD1(this, arg);
}

_extern void _sub_517F82(EffectAnimation *const, float);
_inline void EffectAnimation::setLength(float) // 0x517F82
{
    mangled_assert("?setLength@EffectAnimation@@QAEXM@Z");
    todo("implement");
    _sub_517F82(this, arg);
}

_extern void _sub_517FA1(EffectAnimation *const, bool);
_inline void EffectAnimation::setLooping(bool) // 0x517FA1
{
    mangled_assert("?setLooping@EffectAnimation@@QAEX_N@Z");
    todo("implement");
    _sub_517FA1(this, arg);
}

_extern void _sub_517FEF(EffectAnimation *const, float, float);
_inline void EffectAnimation::setRange(float, float) // 0x517FEF
{
    mangled_assert("?setRange@EffectAnimation@@QAEXMM@Z");
    todo("implement");
    _sub_517FEF(this, arg, arg);
}

_extern char const *_sub_516447(EffectAnimation const *const);
_inline char const *EffectAnimation::getName() const // 0x516447
{
    mangled_assert("?getName@EffectAnimation@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_516447(this);
    return __result;
}

_extern char const *_sub_516460(EffectAnimation const *const);
_inline char const *EffectAnimation::getParent() const // 0x516460
{
    mangled_assert("?getParent@EffectAnimation@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_516460(this);
    return __result;
}

_extern float _sub_51643B(EffectAnimation const *const);
_inline float EffectAnimation::getLength() const // 0x51643B
{
    mangled_assert("?getLength@EffectAnimation@@QBEMXZ");
    todo("implement");
    float __result = _sub_51643B(this);
    return __result;
}

_extern float _sub_51645C(EffectAnimation const *const);
_inline float EffectAnimation::getOneOverLength() const // 0x51645C
{
    mangled_assert("?getOneOverLength@EffectAnimation@@QBEMXZ");
    todo("implement");
    float __result = _sub_51645C(this);
    return __result;
}

_extern bool _sub_51646C(EffectAnimation const *const);
_inline bool EffectAnimation::isLooping() const // 0x51646C
{
    mangled_assert("?isLooping@EffectAnimation@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_51646C(this);
    return __result;
}

_extern std::vector<int,std::allocator<int> > const &_sub_518C19(EffectAnimation const *const);
_inline std::vector<int,std::allocator<int> > const &EffectAnimation::getMarkers() const // 0x518C19
{
    mangled_assert("?getMarkers@EffectAnimation@@QBEABV?$vector@HV?$allocator@H@std@@@std@@XZ");
    todo("implement");
    std::vector<int,std::allocator<int> > const & __result = _sub_518C19(this);
    return __result;
}

_extern float _sub_516443(EffectAnimation const *const);
_inline float EffectAnimation::getMin() const // 0x516443
{
    mangled_assert("?getMin@EffectAnimation@@QBEMXZ");
    todo("implement");
    float __result = _sub_516443(this);
    return __result;
}

_extern float _sub_51643F(EffectAnimation const *const);
_inline float EffectAnimation::getMax() const // 0x51643F
{
    mangled_assert("?getMax@EffectAnimation@@QBEMXZ");
    todo("implement");
    float __result = _sub_51643F(this);
    return __result;
}

_extern unsigned __int32 _sub_516452(EffectAnimation const *const);
_inline unsigned __int32 EffectAnimation::getNumChildren() const // 0x516452
{
    mangled_assert("?getNumChildren@EffectAnimation@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_516452(this);
    return __result;
}

_extern EffectAnimation const *_sub_51641E(EffectAnimation const *const, unsigned __int32);
_inline EffectAnimation const *EffectAnimation::getChild(unsigned __int32) const // 0x51641E
{
    mangled_assert("?getChild@EffectAnimation@@QBEPBV1@I@Z");
    todo("implement");
    EffectAnimation const * __result = _sub_51641E(this, arg);
    return __result;
}

/* ---------- private code */

#endif // __EFFECTANIMATION_H__
#endif
