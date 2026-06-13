#if 0
#ifndef __SURFACECRAWLER_H__
#define __SURFACECRAWLER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CubeHash
{
public:
    CubeHash();
    ~CubeHash();
    void clear();
    void insert(unsigned __int32, unsigned __int32, unsigned __int32);
    bool find(unsigned __int32, unsigned __int32, unsigned __int32);
private:
    IntHash<unsigned int> m_intHash; // 0x0
};
static_assert(sizeof(CubeHash) == 49152, "Invalid CubeHash size");

class SurfaceCrawler
{
public:
    SurfaceCrawler();
    ~SurfaceCrawler();
    void setMarchingCube(MarchingCube *);
    void setCubePolygonizer(CubePolygonizer *);
    void tesselate(MoleculeList &, float, float);
private:
    void crawl(MoleculeList &, unsigned __int32, float, vector3 const &, float);
    void recursiveCrawl(unsigned __int32 *);
    MarchingCube *m_pMarchingCube; // 0x0
    CubePolygonizer *m_pCubePolygonizer; // 0x4
    float m_surfaceThreshold; // 0x8
    CubeHash m_cubeHash; // 0xC
};
static_assert(sizeof(SurfaceCrawler) == 49164, "Invalid SurfaceCrawler size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SURFACECRAWLER_H__
#endif
