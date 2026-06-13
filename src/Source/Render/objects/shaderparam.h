#if 0
#ifndef __SHADERPARAM_H__
#define __SHADERPARAM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ShaderParam
{
public:
    enum paramType
    {
        paramTypeLong = 0,
        paramTypeFloat,
        paramTypeTexture,
    };
    ShaderParam(ShaderParam const &); /* compiler_generated() */
    ShaderParam(ShaderParam::paramType, char *, void *);
    ~ShaderParam();
    void addInstance(void *);
    char *getName();
    ShaderParam::paramType getType();
    void *getValue();
    void setValue(void *);
    void updateInstances();
    __int32 getNumInstances();
    void *getInstance(__int32);
    void clearInstances();
private:
    ShaderParam::paramType m_type; // 0x0
    char m_paramName[64]; // 0x4
    void *m_data; // 0x44
    std::vector<void *,std::allocator<void *> > m_instanceList; // 0x48
public:
    ShaderParam &operator=(ShaderParam const &); /* compiler_generated() */
};
static_assert(sizeof(ShaderParam) == 84, "Invalid ShaderParam size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SHADERPARAM_H__
/* combined */
#ifndef __SHADERPARAM_H__
#define __SHADERPARAM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ShaderParam
{
public:
    enum paramType
    {
        paramTypeLong = 0,
        paramTypeFloat,
        paramTypeTexture,
    };
    _inline ShaderParam(ShaderParam const &); /* compiler_generated() */
    ShaderParam(ShaderParam::paramType, char *, void *);
    ~ShaderParam();
    void addInstance(void *);
    _inline char *getName();
    _inline ShaderParam::paramType getType();
    void *getValue();
    void setValue(void *);
    void updateInstances();
    _inline __int32 getNumInstances();
    _inline void *getInstance(__int32);
    _inline void clearInstances();
private:
    ShaderParam::paramType m_type; // 0x0
    char m_paramName[64]; // 0x4
    void *m_data; // 0x44
    std::vector<void *,std::allocator<void *> > m_instanceList; // 0x48
public:
    _inline ShaderParam &operator=(ShaderParam const &); /* compiler_generated() */
};
static_assert(sizeof(ShaderParam) == 84, "Invalid ShaderParam size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern char *_sub_10032360(ShaderParam *const);
_inline char *ShaderParam::getName() // 0x10032360
{
    mangled_assert("?getName@ShaderParam@@QAEPADXZ");
    todo("implement");
    char * __result = _sub_10032360(this);
    return __result;
}

_extern ShaderParam::paramType _sub_100323E0(ShaderParam *const);
_inline ShaderParam::paramType ShaderParam::getType() // 0x100323E0
{
    mangled_assert("?getType@ShaderParam@@QAE?AW4paramType@1@XZ");
    todo("implement");
    ShaderParam::paramType __result = _sub_100323E0(this);
    return __result;
}

_extern __int32 _sub_10032380(ShaderParam *const);
_inline __int32 ShaderParam::getNumInstances() // 0x10032380
{
    mangled_assert("?getNumInstances@ShaderParam@@QAEHXZ");
    todo("implement");
    __int32 __result = _sub_10032380(this);
    return __result;
}

_extern void *_sub_10032350(ShaderParam *const, __int32);
_inline void *ShaderParam::getInstance(__int32) // 0x10032350
{
    mangled_assert("?getInstance@ShaderParam@@QAEPAXH@Z");
    todo("implement");
    void * __result = _sub_10032350(this, arg);
    return __result;
}

_extern void _sub_100318A0(ShaderParam *const);
_inline void ShaderParam::clearInstances() // 0x100318A0
{
    mangled_assert("?clearInstances@ShaderParam@@QAEXXZ");
    todo("implement");
    _sub_100318A0(this);
}

/* ---------- private code */

#endif // __SHADERPARAM_H__
#endif
