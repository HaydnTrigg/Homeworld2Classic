#if 0
#ifndef __DECALREFMESHREGISTRY_H__
#define __DECALREFMESHREGISTRY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class DecalRefMeshRegistry
{
public:
    static bool Startup();
    static bool Shutdown();
    static DecalRefMeshRegistry *Instance();
    void Register(DecalRefMesh const *);
    void Unregister(DecalRefMesh const *);
    DecalRefMesh const *Find(char const *);
    static std::basic_string<char,std::char_traits<char>,std::allocator<char> > GetRegistryName(DecalRefMesh const *pRefMesh);
    DecalRefMeshRegistry(DecalRefMeshRegistry const &); /* compiler_generated() */
private:
    DecalRefMeshRegistry();
    ~DecalRefMeshRegistry();
    class Data;
    boost::scoped_ptr<DecalRefMeshRegistry::Data> m_pimpl; // 0x0
public:
    DecalRefMeshRegistry &operator=(DecalRefMeshRegistry const &); /* compiler_generated() */
};
static_assert(sizeof(DecalRefMeshRegistry) == 4, "Invalid DecalRefMeshRegistry size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DECALREFMESHREGISTRY_H__
#endif
