#if 0
#ifndef __MARKERINSTANCE_H__
#define __MARKERINSTANCE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MarkerInstance
{
public:
    MarkerInstance();
    _inline void setTransform(matrix4 const &);
    _inline matrix4 const &getTransform() const;
private:
    matrix4 m_transform; // 0x0
    vector3 m_translation; // 0x40
    vector3 m_rotation; // 0x4C
};
static_assert(sizeof(MarkerInstance) == 88, "Invalid MarkerInstance size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_518E24(MarkerInstance *const, matrix4 const &);
_inline void MarkerInstance::setTransform(matrix4 const &) // 0x518E24
{
    mangled_assert("?setTransform@MarkerInstance@@QAEXABVmatrix4@@@Z");
    todo("implement");
    _sub_518E24(this, arg);
}

_extern matrix4 const &_sub_518C23(MarkerInstance const *const);
_inline matrix4 const &MarkerInstance::getTransform() const // 0x518C23
{
    mangled_assert("?getTransform@MarkerInstance@@QBEABVmatrix4@@XZ");
    todo("implement");
    matrix4 const & __result = _sub_518C23(this);
    return __result;
}

/* ---------- private code */

#endif // __MARKERINSTANCE_H__
#endif
