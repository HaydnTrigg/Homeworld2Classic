#if 0
#ifndef __BUILDJOBTYPE_H__
#define __BUILDJOBTYPE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class BuildJobType :
    public SaveObject
{
public:
    BuildJobType(BuildJobType const &); /* compiler_generated() */
    BuildJobType(SaveGameData *);
    BuildJobType(BuildData *, __int32, Fixed<10> const &, bool, __int32, __int32);
    virtual ~BuildJobType() override;
    _inline unsigned __int32 getTypeIdToBuild() const;
    _inline char const *getNameToBuild() const;
    _inline __int32 getOriginalCost() const;
    _inline Fixed<10> const &getCostPerSecond() const;
    _inline __int32 getNumShipsInBatch() const;
    _inline void setNumShipsInBatch(__int32);
    _inline __int32 getNumShipsRemaining() const;
    _inline void setNumShipsRemaining(__int32);
    _inline BuildData *getBuildData() const;
    _inline bool getUseUnitCaps();
    _inline __int32 getUCFamilyIndex();
    _inline __int32 getUCShipTypeIndex();
private:
    unsigned __int32 typeIdToBuild; // 0xC
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > sobNameToBuild; // 0x10
    __int32 originalCost; // 0x28
    Fixed<10> costPerSecond; // 0x2C
    __int32 numShipsInBatch; // 0x30
    __int32 numShipsRemaining; // 0x34
    BuildData *m_pBuildData; // 0x38
    bool m_useUnitCaps; // 0x3C
    __int32 m_UCFamilyIndex; // 0x40
    __int32 m_UCShipTypeIndex; // 0x44
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    BuildJobType &operator=(BuildJobType const &); /* compiler_generated() */
};
static_assert(sizeof(BuildJobType) == 72, "Invalid BuildJobType size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline unsigned __int32 BuildJobType::getTypeIdToBuild() const // 0x52C166
{
    mangled_assert("?getTypeIdToBuild@BuildJobType@@QBEIXZ");
    todo("implement");
}

_inline char const *BuildJobType::getNameToBuild() const // 0x52C156
{
    mangled_assert("?getNameToBuild@BuildJobType@@QBEPBDXZ");
    todo("implement");
}

_inline __int32 BuildJobType::getOriginalCost() const // 0x52C162
{
    mangled_assert("?getOriginalCost@BuildJobType@@QBEHXZ");
    todo("implement");
}

_inline Fixed<10> const &BuildJobType::getCostPerSecond() const // 0x5D00D1
{
    mangled_assert("?getCostPerSecond@BuildJobType@@QBEABV?$Fixed@$09@@XZ");
    todo("implement");
}

_inline __int32 BuildJobType::getNumShipsInBatch() const // 0x5D00D5
{
    mangled_assert("?getNumShipsInBatch@BuildJobType@@QBEHXZ");
    todo("implement");
}

_inline void BuildJobType::setNumShipsInBatch(__int32) // 0x5D0765
{
    mangled_assert("?setNumShipsInBatch@BuildJobType@@QAEXH@Z");
    todo("implement");
}

_inline __int32 BuildJobType::getNumShipsRemaining() const // 0x5D00D9
{
    mangled_assert("?getNumShipsRemaining@BuildJobType@@QBEHXZ");
    todo("implement");
}

_inline void BuildJobType::setNumShipsRemaining(__int32) // 0x5D076F
{
    mangled_assert("?setNumShipsRemaining@BuildJobType@@QAEXH@Z");
    todo("implement");
}

_inline BuildData *BuildJobType::getBuildData() const // 0x542F52
{
    mangled_assert("?getBuildData@BuildJobType@@QBEPAVBuildData@@XZ");
    todo("implement");
}

_inline bool BuildJobType::getUseUnitCaps() // 0x52C172
{
    mangled_assert("?getUseUnitCaps@BuildJobType@@QAE_NXZ");
    todo("implement");
}

_inline __int32 BuildJobType::getUCFamilyIndex() // 0x52C16A
{
    mangled_assert("?getUCFamilyIndex@BuildJobType@@QAEHXZ");
    todo("implement");
}

_inline __int32 BuildJobType::getUCShipTypeIndex() // 0x52C16E
{
    mangled_assert("?getUCShipTypeIndex@BuildJobType@@QAEHXZ");
    todo("implement");
}

_inline bool BuildJobType::isDeterministic() // 0x5CC99C
{
    mangled_assert("?isDeterministic@BuildJobType@@UAE_NXZ");
    todo("implement");
}

_inline char const *BuildJobType::saveToken() // 0x5CCA13
{
    mangled_assert("?saveToken@BuildJobType@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __BUILDJOBTYPE_H__
#endif
