#if 0
#ifndef __SPAN_I_H__
#define __SPAN_I_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Collision::Internal::Span
{
public:
    typedef std::vector<std::pair<void *,void *>,std::allocator<std::pair<void *,void *> > > CollisionList;
    class Proxy :
        public Collision::Proxy
    {
    public:
        Proxy(Collision::Internal::Span::Proxy const &); /* compiler_generated() */
        Proxy(Collision::Internal::Span *, Collision::AABB const &, void *);
        virtual ~Proxy() override;
        virtual void Update(Collision::AABB const &) override;
        void UpdateX();
        void UpdateZ();
        _inline float GetMinX() const;
        float GetMinY() const;
        _inline float GetMinZ() const;
        _inline float GetMaxX() const;
        float GetMaxY() const;
        _inline float GetMaxZ() const;
        Collision::Internal::Span::Proxy *m_prevX; // 0x2C
        Collision::Internal::Span::Proxy *m_nextX; // 0x30
        Collision::Internal::Span::Proxy *m_prevZ; // 0x34
        Collision::Internal::Span::Proxy *m_nextZ; // 0x38
    protected:
        Collision::Internal::Span *m_tree; // 0x3C
    public:
        Collision::Internal::Span::Proxy &operator=(Collision::Internal::Span::Proxy const &); /* compiler_generated() */
    };
    static_assert(sizeof(Proxy) == 64, "Invalid Proxy size");
    Span();
    ~Span();
    Collision::Internal::Span::Proxy *CreateProxy(Collision::AABB const &, void *);
    void GarbageCollect();
    void DetectCollisions(std::vector<std::pair<void *,void *>,std::allocator<std::pair<void *,void *> > > &) const;
    void Query(Collision::Sphere const &, unsigned __int32, std::vector<void *,std::allocator<void *> > &);
    void Query(Collision::Segment const &, unsigned __int32, std::vector<void *,std::allocator<void *> > &);
private:
    void DetectCollisionsX(std::vector<std::pair<void *,void *>,std::allocator<std::pair<void *,void *> > > &) const;
    void DetectCollisionsZ(std::vector<std::pair<void *,void *>,std::allocator<std::pair<void *,void *> > > &) const;
    void InsertObjectX(Collision::Internal::Span::Proxy *);
    void InsertObjectZ(Collision::Internal::Span::Proxy *);
    void RemoveObjectX(Collision::Internal::Span::Proxy *);
    void RemoveObjectZ(Collision::Internal::Span::Proxy *);
    Collision::Internal::Span::Proxy *m_objectsX; // 0x0
    Collision::Internal::Span::Proxy *m_objectsZ; // 0x4
    __int32 m_overlapX; // 0x8
    __int32 m_overlapZ; // 0xC
public:
    Collision::BVHStatistics m_stats; // 0x10
};
static_assert(sizeof(Collision::Internal::Span) == 160, "Invalid Collision::Internal::Span size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern float _sub_6615F5(Collision::Internal::Span::Proxy const *const);
_inline float Collision::Internal::Span::Proxy::GetMinX() const // 0x6615F5
{
    mangled_assert("?GetMinX@Proxy@Span@Internal@Collision@@QBEMXZ");
    todo("implement");
    float __result = _sub_6615F5(this);
    return __result;
}

_extern float _sub_6615F9(Collision::Internal::Span::Proxy const *const);
_inline float Collision::Internal::Span::Proxy::GetMinZ() const // 0x6615F9
{
    mangled_assert("?GetMinZ@Proxy@Span@Internal@Collision@@QBEMXZ");
    todo("implement");
    float __result = _sub_6615F9(this);
    return __result;
}

_extern float _sub_6615ED(Collision::Internal::Span::Proxy const *const);
_inline float Collision::Internal::Span::Proxy::GetMaxX() const // 0x6615ED
{
    mangled_assert("?GetMaxX@Proxy@Span@Internal@Collision@@QBEMXZ");
    todo("implement");
    float __result = _sub_6615ED(this);
    return __result;
}

_extern float _sub_6615F1(Collision::Internal::Span::Proxy const *const);
_inline float Collision::Internal::Span::Proxy::GetMaxZ() const // 0x6615F1
{
    mangled_assert("?GetMaxZ@Proxy@Span@Internal@Collision@@QBEMXZ");
    todo("implement");
    float __result = _sub_6615F1(this);
    return __result;
}

/* ---------- private code */

#endif // __SPAN_I_H__
#endif
