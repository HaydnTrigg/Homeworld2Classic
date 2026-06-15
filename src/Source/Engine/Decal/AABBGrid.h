#if 0
#ifndef __AABBGRID_H__
#define __AABBGRID_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class AABBGrid<unsigned short,std::allocator<unsigned short> >
{
public:
    AABBGrid<unsigned short,std::allocator<unsigned short> >(AABBGrid<unsigned short,std::allocator<unsigned short> > const &); /* compiler_generated() */
    AABBGrid<unsigned short,std::allocator<unsigned short> >();
    ~AABBGrid<unsigned short,std::allocator<unsigned short> >();
    typedef std::vector<unsigned short,std::allocator<unsigned short> > CellData;
    void setAABB(vector3 const &, vector3 const &);
    void getAABB(vector3 &, vector3 &);
    void getAABBCell(unsigned __int32, unsigned __int32, unsigned __int32, vector3 &, vector3 &) const;
    void setGrid(unsigned __int32, unsigned __int32, unsigned __int32);
    void getGrid(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &) const;
    void set(unsigned __int32, unsigned __int32, unsigned __int32, std::vector<unsigned short,std::allocator<unsigned short> > const &);
    std::vector<unsigned short,std::allocator<unsigned short> > const &get(unsigned __int32, unsigned __int32, unsigned __int32) const;
    void append(unsigned __int32, unsigned __int32, unsigned __int32, unsigned short const &);
    unsigned __int32 intersect(Collision::Segment const &, std::vector<unsigned short,std::allocator<unsigned short> > &) const;
    unsigned __int32 intersect(vector3 const &, float, std::vector<unsigned short,std::allocator<unsigned short> > &) const;
    unsigned __int32 intersect(vector3 const &, float, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &) const;
    void optimize();
private:
    unsigned __int32 getIndex(unsigned __int32, unsigned __int32, unsigned __int32) const;
    void getCell(vector3 const &, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &) const;
    static void setBegin(std::vector<unsigned short,std::allocator<unsigned short> > &set);
    static void setInsert(std::vector<unsigned short,std::allocator<unsigned short> > &set, unsigned short const &value);
    static void setEnd(std::vector<unsigned short,std::allocator<unsigned short> > &set);
    struct CellInfo
    {
        CellInfo();
        unsigned short m_offset; // 0x0
        unsigned short m_count; // 0x2
    };
    static_assert(sizeof(CellInfo) == 4, "Invalid CellInfo size");
    vector3 m_min; // 0x0
    vector3 m_max; // 0xC
    unsigned __int32 m_xSubd; // 0x18
    unsigned __int32 m_ySubd; // 0x1C
    unsigned __int32 m_zSubd; // 0x20
    bool m_bOptimized; // 0x24
    AABBGrid<unsigned short,std::allocator<unsigned short> >::CellInfo *m_cells; // 0x28
    std::vector<unsigned short,std::allocator<unsigned short> > m_optimizedData; // 0x2C
    std::vector<unsigned short,std::allocator<unsigned short> > *m_unOptimizedData; // 0x38
    static std::vector<bool,std::allocator<bool> > s_bVisited;
public:
    AABBGrid<unsigned short,std::allocator<unsigned short> > &operator=(AABBGrid<unsigned short,std::allocator<unsigned short> > const &); /* compiler_generated() */
};
static_assert(sizeof(AABBGrid<unsigned short,std::allocator<unsigned short> >) == 60, "Invalid AABBGrid<unsigned short,std::allocator<unsigned short> > size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline AABBGrid<unsigned short,std::allocator<unsigned short> >::CellInfo::CellInfo() // 0x5C22E3
{
    mangled_assert("??0CellInfo@?$AABBGrid@GV?$allocator@G@std@@@@QAE@XZ");
    todo("implement");
}

AABBGrid<unsigned short,std::allocator<unsigned short> >::AABBGrid<unsigned short,std::allocator<unsigned short> >() // 0x5C2296
{
    mangled_assert("??0?$AABBGrid@GV?$allocator@G@std@@@@QAE@XZ");
    todo("implement");
}

AABBGrid<unsigned short,std::allocator<unsigned short> >::~AABBGrid<unsigned short,std::allocator<unsigned short> >() // 0x5C237E
{
    mangled_assert("??1?$AABBGrid@GV?$allocator@G@std@@@@QAE@XZ");
    todo("implement");
}

void AABBGrid<unsigned short,std::allocator<unsigned short> >::setAABB(vector3 const &, vector3 const &) // 0x5C3492
{
    mangled_assert("?setAABB@?$AABBGrid@GV?$allocator@G@std@@@@QAEXABVvector3@@0@Z");
    todo("implement");
}

void AABBGrid<unsigned short,std::allocator<unsigned short> >::setGrid(unsigned __int32, unsigned __int32, unsigned __int32) // 0x5C34F1
{
    mangled_assert("?setGrid@?$AABBGrid@GV?$allocator@G@std@@@@QAEXIII@Z");
    todo("implement");
}

void AABBGrid<unsigned short,std::allocator<unsigned short> >::set(unsigned __int32, unsigned __int32, unsigned __int32, std::vector<unsigned short,std::allocator<unsigned short> > const &) // 0x5C346A
{
    mangled_assert("?set@?$AABBGrid@GV?$allocator@G@std@@@@QAEXIIIABV?$vector@GV?$allocator@G@std@@@std@@@Z");
    todo("implement");
}

std::vector<unsigned short,std::allocator<unsigned short> > const &AABBGrid<unsigned short,std::allocator<unsigned short> >::get(unsigned __int32, unsigned __int32, unsigned __int32) const // 0x5C2546
{
    mangled_assert("?get@?$AABBGrid@GV?$allocator@G@std@@@@QBEABV?$vector@GV?$allocator@G@std@@@std@@III@Z");
    todo("implement");
}

unsigned __int32 AABBGrid<unsigned short,std::allocator<unsigned short> >::intersect(vector3 const &, float, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &) const // 0x5C2B2E
{
    mangled_assert("?intersect@?$AABBGrid@GV?$allocator@G@std@@@@QBEIABVvector3@@MAAI11111@Z");
    todo("implement");
}

unsigned __int32 AABBGrid<unsigned short,std::allocator<unsigned short> >::intersect(vector3 const &, float, std::vector<unsigned short,std::allocator<unsigned short> > &) const // 0x5C2C5D
{
    mangled_assert("?intersect@?$AABBGrid@GV?$allocator@G@std@@@@QBEIABVvector3@@MAAV?$vector@GV?$allocator@G@std@@@std@@@Z");
    todo("implement");
}

unsigned __int32 AABBGrid<unsigned short,std::allocator<unsigned short> >::getIndex(unsigned __int32, unsigned __int32, unsigned __int32) const // 0x5C2722
{
    mangled_assert("?getIndex@?$AABBGrid@GV?$allocator@G@std@@@@ABEIIII@Z");
    todo("implement");
}

void AABBGrid<unsigned short,std::allocator<unsigned short> >::getCell(vector3 const &, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &) const // 0x5C25EA
{
    mangled_assert("?getCell@?$AABBGrid@GV?$allocator@G@std@@@@ABEXABVvector3@@AAI11@Z");
    todo("implement");
}

void AABBGrid<unsigned short,std::allocator<unsigned short> >::optimize() // 0x5C2F6A
{
    mangled_assert("?optimize@?$AABBGrid@GV?$allocator@G@std@@@@QAEXXZ");
    todo("implement");
}

void AABBGrid<unsigned short,std::allocator<unsigned short> >::setBegin(std::vector<unsigned short,std::allocator<unsigned short> > &set) // 0x5C34AC
{
    mangled_assert("?setBegin@?$AABBGrid@GV?$allocator@G@std@@@@CGXAAV?$vector@GV?$allocator@G@std@@@std@@@Z");
    todo("implement");
}

void AABBGrid<unsigned short,std::allocator<unsigned short> >::setInsert(std::vector<unsigned short,std::allocator<unsigned short> > &set, unsigned short const &value) // 0x5C35A2
{
    mangled_assert("?setInsert@?$AABBGrid@GV?$allocator@G@std@@@@CGXAAV?$vector@GV?$allocator@G@std@@@std@@ABG@Z");
    todo("implement");
}

void AABBGrid<unsigned short,std::allocator<unsigned short> >::setEnd(std::vector<unsigned short,std::allocator<unsigned short> > &set) // 0x5C34AF
{
    mangled_assert("?setEnd@?$AABBGrid@GV?$allocator@G@std@@@@CGXAAV?$vector@GV?$allocator@G@std@@@std@@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __AABBGRID_H__
#endif
