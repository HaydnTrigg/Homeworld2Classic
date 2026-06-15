#if 0
#ifndef __STATICMODELCOMPONENTREGISTRY_H__
#define __STATICMODELCOMPONENTREGISTRY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class StaticModelSharedComponentRegistry<SobStatic::Model>
{
public:
    typedef boost::shared_ptr<SobStatic::Model> TPtr;
    typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,boost::shared_ptr<SobStatic::Model>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobStatic::Model> > > > ComponentMap;
    StaticModelSharedComponentRegistry<SobStatic::Model>(StaticModelSharedComponentRegistry<SobStatic::Model> const &); /* compiler_generated() */
    _inline StaticModelSharedComponentRegistry<SobStatic::Model>();
    _inline ~StaticModelSharedComponentRegistry<SobStatic::Model>();
    _inline boost::shared_ptr<SobStatic::Model> Register(char const *, SobStatic::Model *);
    _inline boost::shared_ptr<SobStatic::Model> Find(char const *);
private:
    std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,boost::shared_ptr<SobStatic::Model>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobStatic::Model> > > > m_componentMap; // 0x0
public:
    StaticModelSharedComponentRegistry<SobStatic::Model> &operator=(StaticModelSharedComponentRegistry<SobStatic::Model> const &); /* compiler_generated() */
};
static_assert(sizeof(StaticModelSharedComponentRegistry<SobStatic::Model>) == 8, "Invalid StaticModelSharedComponentRegistry<SobStatic::Model> size");

class StaticModelSharedComponentRegistry<SobWithMeshStatic::Model>
{
public:
    typedef boost::shared_ptr<SobWithMeshStatic::Model> TPtr;
    typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,boost::shared_ptr<SobWithMeshStatic::Model>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobWithMeshStatic::Model> > > > ComponentMap;
    StaticModelSharedComponentRegistry<SobWithMeshStatic::Model>(StaticModelSharedComponentRegistry<SobWithMeshStatic::Model> const &); /* compiler_generated() */
    _inline StaticModelSharedComponentRegistry<SobWithMeshStatic::Model>();
    _inline ~StaticModelSharedComponentRegistry<SobWithMeshStatic::Model>();
    _inline boost::shared_ptr<SobWithMeshStatic::Model> Register(char const *, SobWithMeshStatic::Model *);
    _inline boost::shared_ptr<SobWithMeshStatic::Model> Find(char const *);
private:
    std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,boost::shared_ptr<SobWithMeshStatic::Model>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobWithMeshStatic::Model> > > > m_componentMap; // 0x0
public:
    StaticModelSharedComponentRegistry<SobWithMeshStatic::Model> &operator=(StaticModelSharedComponentRegistry<SobWithMeshStatic::Model> const &); /* compiler_generated() */
};
static_assert(sizeof(StaticModelSharedComponentRegistry<SobWithMeshStatic::Model>) == 8, "Invalid StaticModelSharedComponentRegistry<SobWithMeshStatic::Model> size");

class StaticModelComponentRegistry<ShipHoldStatic>
{
public:
    typedef ShipHoldStatic *TPtr;
    typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,ShipHoldStatic *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ShipHoldStatic *> > > ComponentMap;
    StaticModelComponentRegistry<ShipHoldStatic>(StaticModelComponentRegistry<ShipHoldStatic> const &); /* compiler_generated() */
    _inline StaticModelComponentRegistry<ShipHoldStatic>();
    _inline ~StaticModelComponentRegistry<ShipHoldStatic>();
    _inline ShipHoldStatic *Register(char const *, ShipHoldStatic *);
    _inline ShipHoldStatic *Find(char const *);
private:
    std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,ShipHoldStatic *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ShipHoldStatic *> > > m_componentMap; // 0x0
public:
    StaticModelComponentRegistry<ShipHoldStatic> &operator=(StaticModelComponentRegistry<ShipHoldStatic> const &); /* compiler_generated() */
};
static_assert(sizeof(StaticModelComponentRegistry<ShipHoldStatic>) == 8, "Invalid StaticModelComponentRegistry<ShipHoldStatic> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline StaticModelSharedComponentRegistry<SobStatic::Model>::StaticModelSharedComponentRegistry<SobStatic::Model>() // 0x480F5F
{
    mangled_assert("??0?$StaticModelSharedComponentRegistry@VModel@SobStatic@@@@QAE@XZ");
    todo("implement");
}

_inline StaticModelSharedComponentRegistry<SobWithMeshStatic::Model>::StaticModelSharedComponentRegistry<SobWithMeshStatic::Model>() // 0x480F74
{
    mangled_assert("??0?$StaticModelSharedComponentRegistry@VModel@SobWithMeshStatic@@@@QAE@XZ");
    todo("implement");
}

_inline StaticModelSharedComponentRegistry<SobStatic::Model>::~StaticModelSharedComponentRegistry<SobStatic::Model>() // 0x481356
{
    mangled_assert("??1?$StaticModelSharedComponentRegistry@VModel@SobStatic@@@@QAE@XZ");
    todo("implement");
}

_inline StaticModelSharedComponentRegistry<SobWithMeshStatic::Model>::~StaticModelSharedComponentRegistry<SobWithMeshStatic::Model>() // 0x48135B
{
    mangled_assert("??1?$StaticModelSharedComponentRegistry@VModel@SobWithMeshStatic@@@@QAE@XZ");
    todo("implement");
}

_inline boost::shared_ptr<SobStatic::Model> StaticModelSharedComponentRegistry<SobStatic::Model>::Register(char const *, SobStatic::Model *) // 0x481CDF
{
    mangled_assert("?Register@?$StaticModelSharedComponentRegistry@VModel@SobStatic@@@@QAE?AV?$shared_ptr@VModel@SobStatic@@@boost@@PBDPAVModel@SobStatic@@@Z");
    todo("implement");
}

_inline boost::shared_ptr<SobWithMeshStatic::Model> StaticModelSharedComponentRegistry<SobWithMeshStatic::Model>::Register(char const *, SobWithMeshStatic::Model *) // 0x481D6F
{
    mangled_assert("?Register@?$StaticModelSharedComponentRegistry@VModel@SobWithMeshStatic@@@@QAE?AV?$shared_ptr@VModel@SobWithMeshStatic@@@boost@@PBDPAVModel@SobWithMeshStatic@@@Z");
    todo("implement");
}

_inline boost::shared_ptr<SobStatic::Model> StaticModelSharedComponentRegistry<SobStatic::Model>::Find(char const *) // 0x481B74
{
    mangled_assert("?Find@?$StaticModelSharedComponentRegistry@VModel@SobStatic@@@@QAE?AV?$shared_ptr@VModel@SobStatic@@@boost@@PBD@Z");
    todo("implement");
}

_inline boost::shared_ptr<SobWithMeshStatic::Model> StaticModelSharedComponentRegistry<SobWithMeshStatic::Model>::Find(char const *) // 0x481BE5
{
    mangled_assert("?Find@?$StaticModelSharedComponentRegistry@VModel@SobWithMeshStatic@@@@QAE?AV?$shared_ptr@VModel@SobWithMeshStatic@@@boost@@PBD@Z");
    todo("implement");
}

_inline StaticModelComponentRegistry<ShipHoldStatic>::StaticModelComponentRegistry<ShipHoldStatic>() // 0x480F4A
{
    mangled_assert("??0?$StaticModelComponentRegistry@VShipHoldStatic@@@@QAE@XZ");
    todo("implement");
}

_inline StaticModelComponentRegistry<ShipHoldStatic>::~StaticModelComponentRegistry<ShipHoldStatic>() // 0x481351
{
    mangled_assert("??1?$StaticModelComponentRegistry@VShipHoldStatic@@@@QAE@XZ");
    todo("implement");
}

_inline ShipHoldStatic *StaticModelComponentRegistry<ShipHoldStatic>::Register(char const *, ShipHoldStatic *) // 0x481C97
{
    mangled_assert("?Register@?$StaticModelComponentRegistry@VShipHoldStatic@@@@QAEPAVShipHoldStatic@@PBDPAV2@@Z");
    todo("implement");
}

_inline ShipHoldStatic *StaticModelComponentRegistry<ShipHoldStatic>::Find(char const *) // 0x481B36
{
    mangled_assert("?Find@?$StaticModelComponentRegistry@VShipHoldStatic@@@@QAEPAVShipHoldStatic@@PBD@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __STATICMODELCOMPONENTREGISTRY_H__
#endif
