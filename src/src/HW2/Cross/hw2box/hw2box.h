#if 0
#ifndef __HW2BOX_H__
#define __HW2BOX_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class HW2Box
{
public:
    static bool Initialize(bool, __int32);
    static void Shutdown();
    static HW2Box *i();
    HW2Box(HW2Box const &); /* compiler_generated() */
protected:
    HW2Box();
    virtual ~HW2Box();
public:
    virtual void FastCopy4(void *, void const *, unsigned __int32) = 0;
    virtual void Matrix4FastMultiply(matrix4 &, matrix4 const &, matrix4 const &) const = 0;
private:
    static HW2Box *s_pHW2Box;
    static unsigned __int32 s_refCount;
public:
    HW2Box &operator=(HW2Box const &); /* compiler_generated() */
};
static_assert(sizeof(HW2Box) == 4, "Invalid HW2Box size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __HW2BOX_H__
/* combined */
#ifndef __HW2BOX_H__
#define __HW2BOX_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class HW2Box
{
public:
    static bool Initialize(bool bDisableExtensions, __int32 version);
    static void Shutdown();
    static _inline HW2Box *i();
    HW2Box(HW2Box const &); /* compiler_generated() */
protected:
    HW2Box();
    virtual ~HW2Box();
public:
    virtual void FastCopy4(void *, void const *, unsigned __int32) = 0;
    virtual void Matrix4FastMultiply(matrix4 &, matrix4 const &, matrix4 const &) const = 0;
private:
    static HW2Box *s_pHW2Box;
    static unsigned __int32 s_refCount;
public:
    HW2Box &operator=(HW2Box const &); /* compiler_generated() */
};
static_assert(sizeof(HW2Box) == 4, "Invalid HW2Box size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern HW2Box *_sub_10001393();
_inline HW2Box *HW2Box::i() // 0x10001393
{
    mangled_assert("?i@HW2Box@@SGPAV1@XZ");
    todo("implement");
    HW2Box * __result = _sub_10001393();
    return __result;
}

/* ---------- private code */

#endif // __HW2BOX_H__
#endif
