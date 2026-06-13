#if 0
#ifndef __SIMPLEMESH_H__
#define __SIMPLEMESH_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SimpleMesh :
    public Core
{
public:
    SimpleMesh(SimpleMesh const &); /* compiler_generated() */
    SimpleMesh();
    virtual ~SimpleMesh() override;
    static SimpleMesh *create();
    void render(float);
    bool import(IFFChunk *);
    void optimize();
    bool loadTexture(char const *);
    Texture *getTexture(float);
    unsigned __int32 getNumFatVertices() const;
    FatVertex const *getFatVertices() const;
    unsigned __int32 getNumIndices() const;
    __int32 const *getIndices() const;
    typedef std::vector<FatVertex,std::allocator<FatVertex> > FatVertices;
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x4
    std::vector<int,std::allocator<int> > m_indices; // 0x1C
    VertexArray *m_va; // 0x28
    __int32 m_mask; // 0x2C
    boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > > m_pFatVertices; // 0x30
    TextureProxy m_textureProxy; // 0x34
public:
    SimpleMesh &operator=(SimpleMesh const &); /* compiler_generated() */
};
static_assert(sizeof(SimpleMesh) == 68, "Invalid SimpleMesh size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SIMPLEMESH_H__
#endif
