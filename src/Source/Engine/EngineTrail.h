#if 0
#ifndef __ENGINETRAIL_H__
#define __ENGINETRAIL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class EngineTrail
{
public:
    EngineTrail(unsigned __int32, EngineTrailStatic const *);
    ~EngineTrail();
    void setZero();
    void offset(vector3 const &);
    unsigned __int32 expireFrames(float);
    EngineTrailFrame const *getHead() const;
    EngineTrailFrame *getHead();
    _inline vector3 const &getBoundingMin() const;
    _inline vector3 const &getBoundingMax() const;
    _inline unsigned __int32 getNozzleNum() const;
    void update(float, matrix3 const &, vector3 const &, vector3 const &, vector3 const &, float);
    void render(Camera const *, SobWithMesh *, vector3 const *, unsigned __int32, float, float, unsigned __int32);
private:
    void computeBoundingBox(vector3 const &, float);
    void drawSimpleLine(float, matrix3 const *, vector3 const *, vector3 const *, float const, unsigned __int32);
    void drawRibbon(Camera const *, float, float, matrix3 const *, vector3 const *, vector3 const *, unsigned __int32, float, unsigned __int32);
    bool calculatePosition(float, vector3 &);
    vector3 m_min; // 0x0
    vector3 m_max; // 0xC
    float m_lastBoxUpdate; // 0x18
    unsigned __int32 m_nozzleNum; // 0x1C
    EngineTrailStatic const *m_pStatic; // 0x20
    EngineTrailFrameList m_list; // 0x24
};
static_assert(sizeof(EngineTrail) == 64, "Invalid EngineTrail size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern vector3 const &_sub_4496FE(EngineTrail const *const);
_inline vector3 const &EngineTrail::getBoundingMin() const // 0x4496FE
{
    mangled_assert("?getBoundingMin@EngineTrail@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4496FE(this);
    return __result;
}

_extern vector3 const &_sub_4496FA(EngineTrail const *const);
_inline vector3 const &EngineTrail::getBoundingMax() const // 0x4496FA
{
    mangled_assert("?getBoundingMax@EngineTrail@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4496FA(this);
    return __result;
}

_extern unsigned __int32 _sub_449772(EngineTrail const *const);
_inline unsigned __int32 EngineTrail::getNozzleNum() const // 0x449772
{
    mangled_assert("?getNozzleNum@EngineTrail@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_449772(this);
    return __result;
}

/* ---------- private code */

#endif // __ENGINETRAIL_H__
#endif
