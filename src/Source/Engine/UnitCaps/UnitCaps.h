#if 0
#ifndef __UNITCAPS_H__
#define __UNITCAPS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UnitCaps :
    public Saveable
{
public:
    bool LoadUnitCap(char const *);
    unsigned __int32 GetFamilyUnitCaps(__int32, __int32) const;
    unsigned __int32 GetShipTypeUnitCaps(__int32, __int32) const;
    typedef std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > > MapIDToUnitCaps;
    typedef std::vector<std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > >,std::allocator<std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > > > > VectorRaceToUnitCaps;
private:
    std::vector<std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > >,std::allocator<std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > > > > m_familyUnitCaps; // 0x4
    std::vector<std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > >,std::allocator<std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > > > > m_shipTypeUnitCaps; // 0x10
    bool GetUnitCaps(std::vector<std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > >,std::allocator<std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > > > > const &, __int32, __int32, unsigned __int32 &) const;
    void Clear();
    void UnitCapsFamily(char const *, unsigned __int32);
    void UnitCapsFamilyOverride(char const *, char const *, unsigned __int32);
    void UnitCapsShipType(char const *, unsigned __int32);
    void UnitCapsShipTypeOverride(char const *, char const *, unsigned __int32);
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    virtual _inline char const *saveToken() override;
    static void saveUnitCapsMap(std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > > const &map, SaveGameData *saveGameData);
    static void loadUnitCapsMap(std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > > &map, SaveGameData *saveGameData);
    static void saveMap(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void loadMap(void *objectPtr, SaveGameData *saveGameData);
    UnitCaps(UnitCaps const &); /* compiler_generated() */
    _inline UnitCaps(); /* compiler_generated() */
    virtual _inline ~UnitCaps() override; /* compiler_generated() */
    UnitCaps &operator=(UnitCaps const &); /* compiler_generated() */
};
static_assert(sizeof(UnitCaps) == 28, "Invalid UnitCaps size");

class UnitCaps :
    public Saveable
{
public:
    bool LoadUnitCap(char const *);
    unsigned __int32 GetFamilyUnitCaps(__int32, __int32) const;
    unsigned __int32 GetShipTypeUnitCaps(__int32, __int32) const;
    typedef std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > > MapIDToUnitCaps;
    typedef std::vector<std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > >,std::allocator<std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > > > > VectorRaceToUnitCaps;
private:
    std::vector<std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > >,std::allocator<std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > > > > m_familyUnitCaps; // 0x4
    std::vector<std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > >,std::allocator<std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > > > > m_shipTypeUnitCaps; // 0x10
    bool GetUnitCaps(std::vector<std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > >,std::allocator<std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > > > > const &, __int32, __int32, unsigned __int32 &) const;
    void Clear();
    void UnitCapsFamily(char const *, unsigned __int32);
    void UnitCapsFamilyOverride(char const *, char const *, unsigned __int32);
    void UnitCapsShipType(char const *, unsigned __int32);
    void UnitCapsShipTypeOverride(char const *, char const *, unsigned __int32);
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    virtual _inline char const *saveToken() override;
    static void saveUnitCapsMap(std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > > const &map, SaveGameData *saveGameData);
    static void loadUnitCapsMap(std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > > &map, SaveGameData *saveGameData);
    static void saveMap(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void loadMap(void *objectPtr, SaveGameData *saveGameData);
    UnitCaps(UnitCaps const &); /* compiler_generated() */
    _inline UnitCaps(); /* compiler_generated() */
    virtual _inline ~UnitCaps() override; /* compiler_generated() */
    UnitCaps &operator=(UnitCaps const &); /* compiler_generated() */
};
static_assert(sizeof(UnitCaps) == 28, "Invalid UnitCaps size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_64FD55(UnitCaps *const);
_inline bool UnitCaps::isDeterministic() // 0x64FD55
{
    mangled_assert("?isDeterministic@UnitCaps@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_64FD55(this);
    return __result;
}

_extern char const *_sub_6508C0(UnitCaps *const);
_inline char const *UnitCaps::saveToken() // 0x6508C0
{
    mangled_assert("?saveToken@UnitCaps@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_6508C0(this);
    return __result;
}

/* ---------- private code */

#endif // __UNITCAPS_H__
#endif
