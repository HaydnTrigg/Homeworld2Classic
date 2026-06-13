#if 0
#ifndef __BLOBBER_H__
#define __BLOBBER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class BlobGroup<Blob<Asteroid,AsteroidGetFunc> >
{
public:
    _inline void addBlob(Blob<Asteroid,AsteroidGetFunc> *);
    _inline void merge(BlobGroup<Blob<Asteroid,AsteroidGetFunc> > const &);
    _inline void clear();
    _inline bool empty();
    typedef std::vector<Blob<Asteroid,AsteroidGetFunc> *,std::allocator<Blob<Asteroid,AsteroidGetFunc> *> > BlobContainer;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Blob<Asteroid,AsteroidGetFunc> *> > > iterator;
    _inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Blob<Asteroid,AsteroidGetFunc> *> > > begin();
    _inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Blob<Asteroid,AsteroidGetFunc> *> > > end();
private:
    std::vector<Blob<Asteroid,AsteroidGetFunc> *,std::allocator<Blob<Asteroid,AsteroidGetFunc> *> > m_blobs; // 0x0
public:
    _inline BlobGroup<Blob<Asteroid,AsteroidGetFunc> >(BlobGroup<Blob<Asteroid,AsteroidGetFunc> > const &); /* compiler_generated() */
    _inline BlobGroup<Blob<Asteroid,AsteroidGetFunc> >(); /* compiler_generated() */
    _inline ~BlobGroup<Blob<Asteroid,AsteroidGetFunc> >(); /* compiler_generated() */
    BlobGroup<Blob<Asteroid,AsteroidGetFunc> > &operator=(BlobGroup<Blob<Asteroid,AsteroidGetFunc> > const &); /* compiler_generated() */
};
static_assert(sizeof(BlobGroup<Blob<Asteroid,AsteroidGetFunc> >) == 12, "Invalid BlobGroup<Blob<Asteroid,AsteroidGetFunc> > size");

class BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> >
{
public:
    _inline void addBlob(Blob<Squadron,GroupifySquadrons::SquadGetFunc> *);
    _inline void merge(BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > const &);
    _inline void clear();
    _inline bool empty();
    typedef std::vector<Blob<Squadron,GroupifySquadrons::SquadGetFunc> *,std::allocator<Blob<Squadron,GroupifySquadrons::SquadGetFunc> *> > BlobContainer;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Blob<Squadron,GroupifySquadrons::SquadGetFunc> *> > > iterator;
    _inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Blob<Squadron,GroupifySquadrons::SquadGetFunc> *> > > begin();
    _inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Blob<Squadron,GroupifySquadrons::SquadGetFunc> *> > > end();
private:
    std::vector<Blob<Squadron,GroupifySquadrons::SquadGetFunc> *,std::allocator<Blob<Squadron,GroupifySquadrons::SquadGetFunc> *> > m_blobs; // 0x0
public:
    _inline BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> >(BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > const &); /* compiler_generated() */
    _inline BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> >(); /* compiler_generated() */
    _inline ~BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> >(); /* compiler_generated() */
    BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > &operator=(BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > const &); /* compiler_generated() */
};
static_assert(sizeof(BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> >) == 12, "Invalid BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > size");

class Blob<Asteroid,AsteroidGetFunc>
{
public:
    _inline Blob<Asteroid,AsteroidGetFunc>(vector3 const &, Asteroid *);
    _inline float getDistance() const;
    _inline vector3 const &getPosition() const;
    _inline float getRadius() const;
    _inline Asteroid *getUserType() const;
    _inline bool isColliding(Blob<Asteroid,AsteroidGetFunc> const &) const;
    typedef std::list<BlobGroup<Blob<Asteroid,AsteroidGetFunc> >,std::allocator<BlobGroup<Blob<Asteroid,AsteroidGetFunc> > > > BlobGroupContainer;
    typedef std::_List_iterator<std::_List_val<std::_List_simple_types<BlobGroup<Blob<Asteroid,AsteroidGetFunc> > > > > BlobGroupContainerIterator;
    _inline void setBlobGroup(std::_List_iterator<std::_List_val<std::_List_simple_types<BlobGroup<Blob<Asteroid,AsteroidGetFunc> > > > > const &);
    _inline std::_List_iterator<std::_List_val<std::_List_simple_types<BlobGroup<Blob<Asteroid,AsteroidGetFunc> > > > > const &getBlobGroup() const;
private:
    Asteroid *m_userType; // 0x0
    vector3 m_position; // 0x4
    float m_radius; // 0x10
    float m_distance; // 0x14
    std::_List_iterator<std::_List_val<std::_List_simple_types<BlobGroup<Blob<Asteroid,AsteroidGetFunc> > > > > m_iterator; // 0x18
};
static_assert(sizeof(Blob<Asteroid,AsteroidGetFunc>) == 28, "Invalid Blob<Asteroid,AsteroidGetFunc> size");

class Blob<Squadron,GroupifySquadrons::SquadGetFunc>
{
public:
    _inline Blob<Squadron,GroupifySquadrons::SquadGetFunc>(vector3 const &, Squadron *);
    _inline float getDistance() const;
    _inline vector3 const &getPosition() const;
    _inline float getRadius() const;
    _inline Squadron *getUserType() const;
    _inline bool isColliding(Blob<Squadron,GroupifySquadrons::SquadGetFunc> const &) const;
    typedef std::list<BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> >,std::allocator<BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > > > BlobGroupContainer;
    typedef std::_List_iterator<std::_List_val<std::_List_simple_types<BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > > > > BlobGroupContainerIterator;
    _inline void setBlobGroup(std::_List_iterator<std::_List_val<std::_List_simple_types<BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > > > > const &);
    _inline std::_List_iterator<std::_List_val<std::_List_simple_types<BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > > > > const &getBlobGroup() const;
private:
    Squadron *m_userType; // 0x0
    vector3 m_position; // 0x4
    float m_radius; // 0x10
    float m_distance; // 0x14
    std::_List_iterator<std::_List_val<std::_List_simple_types<BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > > > > m_iterator; // 0x18
};
static_assert(sizeof(Blob<Squadron,GroupifySquadrons::SquadGetFunc>) == 28, "Invalid Blob<Squadron,GroupifySquadrons::SquadGetFunc> size");

class Blobber<Asteroid,AsteroidGetFunc>
{
public:
    Blobber<Asteroid,AsteroidGetFunc>(Blobber<Asteroid,AsteroidGetFunc> const &); /* compiler_generated() */
    _inline Blobber<Asteroid,AsteroidGetFunc>(vector3 const &);
    _inline void AddBlob(Asteroid *);
    typedef std::vector<Asteroid *,std::allocator<Asteroid *> > UserTypeVector;
    typedef std::vector<std::vector<Asteroid *,std::allocator<Asteroid *> >,std::allocator<std::vector<Asteroid *,std::allocator<Asteroid *> > > > UserTypeGroups;
    void GenerateGroups(std::vector<std::vector<Asteroid *,std::allocator<Asteroid *> >,std::allocator<std::vector<Asteroid *,std::allocator<Asteroid *> > > > &);
    typedef std::list<Blob<Asteroid,AsteroidGetFunc>,std::allocator<Blob<Asteroid,AsteroidGetFunc> > > BlobContainer;
    typedef std::_List_iterator<std::_List_val<std::_List_simple_types<Blob<Asteroid,AsteroidGetFunc> > > > BlobContainerIterator;
private:
    std::list<Blob<Asteroid,AsteroidGetFunc>,std::allocator<Blob<Asteroid,AsteroidGetFunc> > > m_blobs; // 0x0
    vector3 m_origin; // 0x8
public:
    _inline ~Blobber<Asteroid,AsteroidGetFunc>(); /* compiler_generated() */
    Blobber<Asteroid,AsteroidGetFunc> &operator=(Blobber<Asteroid,AsteroidGetFunc> const &); /* compiler_generated() */
};
static_assert(sizeof(Blobber<Asteroid,AsteroidGetFunc>) == 20, "Invalid Blobber<Asteroid,AsteroidGetFunc> size");

class Blobber<Squadron,GroupifySquadrons::SquadGetFunc>
{
public:
    Blobber<Squadron,GroupifySquadrons::SquadGetFunc>(Blobber<Squadron,GroupifySquadrons::SquadGetFunc> const &); /* compiler_generated() */
    _inline Blobber<Squadron,GroupifySquadrons::SquadGetFunc>(vector3 const &);
    _inline void AddBlob(Squadron *);
    typedef std::vector<Squadron *,std::allocator<Squadron *> > UserTypeVector;
    typedef std::vector<std::vector<Squadron *,std::allocator<Squadron *> >,std::allocator<std::vector<Squadron *,std::allocator<Squadron *> > > > UserTypeGroups;
    void GenerateGroups(std::vector<std::vector<Squadron *,std::allocator<Squadron *> >,std::allocator<std::vector<Squadron *,std::allocator<Squadron *> > > > &);
    typedef std::list<Blob<Squadron,GroupifySquadrons::SquadGetFunc>,std::allocator<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > > BlobContainer;
    typedef std::_List_iterator<std::_List_val<std::_List_simple_types<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > > > BlobContainerIterator;
private:
    std::list<Blob<Squadron,GroupifySquadrons::SquadGetFunc>,std::allocator<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > > m_blobs; // 0x0
    vector3 m_origin; // 0x8
public:
    _inline ~Blobber<Squadron,GroupifySquadrons::SquadGetFunc>(); /* compiler_generated() */
    Blobber<Squadron,GroupifySquadrons::SquadGetFunc> &operator=(Blobber<Squadron,GroupifySquadrons::SquadGetFunc> const &); /* compiler_generated() */
};
static_assert(sizeof(Blobber<Squadron,GroupifySquadrons::SquadGetFunc>) == 20, "Invalid Blobber<Squadron,GroupifySquadrons::SquadGetFunc> size");

/* ---------- prototypes */

extern bool operator<<Asteroid,AsteroidGetFunc>(Blob<Asteroid,AsteroidGetFunc> const &sbA, Blob<Asteroid,AsteroidGetFunc> const &sbB);
extern bool operator<<Squadron,GroupifySquadrons::SquadGetFunc>(Blob<Squadron,GroupifySquadrons::SquadGetFunc> const &sbA, Blob<Squadron,GroupifySquadrons::SquadGetFunc> const &sbB);

/* ---------- globals */

/* ---------- public code */

_extern void _sub_4EB30C(BlobGroup<Blob<Asteroid,AsteroidGetFunc> > *const, Blob<Asteroid,AsteroidGetFunc> *);
_inline void BlobGroup<Blob<Asteroid,AsteroidGetFunc> >::addBlob(Blob<Asteroid,AsteroidGetFunc> *) // 0x4EB30C
{
    mangled_assert("?addBlob@?$BlobGroup@V?$Blob@VAsteroid@@UAsteroidGetFunc@@@@@@QAEXPAV?$Blob@VAsteroid@@UAsteroidGetFunc@@@@@Z");
    todo("implement");
    _sub_4EB30C(this, arg);
}

_extern void _sub_6BA86C(BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > *const, Blob<Squadron,GroupifySquadrons::SquadGetFunc> *);
_inline void BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> >::addBlob(Blob<Squadron,GroupifySquadrons::SquadGetFunc> *) // 0x6BA86C
{
    mangled_assert("?addBlob@?$BlobGroup@V?$Blob@VSquadron@@USquadGetFunc@GroupifySquadrons@@@@@@QAEXPAV?$Blob@VSquadron@@USquadGetFunc@GroupifySquadrons@@@@@Z");
    todo("implement");
    _sub_6BA86C(this, arg);
}

_extern void _sub_4EB85C(BlobGroup<Blob<Asteroid,AsteroidGetFunc> > *const, BlobGroup<Blob<Asteroid,AsteroidGetFunc> > const &);
_inline void BlobGroup<Blob<Asteroid,AsteroidGetFunc> >::merge(BlobGroup<Blob<Asteroid,AsteroidGetFunc> > const &) // 0x4EB85C
{
    mangled_assert("?merge@?$BlobGroup@V?$Blob@VAsteroid@@UAsteroidGetFunc@@@@@@QAEXABV1@@Z");
    todo("implement");
    _sub_4EB85C(this, arg);
}

_extern void _sub_6BACD2(BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > *const, BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > const &);
_inline void BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> >::merge(BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > const &) // 0x6BACD2
{
    mangled_assert("?merge@?$BlobGroup@V?$Blob@VSquadron@@USquadGetFunc@GroupifySquadrons@@@@@@QAEXABV1@@Z");
    todo("implement");
    _sub_6BACD2(this, arg);
}

_extern void _sub_4EB435(BlobGroup<Blob<Asteroid,AsteroidGetFunc> > *const);
_inline void BlobGroup<Blob<Asteroid,AsteroidGetFunc> >::clear() // 0x4EB435
{
    mangled_assert("?clear@?$BlobGroup@V?$Blob@VAsteroid@@UAsteroidGetFunc@@@@@@QAEXXZ");
    todo("implement");
    _sub_4EB435(this);
}

_extern void _sub_6BA944(BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > *const);
_inline void BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> >::clear() // 0x6BA944
{
    mangled_assert("?clear@?$BlobGroup@V?$Blob@VSquadron@@USquadGetFunc@GroupifySquadrons@@@@@@QAEXXZ");
    todo("implement");
    _sub_6BA944(this);
}

_extern bool _sub_4EB59C(BlobGroup<Blob<Asteroid,AsteroidGetFunc> > *const);
_inline bool BlobGroup<Blob<Asteroid,AsteroidGetFunc> >::empty() // 0x4EB59C
{
    mangled_assert("?empty@?$BlobGroup@V?$Blob@VAsteroid@@UAsteroidGetFunc@@@@@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_4EB59C(this);
    return __result;
}

_extern bool _sub_6BAA67(BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > *const);
_inline bool BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> >::empty() // 0x6BAA67
{
    mangled_assert("?empty@?$BlobGroup@V?$Blob@VSquadron@@USquadGetFunc@GroupifySquadrons@@@@@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_6BAA67(this);
    return __result;
}

_extern std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Blob<Asteroid,AsteroidGetFunc> *> > > _sub_4EB3B0(BlobGroup<Blob<Asteroid,AsteroidGetFunc> > *const);
_inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Blob<Asteroid,AsteroidGetFunc> *> > > BlobGroup<Blob<Asteroid,AsteroidGetFunc> >::begin() // 0x4EB3B0
{
    mangled_assert("?begin@?$BlobGroup@V?$Blob@VAsteroid@@UAsteroidGetFunc@@@@@@QAE?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PAV?$Blob@VAsteroid@@UAsteroidGetFunc@@@@@std@@@std@@@std@@XZ");
    todo("implement");
    std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Blob<Asteroid,AsteroidGetFunc> *> > > __result = _sub_4EB3B0(this);
    return __result;
}

_extern std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Blob<Squadron,GroupifySquadrons::SquadGetFunc> *> > > _sub_6BA8F4(BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > *const);
_inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Blob<Squadron,GroupifySquadrons::SquadGetFunc> *> > > BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> >::begin() // 0x6BA8F4
{
    mangled_assert("?begin@?$BlobGroup@V?$Blob@VSquadron@@USquadGetFunc@GroupifySquadrons@@@@@@QAE?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PAV?$Blob@VSquadron@@USquadGetFunc@GroupifySquadrons@@@@@std@@@std@@@std@@XZ");
    todo("implement");
    std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Blob<Squadron,GroupifySquadrons::SquadGetFunc> *> > > __result = _sub_6BA8F4(this);
    return __result;
}

_extern std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Blob<Asteroid,AsteroidGetFunc> *> > > _sub_4EB5C6(BlobGroup<Blob<Asteroid,AsteroidGetFunc> > *const);
_inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Blob<Asteroid,AsteroidGetFunc> *> > > BlobGroup<Blob<Asteroid,AsteroidGetFunc> >::end() // 0x4EB5C6
{
    mangled_assert("?end@?$BlobGroup@V?$Blob@VAsteroid@@UAsteroidGetFunc@@@@@@QAE?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PAV?$Blob@VAsteroid@@UAsteroidGetFunc@@@@@std@@@std@@@std@@XZ");
    todo("implement");
    std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Blob<Asteroid,AsteroidGetFunc> *> > > __result = _sub_4EB5C6(this);
    return __result;
}

_extern std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Blob<Squadron,GroupifySquadrons::SquadGetFunc> *> > > _sub_6BAA86(BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > *const);
_inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Blob<Squadron,GroupifySquadrons::SquadGetFunc> *> > > BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> >::end() // 0x6BAA86
{
    mangled_assert("?end@?$BlobGroup@V?$Blob@VSquadron@@USquadGetFunc@GroupifySquadrons@@@@@@QAE?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PAV?$Blob@VSquadron@@USquadGetFunc@GroupifySquadrons@@@@@std@@@std@@@std@@XZ");
    todo("implement");
    std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Blob<Squadron,GroupifySquadrons::SquadGetFunc> *> > > __result = _sub_6BAA86(this);
    return __result;
}

_extern _sub_4EA1AB(Blob<Asteroid,AsteroidGetFunc> *const, vector3 const &, Asteroid *);
_inline Blob<Asteroid,AsteroidGetFunc>::Blob<Asteroid,AsteroidGetFunc>(vector3 const &, Asteroid *) // 0x4EA1AB
{
    mangled_assert("??0?$Blob@VAsteroid@@UAsteroidGetFunc@@@@QAE@ABVvector3@@PAVAsteroid@@@Z");
    todo("implement");
    _sub_4EA1AB(this, arg, arg);
}

_extern _sub_6B9B7A(Blob<Squadron,GroupifySquadrons::SquadGetFunc> *const, vector3 const &, Squadron *);
_inline Blob<Squadron,GroupifySquadrons::SquadGetFunc>::Blob<Squadron,GroupifySquadrons::SquadGetFunc>(vector3 const &, Squadron *) // 0x6B9B7A
{
    mangled_assert("??0?$Blob@VSquadron@@USquadGetFunc@GroupifySquadrons@@@@QAE@ABVvector3@@PAVSquadron@@@Z");
    todo("implement");
    _sub_6B9B7A(this, arg, arg);
}

_extern float _sub_4EB747(Blob<Asteroid,AsteroidGetFunc> const *const);
_inline float Blob<Asteroid,AsteroidGetFunc>::getDistance() const // 0x4EB747
{
    mangled_assert("?getDistance@?$Blob@VAsteroid@@UAsteroidGetFunc@@@@QBEMXZ");
    todo("implement");
    float __result = _sub_4EB747(this);
    return __result;
}

_extern float _sub_6BABD7(Blob<Squadron,GroupifySquadrons::SquadGetFunc> const *const);
_inline float Blob<Squadron,GroupifySquadrons::SquadGetFunc>::getDistance() const // 0x6BABD7
{
    mangled_assert("?getDistance@?$Blob@VSquadron@@USquadGetFunc@GroupifySquadrons@@@@QBEMXZ");
    todo("implement");
    float __result = _sub_6BABD7(this);
    return __result;
}

_extern vector3 const &_sub_4EB74B(Blob<Asteroid,AsteroidGetFunc> const *const);
_inline vector3 const &Blob<Asteroid,AsteroidGetFunc>::getPosition() const // 0x4EB74B
{
    mangled_assert("?getPosition@?$Blob@VAsteroid@@UAsteroidGetFunc@@@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4EB74B(this);
    return __result;
}

_extern vector3 const &_sub_6BABDB(Blob<Squadron,GroupifySquadrons::SquadGetFunc> const *const);
_inline vector3 const &Blob<Squadron,GroupifySquadrons::SquadGetFunc>::getPosition() const // 0x6BABDB
{
    mangled_assert("?getPosition@?$Blob@VSquadron@@USquadGetFunc@GroupifySquadrons@@@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6BABDB(this);
    return __result;
}

_extern float _sub_4EB74F(Blob<Asteroid,AsteroidGetFunc> const *const);
_inline float Blob<Asteroid,AsteroidGetFunc>::getRadius() const // 0x4EB74F
{
    mangled_assert("?getRadius@?$Blob@VAsteroid@@UAsteroidGetFunc@@@@QBEMXZ");
    todo("implement");
    float __result = _sub_4EB74F(this);
    return __result;
}

_extern float _sub_6BABDF(Blob<Squadron,GroupifySquadrons::SquadGetFunc> const *const);
_inline float Blob<Squadron,GroupifySquadrons::SquadGetFunc>::getRadius() const // 0x6BABDF
{
    mangled_assert("?getRadius@?$Blob@VSquadron@@USquadGetFunc@GroupifySquadrons@@@@QBEMXZ");
    todo("implement");
    float __result = _sub_6BABDF(this);
    return __result;
}

_extern Asteroid *_sub_4EB753(Blob<Asteroid,AsteroidGetFunc> const *const);
_inline Asteroid *Blob<Asteroid,AsteroidGetFunc>::getUserType() const // 0x4EB753
{
    mangled_assert("?getUserType@?$Blob@VAsteroid@@UAsteroidGetFunc@@@@QBEPAVAsteroid@@XZ");
    todo("implement");
    Asteroid * __result = _sub_4EB753(this);
    return __result;
}

_extern Squadron *_sub_6BABE3(Blob<Squadron,GroupifySquadrons::SquadGetFunc> const *const);
_inline Squadron *Blob<Squadron,GroupifySquadrons::SquadGetFunc>::getUserType() const // 0x6BABE3
{
    mangled_assert("?getUserType@?$Blob@VSquadron@@USquadGetFunc@GroupifySquadrons@@@@QBEPAVSquadron@@XZ");
    todo("implement");
    Squadron * __result = _sub_6BABE3(this);
    return __result;
}

_extern bool _sub_4EB78B(Blob<Asteroid,AsteroidGetFunc> const *const, Blob<Asteroid,AsteroidGetFunc> const &);
_inline bool Blob<Asteroid,AsteroidGetFunc>::isColliding(Blob<Asteroid,AsteroidGetFunc> const &) const // 0x4EB78B
{
    mangled_assert("?isColliding@?$Blob@VAsteroid@@UAsteroidGetFunc@@@@QBE_NABV1@@Z");
    todo("implement");
    bool __result = _sub_4EB78B(this, arg);
    return __result;
}

_extern bool _sub_6BAC1B(Blob<Squadron,GroupifySquadrons::SquadGetFunc> const *const, Blob<Squadron,GroupifySquadrons::SquadGetFunc> const &);
_inline bool Blob<Squadron,GroupifySquadrons::SquadGetFunc>::isColliding(Blob<Squadron,GroupifySquadrons::SquadGetFunc> const &) const // 0x6BAC1B
{
    mangled_assert("?isColliding@?$Blob@VSquadron@@USquadGetFunc@GroupifySquadrons@@@@QBE_NABV1@@Z");
    todo("implement");
    bool __result = _sub_6BAC1B(this, arg);
    return __result;
}

_extern void _sub_4EBA4E(Blob<Asteroid,AsteroidGetFunc> *const, std::_List_iterator<std::_List_val<std::_List_simple_types<BlobGroup<Blob<Asteroid,AsteroidGetFunc> > > > > const &);
_inline void Blob<Asteroid,AsteroidGetFunc>::setBlobGroup(std::_List_iterator<std::_List_val<std::_List_simple_types<BlobGroup<Blob<Asteroid,AsteroidGetFunc> > > > > const &) // 0x4EBA4E
{
    mangled_assert("?setBlobGroup@?$Blob@VAsteroid@@UAsteroidGetFunc@@@@QAEXABV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$BlobGroup@V?$Blob@VAsteroid@@UAsteroidGetFunc@@@@@@@std@@@std@@@std@@@Z");
    todo("implement");
    _sub_4EBA4E(this, arg);
}

_extern void _sub_6BAE72(Blob<Squadron,GroupifySquadrons::SquadGetFunc> *const, std::_List_iterator<std::_List_val<std::_List_simple_types<BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > > > > const &);
_inline void Blob<Squadron,GroupifySquadrons::SquadGetFunc>::setBlobGroup(std::_List_iterator<std::_List_val<std::_List_simple_types<BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > > > > const &) // 0x6BAE72
{
    mangled_assert("?setBlobGroup@?$Blob@VSquadron@@USquadGetFunc@GroupifySquadrons@@@@QAEXABV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$BlobGroup@V?$Blob@VSquadron@@USquadGetFunc@GroupifySquadrons@@@@@@@std@@@std@@@std@@@Z");
    todo("implement");
    _sub_6BAE72(this, arg);
}

_extern std::_List_iterator<std::_List_val<std::_List_simple_types<BlobGroup<Blob<Asteroid,AsteroidGetFunc> > > > > const &_sub_4EB743(Blob<Asteroid,AsteroidGetFunc> const *const);
_inline std::_List_iterator<std::_List_val<std::_List_simple_types<BlobGroup<Blob<Asteroid,AsteroidGetFunc> > > > > const &Blob<Asteroid,AsteroidGetFunc>::getBlobGroup() const // 0x4EB743
{
    mangled_assert("?getBlobGroup@?$Blob@VAsteroid@@UAsteroidGetFunc@@@@QBEABV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$BlobGroup@V?$Blob@VAsteroid@@UAsteroidGetFunc@@@@@@@std@@@std@@@std@@XZ");
    todo("implement");
    std::_List_iterator<std::_List_val<std::_List_simple_types<BlobGroup<Blob<Asteroid,AsteroidGetFunc> > > > > const & __result = _sub_4EB743(this);
    return __result;
}

_extern std::_List_iterator<std::_List_val<std::_List_simple_types<BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > > > > const &_sub_6BABD3(Blob<Squadron,GroupifySquadrons::SquadGetFunc> const *const);
_inline std::_List_iterator<std::_List_val<std::_List_simple_types<BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > > > > const &Blob<Squadron,GroupifySquadrons::SquadGetFunc>::getBlobGroup() const // 0x6BABD3
{
    mangled_assert("?getBlobGroup@?$Blob@VSquadron@@USquadGetFunc@GroupifySquadrons@@@@QBEABV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$BlobGroup@V?$Blob@VSquadron@@USquadGetFunc@GroupifySquadrons@@@@@@@std@@@std@@@std@@XZ");
    todo("implement");
    std::_List_iterator<std::_List_val<std::_List_simple_types<BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > > > > const & __result = _sub_6BABD3(this);
    return __result;
}

_extern bool _sub_4E9215(Blob<Asteroid,AsteroidGetFunc> const &, Blob<Asteroid,AsteroidGetFunc> const &);
bool operator<<Asteroid,AsteroidGetFunc>(Blob<Asteroid,AsteroidGetFunc> const &sbA, Blob<Asteroid,AsteroidGetFunc> const &sbB) // 0x4E9215
{
    mangled_assert("??$?MVAsteroid@@UAsteroidGetFunc@@@@YG_NABV?$Blob@VAsteroid@@UAsteroidGetFunc@@@@0@Z");
    todo("implement");
    bool __result = _sub_4E9215(sbA, sbB);
    return __result;
}

_extern bool _sub_6B8D79(Blob<Squadron,GroupifySquadrons::SquadGetFunc> const &, Blob<Squadron,GroupifySquadrons::SquadGetFunc> const &);
bool operator<<Squadron,GroupifySquadrons::SquadGetFunc>(Blob<Squadron,GroupifySquadrons::SquadGetFunc> const &sbA, Blob<Squadron,GroupifySquadrons::SquadGetFunc> const &sbB) // 0x6B8D79
{
    mangled_assert("??$?MVSquadron@@USquadGetFunc@GroupifySquadrons@@@@YG_NABV?$Blob@VSquadron@@USquadGetFunc@GroupifySquadrons@@@@0@Z");
    todo("implement");
    bool __result = _sub_6B8D79(sbA, sbB);
    return __result;
}

_extern _sub_4EA262(Blobber<Asteroid,AsteroidGetFunc> *const, vector3 const &);
_inline Blobber<Asteroid,AsteroidGetFunc>::Blobber<Asteroid,AsteroidGetFunc>(vector3 const &) // 0x4EA262
{
    mangled_assert("??0?$Blobber@VAsteroid@@UAsteroidGetFunc@@@@QAE@ABVvector3@@@Z");
    todo("implement");
    _sub_4EA262(this, arg);
}

_extern _sub_6B9C1F(Blobber<Squadron,GroupifySquadrons::SquadGetFunc> *const, vector3 const &);
_inline Blobber<Squadron,GroupifySquadrons::SquadGetFunc>::Blobber<Squadron,GroupifySquadrons::SquadGetFunc>(vector3 const &) // 0x6B9C1F
{
    mangled_assert("??0?$Blobber@VSquadron@@USquadGetFunc@GroupifySquadrons@@@@QAE@ABVvector3@@@Z");
    todo("implement");
    _sub_6B9C1F(this, arg);
}

_extern void _sub_4EA81E(Blobber<Asteroid,AsteroidGetFunc> *const, Asteroid *);
_inline void Blobber<Asteroid,AsteroidGetFunc>::AddBlob(Asteroid *) // 0x4EA81E
{
    mangled_assert("?AddBlob@?$Blobber@VAsteroid@@UAsteroidGetFunc@@@@QAEXPAVAsteroid@@@Z");
    todo("implement");
    _sub_4EA81E(this, arg);
}

_extern void _sub_6BA0BD(Blobber<Squadron,GroupifySquadrons::SquadGetFunc> *const, Squadron *);
_inline void Blobber<Squadron,GroupifySquadrons::SquadGetFunc>::AddBlob(Squadron *) // 0x6BA0BD
{
    mangled_assert("?AddBlob@?$Blobber@VSquadron@@USquadGetFunc@GroupifySquadrons@@@@QAEXPAVSquadron@@@Z");
    todo("implement");
    _sub_6BA0BD(this, arg);
}

_extern void _sub_4EAA70(Blobber<Asteroid,AsteroidGetFunc> *const, std::vector<std::vector<Asteroid *,std::allocator<Asteroid *> >,std::allocator<std::vector<Asteroid *,std::allocator<Asteroid *> > > > &);
void Blobber<Asteroid,AsteroidGetFunc>::GenerateGroups(std::vector<std::vector<Asteroid *,std::allocator<Asteroid *> >,std::allocator<std::vector<Asteroid *,std::allocator<Asteroid *> > > > &) // 0x4EAA70
{
    mangled_assert("?GenerateGroups@?$Blobber@VAsteroid@@UAsteroidGetFunc@@@@QAEXAAV?$vector@V?$vector@PAVAsteroid@@V?$allocator@PAVAsteroid@@@std@@@std@@V?$allocator@V?$vector@PAVAsteroid@@V?$allocator@PAVAsteroid@@@std@@@std@@@2@@std@@@Z");
    todo("implement");
    _sub_4EAA70(this, arg);
}

_extern void _sub_6BA0E7(Blobber<Squadron,GroupifySquadrons::SquadGetFunc> *const, std::vector<std::vector<Squadron *,std::allocator<Squadron *> >,std::allocator<std::vector<Squadron *,std::allocator<Squadron *> > > > &);
void Blobber<Squadron,GroupifySquadrons::SquadGetFunc>::GenerateGroups(std::vector<std::vector<Squadron *,std::allocator<Squadron *> >,std::allocator<std::vector<Squadron *,std::allocator<Squadron *> > > > &) // 0x6BA0E7
{
    mangled_assert("?GenerateGroups@?$Blobber@VSquadron@@USquadGetFunc@GroupifySquadrons@@@@QAEXAAV?$vector@V?$vector@PAVSquadron@@V?$allocator@PAVSquadron@@@std@@@std@@V?$allocator@V?$vector@PAVSquadron@@V?$allocator@PAVSquadron@@@std@@@std@@@2@@std@@@Z");
    todo("implement");
    _sub_6BA0E7(this, arg);
}

/* ---------- private code */

#endif // __BLOBBER_H__
#endif
