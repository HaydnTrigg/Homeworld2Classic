#if 0
#ifndef __RENDERMODEL_H__
#define __RENDERMODEL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class RenderModel
{
public:
    typedef __int32 MarkerID;
    typedef __int32 EffectAnimationID;
    RenderModel(RenderModel const &); /* compiler_generated() */
    RenderModel(HierarchyStatic const *);
    ~RenderModel();
    static void addParseHandlers(IFF &iff, RenderModel *pRenderModel);
    bool loadEvents(char const *);
    void setMesh(Mesh const *);
    _inline Mesh const *getMesh() const;
    _inline AnimEventContainer const &getEventContainer() const;
    AnimEventContainer &getEventContainer();
    __int32 findMarker(char const *) const;
    void getMarkerTransform(__int32, float, matrix4 &) const;
    void getMarkerTransform(__int32, matrix4 &) const;
    unsigned __int32 getMarkerCount() const;
    __int32 getMarkerParentID(__int32) const;
    __int32 findEffectAnimation(char const *) const;
    EffectAnimation const *getEffectAnimation(__int32) const;
    void addEffectAnimation(EffectAnimation const *);
private:
    static __int32 HandleMRKR(IFF *iff, IFFChunk *pChunk, void *voidRenderModel, void *pContext2);
    bool loadEffectAnimations(LuaConfig &);
    void postAnimationLoad();
    bool readAnimation(LuaConfig &, EffectAnimation *);
    typedef std::vector<Marker *,std::allocator<Marker *> > MarkerCont;
    typedef std::vector<EffectAnimation const *,std::allocator<EffectAnimation const *> > EffectAnimationCont;
    Mesh const *m_pMesh; // 0x0
    HierarchyStatic const *m_pHierarchy; // 0x4
    std::vector<Marker *,std::allocator<Marker *> > m_markers; // 0x8
    std::vector<EffectAnimation const *,std::allocator<EffectAnimation const *> > m_effectAnimations; // 0x14
    AnimEventContainer *m_pEventContainer; // 0x20
public:
    RenderModel &operator=(RenderModel const &); /* compiler_generated() */
};
static_assert(sizeof(RenderModel) == 36, "Invalid RenderModel size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern AnimEventContainer const &_sub_518B98(RenderModel const *const);
_inline AnimEventContainer const &RenderModel::getEventContainer() const // 0x518B98
{
    mangled_assert("?getEventContainer@RenderModel@@QBEABVAnimEventContainer@@XZ");
    todo("implement");
    AnimEventContainer const & __result = _sub_518B98(this);
    return __result;
}

_extern Mesh const *_sub_51F5D6(RenderModel const *const);
_inline Mesh const *RenderModel::getMesh() const // 0x51F5D6
{
    mangled_assert("?getMesh@RenderModel@@QBEPBVMesh@@XZ");
    todo("implement");
    Mesh const * __result = _sub_51F5D6(this);
    return __result;
}

/* ---------- private code */

#endif // __RENDERMODEL_H__
#endif
