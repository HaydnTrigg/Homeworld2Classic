#if 0
#ifndef __NEBULAGROUPBASE_H__
#define __NEBULAGROUPBASE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class NebulaGroupBase :
    public SaveObject
{
public:
    virtual bool update(float);
    void getSquadronsInside(SOBGroup &, unsigned __int32) const;
    bool areAnySquadronsInside(SOBGroup const &) const;
    bool areAnySquadronsOutside(SOBGroup const &) const;
    void removeSquadronsInside(SquadronList &) const;
    void addCollidingSquadron(Squadron *);
    NebulaGroupBase(NebulaGroupBase const &); /* compiler_generated() */
    NebulaGroupBase(SaveGameData *);
    NebulaGroupBase();
protected:
    void updateSquadronsInside(float);
    _inline bool isSquadronInside(unsigned __int32) const;
    typedef std::map<unsigned int,float,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,float> > > SquadronInsideMap;
    typedef std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,float> > > > SquadronInsideMapIterator;
    std::map<unsigned int,float,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,float> > > m_squadronsInside; // 0xC
    static void saveSquadronsInside(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreSquadronsInside(void *objectPtr, SaveGameData *saveGameData);
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    void defaultSettings();
    virtual _inline char const *saveToken() override;
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    virtual _inline ~NebulaGroupBase() override; /* compiler_generated() */
    NebulaGroupBase &operator=(NebulaGroupBase const &); /* compiler_generated() */
};
static_assert(sizeof(NebulaGroupBase) == 20, "Invalid NebulaGroupBase size");

class NebulaGroupBase :
    public SaveObject
{
public:
    virtual bool update(float);
    void getSquadronsInside(SOBGroup &, unsigned __int32) const;
    bool areAnySquadronsInside(SOBGroup const &) const;
    bool areAnySquadronsOutside(SOBGroup const &) const;
    void removeSquadronsInside(SquadronList &) const;
    void addCollidingSquadron(Squadron *);
    NebulaGroupBase(NebulaGroupBase const &); /* compiler_generated() */
    NebulaGroupBase(SaveGameData *);
    NebulaGroupBase();
protected:
    void updateSquadronsInside(float);
    _inline bool isSquadronInside(unsigned __int32) const;
    typedef std::map<unsigned int,float,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,float> > > SquadronInsideMap;
    typedef std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,float> > > > SquadronInsideMapIterator;
    std::map<unsigned int,float,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,float> > > m_squadronsInside; // 0xC
    static void saveSquadronsInside(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreSquadronsInside(void *objectPtr, SaveGameData *saveGameData);
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    void defaultSettings();
    virtual _inline char const *saveToken() override;
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    virtual _inline ~NebulaGroupBase() override; /* compiler_generated() */
    NebulaGroupBase &operator=(NebulaGroupBase const &); /* compiler_generated() */
};
static_assert(sizeof(NebulaGroupBase) == 20, "Invalid NebulaGroupBase size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_4C1F58(NebulaGroupBase const *const, unsigned __int32);
_inline bool NebulaGroupBase::isSquadronInside(unsigned __int32) const // 0x4C1F58
{
    mangled_assert("?isSquadronInside@NebulaGroupBase@@IBE_NI@Z");
    todo("implement");
    bool __result = _sub_4C1F58(this, arg);
    return __result;
}

_extern bool _sub_4C1F55(NebulaGroupBase *const);
_inline bool NebulaGroupBase::isDeterministic() // 0x4C1F55
{
    mangled_assert("?isDeterministic@NebulaGroupBase@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_4C1F55(this);
    return __result;
}

_extern char const *_sub_4C207D(NebulaGroupBase *const);
_inline char const *NebulaGroupBase::saveToken() // 0x4C207D
{
    mangled_assert("?saveToken@NebulaGroupBase@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_4C207D(this);
    return __result;
}

/* ---------- private code */

#endif // __NEBULAGROUPBASE_H__
#endif
