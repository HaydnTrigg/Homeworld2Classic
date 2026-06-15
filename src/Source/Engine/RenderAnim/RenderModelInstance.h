#if 0
#ifndef __RENDERMODELINSTANCE_H__
#define __RENDERMODELINSTANCE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class RenderModelInstance
{
public:
    typedef __int32 MarkerID;
    class ExtUpdate
    {
    public:
        virtual _inline ~ExtUpdate();
        virtual bool update() = 0;
        ExtUpdate(RenderModelInstance::ExtUpdate const &); /* compiler_generated() */
        _inline ExtUpdate(); /* compiler_generated() */
        RenderModelInstance::ExtUpdate &operator=(RenderModelInstance::ExtUpdate const &); /* compiler_generated() */
    };
    static_assert(sizeof(ExtUpdate) == 4, "Invalid ExtUpdate size");
    RenderModelInstance(RenderModelInstance const &); /* compiler_generated() */
    RenderModelInstance(AnimEventSink *);
    ~RenderModelInstance();
    void setRenderModel(RenderModel const *);
    void setHierarchy(HierarchyDynamic const *);
    void setupMarkers();
    _inline RenderModel const &getRenderModel() const;
    _inline AnimEventSink *getEventSink() const;
    void getMarkerTransform(__int32, matrix4 &) const;
    unsigned __int32 getMarkerCount() const;
    void setMarkerTransform(__int32, matrix4 const &);
    bool hasEffectAnimation(char const *) const;
    void startEffectAnimation(char const *, float);
    void stopEffectAnimation(char const *);
    void setEffectVariable(char const *, float, float);
    void addExtUpdate(RenderModelInstance::ExtUpdate *);
    void update(Sob const *, float, float);
private:
    void updateExternals();
    class TriggerAnimEvent :
        public EffectAnimationList::StateUpdate
    {
    public:
        TriggerAnimEvent(RenderModelInstance::TriggerAnimEvent const &); /* compiler_generated() */
        TriggerAnimEvent();
        void setRenderModelInstance(RenderModelInstance *);
        virtual bool start(EffectAnimation const &, AnimEventContext *) override;
        virtual bool update(EffectAnimation const &, AnimEventContext *, float, float) override;
    private:
        RenderModelInstance *m_pInstance; // 0x4
    public:
        virtual _inline ~TriggerAnimEvent() override; /* compiler_generated() */
        RenderModelInstance::TriggerAnimEvent &operator=(RenderModelInstance::TriggerAnimEvent const &); /* compiler_generated() */
    };
    static_assert(sizeof(TriggerAnimEvent) == 8, "Invalid TriggerAnimEvent size");
    class MarkerAnimUpdate :
        public EffectAnimationList::StateUpdate
    {
    public:
        MarkerAnimUpdate(RenderModelInstance::MarkerAnimUpdate const &); /* compiler_generated() */
        MarkerAnimUpdate();
        void setRenderModelInstance(RenderModelInstance *);
        virtual bool start(EffectAnimation const &, AnimEventContext *) override;
        virtual bool update(EffectAnimation const &, AnimEventContext *, float, float) override;
    private:
        RenderModelInstance *m_pInstance; // 0x4
    public:
        virtual _inline ~MarkerAnimUpdate() override; /* compiler_generated() */
        RenderModelInstance::MarkerAnimUpdate &operator=(RenderModelInstance::MarkerAnimUpdate const &); /* compiler_generated() */
    };
    static_assert(sizeof(MarkerAnimUpdate) == 8, "Invalid MarkerAnimUpdate size");
    typedef std::vector<RenderModelInstance::ExtUpdate *,std::allocator<RenderModelInstance::ExtUpdate *> > ExtUpdateCont;
    typedef std::vector<MarkerInstance,std::allocator<MarkerInstance> > MarkerInstanceCont;
    RenderModel const *m_pModel; // 0x0
    HierarchyDynamic const *m_pHierarchy; // 0x4
    AnimEventSink *m_pAnimEventSink; // 0x8
    EffectAnimationList m_animList; // 0xC
    RenderModelInstance::TriggerAnimEvent m_triggerAnimEvent; // 0x24
    RenderModelInstance::MarkerAnimUpdate m_markerAnimUpdate; // 0x2C
    std::vector<RenderModelInstance::ExtUpdate *,std::allocator<RenderModelInstance::ExtUpdate *> > m_extUpdates; // 0x34
    std::vector<MarkerInstance,std::allocator<MarkerInstance> > m_markers; // 0x40
public:
    RenderModelInstance &operator=(RenderModelInstance const &); /* compiler_generated() */
};
static_assert(sizeof(RenderModelInstance) == 76, "Invalid RenderModelInstance size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline RenderModelInstance::ExtUpdate::~ExtUpdate() // 0x51F131
{
    mangled_assert("??1ExtUpdate@RenderModelInstance@@UAE@XZ");
    todo("implement");
}

_inline RenderModel const &RenderModelInstance::getRenderModel() const // 0x518C1D
{
    mangled_assert("?getRenderModel@RenderModelInstance@@QBEABVRenderModel@@XZ");
    todo("implement");
}

_inline AnimEventSink *RenderModelInstance::getEventSink() const // 0x518B9C
{
    mangled_assert("?getEventSink@RenderModelInstance@@QBEPAVAnimEventSink@@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __RENDERMODELINSTANCE_H__
#endif
