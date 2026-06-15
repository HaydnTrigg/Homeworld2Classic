#if 0
#ifndef __NODEPOOL_H__
#define __NODEPOOL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class NodePoolNewAllocator<MeshBatcher::MeshBucket>
{
public:
    _inline void Free(MeshBatcher::MeshBucket *);
    _inline MeshBatcher::MeshBucket *Alloc(unsigned __int32);
};
static_assert(sizeof(NodePoolNewAllocator<MeshBatcher::MeshBucket>) == 1, "Invalid NodePoolNewAllocator<MeshBatcher::MeshBucket> size");

class NodePoolNewAllocator<MeshBatcher::TextureBucket>
{
public:
    _inline void Free(MeshBatcher::TextureBucket *);
    _inline MeshBatcher::TextureBucket *Alloc(unsigned __int32);
};
static_assert(sizeof(NodePoolNewAllocator<MeshBatcher::TextureBucket>) == 1, "Invalid NodePoolNewAllocator<MeshBatcher::TextureBucket> size");

class NodePoolNewAllocator<MeshBatcher::ShaderBucket>
{
public:
    _inline void Free(MeshBatcher::ShaderBucket *);
    _inline MeshBatcher::ShaderBucket *Alloc(unsigned __int32);
};
static_assert(sizeof(NodePoolNewAllocator<MeshBatcher::ShaderBucket>) == 1, "Invalid NodePoolNewAllocator<MeshBatcher::ShaderBucket> size");

class NodePool<MeshBatcher::MeshBucket,NodePoolNewAllocator<MeshBatcher::MeshBucket> > :
    private NodePoolNewAllocator<MeshBatcher::MeshBucket>
{
private:
    NodePool<MeshBatcher::MeshBucket,NodePoolNewAllocator<MeshBatcher::MeshBucket> >(NodePool<MeshBatcher::MeshBucket,NodePoolNewAllocator<MeshBatcher::MeshBucket> > const &);
public:
    _inline NodePool<MeshBatcher::MeshBucket,NodePoolNewAllocator<MeshBatcher::MeshBucket> >(unsigned __int32);
    _inline ~NodePool<MeshBatcher::MeshBucket,NodePoolNewAllocator<MeshBatcher::MeshBucket> >();
    _inline MeshBatcher::MeshBucket *GetNode();
    _inline void Reset();
    unsigned __int32 GetMemUsage() const;
private:
    unsigned __int32 const m_allocPerPage; // 0x0
    std::vector<void *,std::allocator<void *> > m_allocPages; // 0x4
    unsigned __int32 m_allocNdxNode; // 0x10
    unsigned __int32 m_allocNdxPage; // 0x14
    unsigned __int32 m_allocCount; // 0x18
    unsigned __int32 m_allocMax; // 0x1C
    NodePool<MeshBatcher::MeshBucket,NodePoolNewAllocator<MeshBatcher::MeshBucket> > &operator=(NodePool<MeshBatcher::MeshBucket,NodePoolNewAllocator<MeshBatcher::MeshBucket> > const &);
};
static_assert(sizeof(NodePool<MeshBatcher::MeshBucket,NodePoolNewAllocator<MeshBatcher::MeshBucket> >) == 32, "Invalid NodePool<MeshBatcher::MeshBucket,NodePoolNewAllocator<MeshBatcher::MeshBucket> > size");

class NodePool<MeshBatcher::TextureBucket,NodePoolNewAllocator<MeshBatcher::TextureBucket> > :
    private NodePoolNewAllocator<MeshBatcher::TextureBucket>
{
private:
    NodePool<MeshBatcher::TextureBucket,NodePoolNewAllocator<MeshBatcher::TextureBucket> >(NodePool<MeshBatcher::TextureBucket,NodePoolNewAllocator<MeshBatcher::TextureBucket> > const &);
public:
    _inline NodePool<MeshBatcher::TextureBucket,NodePoolNewAllocator<MeshBatcher::TextureBucket> >(unsigned __int32);
    _inline ~NodePool<MeshBatcher::TextureBucket,NodePoolNewAllocator<MeshBatcher::TextureBucket> >();
    _inline MeshBatcher::TextureBucket *GetNode();
    _inline void Reset();
    unsigned __int32 GetMemUsage() const;
private:
    unsigned __int32 const m_allocPerPage; // 0x0
    std::vector<void *,std::allocator<void *> > m_allocPages; // 0x4
    unsigned __int32 m_allocNdxNode; // 0x10
    unsigned __int32 m_allocNdxPage; // 0x14
    unsigned __int32 m_allocCount; // 0x18
    unsigned __int32 m_allocMax; // 0x1C
    NodePool<MeshBatcher::TextureBucket,NodePoolNewAllocator<MeshBatcher::TextureBucket> > &operator=(NodePool<MeshBatcher::TextureBucket,NodePoolNewAllocator<MeshBatcher::TextureBucket> > const &);
};
static_assert(sizeof(NodePool<MeshBatcher::TextureBucket,NodePoolNewAllocator<MeshBatcher::TextureBucket> >) == 32, "Invalid NodePool<MeshBatcher::TextureBucket,NodePoolNewAllocator<MeshBatcher::TextureBucket> > size");

class NodePool<MeshBatcher::ShaderBucket,NodePoolNewAllocator<MeshBatcher::ShaderBucket> > :
    private NodePoolNewAllocator<MeshBatcher::ShaderBucket>
{
private:
    NodePool<MeshBatcher::ShaderBucket,NodePoolNewAllocator<MeshBatcher::ShaderBucket> >(NodePool<MeshBatcher::ShaderBucket,NodePoolNewAllocator<MeshBatcher::ShaderBucket> > const &);
public:
    _inline NodePool<MeshBatcher::ShaderBucket,NodePoolNewAllocator<MeshBatcher::ShaderBucket> >(unsigned __int32);
    _inline ~NodePool<MeshBatcher::ShaderBucket,NodePoolNewAllocator<MeshBatcher::ShaderBucket> >();
    _inline MeshBatcher::ShaderBucket *GetNode();
    _inline void Reset();
    unsigned __int32 GetMemUsage() const;
private:
    unsigned __int32 const m_allocPerPage; // 0x0
    std::vector<void *,std::allocator<void *> > m_allocPages; // 0x4
    unsigned __int32 m_allocNdxNode; // 0x10
    unsigned __int32 m_allocNdxPage; // 0x14
    unsigned __int32 m_allocCount; // 0x18
    unsigned __int32 m_allocMax; // 0x1C
    NodePool<MeshBatcher::ShaderBucket,NodePoolNewAllocator<MeshBatcher::ShaderBucket> > &operator=(NodePool<MeshBatcher::ShaderBucket,NodePoolNewAllocator<MeshBatcher::ShaderBucket> > const &);
};
static_assert(sizeof(NodePool<MeshBatcher::ShaderBucket,NodePoolNewAllocator<MeshBatcher::ShaderBucket> >) == 32, "Invalid NodePool<MeshBatcher::ShaderBucket,NodePoolNewAllocator<MeshBatcher::ShaderBucket> > size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void NodePoolNewAllocator<MeshBatcher::MeshBucket>::Free(MeshBatcher::MeshBucket *) // 0x1007D8F0
{
    mangled_assert("?Free@?$NodePoolNewAllocator@VMeshBucket@MeshBatcher@@@@QAEXPAVMeshBucket@MeshBatcher@@@Z");
    todo("implement");
}

_inline void NodePoolNewAllocator<MeshBatcher::ShaderBucket>::Free(MeshBatcher::ShaderBucket *) // 0x1007D900
{
    mangled_assert("?Free@?$NodePoolNewAllocator@VShaderBucket@MeshBatcher@@@@QAEXPAVShaderBucket@MeshBatcher@@@Z");
    todo("implement");
}

_inline void NodePoolNewAllocator<MeshBatcher::TextureBucket>::Free(MeshBatcher::TextureBucket *) // 0x1007D930
{
    mangled_assert("?Free@?$NodePoolNewAllocator@VTextureBucket@MeshBatcher@@@@QAEXPAVTextureBucket@MeshBatcher@@@Z");
    todo("implement");
}

_inline MeshBatcher::MeshBucket *NodePoolNewAllocator<MeshBatcher::MeshBucket>::Alloc(unsigned __int32) // 0x1007D580
{
    mangled_assert("?Alloc@?$NodePoolNewAllocator@VMeshBucket@MeshBatcher@@@@QAEPAVMeshBucket@MeshBatcher@@I@Z");
    todo("implement");
}

_inline MeshBatcher::ShaderBucket *NodePoolNewAllocator<MeshBatcher::ShaderBucket>::Alloc(unsigned __int32) // 0x1007D5A0
{
    mangled_assert("?Alloc@?$NodePoolNewAllocator@VShaderBucket@MeshBatcher@@@@QAEPAVShaderBucket@MeshBatcher@@I@Z");
    todo("implement");
}

_inline MeshBatcher::TextureBucket *NodePoolNewAllocator<MeshBatcher::TextureBucket>::Alloc(unsigned __int32) // 0x1007D640
{
    mangled_assert("?Alloc@?$NodePoolNewAllocator@VTextureBucket@MeshBatcher@@@@QAEPAVTextureBucket@MeshBatcher@@I@Z");
    todo("implement");
}

_inline NodePool<MeshBatcher::MeshBucket,NodePoolNewAllocator<MeshBatcher::MeshBucket> >::NodePool<MeshBatcher::MeshBucket,NodePoolNewAllocator<MeshBatcher::MeshBucket> >(unsigned __int32) // 0x1007C0A0
{
    mangled_assert("??0?$NodePool@VMeshBucket@MeshBatcher@@V?$NodePoolNewAllocator@VMeshBucket@MeshBatcher@@@@@@QAE@I@Z");
    todo("implement");
}

_inline NodePool<MeshBatcher::ShaderBucket,NodePoolNewAllocator<MeshBatcher::ShaderBucket> >::NodePool<MeshBatcher::ShaderBucket,NodePoolNewAllocator<MeshBatcher::ShaderBucket> >(unsigned __int32) // 0x1007C0E0
{
    mangled_assert("??0?$NodePool@VShaderBucket@MeshBatcher@@V?$NodePoolNewAllocator@VShaderBucket@MeshBatcher@@@@@@QAE@I@Z");
    todo("implement");
}

_inline NodePool<MeshBatcher::TextureBucket,NodePoolNewAllocator<MeshBatcher::TextureBucket> >::NodePool<MeshBatcher::TextureBucket,NodePoolNewAllocator<MeshBatcher::TextureBucket> >(unsigned __int32) // 0x1007C120
{
    mangled_assert("??0?$NodePool@VTextureBucket@MeshBatcher@@V?$NodePoolNewAllocator@VTextureBucket@MeshBatcher@@@@@@QAE@I@Z");
    todo("implement");
}

_inline NodePool<MeshBatcher::MeshBucket,NodePoolNewAllocator<MeshBatcher::MeshBucket> >::~NodePool<MeshBatcher::MeshBucket,NodePoolNewAllocator<MeshBatcher::MeshBucket> >() // 0x1007CA40
{
    mangled_assert("??1?$NodePool@VMeshBucket@MeshBatcher@@V?$NodePoolNewAllocator@VMeshBucket@MeshBatcher@@@@@@QAE@XZ");
    todo("implement");
}

_inline NodePool<MeshBatcher::ShaderBucket,NodePoolNewAllocator<MeshBatcher::ShaderBucket> >::~NodePool<MeshBatcher::ShaderBucket,NodePoolNewAllocator<MeshBatcher::ShaderBucket> >() // 0x1007CAA0
{
    mangled_assert("??1?$NodePool@VShaderBucket@MeshBatcher@@V?$NodePoolNewAllocator@VShaderBucket@MeshBatcher@@@@@@QAE@XZ");
    todo("implement");
}

_inline NodePool<MeshBatcher::TextureBucket,NodePoolNewAllocator<MeshBatcher::TextureBucket> >::~NodePool<MeshBatcher::TextureBucket,NodePoolNewAllocator<MeshBatcher::TextureBucket> >() // 0x1007CB60
{
    mangled_assert("??1?$NodePool@VTextureBucket@MeshBatcher@@V?$NodePoolNewAllocator@VTextureBucket@MeshBatcher@@@@@@QAE@XZ");
    todo("implement");
}

_inline void NodePool<MeshBatcher::MeshBucket,NodePoolNewAllocator<MeshBatcher::MeshBucket> >::Reset() // 0x1007E110
{
    mangled_assert("?Reset@?$NodePool@VMeshBucket@MeshBatcher@@V?$NodePoolNewAllocator@VMeshBucket@MeshBatcher@@@@@@QAEXXZ");
    todo("implement");
}

_inline void NodePool<MeshBatcher::ShaderBucket,NodePoolNewAllocator<MeshBatcher::ShaderBucket> >::Reset() // 0x1007E130
{
    mangled_assert("?Reset@?$NodePool@VShaderBucket@MeshBatcher@@V?$NodePoolNewAllocator@VShaderBucket@MeshBatcher@@@@@@QAEXXZ");
    todo("implement");
}

_inline void NodePool<MeshBatcher::TextureBucket,NodePoolNewAllocator<MeshBatcher::TextureBucket> >::Reset() // 0x1007E150
{
    mangled_assert("?Reset@?$NodePool@VTextureBucket@MeshBatcher@@V?$NodePoolNewAllocator@VTextureBucket@MeshBatcher@@@@@@QAEXXZ");
    todo("implement");
}

_inline MeshBatcher::MeshBucket *NodePool<MeshBatcher::MeshBucket,NodePoolNewAllocator<MeshBatcher::MeshBucket> >::GetNode() // 0x1007D960
{
    mangled_assert("?GetNode@?$NodePool@VMeshBucket@MeshBatcher@@V?$NodePoolNewAllocator@VMeshBucket@MeshBatcher@@@@@@QAEPAVMeshBucket@MeshBatcher@@XZ");
    todo("implement");
}

_inline MeshBatcher::ShaderBucket *NodePool<MeshBatcher::ShaderBucket,NodePoolNewAllocator<MeshBatcher::ShaderBucket> >::GetNode() // 0x1007D9E0
{
    mangled_assert("?GetNode@?$NodePool@VShaderBucket@MeshBatcher@@V?$NodePoolNewAllocator@VShaderBucket@MeshBatcher@@@@@@QAEPAVShaderBucket@MeshBatcher@@XZ");
    todo("implement");
}

_inline MeshBatcher::TextureBucket *NodePool<MeshBatcher::TextureBucket,NodePoolNewAllocator<MeshBatcher::TextureBucket> >::GetNode() // 0x1007DA50
{
    mangled_assert("?GetNode@?$NodePool@VTextureBucket@MeshBatcher@@V?$NodePoolNewAllocator@VTextureBucket@MeshBatcher@@@@@@QAEPAVTextureBucket@MeshBatcher@@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __NODEPOOL_H__
#endif
