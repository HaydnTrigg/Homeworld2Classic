#if 0
#ifndef __BVH_H__
#define __BVH_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Collision::BVH<Collision::Internal::Span,Sob *> :
    private Collision::Internal::Span
{
public:
    Collision::Internal::Span::Proxy *CreateProxy(Collision::AABB const &, Sob **);
    void GarbageCollect();
    typedef std::vector<std::pair<Sob * *,Sob * *>,std::allocator<std::pair<Sob * *,Sob * *> > > CollisionList;
    void DetectCollisions(std::vector<std::pair<Sob * *,Sob * *>,std::allocator<std::pair<Sob * *,Sob * *> > > &) const;
    void Query(Collision::Sphere const &, unsigned __int32, std::vector<Sob * *,std::allocator<Sob * *> > &);
    void Query(Collision::Segment const &, unsigned __int32, std::vector<Sob * *,std::allocator<Sob * *> > &);
    Collision::BVHStatistics &GetStats();
    Collision::BVHStatistics const &GetStats() const;
    BVH<Collision::Internal::Span,Sob *>(); /* compiler_generated() */
    ~BVH<Collision::Internal::Span,Sob *>(); /* compiler_generated() */
};
static_assert(sizeof(Collision::BVH<Collision::Internal::Span,Sob *>) == 160, "Invalid Collision::BVH<Collision::Internal::Span,Sob *> size");

class Collision::BVH<Collision::Internal::Span,Sob> :
    private Collision::Internal::Span
{
public:
    _inline Collision::Internal::Span::Proxy *CreateProxy(Collision::AABB const &, Sob *);
    _inline void GarbageCollect();
    typedef std::vector<std::pair<Sob *,Sob *>,std::allocator<std::pair<Sob *,Sob *> > > CollisionList;
    _inline void DetectCollisions(std::vector<std::pair<Sob *,Sob *>,std::allocator<std::pair<Sob *,Sob *> > > &) const;
    _inline void Query(Collision::Sphere const &, unsigned __int32, std::vector<Sob *,std::allocator<Sob *> > &);
    _inline void Query(Collision::Segment const &, unsigned __int32, std::vector<Sob *,std::allocator<Sob *> > &);
    Collision::BVHStatistics &GetStats();
    Collision::BVHStatistics const &GetStats() const;
    _inline BVH<Collision::Internal::Span,Sob>(); /* compiler_generated() */
    _inline ~BVH<Collision::Internal::Span,Sob>(); /* compiler_generated() */
};
static_assert(sizeof(Collision::BVH<Collision::Internal::Span,Sob>) == 160, "Invalid Collision::BVH<Collision::Internal::Span,Sob> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline Collision::Internal::Span::Proxy *Collision::BVH<Collision::Internal::Span,Sob>::CreateProxy(Collision::AABB const &, Sob *) // 0x477BE8
{
    mangled_assert("?CreateProxy@?$BVH@VSpan@Internal@Collision@@VSob@@@Collision@@QAEPAVProxy@Span@Internal@2@ABVAABB@2@PAVSob@@@Z");
    todo("implement");
}

_inline void Collision::BVH<Collision::Internal::Span,Sob>::GarbageCollect() // 0x64D558
{
    mangled_assert("?GarbageCollect@?$BVH@VSpan@Internal@Collision@@VSob@@@Collision@@QAEXXZ");
    todo("implement");
}

_inline void Collision::BVH<Collision::Internal::Span,Sob>::DetectCollisions(std::vector<std::pair<Sob *,Sob *>,std::allocator<std::pair<Sob *,Sob *> > > &) const // 0x64D25C
{
    mangled_assert("?DetectCollisions@?$BVH@VSpan@Internal@Collision@@VSob@@@Collision@@QBEXAAV?$vector@U?$pair@PAVSob@@PAV1@@std@@V?$allocator@U?$pair@PAVSob@@PAV1@@std@@@2@@std@@@Z");
    todo("implement");
}

_inline void Collision::BVH<Collision::Internal::Span,Sob>::Query(Collision::Segment const &, unsigned __int32, std::vector<Sob *,std::allocator<Sob *> > &) // 0x49D83A
{
    mangled_assert("?Query@?$BVH@VSpan@Internal@Collision@@VSob@@@Collision@@QAEXABVSegment@2@IAAV?$vector@PAVSob@@V?$allocator@PAVSob@@@std@@@std@@@Z");
    todo("implement");
}

_inline void Collision::BVH<Collision::Internal::Span,Sob>::Query(Collision::Sphere const &, unsigned __int32, std::vector<Sob *,std::allocator<Sob *> > &) // 0x4A8A31
{
    mangled_assert("?Query@?$BVH@VSpan@Internal@Collision@@VSob@@@Collision@@QAEXABVSphere@2@IAAV?$vector@PAVSob@@V?$allocator@PAVSob@@@std@@@std@@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __BVH_H__
#endif
