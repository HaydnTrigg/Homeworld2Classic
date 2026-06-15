#if 0
#ifndef __PARADE_H__
#define __PARADE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct ParadeSlotStatus
{
    bool m_reserved; // 0x0
};
static_assert(sizeof(ParadeSlotStatus) == 1, "Invalid ParadeSlotStatus size");

class ParadeType :
    public Saveable
{
public:
    std::vector<ParadeSlotStatus,std::allocator<ParadeSlotStatus> > m_paradeSlotStati; // 0x4
    static void saveParadeSlotStati(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreParadeSlotStati(void *objectPtr, SaveGameData *saveGameData);
    unsigned __int32 findAndReserveFreeSpot();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    void defaultSettings();
    virtual _inline char const *saveToken() override;
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    _inline ParadeType(ParadeType const &); /* compiler_generated() */
    _inline ParadeType(); /* compiler_generated() */
    virtual _inline ~ParadeType() override; /* compiler_generated() */
    _inline ParadeType &operator=(ParadeType const &); /* compiler_generated() */
};
static_assert(sizeof(ParadeType) == 16, "Invalid ParadeType size");

class ParadeType :
    public Saveable
{
public:
    std::vector<ParadeSlotStatus,std::allocator<ParadeSlotStatus> > m_paradeSlotStati; // 0x4
    static void saveParadeSlotStati(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreParadeSlotStati(void *objectPtr, SaveGameData *saveGameData);
    unsigned __int32 findAndReserveFreeSpot();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    void defaultSettings();
    virtual _inline char const *saveToken() override;
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    _inline ParadeType(ParadeType const &); /* compiler_generated() */
    _inline ParadeType(); /* compiler_generated() */
    virtual _inline ~ParadeType() override; /* compiler_generated() */
    _inline ParadeType &operator=(ParadeType const &); /* compiler_generated() */
};
static_assert(sizeof(ParadeType) == 16, "Invalid ParadeType size");

class SlotID :
    public Saveable
{
public:
    _inline SlotID(SlotID const &); /* compiler_generated() */
    _inline SlotID();
    _inline bool isValid();
    _inline void invalidate();
    _inline void setType(unsigned __int32);
    _inline void setSlotNr(unsigned __int32);
    _inline unsigned __int32 getType();
    _inline unsigned __int32 getSlotNr();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    virtual _inline char const *saveToken() override;
private:
    unsigned __int32 m_type; // 0x4
    unsigned __int32 m_slotNr; // 0x8
public:
    virtual _inline ~SlotID() override; /* compiler_generated() */
    _inline SlotID &operator=(SlotID const &); /* compiler_generated() */
};
static_assert(sizeof(SlotID) == 12, "Invalid SlotID size");

class ParadeFormation :
    public SaveObject
{
public:
    ParadeFormation(ParadeFormation const &); /* compiler_generated() */
    ParadeFormation(SaveGameData *);
    ParadeFormation(Ship *);
    virtual ~ParadeFormation() override;
    SlotID reserveSlot(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, vector3 &, vector3 &);
    void clearReservation(SlotID &);
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    void defaultSettings();
    virtual _inline char const *saveToken() override;
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
private:
    SobID m_owner; // 0xC
    std::vector<ParadeType,std::allocator<ParadeType> > m_paradeTypes; // 0x18
    stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > > m_typeToIndex; // 0x24
    typedef std::vector<ParadeType,std::allocator<ParadeType> > ParadeTypeVector;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParadeType> > > ParadeTypeVectorIterator;
    static void saveParadeTypes(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreParadeTypes(void *objectPtr, SaveGameData *saveGameData);
    typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > > TypeToIndexMap;
    typedef std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > > > TypeToIndexMapIterator;
    static void saveTypeToIndex(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreTypeToIndex(void *objectPtr, SaveGameData *saveGameData);
public:
    ParadeFormation &operator=(ParadeFormation const &); /* compiler_generated() */
};
static_assert(sizeof(ParadeFormation) == 68, "Invalid ParadeFormation size");

class ParadeFormation :
    public SaveObject
{
public:
    ParadeFormation(ParadeFormation const &); /* compiler_generated() */
    ParadeFormation(SaveGameData *);
    ParadeFormation(Ship *);
    virtual ~ParadeFormation() override;
    SlotID reserveSlot(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, vector3 &, vector3 &);
    void clearReservation(SlotID &);
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    void defaultSettings();
    virtual _inline char const *saveToken() override;
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
private:
    SobID m_owner; // 0xC
    std::vector<ParadeType,std::allocator<ParadeType> > m_paradeTypes; // 0x18
    stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > > m_typeToIndex; // 0x24
    typedef std::vector<ParadeType,std::allocator<ParadeType> > ParadeTypeVector;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParadeType> > > ParadeTypeVectorIterator;
    static void saveParadeTypes(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreParadeTypes(void *objectPtr, SaveGameData *saveGameData);
    typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > > TypeToIndexMap;
    typedef std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > > > TypeToIndexMapIterator;
    static void saveTypeToIndex(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreTypeToIndex(void *objectPtr, SaveGameData *saveGameData);
public:
    ParadeFormation &operator=(ParadeFormation const &); /* compiler_generated() */
};
static_assert(sizeof(ParadeFormation) == 68, "Invalid ParadeFormation size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool ParadeType::isDeterministic() // 0x5D857D
{
    mangled_assert("?isDeterministic@ParadeType@@UAE_NXZ");
    todo("implement");
}

_inline char const *ParadeType::saveToken() // 0x5D8BFF
{
    mangled_assert("?saveToken@ParadeType@@UAEPBDXZ");
    todo("implement");
}

_inline SlotID::SlotID() // 0x5D7404
{
    mangled_assert("??0SlotID@@QAE@XZ");
    todo("implement");
}

_inline bool SlotID::isValid() // 0x6A7389
{
    mangled_assert("?isValid@SlotID@@QAE_NXZ");
    todo("implement");
}

_inline void SlotID::invalidate() // 0x6A737D
{
    mangled_assert("?invalidate@SlotID@@QAEXXZ");
    todo("implement");
}

_inline void SlotID::setType(unsigned __int32) // 0x5D8C2A
{
    mangled_assert("?setType@SlotID@@QAEXI@Z");
    todo("implement");
}

_inline void SlotID::setSlotNr(unsigned __int32) // 0x5D8C20
{
    mangled_assert("?setSlotNr@SlotID@@QAEXI@Z");
    todo("implement");
}

_inline unsigned __int32 SlotID::getType() // 0x5D855B
{
    mangled_assert("?getType@SlotID@@QAEIXZ");
    todo("implement");
}

_inline unsigned __int32 SlotID::getSlotNr() // 0x5D8557
{
    mangled_assert("?getSlotNr@SlotID@@QAEIXZ");
    todo("implement");
}

_inline bool SlotID::isDeterministic() // 0x5D8580
{
    mangled_assert("?isDeterministic@SlotID@@UAE_NXZ");
    todo("implement");
}

_inline char const *SlotID::saveToken() // 0x5D8C05
{
    mangled_assert("?saveToken@SlotID@@UAEPBDXZ");
    todo("implement");
}

_inline bool ParadeFormation::isDeterministic() // 0x5D857A
{
    mangled_assert("?isDeterministic@ParadeFormation@@UAE_NXZ");
    todo("implement");
}

_inline char const *ParadeFormation::saveToken() // 0x5D8BF9
{
    mangled_assert("?saveToken@ParadeFormation@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __PARADE_H__
#endif
