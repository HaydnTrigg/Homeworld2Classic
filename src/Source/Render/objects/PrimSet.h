#if 0
#ifndef __PRIMSET_H__
#define __PRIMSET_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class PrimSet :
    public Core
{
public:
    PrimSet(PrimSet const &);
    PrimSet();
    virtual ~PrimSet() override;
    static PrimSet *create();
    PrimSet &operator=(PrimSet const &);
    void add(PrimitiveType, __int32, __int32 *, bool);
    void clear();
    bool containsData() const;
    _inline bool shouldDeleteIndices() const;
    void render(VertexArray *, bool, unsigned __int32, __int32 *) const;
    void renderDirect(VertexArray *, unsigned __int32, __int32 *, __int32 *) const;
    void setPrim(PrimitiveType);
    void setNumIndices(__int32);
    void setIndices(__int32 *, bool);
    _inline PrimitiveType getPrim() const;
    _inline __int32 getNumIndices() const;
    _inline __int32 *getIndices() const;
    struct PrimSet_t
    {
        PrimitiveType m_prim; // 0x0
        __int32 m_numIndices; // 0x4
        __int32 *m_indices; // 0x8
        unsigned __int32 m_pad; // 0xC
    };
    static_assert(sizeof(PrimSet_t) == 16, "Invalid PrimSet_t size");
private:
    PrimSet::PrimSet_t m_rep; // 0x4
    bool m_deleteIndices; // 0x14
    void assign(PrimSet &, PrimSet const &);
};
static_assert(sizeof(PrimSet) == 24, "Invalid PrimSet size");

class PrimSetList :
    public Core
{
private:
    PrimSetList(PrimSetList const &);
public:
    PrimSetList();
    virtual ~PrimSetList() override;
    static PrimSetList *create();
    void add(PrimSet *);
    typedef std::_List_iterator<std::_List_val<std::_List_simple_types<PrimSet *> > > ListI;
    std::_List_iterator<std::_List_val<std::_List_simple_types<PrimSet *> > > begin();
    std::_List_iterator<std::_List_val<std::_List_simple_types<PrimSet *> > > end();
private:
    PrimSetList &operator=(PrimSetList const &);
    typedef std::list<PrimSet *,std::allocator<PrimSet *> > List;
    std::list<PrimSet *,std::allocator<PrimSet *> > m_rep; // 0x4
};
static_assert(sizeof(PrimSetList) == 12, "Invalid PrimSetList size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool PrimSet::shouldDeleteIndices() const // 0x100328E0
{
    mangled_assert("?shouldDeleteIndices@PrimSet@@QBE_NXZ");
    todo("implement");
}

_inline PrimitiveType PrimSet::getPrim() const // 0x100323C0
{
    mangled_assert("?getPrim@PrimSet@@QBE?AW4PrimitiveType@@XZ");
    todo("implement");
}

_inline __int32 PrimSet::getNumIndices() const // 0x10032370
{
    mangled_assert("?getNumIndices@PrimSet@@QBEHXZ");
    todo("implement");
}

_inline __int32 *PrimSet::getIndices() const // 0x10032310
{
    mangled_assert("?getIndices@PrimSet@@QBEPAHXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __PRIMSET_H__
#endif
