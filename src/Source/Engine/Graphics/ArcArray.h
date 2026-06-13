#if 0
#ifndef __ARCARRAY_H__
#define __ARCARRAY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ArcArray
{
public:
    ArcArray(ArcArray const &); /* compiler_generated() */
    ArcArray();
    ~ArcArray();
    void addSphere(vector3 const &, float, vector4 const &, float);
    void addCircle(vector3 const &, float, vector4 const &);
    void computeIntersections();
    void clear();
    void render() const;
    void renderArcSegment(vector3 const &, float, vector4 const &, float, float) const;
    struct ArcSegment
    {
        float start; // 0x0
        float end; // 0x4
        bool bVisible; // 0x8
    };
    static_assert(sizeof(ArcSegment) == 12, "Invalid ArcSegment size");
    struct Arc
    {
        vector3 m_position; // 0x0
        float m_radius; // 0xC
        vector4 m_colour; // 0x10
        std::smallvector<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> > m_segments; // 0x20
        typedef ArcArray::ArcSegment const *SegmentConstIterator;
        typedef ArcArray::ArcSegment *SegmentIterator;
        Arc(ArcArray::Arc const &);
        Arc();
        void intersect(ArcArray::Arc &);
        ArcArray::ArcSegment &addSegment(float, float, bool);
        void removeSegment(float, float);
        _inline ~Arc(); /* compiler_generated() */
        _inline ArcArray::Arc &operator=(ArcArray::Arc const &); /* compiler_generated() */
    };
    static_assert(sizeof(Arc) == 96, "Invalid Arc size");
private:
    std::smallvector<ArcArray::Arc,4,std::allocator<ArcArray::Arc> > m_circles; // 0x0
    typedef ArcArray::Arc const *ArcConstIterator;
    typedef ArcArray::Arc *ArcIterator;
    static _inline bool sortCB(ArcArray::Arc const &a, ArcArray::Arc const &b);
public:
    ArcArray &operator=(ArcArray const &); /* compiler_generated() */
};
static_assert(sizeof(ArcArray) == 400, "Invalid ArcArray size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_56A96A(ArcArray::Arc const &, ArcArray::Arc const &);
_inline bool ArcArray::sortCB(ArcArray::Arc const &a, ArcArray::Arc const &b) // 0x56A96A
{
    mangled_assert("?sortCB@ArcArray@@CG_NABUArc@1@0@Z");
    todo("implement");
    bool __result = _sub_56A96A(a, b);
    return __result;
}

/* ---------- private code */

#endif // __ARCARRAY_H__
#endif
