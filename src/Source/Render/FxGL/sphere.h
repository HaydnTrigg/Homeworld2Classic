#if 0
#ifndef __SPHERE_H__
#define __SPHERE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Spheref
{
public:
    Spheref(vector3 const *, __int32);
    Spheref(vector3 const &, float);
    _inline Spheref();
    void Build(vector3 const *, __int32);
    void Transform(matrix4 const &);
    _inline vector3 const &GetCenter() const;
    _inline void SetCenter(vector3 const &);
    _inline float GetRadius() const;
    _inline void SetRadius(float);
    Spheref const &operator+=(Spheref const &);
private:
    vector3 c; // 0x0
    float r; // 0xC
};
static_assert(sizeof(Spheref) == 16, "Invalid Spheref size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern vector3 const &_sub_6DCDDC(Spheref const *const);
_inline vector3 const &Spheref::GetCenter() const // 0x6DCDDC
{
    mangled_assert("?GetCenter@Spheref@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6DCDDC(this);
    return __result;
}

_extern void _sub_6DE21B(Spheref *const, vector3 const &);
_inline void Spheref::SetCenter(vector3 const &) // 0x6DE21B
{
    mangled_assert("?SetCenter@Spheref@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_6DE21B(this, arg);
}

_extern float _sub_6DCE24(Spheref const *const);
_inline float Spheref::GetRadius() const // 0x6DCE24
{
    mangled_assert("?GetRadius@Spheref@@QBEMXZ");
    todo("implement");
    float __result = _sub_6DCE24(this);
    return __result;
}

_extern void _sub_6DE2EC(Spheref *const, float);
_inline void Spheref::SetRadius(float) // 0x6DE2EC
{
    mangled_assert("?SetRadius@Spheref@@QAEXM@Z");
    todo("implement");
    _sub_6DE2EC(this, arg);
}

_extern _sub_6DBEB7(Spheref *const);
_inline Spheref::Spheref() // 0x6DBEB7
{
    mangled_assert("??0Spheref@@QAE@XZ");
    todo("implement");
    _sub_6DBEB7(this);
}

/* ---------- private code */

#endif // __SPHERE_H__
#endif
