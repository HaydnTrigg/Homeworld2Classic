#if 0
#ifndef __MESHBATCHER_H__
#define __MESHBATCHER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MeshBatcher
{
public:
    struct Stats
    {
        unsigned __int32 numShaders; // 0x0
        unsigned __int32 numPasses; // 0x4
        unsigned __int32 numMaterials; // 0x8
        unsigned __int32 numTriGroups; // 0xC
        unsigned __int32 triGroupsApplied; // 0x10
        unsigned __int32 appliesAvoided; // 0x14
    };
    static_assert(sizeof(Stats) == 24, "Invalid Stats size");
    static bool Startup();
    static bool Shutdown();
    static MeshBatcher *Instance();
    void AttachGL(rndTable *);
    void StartBatch();
    void SubmitMesh(BasicMesh *, MeshInstance const *, matrix4 const &, float, bool);
    void Render(Camera const &);
    void ClearStats();
    MeshBatcher::Stats const &GetStats() const;
protected:
    MeshBatcher();
    ~MeshBatcher();
    class MeshBucket;
    class TextureBucket;
    class ShaderBucket;
private:
    void BucketMesh(MeshBatcher::MeshBucket *, CompoundStateBlock *, unsigned long, bool);
    MeshBatcher::ShaderBucket *FindShaderBucket(CompoundStateBlock const *);
    MeshBatcher::TextureBucket *FindTextureBucket(MeshBatcher::ShaderBucket *, unsigned long);
    void RenderShaderBucket(MeshBatcher::ShaderBucket *);
    void RenderTextureBucket(MeshBatcher::TextureBucket *, CompoundStateBlock *, StateCommandBlock *, __int32, __int32);
    void DumpState(char const *);
    static MeshBatcher *s_instance;
    class Data;
    MeshBatcher::Data *m_pimpl; // 0x0
};
static_assert(sizeof(MeshBatcher) == 4, "Invalid MeshBatcher size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MESHBATCHER_H__
#endif
