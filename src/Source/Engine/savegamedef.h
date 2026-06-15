#if 0
#ifndef __SAVEGAMEDEF_H__
#define __SAVEGAMEDEF_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Saveable
{
public:
    virtual _inline ~Saveable();
    virtual bool save(SaveGameData *, SaveType) = 0;
    virtual bool restore(SaveGameData *) = 0;
    virtual void postRestore() = 0;
    virtual char const *saveToken() = 0;
    virtual bool isDeterministic() = 0;
    _inline Saveable(Saveable const &); /* compiler_generated() */
    _inline Saveable(); /* compiler_generated() */
    _inline Saveable &operator=(Saveable const &); /* compiler_generated() */
};
static_assert(sizeof(Saveable) == 4, "Invalid Saveable size");

class SaveObject :
    public Saveable
{
public:
    SaveObject(SaveObject const &); /* compiler_generated() */
    SaveObject(bool);
    virtual ~SaveObject() override;
    void Link();
    void Unlink();
    bool m_saveMe; // 0x4
private:
    bool m_bIterValid; // 0x5
    std::_List_iterator<std::_List_val<std::_List_simple_types<SaveObject *> > > m_iterator; // 0x8
public:
    static std::_List_const_iterator<std::_List_val<std::_List_simple_types<SaveObject *> > > s_listBegin();
    static std::_List_const_iterator<std::_List_val<std::_List_simple_types<SaveObject *> > > s_listEnd();
    typedef std::list<SaveObject *,std::allocator<SaveObject *> > SaveObjectList;
    typedef std::_List_iterator<std::_List_val<std::_List_simple_types<SaveObject *> > > SaveObjectListIterator;
private:
    static std::list<SaveObject *,std::allocator<SaveObject *> > s_list;
public:
    _inline SaveObject &operator=(SaveObject const &); /* compiler_generated() */
};
static_assert(sizeof(SaveObject) == 12, "Invalid SaveObject size");

struct SaveData
{
    char *chunkName; // 0x0
    unsigned __int32 numChunk; // 0x4
    unsigned __int32 chunkSize; // 0x8
    unsigned __int32 chunkOffset; // 0xC
    ChunkType chunkType; // 0x10
    unsigned __int32 chunkFlags; // 0x14
    void (*chunkSavePtr)(void *, SaveGameData *, SaveType); // 0x18
    void (*chunkRestorePtr)(void *, SaveGameData *); // 0x1C
};
static_assert(sizeof(SaveData) == 32, "Invalid SaveData size");

struct SaveData
{
    char *chunkName; // 0x0
    unsigned __int32 numChunk; // 0x4
    unsigned __int32 chunkSize; // 0x8
    unsigned __int32 chunkOffset; // 0xC
    ChunkType chunkType; // 0x10
    unsigned __int32 chunkFlags; // 0x14
    void (*chunkSavePtr)(void *, SaveGameData *, SaveType); // 0x18
    void (*chunkRestorePtr)(void *, SaveGameData *); // 0x1C
};
static_assert(sizeof(SaveData) == 32, "Invalid SaveData size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline Saveable::~Saveable() // 0x469FF0
{
    mangled_assert("??1Saveable@@UAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __SAVEGAMEDEF_H__
#endif
