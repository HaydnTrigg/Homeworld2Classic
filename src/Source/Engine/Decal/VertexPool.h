#if 0
#ifndef __VERTEXPOOL_H__
#define __VERTEXPOOL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class VertexPool
{
public:
    VertexPool(VertexPool const &); /* compiler_generated() */
    VertexPool();
    ~VertexPool();
    typedef unsigned __int32 Handle;
    typedef unsigned short VertIndex;
    static unsigned __int32 const InvalidHandle;
    void Initialize(unsigned __int32, unsigned __int32, unsigned __int32);
    unsigned __int32 NewBlock();
    void DelBlock(unsigned __int32);
    void WriteBlock(unsigned __int32, FatVertex const *);
    _inline unsigned short GetIndex(unsigned __int32, unsigned __int32) const;
    _inline unsigned __int32 GetHandle(unsigned short, unsigned __int32) const;
    void Apply(unsigned __int32);
    void Unapply();
    class Data;
private:
    boost::scoped_ptr<VertexPool::Data> m_pimpl; // 0x0
public:
    VertexPool &operator=(VertexPool const &); /* compiler_generated() */
};
static_assert(sizeof(VertexPool) == 4, "Invalid VertexPool size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline unsigned short VertexPool::GetIndex(unsigned __int32, unsigned __int32) const // 0x5C1796
{
    mangled_assert("?GetIndex@VertexPool@@QBEGII@Z");
    todo("implement");
}

_inline unsigned __int32 VertexPool::GetHandle(unsigned short, unsigned __int32) const // 0x5C178A
{
    mangled_assert("?GetHandle@VertexPool@@QBEIGI@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __VERTEXPOOL_H__
#endif
