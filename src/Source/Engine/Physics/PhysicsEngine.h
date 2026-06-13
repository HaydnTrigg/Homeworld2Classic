#if 0
#ifndef __PHYSICSENGINE_H__
#define __PHYSICSENGINE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class PhysicsEngine :
    public Saveable
{
public:
    static PhysicsEngine *instance();
    static PhysicsEngine *i();
    static bool release();
    void solve(float);
    void addPhysicsObject(PhysicsObject *);
    void removePhysicsObject(PhysicsObject *);
    __int32 getNumberOfObjects() const;
    void getStats(char *);
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    static bool startup();
    static bool shutdown();
    static bool saveStatics(SaveGameData *saveGameData, SaveType saveType);
    static bool restoreStatics(SaveGameData *saveGameData);
    void AddMissingSaveObjects();
    PhysicsEngine(PhysicsEngine const &); /* compiler_generated() */
private:
    PhysicsEngine();
    std::vector<PhysicsObject *,std::allocator<PhysicsObject *> > m_deterministicObjects; // 0x4
    std::vector<PhysicsObject *,std::allocator<PhysicsObject *> > m_nonDetermObjects; // 0x10
    std::vector<PhysicsObject *,std::allocator<PhysicsObject *> > m_nonSaveableObjects; // 0x1C
    static PhysicsEngine *create();
    static PhysicsEngine *s_instance;
public:
    virtual _inline ~PhysicsEngine() override; /* compiler_generated() */
    PhysicsEngine &operator=(PhysicsEngine const &); /* compiler_generated() */
};
static_assert(sizeof(PhysicsEngine) == 40, "Invalid PhysicsEngine size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_47371B(PhysicsEngine *const);
_inline bool PhysicsEngine::isDeterministic() // 0x47371B
{
    mangled_assert("?isDeterministic@PhysicsEngine@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_47371B(this);
    return __result;
}

_extern char const *_sub_4738CE(PhysicsEngine *const);
_inline char const *PhysicsEngine::saveToken() // 0x4738CE
{
    mangled_assert("?saveToken@PhysicsEngine@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_4738CE(this);
    return __result;
}

/* ---------- private code */

#endif // __PHYSICSENGINE_H__
#endif
