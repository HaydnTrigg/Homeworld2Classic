#if 0
#ifndef __FXGL_H__
#define __FXGL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FXGL
{
public:
    static _inline void set(rndTable *gl);
    static _inline rndTable *i();
    static _inline void setView(matrix4 const &view);
    static _inline matrix4 const &getView();
    static _inline void setPosition(vector3 const &position);
    static _inline vector3 const &getPosition();
    static _inline void setForward(vector3 const &forward);
    static _inline vector3 const &getForward();
    static _inline void setProjectionMatrix(matrix4 const &proj);
    static _inline matrix4 const &getProjectionMatrix();
    static _inline void setAlternateProjectionMatrix(matrix4 const &proj);
    static _inline matrix4 const &getAlternateProjectionMatrix();
private:
    static rndTable *m_gl;
    static matrix4 m_view;
    static vector3 m_position;
    static vector3 m_forward;
    static matrix4 m_projectionMatrix;
    static matrix4 m_alternateProjectionMatrix;
};
static_assert(sizeof(FXGL) == 1, "Invalid FXGL size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_6257CB(rndTable *);
_inline void FXGL::set(rndTable *gl) // 0x6257CB
{
    mangled_assert("?set@FXGL@@SGXPAUrndTable@@@Z");
    todo("implement");
    _sub_6257CB(gl);
}

_extern rndTable *_sub_6E0C8F();
_inline rndTable *FXGL::i() // 0x6E0C8F
{
    mangled_assert("?i@FXGL@@SGPAUrndTable@@XZ");
    todo("implement");
    rndTable * __result = _sub_6E0C8F();
    return __result;
}

_extern void _sub_6E1289(matrix4 const &);
_inline void FXGL::setView(matrix4 const &view) // 0x6E1289
{
    mangled_assert("?setView@FXGL@@SGXABVmatrix4@@@Z");
    todo("implement");
    _sub_6E1289(view);
}

_extern matrix4 const &_sub_6E8B12();
_inline matrix4 const &FXGL::getView() // 0x6E8B12
{
    mangled_assert("?getView@FXGL@@SGABVmatrix4@@XZ");
    todo("implement");
    matrix4 const & __result = _sub_6E8B12();
    return __result;
}

_extern void _sub_6E1261(vector3 const &);
_inline void FXGL::setPosition(vector3 const &position) // 0x6E1261
{
    mangled_assert("?setPosition@FXGL@@SGXABVvector3@@@Z");
    todo("implement");
    _sub_6E1261(position);
}

_extern vector3 const &_sub_6E8B06();
_inline vector3 const &FXGL::getPosition() // 0x6E8B06
{
    mangled_assert("?getPosition@FXGL@@SGABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6E8B06();
    return __result;
}

_extern void _sub_6E124E(vector3 const &);
_inline void FXGL::setForward(vector3 const &forward) // 0x6E124E
{
    mangled_assert("?setForward@FXGL@@SGXABVvector3@@@Z");
    todo("implement");
    _sub_6E124E(forward);
}

_extern vector3 const &_sub_6E8B00();
_inline vector3 const &FXGL::getForward() // 0x6E8B00
{
    mangled_assert("?getForward@FXGL@@SGABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6E8B00();
    return __result;
}

_extern void _sub_6E1274(matrix4 const &);
_inline void FXGL::setProjectionMatrix(matrix4 const &proj) // 0x6E1274
{
    mangled_assert("?setProjectionMatrix@FXGL@@SGXABVmatrix4@@@Z");
    todo("implement");
    _sub_6E1274(proj);
}

_extern matrix4 const &_sub_6E8B0C();
_inline matrix4 const &FXGL::getProjectionMatrix() // 0x6E8B0C
{
    mangled_assert("?getProjectionMatrix@FXGL@@SGABVmatrix4@@XZ");
    todo("implement");
    matrix4 const & __result = _sub_6E8B0C();
    return __result;
}

_extern void _sub_6E1239(matrix4 const &);
_inline void FXGL::setAlternateProjectionMatrix(matrix4 const &proj) // 0x6E1239
{
    mangled_assert("?setAlternateProjectionMatrix@FXGL@@SGXABVmatrix4@@@Z");
    todo("implement");
    _sub_6E1239(proj);
}

_extern matrix4 const &_sub_6E8AFA();
_inline matrix4 const &FXGL::getAlternateProjectionMatrix() // 0x6E8AFA
{
    mangled_assert("?getAlternateProjectionMatrix@FXGL@@SGABVmatrix4@@XZ");
    todo("implement");
    matrix4 const & __result = _sub_6E8AFA();
    return __result;
}

/* ---------- private code */

#endif // __FXGL_H__
#endif
