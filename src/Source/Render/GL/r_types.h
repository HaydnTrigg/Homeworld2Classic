#if 0
#ifndef __R_TYPES_H__
#define __R_TYPES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct FatVertex
{
    vector4 v; // 0x0
    vector4 n; // 0x10
    vector4 c; // 0x20
    vector2 uv[4]; // 0x30
    vector3 t; // 0x50
    vector3 bn; // 0x5C
    void vset(float, float);
    void vset(float, float, float);
    void vset(vector2 const &);
    void vset(vector3 const &);
    void vset(vector4 const &);
    void nset(float, float, float);
    void nset(vector3 const &);
    void cset(float, float, float);
    void cset(float, float, float, float);
    void cset(vector3 const &);
    void cset(vector4 const &);
    void uvset(__int32, vector2 const &);
    void uvset(__int32, float, float);
    void tset(float, float, float);
    void tset(vector3 const &);
    void bnset(vector3 const &);
    void bset(float, float, float);
    FatVertex(); /* compiler_generated() */
};
static_assert(sizeof(FatVertex) == 104, "Invalid FatVertex size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __R_TYPES_H__
/* combined */
#ifndef __R_TYPES_H__
#define __R_TYPES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct FatVertex
{
    vector4 v; // 0x0
    vector4 n; // 0x10
    vector4 c; // 0x20
    vector2 uv[4]; // 0x30
    vector3 t; // 0x50
    vector3 bn; // 0x5C
    _inline void vset(float, float);
    _inline void vset(float, float, float);
    void vset(vector2 const &);
    _inline void vset(vector3 const &);
    void vset(vector4 const &);
    void nset(float, float, float);
    void nset(vector3 const &);
    _inline void cset(float, float, float);
    _inline void cset(float, float, float, float);
    void cset(vector3 const &);
    _inline void cset(vector4 const &);
    _inline void uvset(__int32, vector2 const &);
    _inline void uvset(__int32, float, float);
    void tset(float, float, float);
    void tset(vector3 const &);
    void bnset(vector3 const &);
    void bset(float, float, float);
    _inline FatVertex(); /* compiler_generated() */
};
static_assert(sizeof(FatVertex) == 104, "Invalid FatVertex size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void FatVertex::vset(vector3 const &) // 0x5F5BC6
{
    mangled_assert("?vset@FatVertex@@QAEXABVvector3@@@Z");
    todo("implement");
}

_inline void FatVertex::vset(float, float, float) // 0x442646
{
    mangled_assert("?vset@FatVertex@@QAEXMMM@Z");
    todo("implement");
}

_inline void FatVertex::vset(float, float) // 0x5DF8CA
{
    mangled_assert("?vset@FatVertex@@QAEXMM@Z");
    todo("implement");
}

_inline void FatVertex::cset(vector4 const &) // 0x5F2153
{
    mangled_assert("?cset@FatVertex@@QAEXABVvector4@@@Z");
    todo("implement");
}

_inline void FatVertex::cset(float, float, float, float) // 0x444EB8
{
    mangled_assert("?cset@FatVertex@@QAEXMMMM@Z");
    todo("implement");
}

_inline void FatVertex::cset(float, float, float) // 0x68F0F3
{
    mangled_assert("?cset@FatVertex@@QAEXMMM@Z");
    todo("implement");
}

_inline void FatVertex::uvset(__int32, float, float) // 0x4469F3
{
    mangled_assert("?uvset@FatVertex@@QAEXHMM@Z");
    todo("implement");
}

_inline void FatVertex::uvset(__int32, vector2 const &) // 0x68F11E
{
    mangled_assert("?uvset@FatVertex@@QAEXHABVvector2@@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __R_TYPES_H__
/* combined */
#ifndef __R_TYPES_H__
#define __R_TYPES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct FatVertex
{
    vector4 v; // 0x0
    vector4 n; // 0x10
    vector4 c; // 0x20
    vector2 uv[4]; // 0x30
    vector3 t; // 0x50
    vector3 bn; // 0x5C
    _inline void vset(float, float);
    _inline void vset(float, float, float);
    void vset(vector2 const &);
    _inline void vset(vector3 const &);
    void vset(vector4 const &);
    _inline void nset(float, float, float);
    _inline void nset(vector3 const &);
    void cset(float, float, float);
    _inline void cset(float, float, float, float);
    void cset(vector3 const &);
    _inline void cset(vector4 const &);
    void uvset(__int32, vector2 const &);
    _inline void uvset(__int32, float, float);
    void tset(float, float, float);
    void tset(vector3 const &);
    void bnset(vector3 const &);
    void bset(float, float, float);
    _inline FatVertex(); /* compiler_generated() */
};
static_assert(sizeof(FatVertex) == 104, "Invalid FatVertex size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void FatVertex::vset(vector3 const &) // 0x100AB000
{
    mangled_assert("?vset@FatVertex@@QAEXABVvector3@@@Z");
    todo("implement");
}

_inline void FatVertex::vset(float, float, float) // 0x10049960
{
    mangled_assert("?vset@FatVertex@@QAEXMMM@Z");
    todo("implement");
}

_inline void FatVertex::vset(float, float) // 0x100A4D20
{
    mangled_assert("?vset@FatVertex@@QAEXMM@Z");
    todo("implement");
}

_inline void FatVertex::nset(vector3 const &) // 0x100A9580
{
    mangled_assert("?nset@FatVertex@@QAEXABVvector3@@@Z");
    todo("implement");
}

_inline void FatVertex::nset(float, float, float) // 0x100AF2C0
{
    mangled_assert("?nset@FatVertex@@QAEXMMM@Z");
    todo("implement");
}

_inline void FatVertex::cset(vector4 const &) // 0x10048940
{
    mangled_assert("?cset@FatVertex@@QAEXABVvector4@@@Z");
    todo("implement");
}

_inline void FatVertex::cset(float, float, float, float) // 0x100A8580
{
    mangled_assert("?cset@FatVertex@@QAEXMMMM@Z");
    todo("implement");
}

_inline void FatVertex::uvset(__int32, float, float) // 0x10049940
{
    mangled_assert("?uvset@FatVertex@@QAEXHMM@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __R_TYPES_H__
#endif
