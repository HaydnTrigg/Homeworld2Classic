#if 0
#ifndef __STATICMODELREGISTRY_H__
#define __STATICMODELREGISTRY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class StaticModelRegistry
{
public:
    static bool Startup();
    static bool Shutdown();
    static StaticModelRegistry *Instance();
    void Register(char const *);
    bool IsRegistered(char const *);
    boost::shared_ptr<SobStatic::Model> SobStatic_Register(char const *, SobStatic::Model *);
    boost::shared_ptr<SobStatic::Model> SobStatic_Find(char const *);
    boost::shared_ptr<SobWithMeshStatic::Model> SobWithMeshStatic_Register(char const *, SobWithMeshStatic::Model *);
    boost::shared_ptr<SobWithMeshStatic::Model> SobWithMeshStatic_Find(char const *);
    void ShipHoldStatic_Register(char const *, ShipHoldStatic *);
    ShipHoldStatic *ShipHoldStatic_Find(char const *);
    StaticModelRegistry(StaticModelRegistry const &); /* compiler_generated() */
private:
    StaticModelRegistry();
    ~StaticModelRegistry();
    class Data;
    boost::scoped_ptr<StaticModelRegistry::Data> m_pimpl; // 0x0
public:
    StaticModelRegistry &operator=(StaticModelRegistry const &); /* compiler_generated() */
};
static_assert(sizeof(StaticModelRegistry) == 4, "Invalid StaticModelRegistry size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __STATICMODELREGISTRY_H__
#endif
