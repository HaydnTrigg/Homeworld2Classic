#if 0
#ifndef __MARCHINGCUBE_H__
#define __MARCHINGCUBE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MarchingCube
{
public:
    MarchingCube();
    ~MarchingCube();
    void setBoundingBox(vector3 const &, vector3 const &);
    void setBoundingBox(float, float, float, float, float, float);
    void setCubeletDensity(unsigned __int32, unsigned __int32, unsigned __int32);
    void setCurrentCubelet(unsigned __int32, unsigned __int32, unsigned __int32);
    void getNumCubelets(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &);
    vector3 const &getCorner(__int32) const;
    void getLocation(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &) const;
private:
    vector3 m_min; // 0x0
    vector3 m_max; // 0xC
    vector3 m_range; // 0x18
    vector3 m_step; // 0x24
    vector3 m_cubeletSize; // 0x30
    unsigned __int32 m_numCubelets[3]; // 0x3C
    vector3 m_currentCorners[8]; // 0x48
    unsigned __int32 m_currentLocation[3]; // 0xA8
};
static_assert(sizeof(MarchingCube) == 180, "Invalid MarchingCube size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MARCHINGCUBE_H__
#endif
