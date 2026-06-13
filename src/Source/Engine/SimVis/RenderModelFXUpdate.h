#if 0
#ifndef __RENDERMODELFXUPDATE_H__
#define __RENDERMODELFXUPDATE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class RenderModelFXUpdate :
    public RenderModelInstance::ExtUpdate
{
public:
    RenderModelFXUpdate(RenderModelFXUpdate const &); /* compiler_generated() */
    RenderModelFXUpdate(Sob const *);
    virtual ~RenderModelFXUpdate() override;
    void setup(RenderModelInstance *, AnimEvent const &, FXManager::Handle, __int32);
    virtual bool update() override;
    static float calculateFXScale(char const *scaleStr, RenderModelInstance const *rm);
private:
    float getSize() const;
    float getEffectRadius() const;
    RenderModelInstance const *getTargetRMInstance() const;
    void getSelfTransform(matrix4 &) const;
    void getTargetTransform(matrix4 &) const;
    float getSelfNLipsScale() const;
    float getTargetNLipsScale() const;
    enum OtherMode
    {
        OM_None = 0,
        OM_Self,
        OM_Target,
    };
    enum TransformMode
    {
        TM_Marker = 0,
        TM_SelfToOther,
        TM_OtherMarker,
        TM_OtherToSelf,
        TM_None,
        TM_Between,
    };
    enum NLipsMode
    {
        NM_Off = 0,
        NM_On,
    };
    RenderModelInstance *m_pRMInstance; // 0x4
    FXManager::Handle m_handle; // 0x8
    Sob const *m_pSob; // 0x10
    __int32 m_markerID; // 0x14
    __int32 m_otherMarkerID; // 0x18
    float m_scale; // 0x1C
    RenderModelFXUpdate::OtherMode m_otherMode : 8; // 0x20
    RenderModelFXUpdate::TransformMode m_transformMode : 8; // 0x20
    RenderModelFXUpdate::NLipsMode m_nlipsMode : 8; // 0x20
    bool m_bLengthIsDistance; // 0x24
public:
    static void *operator new(unsigned __int32 size);
    static void operator delete(void *p, unsigned __int32 size);
    RenderModelFXUpdate &operator=(RenderModelFXUpdate const &); /* compiler_generated() */
};
static_assert(sizeof(RenderModelFXUpdate) == 40, "Invalid RenderModelFXUpdate size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __RENDERMODELFXUPDATE_H__
#endif
