#if 0
#ifndef __EVENTPOINTERMANAGER_H__
#define __EVENTPOINTERMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class EventPointerManager :
    public SaveObject
{
public:
    EventPointerManager(EventPointerManager const &); /* compiler_generated() */
    EventPointerManager(SaveGameData *);
    EventPointerManager(bool);
    unsigned __int32 AddEvent(SobID const &, vector4 const &, float const);
    void RemoveEvent(unsigned __int32);
    void Render();
    class EventPointer
    {
    public:
        _inline EventPointer(vector4 const &, float const);
        _inline EventPointer();
        vector4 m_colour; // 0x0
        float m_radius; // 0x10
    };
    static_assert(sizeof(EventPointer) == 20, "Invalid EventPointer size");
    typedef std::map<unsigned int,EventPointerManager::EventPointer,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,EventPointerManager::EventPointer> > > EventPointerMap;
private:
    std::map<unsigned int,EventPointerManager::EventPointer,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,EventPointerManager::EventPointer> > > m_eventmap; // 0xC
    PatchID m_eventSound; // 0x14
public:
    static void saveEventMap(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void loadEventMap(void *objectPtr, SaveGameData *saveGameData);
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    virtual _inline ~EventPointerManager() override; /* compiler_generated() */
    EventPointerManager &operator=(EventPointerManager const &); /* compiler_generated() */
};
static_assert(sizeof(EventPointerManager) == 24, "Invalid EventPointerManager size");

class EventPointerManager :
    public SaveObject
{
public:
    EventPointerManager(EventPointerManager const &); /* compiler_generated() */
    EventPointerManager(SaveGameData *);
    EventPointerManager(bool);
    unsigned __int32 AddEvent(SobID const &, vector4 const &, float const);
    void RemoveEvent(unsigned __int32);
    void Render();
    class EventPointer
    {
    public:
        _inline EventPointer(vector4 const &, float const);
        _inline EventPointer();
        vector4 m_colour; // 0x0
        float m_radius; // 0x10
    };
    static_assert(sizeof(EventPointer) == 20, "Invalid EventPointer size");
    typedef std::map<unsigned int,EventPointerManager::EventPointer,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,EventPointerManager::EventPointer> > > EventPointerMap;
private:
    std::map<unsigned int,EventPointerManager::EventPointer,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,EventPointerManager::EventPointer> > > m_eventmap; // 0xC
    PatchID m_eventSound; // 0x14
public:
    static void saveEventMap(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void loadEventMap(void *objectPtr, SaveGameData *saveGameData);
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    virtual _inline ~EventPointerManager() override; /* compiler_generated() */
    EventPointerManager &operator=(EventPointerManager const &); /* compiler_generated() */
};
static_assert(sizeof(EventPointerManager) == 24, "Invalid EventPointerManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline EventPointerManager::EventPointer::EventPointer() // 0x5ED41C
{
    mangled_assert("??0EventPointer@EventPointerManager@@QAE@XZ");
    todo("implement");
}

_inline EventPointerManager::EventPointer::EventPointer(vector4 const &, float const) // 0x5ED3FE
{
    mangled_assert("??0EventPointer@EventPointerManager@@QAE@ABVvector4@@M@Z");
    todo("implement");
}

_inline bool EventPointerManager::isDeterministic() // 0x5EDFB1
{
    mangled_assert("?isDeterministic@EventPointerManager@@UAE_NXZ");
    todo("implement");
}

_inline char const *EventPointerManager::saveToken() // 0x5EE05D
{
    mangled_assert("?saveToken@EventPointerManager@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __EVENTPOINTERMANAGER_H__
#endif
