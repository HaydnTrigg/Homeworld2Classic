#if 0
#ifndef __CUBEPOLYGONIZER_H__
#define __CUBEPOLYGONIZER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CubePolygonizer
{
public:
    CubePolygonizer();
    ~CubePolygonizer();
    void setSampler(ImplicitSurfaceSampler *);
    void setImplicitMesh(ImplicitMesh *);
    enum NeighborFlags
    {
        NEIGHBOR_NegX = (1 << 0),
        NEIGHBOR_PosX = (1 << 1),
        NEIGHBOR_NegY = (1 << 2),
        NEIGHBOR_PosY = (1 << 3),
        NEIGHBOR_NegZ = (1 << 4),
        NEIGHBOR_PosZ = (1 << 5),
    };
    enum CubeletLocation
    {
        LOC_OnSurface = 0,
        LOC_InsideSurface,
        LOC_OutsideSurface,
    };
    void beginTesselation();
    void endTesselation();
    CubePolygonizer::CubeletLocation polygonize(MarchingCube const *, float, __int32 *, bool);
private:
    void evaluateCubelet(float *);
    void vertexInterpolate(__int32, __int32, float *, float, __int32 &);
    ImplicitSurfaceSampler *m_pSampler; // 0x0
    ImplicitMesh *m_pMesh; // 0x4
    MarchingCube const *m_pCurrentCube; // 0x8
    IntHash<unsigned int> m_edgeVertexCache; // 0xC
};
static_assert(sizeof(CubePolygonizer) == 49164, "Invalid CubePolygonizer size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CUBEPOLYGONIZER_H__
#endif
