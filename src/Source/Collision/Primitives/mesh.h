#if 0
#ifndef __MESH_H__
#define __MESH_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct Collision::Point
{
    vector3 m_position; // 0x0
    vector3 m_normal; // 0xC
    float m_distance2; // 0x18
    float m_time; // 0x1C
    _inline Point(float, float);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(Collision::Point) == 32, "Invalid Collision::Point size");

struct Collision::PointPair
{
    Collision::Point m_closest; // 0x0
    Collision::Point m_fartest; // 0x20
    _inline PointPair();
};
static_assert(sizeof(Collision::PointPair) == 64, "Invalid Collision::PointPair size");

class Collision::Mesh
{
public:
    typedef std::vector<vector3,std::allocator<vector3> > VertexList;
    typedef std::vector<unsigned short,std::allocator<unsigned short> > IndexList;
    Mesh(Collision::Mesh const &); /* compiler_generated() */
    Mesh(std::vector<vector3,std::allocator<vector3> > const &, std::vector<unsigned short,std::allocator<unsigned short> > const &, Collision::OBB const &);
    _inline std::vector<vector3,std::allocator<vector3> > const &GetVertices() const;
    _inline std::vector<unsigned short,std::allocator<unsigned short> > const &GetIndices() const;
    bool FindIntersection(Collision::Segment const &, Collision::PointPair &) const;
    bool FindIntersection(Collision::Segment const &, Collision::Point &) const;
    typedef std::vector<Collision::Triangle,std::allocator<Collision::Triangle> > TriangleList;
private:
    std::vector<vector3,std::allocator<vector3> > m_vertices; // 0x0
    std::vector<unsigned short,std::allocator<unsigned short> > m_indices; // 0xC
    std::vector<Collision::Triangle,std::allocator<Collision::Triangle> > m_triangles; // 0x18
    Collision::OBB m_obb; // 0x24
public:
    _inline ~Mesh(); /* compiler_generated() */
    Collision::Mesh &operator=(Collision::Mesh const &); /* compiler_generated() */
};
static_assert(sizeof(Collision::Mesh) == 96, "Invalid Collision::Mesh size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_4A514B(Collision::Point *const, float, float);
_inline Collision::Point::Point(float, float) // 0x4A514B
{
    mangled_assert("??0Point@Collision@@QAE@MM@Z");
    todo("implement");
    _sub_4A514B(this, arg, arg);
}

_extern _sub_4A687D(Collision::PointPair *const);
_inline Collision::PointPair::PointPair() // 0x4A687D
{
    mangled_assert("??0PointPair@Collision@@QAE@XZ");
    todo("implement");
    _sub_4A687D(this);
}

_extern std::vector<vector3,std::allocator<vector3> > const &_sub_520D6E(Collision::Mesh const *const);
_inline std::vector<vector3,std::allocator<vector3> > const &Collision::Mesh::GetVertices() const // 0x520D6E
{
    mangled_assert("?GetVertices@Mesh@Collision@@QBEABV?$vector@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@XZ");
    todo("implement");
    std::vector<vector3,std::allocator<vector3> > const & __result = _sub_520D6E(this);
    return __result;
}

_extern std::vector<unsigned short,std::allocator<unsigned short> > const &_sub_520D38(Collision::Mesh const *const);
_inline std::vector<unsigned short,std::allocator<unsigned short> > const &Collision::Mesh::GetIndices() const // 0x520D38
{
    mangled_assert("?GetIndices@Mesh@Collision@@QBEABV?$vector@GV?$allocator@G@std@@@std@@XZ");
    todo("implement");
    std::vector<unsigned short,std::allocator<unsigned short> > const & __result = _sub_520D38(this);
    return __result;
}

/* ---------- private code */

#endif // __MESH_H__
#endif
