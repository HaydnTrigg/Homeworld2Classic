#if 0
#ifndef __RENDERMODELEVENTSINK_H__
#define __RENDERMODELEVENTSINK_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class RenderModelEventSink :
    public AnimEventSink
{
public:
    RenderModelEventSink(RenderModelEventSink const &); /* compiler_generated() */
    RenderModelEventSink(Sob const *, RenderModelInstance *);
    virtual void onEvent(AnimEvent &, AnimEventContext *) override;
    virtual void detach() override;
protected:
    bool shouldSpawnThings();
private:
    RenderModelInstance *m_pRMInstance; // 0x10
    Sob const *m_pSob; // 0x14
public:
    virtual _inline ~RenderModelEventSink() override; /* compiler_generated() */
    RenderModelEventSink &operator=(RenderModelEventSink const &); /* compiler_generated() */
};
static_assert(sizeof(RenderModelEventSink) == 24, "Invalid RenderModelEventSink size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __RENDERMODELEVENTSINK_H__
#endif
