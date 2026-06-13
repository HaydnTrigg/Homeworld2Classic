#if 0
#ifndef __LIGHT_H__
#define __LIGHT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LightHandle
{
private:
    unsigned __int32 m_handle; // 0x0
public:
    unsigned __int32 getHandle() const;
    Light const *getLightPtr() const;
    Light *getLightPtrForModification();
    bool operator==(Light *) const;
    bool operator==(LightHandle const &) const;
    bool operator!=(Light *) const;
    bool operator!=(LightHandle const &) const;
    LightHandle();
    void assignNewHandle(Light *);
    void killHandle();
};
static_assert(sizeof(LightHandle) == 4, "Invalid LightHandle size");

class LightManager
{
public:
    enum light_bit
    {
        eKey_Light = (1 << 0),
        eFill_Light = (1 << 1),
        eAmbient_Light = (1 << 2),
        ePoint_Lights = (1 << 3),
    };
    static LightManager *i();
    static LightManager *instance();
    static bool startup();
    static bool shutdown();
    static LightHandle const InvalidHandle;
    void setMaxActiveLights(unsigned __int32);
    unsigned __int32 getMaxActiveLights() const;
    void addLight(Light *);
    LightHandle createPointLight(char const *);
    bool removeLight(LightHandle);
    void resetLights();
    bool findNamedLight(char const *, LightHandle &);
    bool findIndexedLight(unsigned __int32, LightHandle &);
    std::vector<LightHandle,std::allocator<LightHandle> > &findActiveLights(vector3 const &, float const) const;
    unsigned __int32 executeLights(rndTable &, unsigned __int32 const, unsigned __int32 const, unsigned __int32 const, vector3 const &) const;
    unsigned __int32 getLights(unsigned __int32 const, LightHandle *, unsigned __int32, vector3 const &);
    __int32 findCachedLight(LightHandle &);
    __int32 numCachedLights();
    LightManager(LightManager const &); /* compiler_generated() */
protected:
    LightManager();
    ~LightManager();
private:
    void disableAllLights(rndTable const &) const;
    typedef std::vector<Light *,std::allocator<Light *> > LightCont;
    static LightManager *m_instance;
    std::vector<Light *,std::allocator<Light *> > m_lightList; // 0x0
    __int32 m_lightCacheSize; // 0xC
    LightHandle m_lightCache[8]; // 0x10
    unsigned __int32 m_maxActiveLights; // 0x30
public:
    LightManager &operator=(LightManager const &); /* compiler_generated() */
};
static_assert(sizeof(LightManager) == 52, "Invalid LightManager size");

class Light
{
public:
    LightHandle m_handle; // 0x0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x4
    Light::Type m_type; // 0x1C
    vector3 m_position; // 0x20
    vector4 m_ambient; // 0x2C
    vector4 m_diffuse; // 0x3C
    vector4 m_specular; // 0x4C
    bool m_atten; // 0x5C
    float m_attDist; // 0x60
    vector3 m_attConst; // 0x64
    enum Type
    {
        Ambient = 0,
        Point,
        Directional,
        DirectionalAmbient,
    };
    void execute(rndTable *, __int32) const;
    void setAttenConst(float);
    static void *operator new(unsigned __int32);
    static void operator delete(void *, unsigned __int32);
    Light(Light const &); /* compiler_generated() */
    Light(); /* compiler_generated() */
    ~Light(); /* compiler_generated() */
    Light &operator=(Light const &); /* compiler_generated() */
};
static_assert(sizeof(Light) == 112, "Invalid Light size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LIGHT_H__
/* combined */
#ifndef __LIGHT_H__
#define __LIGHT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LightHandle
{
private:
    unsigned __int32 m_handle; // 0x0
public:
    _inline unsigned __int32 getHandle() const;
    Light const *getLightPtr() const;
    Light *getLightPtrForModification();
    _inline bool operator==(Light *) const;
    _inline bool operator==(LightHandle const &) const;
    _inline bool operator!=(Light *) const;
    _inline bool operator!=(LightHandle const &) const;
    _inline LightHandle();
    void assignNewHandle(Light *);
    void killHandle();
};
static_assert(sizeof(LightHandle) == 4, "Invalid LightHandle size");

class LightManager
{
public:
    enum light_bit
    {
        eKey_Light = (1 << 0),
        eFill_Light = (1 << 1),
        eAmbient_Light = (1 << 2),
        ePoint_Lights = (1 << 3),
    };
    static LightManager *i();
    static _inline LightManager *instance();
    static bool startup();
    static bool shutdown();
    static LightHandle const InvalidHandle;
    void setMaxActiveLights(unsigned __int32);
    unsigned __int32 getMaxActiveLights() const;
    void addLight(Light *);
    LightHandle createPointLight(char const *);
    bool removeLight(LightHandle);
    void resetLights();
    bool findNamedLight(char const *, LightHandle &);
    bool findIndexedLight(unsigned __int32, LightHandle &);
    std::vector<LightHandle,std::allocator<LightHandle> > &findActiveLights(vector3 const &, float const) const;
    unsigned __int32 executeLights(rndTable &, unsigned __int32 const, unsigned __int32 const, unsigned __int32 const, vector3 const &) const;
    unsigned __int32 getLights(unsigned __int32 const, LightHandle *, unsigned __int32, vector3 const &);
    __int32 findCachedLight(LightHandle &);
    _inline __int32 numCachedLights();
    _inline LightManager(LightManager const &); /* compiler_generated() */
protected:
    LightManager();
    ~LightManager();
private:
    void disableAllLights(rndTable const &) const;
    typedef std::vector<Light *,std::allocator<Light *> > LightCont;
    static LightManager *m_instance;
    std::vector<Light *,std::allocator<Light *> > m_lightList; // 0x0
    __int32 m_lightCacheSize; // 0xC
    LightHandle m_lightCache[8]; // 0x10
    unsigned __int32 m_maxActiveLights; // 0x30
public:
    _inline LightManager &operator=(LightManager const &); /* compiler_generated() */
};
static_assert(sizeof(LightManager) == 52, "Invalid LightManager size");

class Light
{
public:
    LightHandle m_handle; // 0x0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x4
    Light::Type m_type; // 0x1C
    vector3 m_position; // 0x20
    vector4 m_ambient; // 0x2C
    vector4 m_diffuse; // 0x3C
    vector4 m_specular; // 0x4C
    bool m_atten; // 0x5C
    float m_attDist; // 0x60
    vector3 m_attConst; // 0x64
    enum Type
    {
        Ambient = 0,
        Point,
        Directional,
        DirectionalAmbient,
    };
    void execute(rndTable *, __int32) const;
    void setAttenConst(float);
    static void *operator new(unsigned __int32 size);
    static void operator delete(void *p, unsigned __int32 size);
    _inline Light(Light const &); /* compiler_generated() */
    _inline Light(); /* compiler_generated() */
    _inline ~Light(); /* compiler_generated() */
    _inline Light &operator=(Light const &); /* compiler_generated() */
};
static_assert(sizeof(Light) == 112, "Invalid Light size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern unsigned __int32 _sub_10051D30(LightHandle const *const);
_inline unsigned __int32 LightHandle::getHandle() const // 0x10051D30
{
    mangled_assert("?getHandle@LightHandle@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_10051D30(this);
    return __result;
}

_extern bool _sub_10050ED0(LightHandle const *const, LightHandle const &);
_inline bool LightHandle::operator==(LightHandle const &) const // 0x10050ED0
{
    mangled_assert("??8LightHandle@@QBE_NABV0@@Z");
    todo("implement");
    bool __result = _sub_10050ED0(this, arg);
    return __result;
}

_extern bool _sub_10050F20(LightHandle const *const, LightHandle const &);
_inline bool LightHandle::operator!=(LightHandle const &) const // 0x10050F20
{
    mangled_assert("??9LightHandle@@QBE_NABV0@@Z");
    todo("implement");
    bool __result = _sub_10050F20(this, arg);
    return __result;
}

_extern bool _sub_10050EE0(LightHandle const *const, Light *);
_inline bool LightHandle::operator==(Light *) const // 0x10050EE0
{
    mangled_assert("??8LightHandle@@QBE_NPAVLight@@@Z");
    todo("implement");
    bool __result = _sub_10050EE0(this, arg);
    return __result;
}

_extern bool _sub_10050F30(LightHandle const *const, Light *);
_inline bool LightHandle::operator!=(Light *) const // 0x10050F30
{
    mangled_assert("??9LightHandle@@QBE_NPAVLight@@@Z");
    todo("implement");
    bool __result = _sub_10050F30(this, arg);
    return __result;
}

_extern _sub_100509D0(LightHandle *const);
_inline LightHandle::LightHandle() // 0x100509D0
{
    mangled_assert("??0LightHandle@@QAE@XZ");
    todo("implement");
    _sub_100509D0(this);
}

_extern LightManager *_sub_10052990();
_inline LightManager *LightManager::instance() // 0x10052990
{
    mangled_assert("?instance@LightManager@@SGPAV1@XZ");
    todo("implement");
    LightManager * __result = _sub_10052990();
    return __result;
}

_extern __int32 _sub_10052B60(LightManager *const);
_inline __int32 LightManager::numCachedLights() // 0x10052B60
{
    mangled_assert("?numCachedLights@LightManager@@QAEHXZ");
    todo("implement");
    __int32 __result = _sub_10052B60(this);
    return __result;
}

/* ---------- private code */

#endif // __LIGHT_H__
#endif
