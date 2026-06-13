#if 0
#ifndef __MEMTRACKER_H__
#define __MEMTRACKER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class memtracker::TextureMemory
{
private:
    unsigned __int32 width; // 0x0
    unsigned __int32 height; // 0x4
    unsigned __int32 bitsPerPixel; // 0x8
    TextureFormat tf; // 0xC
public:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x10
    TextureMemory(memtracker::TextureMemory const &); /* compiler_generated() */
    TextureMemory(unsigned __int32 const, unsigned __int32 const, unsigned __int32 const, TextureFormat const);
    unsigned __int32 getWidth() const;
    unsigned __int32 getHeight() const;
    unsigned __int32 getBitsPerPixel() const;
    TextureFormat getTextureFormat() const;
    void setWidth(unsigned __int32 const);
    void setHeight(unsigned __int32 const);
    void setBitsPerPixel(unsigned __int32 const);
    void setTextureFormat(TextureFormat const);
    ~TextureMemory(); /* compiler_generated() */
    memtracker::TextureMemory &operator=(memtracker::TextureMemory const &); /* compiler_generated() */
};
static_assert(sizeof(memtracker::TextureMemory) == 40, "Invalid memtracker::TextureMemory size");

class memtracker::GoblinMeshMemory
{
public:
    unsigned __int32 m_numVerts; // 0x0
    unsigned __int32 m_numIndices; // 0x4
    unsigned __int32 m_numTriangles; // 0x8
};
static_assert(sizeof(memtracker::GoblinMeshMemory) == 12, "Invalid memtracker::GoblinMeshMemory size");

class memtracker::VaryMeshMemory
{
public:
    unsigned __int32 m_numVerts; // 0x0
    unsigned __int32 m_numIndices; // 0x4
    unsigned __int32 m_numTriangles; // 0x8
    unsigned __int32 m_vertexSize; // 0xC
};
static_assert(sizeof(memtracker::VaryMeshMemory) == 16, "Invalid memtracker::VaryMeshMemory size");

class memtracker::TrigroupMemory
{
public:
    ~TrigroupMemory();
    unsigned __int32 m_numVerts; // 0x0
    unsigned __int32 m_numIndices; // 0x4
    unsigned __int32 m_numTriangles; // 0x8
    unsigned __int32 m_numPasses; // 0xC
    std::vector<unsigned int,std::allocator<unsigned int> > m_numCommands; // 0x10
    std::vector<unsigned int,std::allocator<unsigned int> > m_numInvCommands; // 0x1C
    TrigroupMemory(memtracker::TrigroupMemory const &); /* compiler_generated() */
    TrigroupMemory(); /* compiler_generated() */
    memtracker::TrigroupMemory &operator=(memtracker::TrigroupMemory const &); /* compiler_generated() */
};
static_assert(sizeof(memtracker::TrigroupMemory) == 40, "Invalid memtracker::TrigroupMemory size");

class memtracker::BasicMeshMemory
{
public:
    ~BasicMeshMemory();
    std::vector<memtracker::TrigroupMemory,std::allocator<memtracker::TrigroupMemory> > m_tgm; // 0x0
    unsigned __int32 m_vertexSize; // 0xC
    BasicMeshMemory(memtracker::BasicMeshMemory const &); /* compiler_generated() */
    BasicMeshMemory(); /* compiler_generated() */
    memtracker::BasicMeshMemory &operator=(memtracker::BasicMeshMemory const &); /* compiler_generated() */
};
static_assert(sizeof(memtracker::BasicMeshMemory) == 16, "Invalid memtracker::BasicMeshMemory size");

class memtracker::MultiMeshMemory
{
public:
    ~MultiMeshMemory();
    std::vector<memtracker::BasicMeshMemory,std::allocator<memtracker::BasicMeshMemory> > m_bmm; // 0x0
    MultiMeshMemory(memtracker::MultiMeshMemory const &); /* compiler_generated() */
    MultiMeshMemory(); /* compiler_generated() */
    memtracker::MultiMeshMemory &operator=(memtracker::MultiMeshMemory const &); /* compiler_generated() */
};
static_assert(sizeof(memtracker::MultiMeshMemory) == 12, "Invalid memtracker::MultiMeshMemory size");

class memtracker::MeshMemory
{
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_originalFilename; // 0x0
    std::vector<memtracker::TextureMemory,std::allocator<memtracker::TextureMemory> > m_texMem; // 0x18
    std::vector<memtracker::MultiMeshMemory,std::allocator<memtracker::MultiMeshMemory> > m_mmm; // 0x24
    std::vector<memtracker::VaryMeshMemory,std::allocator<memtracker::VaryMeshMemory> > m_vmm; // 0x30
    std::vector<memtracker::GoblinMeshMemory,std::allocator<memtracker::GoblinMeshMemory> > m_gmm; // 0x3C
    void fillTextures(Mesh const *);
    void writeTextureInfo(ByteStreamProxy &);
    void writeMeshInfo(ByteStreamProxy &);
    void writeTextureNames(ByteStreamProxy &);
public:
    void fillMeshes(Mesh const *);
    unsigned __int32 GetTotalTextureMemory() const;
    MeshMemory(memtracker::MeshMemory const &); /* compiler_generated() */
    MeshMemory(Mesh const *, char const *);
    ~MeshMemory();
    void writeLog();
    memtracker::MeshMemory &operator=(memtracker::MeshMemory const &); /* compiler_generated() */
};
static_assert(sizeof(memtracker::MeshMemory) == 72, "Invalid memtracker::MeshMemory size");

class memtracker::TextureRegistryMemory
{
public:
    unsigned __int32 fxTexMemory; // 0x0
    unsigned __int32 effectTexMemory; // 0x4
    unsigned __int32 uiTexMemory; // 0x8
    unsigned __int32 shipTexMemory; // 0xC
    unsigned __int32 missileTexMemory; // 0x10
    unsigned __int32 subsystemTexMemory; // 0x14
    unsigned __int32 autogenTexMemory; // 0x18
    unsigned __int32 miscTexMemory; // 0x1C
    unsigned __int32 resourceTexMemory; // 0x20
    unsigned __int32 pebbleTexMemory; // 0x24
    unsigned __int32 dustcloudTexMemory; // 0x28
    unsigned __int32 cloudTexMemory; // 0x2C
    unsigned __int32 fxTexCount; // 0x30
    unsigned __int32 effectTexCount; // 0x34
    unsigned __int32 uiTexCount; // 0x38
    unsigned __int32 shipTexCount; // 0x3C
    unsigned __int32 missileTexCount; // 0x40
    unsigned __int32 subsystemTexCount; // 0x44
    unsigned __int32 autogenTexCount; // 0x48
    unsigned __int32 miscTexCount; // 0x4C
    unsigned __int32 resourceTexCount; // 0x50
    unsigned __int32 pebbleTexCount; // 0x54
    unsigned __int32 dustcloudTexCount; // 0x58
    unsigned __int32 cloudTexCount; // 0x5C
    unsigned __int32 totalMemory; // 0x60
    unsigned __int32 numTexturesInRegistry; // 0x64
    void computeMemoryUsed();
};
static_assert(sizeof(memtracker::TextureRegistryMemory) == 104, "Invalid memtracker::TextureRegistryMemory size");

class memtracker::GameMemoryUsage
{
private:
    std::vector<memtracker::MeshMemory,std::allocator<memtracker::MeshMemory> > m_mm; // 0x0
    memtracker::TextureRegistryMemory m_trm; // 0xC
    static memtracker::GameMemoryUsage *s_instance;
public:
    static bool Shutdown();
    static bool Release();
    static bool Startup();
    static memtracker::GameMemoryUsage *i();
    GameMemoryUsage(memtracker::GameMemoryUsage const &); /* compiler_generated() */
    GameMemoryUsage();
    ~GameMemoryUsage();
    void DumpMemoryUsage(Mesh const *, char const *);
    void WriteStats();
    memtracker::GameMemoryUsage &operator=(memtracker::GameMemoryUsage const &); /* compiler_generated() */
};
static_assert(sizeof(memtracker::GameMemoryUsage) == 116, "Invalid memtracker::GameMemoryUsage size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MEMTRACKER_H__
/* combined */
#ifndef __MEMTRACKER_H__
#define __MEMTRACKER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class memtracker::TextureMemory
{
private:
    unsigned __int32 width; // 0x0
    unsigned __int32 height; // 0x4
    unsigned __int32 bitsPerPixel; // 0x8
    TextureFormat tf; // 0xC
public:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x10
    _inline TextureMemory(memtracker::TextureMemory const &); /* compiler_generated() */
    TextureMemory(unsigned __int32 const, unsigned __int32 const, unsigned __int32 const, TextureFormat const);
    _inline unsigned __int32 getWidth() const;
    _inline unsigned __int32 getHeight() const;
    _inline unsigned __int32 getBitsPerPixel() const;
    _inline TextureFormat getTextureFormat() const;
    void setWidth(unsigned __int32 const);
    void setHeight(unsigned __int32 const);
    void setBitsPerPixel(unsigned __int32 const);
    void setTextureFormat(TextureFormat const);
    _inline ~TextureMemory(); /* compiler_generated() */
    _inline memtracker::TextureMemory &operator=(memtracker::TextureMemory const &); /* compiler_generated() */
};
static_assert(sizeof(memtracker::TextureMemory) == 40, "Invalid memtracker::TextureMemory size");

class memtracker::GoblinMeshMemory
{
public:
    unsigned __int32 m_numVerts; // 0x0
    unsigned __int32 m_numIndices; // 0x4
    unsigned __int32 m_numTriangles; // 0x8
};
static_assert(sizeof(memtracker::GoblinMeshMemory) == 12, "Invalid memtracker::GoblinMeshMemory size");

class memtracker::VaryMeshMemory
{
public:
    unsigned __int32 m_numVerts; // 0x0
    unsigned __int32 m_numIndices; // 0x4
    unsigned __int32 m_numTriangles; // 0x8
    unsigned __int32 m_vertexSize; // 0xC
};
static_assert(sizeof(memtracker::VaryMeshMemory) == 16, "Invalid memtracker::VaryMeshMemory size");

class memtracker::TrigroupMemory
{
public:
    ~TrigroupMemory();
    unsigned __int32 m_numVerts; // 0x0
    unsigned __int32 m_numIndices; // 0x4
    unsigned __int32 m_numTriangles; // 0x8
    unsigned __int32 m_numPasses; // 0xC
    std::vector<unsigned int,std::allocator<unsigned int> > m_numCommands; // 0x10
    std::vector<unsigned int,std::allocator<unsigned int> > m_numInvCommands; // 0x1C
    _inline TrigroupMemory(memtracker::TrigroupMemory const &); /* compiler_generated() */
    _inline TrigroupMemory(); /* compiler_generated() */
    _inline memtracker::TrigroupMemory &operator=(memtracker::TrigroupMemory const &); /* compiler_generated() */
};
static_assert(sizeof(memtracker::TrigroupMemory) == 40, "Invalid memtracker::TrigroupMemory size");

class memtracker::BasicMeshMemory
{
public:
    ~BasicMeshMemory();
    std::vector<memtracker::TrigroupMemory,std::allocator<memtracker::TrigroupMemory> > m_tgm; // 0x0
    unsigned __int32 m_vertexSize; // 0xC
    _inline BasicMeshMemory(memtracker::BasicMeshMemory const &); /* compiler_generated() */
    _inline BasicMeshMemory(); /* compiler_generated() */
    _inline memtracker::BasicMeshMemory &operator=(memtracker::BasicMeshMemory const &); /* compiler_generated() */
};
static_assert(sizeof(memtracker::BasicMeshMemory) == 16, "Invalid memtracker::BasicMeshMemory size");

class memtracker::MultiMeshMemory
{
public:
    ~MultiMeshMemory();
    std::vector<memtracker::BasicMeshMemory,std::allocator<memtracker::BasicMeshMemory> > m_bmm; // 0x0
    _inline MultiMeshMemory(memtracker::MultiMeshMemory const &); /* compiler_generated() */
    _inline MultiMeshMemory(); /* compiler_generated() */
    _inline memtracker::MultiMeshMemory &operator=(memtracker::MultiMeshMemory const &); /* compiler_generated() */
};
static_assert(sizeof(memtracker::MultiMeshMemory) == 12, "Invalid memtracker::MultiMeshMemory size");

class memtracker::MeshMemory
{
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_originalFilename; // 0x0
    std::vector<memtracker::TextureMemory,std::allocator<memtracker::TextureMemory> > m_texMem; // 0x18
    std::vector<memtracker::MultiMeshMemory,std::allocator<memtracker::MultiMeshMemory> > m_mmm; // 0x24
    std::vector<memtracker::VaryMeshMemory,std::allocator<memtracker::VaryMeshMemory> > m_vmm; // 0x30
    std::vector<memtracker::GoblinMeshMemory,std::allocator<memtracker::GoblinMeshMemory> > m_gmm; // 0x3C
    void fillTextures(Mesh const *);
    void writeTextureInfo(ByteStreamProxy &);
    void writeMeshInfo(ByteStreamProxy &);
    void writeTextureNames(ByteStreamProxy &);
public:
    void fillMeshes(Mesh const *);
    unsigned __int32 GetTotalTextureMemory() const;
    _inline MeshMemory(memtracker::MeshMemory const &); /* compiler_generated() */
    MeshMemory(Mesh const *, char const *);
    ~MeshMemory();
    void writeLog();
    _inline memtracker::MeshMemory &operator=(memtracker::MeshMemory const &); /* compiler_generated() */
};
static_assert(sizeof(memtracker::MeshMemory) == 72, "Invalid memtracker::MeshMemory size");

class memtracker::TextureRegistryMemory
{
public:
    unsigned __int32 fxTexMemory; // 0x0
    unsigned __int32 effectTexMemory; // 0x4
    unsigned __int32 uiTexMemory; // 0x8
    unsigned __int32 shipTexMemory; // 0xC
    unsigned __int32 missileTexMemory; // 0x10
    unsigned __int32 subsystemTexMemory; // 0x14
    unsigned __int32 autogenTexMemory; // 0x18
    unsigned __int32 miscTexMemory; // 0x1C
    unsigned __int32 resourceTexMemory; // 0x20
    unsigned __int32 pebbleTexMemory; // 0x24
    unsigned __int32 dustcloudTexMemory; // 0x28
    unsigned __int32 cloudTexMemory; // 0x2C
    unsigned __int32 fxTexCount; // 0x30
    unsigned __int32 effectTexCount; // 0x34
    unsigned __int32 uiTexCount; // 0x38
    unsigned __int32 shipTexCount; // 0x3C
    unsigned __int32 missileTexCount; // 0x40
    unsigned __int32 subsystemTexCount; // 0x44
    unsigned __int32 autogenTexCount; // 0x48
    unsigned __int32 miscTexCount; // 0x4C
    unsigned __int32 resourceTexCount; // 0x50
    unsigned __int32 pebbleTexCount; // 0x54
    unsigned __int32 dustcloudTexCount; // 0x58
    unsigned __int32 cloudTexCount; // 0x5C
    unsigned __int32 totalMemory; // 0x60
    unsigned __int32 numTexturesInRegistry; // 0x64
    void computeMemoryUsed();
};
static_assert(sizeof(memtracker::TextureRegistryMemory) == 104, "Invalid memtracker::TextureRegistryMemory size");

class memtracker::GameMemoryUsage
{
private:
    std::vector<memtracker::MeshMemory,std::allocator<memtracker::MeshMemory> > m_mm; // 0x0
    memtracker::TextureRegistryMemory m_trm; // 0xC
    static memtracker::GameMemoryUsage *s_instance;
public:
    static bool Shutdown();
    static bool Release();
    static bool Startup();
    static memtracker::GameMemoryUsage *i();
    _inline GameMemoryUsage(memtracker::GameMemoryUsage const &); /* compiler_generated() */
    GameMemoryUsage();
    ~GameMemoryUsage();
    void DumpMemoryUsage(Mesh const *, char const *);
    void WriteStats();
    _inline memtracker::GameMemoryUsage &operator=(memtracker::GameMemoryUsage const &); /* compiler_generated() */
};
static_assert(sizeof(memtracker::GameMemoryUsage) == 116, "Invalid memtracker::GameMemoryUsage size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern unsigned __int32 _sub_10077ED0(memtracker::TextureMemory const *const);
_inline unsigned __int32 memtracker::TextureMemory::getWidth() const // 0x10077ED0
{
    mangled_assert("?getWidth@TextureMemory@memtracker@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_10077ED0(this);
    return __result;
}

_extern unsigned __int32 _sub_10077EA0(memtracker::TextureMemory const *const);
_inline unsigned __int32 memtracker::TextureMemory::getHeight() const // 0x10077EA0
{
    mangled_assert("?getHeight@TextureMemory@memtracker@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_10077EA0(this);
    return __result;
}

_extern unsigned __int32 _sub_10077E90(memtracker::TextureMemory const *const);
_inline unsigned __int32 memtracker::TextureMemory::getBitsPerPixel() const // 0x10077E90
{
    mangled_assert("?getBitsPerPixel@TextureMemory@memtracker@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_10077E90(this);
    return __result;
}

_extern TextureFormat _sub_10077EC0(memtracker::TextureMemory const *const);
_inline TextureFormat memtracker::TextureMemory::getTextureFormat() const // 0x10077EC0
{
    mangled_assert("?getTextureFormat@TextureMemory@memtracker@@QBE?AW4TextureFormat@@XZ");
    todo("implement");
    TextureFormat __result = _sub_10077EC0(this);
    return __result;
}

/* ---------- private code */

#endif // __MEMTRACKER_H__
#endif
