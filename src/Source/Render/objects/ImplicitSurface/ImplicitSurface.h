#if 0
#ifndef __IMPLICITSURFACE_H__
#define __IMPLICITSURFACE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ImplicitSurface :
    public Core
{
public:
    _inline ImplicitSurface(ImplicitSurface const &); /* compiler_generated() */
    ImplicitSurface();
    virtual ~ImplicitSurface() override;
    static ImplicitSurface *create();
    void addPoint(float, float, float, float);
    void addPoint(vector3 const &, float);
    void setPoints(vector3 *, __int32, float);
    void setIsovalue(float);
    MoleculeList &getMoleculeList();
    ImplicitMesh const &getImplicitMesh() const;
    void tesselate(float);
    void render();
private:
    void clearMolecules();
    void findMinMax(vector3 &, vector3 &);
    ImplicitSurfaceSampler m_surfaceSampler; // 0x4
    MoleculeList m_moleculeList; // 0x8
    MarchingCube m_marchingCube; // 0x14
    ImplicitMesh m_implicitMesh; // 0xC8
    CubePolygonizer m_cubePolygonizer; // 0x150
    SurfaceCrawler m_surfaceCrawler; // 0xC15C
    Timer *m_pTimer; // 0x18168
    float m_isovalue; // 0x1816C
public:
    _inline ImplicitSurface &operator=(ImplicitSurface const &); /* compiler_generated() */
};
static_assert(sizeof(ImplicitSurface) == 98672, "Invalid ImplicitSurface size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __IMPLICITSURFACE_H__
#endif
