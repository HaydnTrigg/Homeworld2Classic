#if 0
#ifndef __MARKER_H__
#define __MARKER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Marker
{
public:
    typedef __int32 ParentID;
    enum
    {
        Invalid = -1,
    };
    Marker(Marker const &); /* compiler_generated() */
    Marker();
    ~Marker();
    __int32 load(IFF &);
    _inline char const *getName() const;
    _inline void setName(char const *);
    char const *getParent() const;
    _inline void setParent(char const *);
    _inline __int32 getParentID() const;
    void setParentID(__int32);
    matrix4 getTransform(float) const;
    _inline matrix4 const &getTransform() const;
    void setTransform(matrix4 const &);
    vector3 getOffset(float) const;
    vector3 getOffset() const;
    vector3 getDirection(float) const;
    vector3 getDirection() const;
private:
    static __int32 HandleHEAD(IFF *iff, IFFChunk *pChunk, void *pContext1, void *pContext2);
    static __int32 HandleKEYF(IFF *iff, IFFChunk *pChunk, void *pContext1, void *pContext2);
    static __int32 HandleANIM(IFF *iff, IFFChunk *pChunk, void *pContext1, void *pContext2);
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_parent; // 0x18
    __int32 m_parentID; // 0x30
    matrix4 m_transform; // 0x34
    vector3 m_translation; // 0x74
    vector3 m_rotation; // 0x80
    AnimVector3 m_translations; // 0x8C
    AnimVector3 m_rotations; // 0x98
public:
    Marker &operator=(Marker const &); /* compiler_generated() */
};
static_assert(sizeof(Marker) == 164, "Invalid Marker size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline char const *Marker::getName() const // 0x517A24
{
    mangled_assert("?getName@Marker@@QBEPBDXZ");
    todo("implement");
}

_inline void Marker::setName(char const *) // 0x516F12
{
    mangled_assert("?setName@Marker@@QAEXPBD@Z");
    todo("implement");
}

_inline void Marker::setParent(char const *) // 0x516F2F
{
    mangled_assert("?setParent@Marker@@QAEXPBD@Z");
    todo("implement");
}

_inline matrix4 const &Marker::getTransform() const // 0x517A33
{
    mangled_assert("?getTransform@Marker@@QBEABVmatrix4@@XZ");
    todo("implement");
}

_inline __int32 Marker::getParentID() const // 0x517A2F
{
    mangled_assert("?getParentID@Marker@@QBEHXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __MARKER_H__
#endif
