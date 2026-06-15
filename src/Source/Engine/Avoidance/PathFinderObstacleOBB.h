#if 0
#ifndef __PATHFINDEROBSTACLEOBB_H__
#define __PATHFINDEROBSTACLEOBB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum OBB_Face
{
    OBB_Left = 0,
    OBB_Right,
    OBB_Front,
    OBB_Back,
    OBB_Top,
    OBB_Bottom,
};

/* ---------- definitions */

class PathFinderObstacleOBB
{
public:
    PathFinderObstacleOBB(Collision::OBB const &, vector3 const &, vector3 const &, float);
    _inline void setPosition(vector3 const &);
    vector3 const &getPosition() const;
    _inline void setOrientation(matrix3 const &);
    matrix3 const &getOrientation() const;
    _inline vector3 const &getExtents() const;
    _inline void setExtents(vector3 const &);
    bool isHitBySegment(std::_List_const_iterator<std::_List_val<std::_List_simple_types<vector3> > > const &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<vector3> > > const &, float *) const;
    std::_List_iterator<std::_List_val<std::_List_simple_types<vector3> > > findPathAround(std::list<vector3,std::allocator<vector3> > &, std::_List_iterator<std::_List_val<std::_List_simple_types<vector3> > > &, float) const;
    vector3 findFirstEdgePoint(vector3 const &, vector3 const &, float) const;
    bool isPointInside(vector3 const &) const;
    bool isPointInsideOrOnEdge(vector3 const &) const;
    vector3 getClosestPointOnEdge(vector3 const &, float) const;
protected:
    bool getHitDist(vector3 const &, vector3 const &, OBB_Face &, float *) const;
    _inline vector3 transformPointToLocal(vector3 const &) const;
    _inline vector3 transformPointToWorld(vector3 const &) const;
    vector3 m_extents; // 0x0
    vector3 m_position; // 0xC
    matrix3 m_orientation; // 0x18
public:
    static void *operator new(unsigned __int32 size);
    static void operator delete(void *p, unsigned __int32 size);
};
static_assert(sizeof(PathFinderObstacleOBB) == 60, "Invalid PathFinderObstacleOBB size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void PathFinderObstacleOBB::setPosition(vector3 const &) // 0x4E906B
{
    mangled_assert("?setPosition@PathFinderObstacleOBB@@QAEXABVvector3@@@Z");
    todo("implement");
}

_inline void PathFinderObstacleOBB::setOrientation(matrix3 const &) // 0x4E9058
{
    mangled_assert("?setOrientation@PathFinderObstacleOBB@@QAEXABVmatrix3@@@Z");
    todo("implement");
}

_inline vector3 const &PathFinderObstacleOBB::getExtents() const // 0x4E8AC3
{
    mangled_assert("?getExtents@PathFinderObstacleOBB@@QBEABVvector3@@XZ");
    todo("implement");
}

_inline void PathFinderObstacleOBB::setExtents(vector3 const &) // 0x4E9048
{
    mangled_assert("?setExtents@PathFinderObstacleOBB@@QAEXABVvector3@@@Z");
    todo("implement");
}

_inline vector3 PathFinderObstacleOBB::transformPointToLocal(vector3 const &) const // 0x4E907C
{
    mangled_assert("?transformPointToLocal@PathFinderObstacleOBB@@IBE?AVvector3@@ABV2@@Z");
    todo("implement");
}

_inline vector3 PathFinderObstacleOBB::transformPointToWorld(vector3 const &) const // 0x4E911A
{
    mangled_assert("?transformPointToWorld@PathFinderObstacleOBB@@IBE?AVvector3@@ABV2@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __PATHFINDEROBSTACLEOBB_H__
#endif
