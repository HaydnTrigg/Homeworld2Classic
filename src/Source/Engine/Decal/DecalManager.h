#if 0
#ifndef __DECALMANAGER_H__
#define __DECALMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class DecalManager
{
public:
    class Object
    {
    public:
        bool SetMesh(DecalRefMesh const *, std::vector<FatVertex,std::allocator<FatVertex> > const &, std::vector<unsigned short,std::allocator<unsigned short> > const &, std::vector<unsigned short,std::allocator<unsigned short> > const &);
        void GetMesh(std::vector<FatVertex,std::allocator<FatVertex> > &, std::vector<unsigned short,std::allocator<unsigned short> > &, std::vector<unsigned short,std::allocator<unsigned short> > &) const;
        _inline DecalRefMesh const *GetRefMesh() const;
        std::vector<unsigned short,std::allocator<unsigned short> > const &GetTriIndices() const;
        _inline void SetTextureID(__int32);
        _inline __int32 GetTextureID() const;
        unsigned __int32 GetNumTriangles() const;
        bool Save(SaveGameData *) const;
        bool Restore(SaveGameData *);
        bool RestoreMesh();
        void Render();
        DecalManager::Object &operator=(DecalManager::Object const &);
        struct TextureCoords
        {
            vector2 uv[2]; // 0x0
            _inline TextureCoords(); /* compiler_generated() */
        };
        static_assert(sizeof(TextureCoords) == 16, "Invalid TextureCoords size");
        Object(DecalManager::Object const &); /* compiler_generated() */
    private:
        Object(DecalManager *);
        ~Object();
        void freeVertices();
        void getVertices(DecalRefMesh const *, std::vector<unsigned short,std::allocator<unsigned short> > const &, std::vector<DecalManager::Object::TextureCoords,std::allocator<DecalManager::Object::TextureCoords> > const &, std::vector<FatVertex,std::allocator<FatVertex> > &, std::vector<unsigned short,std::allocator<unsigned short> > &) const;
        std::vector<unsigned short,std::allocator<unsigned short> > m_vertIndices; // 0x0
        std::vector<unsigned short,std::allocator<unsigned short> > m_triIndices; // 0xC
        std::vector<DecalManager::Object::TextureCoords,std::allocator<DecalManager::Object::TextureCoords> > m_uvs; // 0x18
        __int32 m_textureID; // 0x24
        DecalRefMesh const *m_pRefMesh; // 0x28
        DecalManager *m_pManager; // 0x2C
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_tmpRefMeshName; // 0x30
    };
    static_assert(sizeof(Object) == 72, "Invalid Object size");
    typedef __int32 VertIndex;
    DecalManager(DecalManager const &); /* compiler_generated() */
    DecalManager();
    ~DecalManager();
    void Initialize(unsigned __int32);
    DecalManager::Object *DecalNew();
    void DecalDestroy(DecalManager::Object *);
    VertexPool &GetVertexPool();
    void RenderBegin(unsigned __int32);
    void RenderEnd();
    class Data;
private:
    boost::scoped_ptr<DecalManager::Data> m_pimpl; // 0x0
public:
    DecalManager &operator=(DecalManager const &); /* compiler_generated() */
};
static_assert(sizeof(DecalManager) == 4, "Invalid DecalManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline DecalRefMesh const *DecalManager::Object::GetRefMesh() const // 0x55A89A
{
    mangled_assert("?GetRefMesh@Object@DecalManager@@QBEPBVDecalRefMesh@@XZ");
    todo("implement");
}

_inline void DecalManager::Object::SetTextureID(__int32) // 0x55E0FB
{
    mangled_assert("?SetTextureID@Object@DecalManager@@QAEXH@Z");
    todo("implement");
}

_inline __int32 DecalManager::Object::GetTextureID() const // 0x55E0F7
{
    mangled_assert("?GetTextureID@Object@DecalManager@@QBEHXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __DECALMANAGER_H__
#endif
