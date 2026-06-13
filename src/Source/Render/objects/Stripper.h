#if 0
#ifndef __STRIPPER_H__
#define __STRIPPER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct StripPoly
{
    __int32 m_verts[3]; // 0x0
    __int32 m_matIndex; // 0xC
};
static_assert(sizeof(StripPoly) == 16, "Invalid StripPoly size");

struct stripHashEntry
{
    __int32 m_index; // 0x0
    unsigned __int32 m_hash; // 0x4
};
static_assert(sizeof(stripHashEntry) == 8, "Invalid stripHashEntry size");

class StripNode
{
public:
    __int32 m_size; // 0x0
    __int32 m_matIndex; // 0x4
    __int32 m_numVerts; // 0x8
    std::vector<int,std::allocator<int> > m_verts; // 0xC
    void AddVert(__int32);
    StripNode(StripNode const &); /* compiler_generated() */
    _inline StripNode(); /* compiler_generated() */
    _inline ~StripNode(); /* compiler_generated() */
    StripNode &operator=(StripNode const &); /* compiler_generated() */
};
static_assert(sizeof(StripNode) == 24, "Invalid StripNode size");

class Stripper
{
private:
    Stripper(Stripper const &);
public:
    Stripper();
    ~Stripper();
    static Stripper *create();
    virtual bool release();
    _inline __int32 GetNumStripVerts() const;
    __int32 FindAdjoiningPoly(__int32, __int32, __int32, __int32 *);
    void BuildStrip(StripNode *, __int32, __int32, __int32);
    void ClearMarks(__int32);
    __int32 AddVertex(FatVertex &);
    void BuildLists(RawMesh const *);
    void BuildLists(MeshObject const *);
    void GenerateStrips(__int32);
    Geometry *produceGeometry(std::vector<Material *,std::allocator<Material *> > &);
    _inline __int32 NumStrips();
    _inline std::list<StripNode *,std::allocator<StripNode *> > &GetStripList();
    _inline __int32 NumTris();
    _inline std::vector<StripPoly,std::allocator<StripPoly> > &GetTriList();
    std::vector<FatVertex,std::allocator<FatVertex> > m_vertList; // 0x4
    std::vector<StripPoly,std::allocator<StripPoly> > m_polyList; // 0x10
private:
    std::list<StripNode *,std::allocator<StripNode *> > m_stripList; // 0x1C
    std::vector<StripPoly,std::allocator<StripPoly> > m_triList; // 0x24
    Table<int> *m_vert2Poly; // 0x30
    std::vector<stripHashEntry,std::allocator<stripHashEntry> > m_hashVert[256]; // 0x34
    __int32 *m_markList; // 0xC34
    __int32 *m_removeList; // 0xC38
    __int32 m_numStripVerts; // 0xC3C
    Stripper &operator=(Stripper const &);
};
static_assert(sizeof(Stripper) == 3136, "Invalid Stripper size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern __int32 _sub_100308F0(Stripper const *const);
_inline __int32 Stripper::GetNumStripVerts() const // 0x100308F0
{
    mangled_assert("?GetNumStripVerts@Stripper@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_100308F0(this);
    return __result;
}

_extern __int32 _sub_10030940(Stripper *const);
_inline __int32 Stripper::NumStrips() // 0x10030940
{
    mangled_assert("?NumStrips@Stripper@@QAEHXZ");
    todo("implement");
    __int32 __result = _sub_10030940(this);
    return __result;
}

_extern std::list<StripNode *,std::allocator<StripNode *> > &_sub_10030900(Stripper *const);
_inline std::list<StripNode *,std::allocator<StripNode *> > &Stripper::GetStripList() // 0x10030900
{
    mangled_assert("?GetStripList@Stripper@@QAEAAV?$list@PAVStripNode@@V?$allocator@PAVStripNode@@@std@@@std@@XZ");
    todo("implement");
    std::list<StripNode *,std::allocator<StripNode *> > & __result = _sub_10030900(this);
    return __result;
}

_extern __int32 _sub_10030950(Stripper *const);
_inline __int32 Stripper::NumTris() // 0x10030950
{
    mangled_assert("?NumTris@Stripper@@QAEHXZ");
    todo("implement");
    __int32 __result = _sub_10030950(this);
    return __result;
}

_extern std::vector<StripPoly,std::allocator<StripPoly> > &_sub_10030910(Stripper *const);
_inline std::vector<StripPoly,std::allocator<StripPoly> > &Stripper::GetTriList() // 0x10030910
{
    mangled_assert("?GetTriList@Stripper@@QAEAAV?$vector@UStripPoly@@V?$allocator@UStripPoly@@@std@@@std@@XZ");
    todo("implement");
    std::vector<StripPoly,std::allocator<StripPoly> > & __result = _sub_10030910(this);
    return __result;
}

/* ---------- private code */

#endif // __STRIPPER_H__
#endif
