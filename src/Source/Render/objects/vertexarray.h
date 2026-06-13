#if 0
#ifndef __VERTEXARRAY_H__
#define __VERTEXARRAY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class VertexArray :
    public Core
{
public:
    enum Usage
    {
        USAGE_Static = 0,
        USAGE_Dynamic,
    };
private:
    VertexArray(VertexArray const &);
public:
    VertexArray();
    virtual ~VertexArray() override;
    static VertexArray *create();
    void setUsage(VertexArray::Usage);
    void clear();
    void set(unsigned __int32, FatVertex const *, unsigned __int32);
    void own(unsigned __int32, FatVertex *, unsigned __int32);
    void reown(unsigned __int32, unsigned __int32);
    void setRange(__int32, __int32);
    bool optimize(bool);
    void writeVertexRange(unsigned __int32, unsigned __int32, FatVertex *);
    bool apply(unsigned __int32);
    bool unapply();
    bool reapply(unsigned __int32);
    bool isApplied() const;
    VertexBufferDescriptor const *lock(__int32, __int32);
    bool unlock(__int32, __int32);
    unsigned __int32 getNumVertices() const;
    unsigned __int32 getFatMask() const;
    FatVertex *getFatData() const;
    FatVertex *getChunk() const;
private:
    VertexArray &operator=(VertexArray const &);
    VertexArrayI *m_vai; // 0x4
    VertexArrayVBO m_vaVBO; // 0x8
    VertexArrayBasic m_vaBasic; // 0x78
    bool m_applied; // 0x80
    unsigned __int32 m_numVertices; // 0x84
    unsigned __int32 m_fatMask; // 0x88
    FatVertex *m_fatData; // 0x8C
    __int32 m_range[2]; // 0x90
};
static_assert(sizeof(VertexArray) == 152, "Invalid VertexArray size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __VERTEXARRAY_H__
/* combined */
#ifndef __VERTEXARRAY_H__
#define __VERTEXARRAY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class VertexArray :
    public Core
{
public:
    enum Usage
    {
        USAGE_Static = 0,
        USAGE_Dynamic,
    };
private:
    VertexArray(VertexArray const &);
public:
    VertexArray();
    virtual ~VertexArray() override;
    static VertexArray *create();
    void setUsage(VertexArray::Usage);
    void clear();
    void set(unsigned __int32, FatVertex const *, unsigned __int32);
    void own(unsigned __int32, FatVertex *, unsigned __int32);
    _inline void reown(unsigned __int32, unsigned __int32);
    void setRange(__int32, __int32);
    bool optimize(bool);
    void writeVertexRange(unsigned __int32, unsigned __int32, FatVertex *);
    bool apply(unsigned __int32);
    bool unapply();
    bool reapply(unsigned __int32);
    _inline bool isApplied() const;
    VertexBufferDescriptor const *lock(__int32, __int32);
    bool unlock(__int32, __int32);
    _inline unsigned __int32 getNumVertices() const;
    _inline unsigned __int32 getFatMask() const;
    _inline FatVertex *getFatData() const;
    FatVertex *getChunk() const;
private:
    VertexArray &operator=(VertexArray const &);
    VertexArrayI *m_vai; // 0x4
    VertexArrayVBO m_vaVBO; // 0x8
    VertexArrayBasic m_vaBasic; // 0x78
    bool m_applied; // 0x80
    unsigned __int32 m_numVertices; // 0x84
    unsigned __int32 m_fatMask; // 0x88
    FatVertex *m_fatData; // 0x8C
    __int32 m_range[2]; // 0x90
};
static_assert(sizeof(VertexArray) == 152, "Invalid VertexArray size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_1001B2E0(VertexArray *const, unsigned __int32, unsigned __int32);
_inline void VertexArray::reown(unsigned __int32, unsigned __int32) // 0x1001B2E0
{
    mangled_assert("?reown@VertexArray@@QAEXII@Z");
    todo("implement");
    _sub_1001B2E0(this, arg, arg);
}

_extern bool _sub_100196A0(VertexArray const *const);
_inline bool VertexArray::isApplied() const // 0x100196A0
{
    mangled_assert("?isApplied@VertexArray@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_100196A0(this);
    return __result;
}

_extern unsigned __int32 _sub_10019430(VertexArray const *const);
_inline unsigned __int32 VertexArray::getNumVertices() const // 0x10019430
{
    mangled_assert("?getNumVertices@VertexArray@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_10019430(this);
    return __result;
}

_extern unsigned __int32 _sub_10019250(VertexArray const *const);
_inline unsigned __int32 VertexArray::getFatMask() const // 0x10019250
{
    mangled_assert("?getFatMask@VertexArray@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_10019250(this);
    return __result;
}

_extern FatVertex *_sub_10019240(VertexArray const *const);
_inline FatVertex *VertexArray::getFatData() const // 0x10019240
{
    mangled_assert("?getFatData@VertexArray@@QBEPAUFatVertex@@XZ");
    todo("implement");
    FatVertex * __result = _sub_10019240(this);
    return __result;
}

/* ---------- private code */

#endif // __VERTEXARRAY_H__
#endif
