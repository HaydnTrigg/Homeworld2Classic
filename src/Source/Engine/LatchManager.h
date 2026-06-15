#if 0
#ifndef __LATCHMANAGER_H__
#define __LATCHMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LatchManager :
    public SaveObject
{
public:
    LatchManager(LatchManager const &); /* compiler_generated() */
    LatchManager(SaveGameData *);
    LatchManager(SobWithMesh *);
    virtual ~LatchManager() override;
    void moveLatchedObject(SobWithMesh *, vector3 const &);
    void latchObject(SobWithMesh *, vector3 const &, matrix3 const &, bool);
    void unLatchObject(SobWithMesh *);
    _inline Selection const &getLatchedObjects() const;
    void update(float);
    static void initialiseLatchPoints(char const *namePrefix, std::vector<std::pair<vector3,matrix3> *,std::allocator<std::pair<vector3,matrix3> *> > &latchPoints, SobWithMeshStatic *shipStatic);
    bool hasObjectFinishedInterpolation(SobID const &) const;
private:
    static void saveLatched(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void loadLatched(void *objectPtr, SaveGameData *saveGameData);
    SobID m_managedSob; // 0xC
    std::list<LatchManager::LatchData *,std::allocator<LatchManager::LatchData *> > m_latchedSobs; // 0x18
    Selection m_latchedSel; // 0x20
    struct LatchData
    {
        SobID m_latchedSob; // 0x0
        vector3 m_offset; // 0xC
        quat m_rotation; // 0x18
        vector3 m_originalOffset; // 0x28
        quat m_originalRotation; // 0x34
        float m_interpolationFactor; // 0x44
        LatchData(LatchManager::LatchData const &); /* compiler_generated() */
        _inline LatchData(); /* compiler_generated() */
        _inline ~LatchData(); /* compiler_generated() */
        LatchManager::LatchData &operator=(LatchManager::LatchData const &); /* compiler_generated() */
    };
    static_assert(sizeof(LatchData) == 72, "Invalid LatchData size");
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    LatchManager &operator=(LatchManager const &); /* compiler_generated() */
};
static_assert(sizeof(LatchManager) == 84, "Invalid LatchManager size");

class LatchManager :
    public SaveObject
{
public:
    LatchManager(LatchManager const &); /* compiler_generated() */
    LatchManager(SaveGameData *);
    LatchManager(SobWithMesh *);
    virtual ~LatchManager() override;
    void moveLatchedObject(SobWithMesh *, vector3 const &);
    void latchObject(SobWithMesh *, vector3 const &, matrix3 const &, bool);
    void unLatchObject(SobWithMesh *);
    _inline Selection const &getLatchedObjects() const;
    void update(float);
    static void initialiseLatchPoints(char const *namePrefix, std::vector<std::pair<vector3,matrix3> *,std::allocator<std::pair<vector3,matrix3> *> > &latchPoints, SobWithMeshStatic *shipStatic);
    bool hasObjectFinishedInterpolation(SobID const &) const;
private:
    static void saveLatched(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void loadLatched(void *objectPtr, SaveGameData *saveGameData);
    SobID m_managedSob; // 0xC
    std::list<LatchManager::LatchData *,std::allocator<LatchManager::LatchData *> > m_latchedSobs; // 0x18
    Selection m_latchedSel; // 0x20
    struct LatchData
    {
        SobID m_latchedSob; // 0x0
        vector3 m_offset; // 0xC
        quat m_rotation; // 0x18
        vector3 m_originalOffset; // 0x28
        quat m_originalRotation; // 0x34
        float m_interpolationFactor; // 0x44
        LatchData(LatchManager::LatchData const &); /* compiler_generated() */
        _inline LatchData(); /* compiler_generated() */
        _inline ~LatchData(); /* compiler_generated() */
        LatchManager::LatchData &operator=(LatchManager::LatchData const &); /* compiler_generated() */
    };
    static_assert(sizeof(LatchData) == 72, "Invalid LatchData size");
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    LatchManager &operator=(LatchManager const &); /* compiler_generated() */
};
static_assert(sizeof(LatchManager) == 84, "Invalid LatchManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline Selection const &LatchManager::getLatchedObjects() const // 0x4BF82A
{
    mangled_assert("?getLatchedObjects@LatchManager@@QBEABVSelection@@XZ");
    todo("implement");
}

_inline bool LatchManager::isDeterministic() // 0x4BD862
{
    mangled_assert("?isDeterministic@LatchManager@@UAE_NXZ");
    todo("implement");
}

_inline char const *LatchManager::saveToken() // 0x4BDCDC
{
    mangled_assert("?saveToken@LatchManager@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __LATCHMANAGER_H__
#endif
