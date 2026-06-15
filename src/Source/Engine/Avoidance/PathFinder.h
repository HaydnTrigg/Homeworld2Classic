#if 0
#ifndef __PATHFINDER_H__
#define __PATHFINDER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class PathFinder
{
public:
    PathFinder(PathFinder const &); /* compiler_generated() */
    PathFinder(float, bool, bool);
    ~PathFinder();
    void addObject(Collision::OBB const &, vector3 const &, vector3 const &, float);
    void clearObjects();
    bool findPath(vector3 const &, vector3 const &, std::list<vector3,std::allocator<vector3> > &, bool *);
    bool findPathForShipAvoidance(vector3 const &, vector3 const &, vector3 &);
    _inline void setEpsilon(float);
private:
    void optimizePath(std::list<vector3,std::allocator<vector3> > &);
    bool isSegmentHittingAnything(std::_List_const_iterator<std::_List_val<std::_List_simple_types<vector3> > > const &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<vector3> > > const &) const;
    std::vector<PathFinderObstacleOBB *,std::allocator<PathFinderObstacleOBB *> > m_obstacles; // 0x0
    float m_epsilon; // 0xC
    bool m_optimize; // 0x10
public:
    PathFinder &operator=(PathFinder const &); /* compiler_generated() */
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(PathFinder) == 20, "Invalid PathFinder size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void PathFinder::setEpsilon(float) // 0x4E46B3
{
    mangled_assert("?setEpsilon@PathFinder@@QAEXM@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __PATHFINDER_H__
#endif
