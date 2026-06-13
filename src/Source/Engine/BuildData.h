#if 0
#ifndef __BUILDDATA_H__
#define __BUILDDATA_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum BuildType
{
    BuildShip = 0,
    BuildSubSystem,
    NUMBER_OF_BUILD_TYPES,
};

/* ---------- definitions */

class BuildData :
    public DependencyData
{
public:
    BuildData(BuildData const &); /* compiler_generated() */
    BuildData(SaveGameData *);
private:
    BuildData();
public:
    virtual ~BuildData() override;
    _inline unsigned __int32 const getDisplayPriority() const;
    _inline wchar_t const *getDisplayedName() const;
    _inline wchar_t const *getDescription() const;
    _inline BuildType const getTypeToBuild() const;
    _inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getThingToBuild() const;
    _inline __int32 getDisplayFamilyIndex() const;
    _inline __int32 getBuildFamilyIndex() const;
    _inline __int32 getUCFamilyIndex() const;
    _inline __int32 getUCShipTypeIndex() const;
    _inline unsigned __int32 getTypeId() const;
    _inline unsigned __int32 getGenericSubSystemTypeId() const;
    __int32 ReadBuildDataFromScript(lua_State *);
    bool allDependenciesMetNoBuild(Ship *) const;
    virtual bool allDependenciesMet(Ship *) const override;
    SubSystemType getSubSystemType();
    static void CreateBuildData(LuaConfig &lc, Player *player);
private:
    unsigned __int32 m_nDisplayPriority; // 0x34
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_DisplayedName; // 0x38
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_Description; // 0x50
    BuildType m_TypeToBuild; // 0x68
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_ThingToBuild; // 0x6C
    SubSystemType m_SubSystemType; // 0x84
    __int32 m_displayFamilyIndex; // 0x88
    __int32 m_buildFamilyIndex; // 0x8C
    __int32 m_ucFamilyIndex; // 0x90
    __int32 m_ucShipTypeIndex; // 0x94
    unsigned __int32 m_typeid; // 0x98
    unsigned __int32 m_genericTypeId; // 0x9C
public:
    void defaultSettings();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    BuildData &operator=(BuildData const &); /* compiler_generated() */
};
static_assert(sizeof(BuildData) == 160, "Invalid BuildData size");

class BuildData :
    public DependencyData
{
public:
    BuildData(BuildData const &); /* compiler_generated() */
    BuildData(SaveGameData *);
private:
    BuildData();
public:
    virtual ~BuildData() override;
    _inline unsigned __int32 const getDisplayPriority() const;
    _inline wchar_t const *getDisplayedName() const;
    _inline wchar_t const *getDescription() const;
    _inline BuildType const getTypeToBuild() const;
    _inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getThingToBuild() const;
    _inline __int32 getDisplayFamilyIndex() const;
    _inline __int32 getBuildFamilyIndex() const;
    _inline __int32 getUCFamilyIndex() const;
    _inline __int32 getUCShipTypeIndex() const;
    _inline unsigned __int32 getTypeId() const;
    _inline unsigned __int32 getGenericSubSystemTypeId() const;
    __int32 ReadBuildDataFromScript(lua_State *);
    bool allDependenciesMetNoBuild(Ship *) const;
    virtual bool allDependenciesMet(Ship *) const override;
    SubSystemType getSubSystemType();
    static void CreateBuildData(LuaConfig &lc, Player *player);
private:
    unsigned __int32 m_nDisplayPriority; // 0x34
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_DisplayedName; // 0x38
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_Description; // 0x50
    BuildType m_TypeToBuild; // 0x68
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_ThingToBuild; // 0x6C
    SubSystemType m_SubSystemType; // 0x84
    __int32 m_displayFamilyIndex; // 0x88
    __int32 m_buildFamilyIndex; // 0x8C
    __int32 m_ucFamilyIndex; // 0x90
    __int32 m_ucShipTypeIndex; // 0x94
    unsigned __int32 m_typeid; // 0x98
    unsigned __int32 m_genericTypeId; // 0x9C
public:
    void defaultSettings();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    BuildData &operator=(BuildData const &); /* compiler_generated() */
};
static_assert(sizeof(BuildData) == 160, "Invalid BuildData size");

class BuildData :
    public DependencyData
{
public:
    BuildData(BuildData const &); /* compiler_generated() */
    BuildData(SaveGameData *);
private:
    BuildData();
public:
    virtual ~BuildData() override;
    _inline unsigned __int32 const getDisplayPriority() const;
    _inline wchar_t const *getDisplayedName() const;
    _inline wchar_t const *getDescription() const;
    _inline BuildType const getTypeToBuild() const;
    _inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getThingToBuild() const;
    _inline __int32 getDisplayFamilyIndex() const;
    _inline __int32 getBuildFamilyIndex() const;
    _inline __int32 getUCFamilyIndex() const;
    _inline __int32 getUCShipTypeIndex() const;
    _inline unsigned __int32 getTypeId() const;
    _inline unsigned __int32 getGenericSubSystemTypeId() const;
    __int32 ReadBuildDataFromScript(lua_State *);
    bool allDependenciesMetNoBuild(Ship *) const;
    virtual bool allDependenciesMet(Ship *) const override;
    SubSystemType getSubSystemType();
    static void CreateBuildData(LuaConfig &lc, Player *player);
private:
    unsigned __int32 m_nDisplayPriority; // 0x34
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_DisplayedName; // 0x38
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_Description; // 0x50
    BuildType m_TypeToBuild; // 0x68
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_ThingToBuild; // 0x6C
    SubSystemType m_SubSystemType; // 0x84
    __int32 m_displayFamilyIndex; // 0x88
    __int32 m_buildFamilyIndex; // 0x8C
    __int32 m_ucFamilyIndex; // 0x90
    __int32 m_ucShipTypeIndex; // 0x94
    unsigned __int32 m_typeid; // 0x98
    unsigned __int32 m_genericTypeId; // 0x9C
public:
    void defaultSettings();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    BuildData &operator=(BuildData const &); /* compiler_generated() */
};
static_assert(sizeof(BuildData) == 160, "Invalid BuildData size");

class BuildData :
    public DependencyData
{
public:
    BuildData(BuildData const &); /* compiler_generated() */
    BuildData(SaveGameData *);
private:
    BuildData();
public:
    virtual ~BuildData() override;
    _inline unsigned __int32 const getDisplayPriority() const;
    _inline wchar_t const *getDisplayedName() const;
    _inline wchar_t const *getDescription() const;
    _inline BuildType const getTypeToBuild() const;
    _inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getThingToBuild() const;
    _inline __int32 getDisplayFamilyIndex() const;
    _inline __int32 getBuildFamilyIndex() const;
    _inline __int32 getUCFamilyIndex() const;
    _inline __int32 getUCShipTypeIndex() const;
    _inline unsigned __int32 getTypeId() const;
    _inline unsigned __int32 getGenericSubSystemTypeId() const;
    __int32 ReadBuildDataFromScript(lua_State *);
    bool allDependenciesMetNoBuild(Ship *) const;
    virtual bool allDependenciesMet(Ship *) const override;
    SubSystemType getSubSystemType();
    static void CreateBuildData(LuaConfig &lc, Player *player);
private:
    unsigned __int32 m_nDisplayPriority; // 0x34
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_DisplayedName; // 0x38
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_Description; // 0x50
    BuildType m_TypeToBuild; // 0x68
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_ThingToBuild; // 0x6C
    SubSystemType m_SubSystemType; // 0x84
    __int32 m_displayFamilyIndex; // 0x88
    __int32 m_buildFamilyIndex; // 0x8C
    __int32 m_ucFamilyIndex; // 0x90
    __int32 m_ucShipTypeIndex; // 0x94
    unsigned __int32 m_typeid; // 0x98
    unsigned __int32 m_genericTypeId; // 0x9C
public:
    void defaultSettings();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    BuildData &operator=(BuildData const &); /* compiler_generated() */
};
static_assert(sizeof(BuildData) == 160, "Invalid BuildData size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern unsigned __int32 const _sub_5855BD(BuildData const *const);
_inline unsigned __int32 const BuildData::getDisplayPriority() const // 0x5855BD
{
    mangled_assert("?getDisplayPriority@BuildData@@QBE?BIXZ");
    todo("implement");
    unsigned __int32 const __result = _sub_5855BD(this);
    return __result;
}

_extern wchar_t const *_sub_570A46(BuildData const *const);
_inline wchar_t const *BuildData::getDisplayedName() const // 0x570A46
{
    mangled_assert("?getDisplayedName@BuildData@@QBEPB_WXZ");
    todo("implement");
    wchar_t const * __result = _sub_570A46(this);
    return __result;
}

_extern wchar_t const *_sub_5855AA(BuildData const *const);
_inline wchar_t const *BuildData::getDescription() const // 0x5855AA
{
    mangled_assert("?getDescription@BuildData@@QBEPB_WXZ");
    todo("implement");
    wchar_t const * __result = _sub_5855AA(this);
    return __result;
}

_extern BuildType const _sub_510802(BuildData const *const);
_inline BuildType const BuildData::getTypeToBuild() const // 0x510802
{
    mangled_assert("?getTypeToBuild@BuildData@@QBE?BW4BuildType@@XZ");
    todo("implement");
    BuildType const __result = _sub_510802(this);
    return __result;
}

_extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &_sub_5855C8(BuildData const *const);
_inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &BuildData::getThingToBuild() const // 0x5855C8
{
    mangled_assert("?getThingToBuild@BuildData@@QBEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    todo("implement");
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const & __result = _sub_5855C8(this);
    return __result;
}

_extern __int32 _sub_5855B6(BuildData const *const);
_inline __int32 BuildData::getDisplayFamilyIndex() const // 0x5855B6
{
    mangled_assert("?getDisplayFamilyIndex@BuildData@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_5855B6(this);
    return __result;
}

_extern __int32 _sub_5855A3(BuildData const *const);
_inline __int32 BuildData::getBuildFamilyIndex() const // 0x5855A3
{
    mangled_assert("?getBuildFamilyIndex@BuildData@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_5855A3(this);
    return __result;
}

_extern __int32 _sub_5855CC(BuildData const *const);
_inline __int32 BuildData::getUCFamilyIndex() const // 0x5855CC
{
    mangled_assert("?getUCFamilyIndex@BuildData@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_5855CC(this);
    return __result;
}

_extern __int32 _sub_5855D3(BuildData const *const);
_inline __int32 BuildData::getUCShipTypeIndex() const // 0x5855D3
{
    mangled_assert("?getUCShipTypeIndex@BuildData@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_5855D3(this);
    return __result;
}

_extern unsigned __int32 _sub_5107FB(BuildData const *const);
_inline unsigned __int32 BuildData::getTypeId() const // 0x5107FB
{
    mangled_assert("?getTypeId@BuildData@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_5107FB(this);
    return __result;
}

_extern unsigned __int32 _sub_52C143(BuildData const *const);
_inline unsigned __int32 BuildData::getGenericSubSystemTypeId() const // 0x52C143
{
    mangled_assert("?getGenericSubSystemTypeId@BuildData@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_52C143(this);
    return __result;
}

_extern bool _sub_5CC69C(BuildData *const);
_inline bool BuildData::isDeterministic() // 0x5CC69C
{
    mangled_assert("?isDeterministic@BuildData@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_5CC69C(this);
    return __result;
}

_extern char const *_sub_5CC779(BuildData *const);
_inline char const *BuildData::saveToken() // 0x5CC779
{
    mangled_assert("?saveToken@BuildData@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_5CC779(this);
    return __result;
}

/* ---------- private code */

#endif // __BUILDDATA_H__
#endif
