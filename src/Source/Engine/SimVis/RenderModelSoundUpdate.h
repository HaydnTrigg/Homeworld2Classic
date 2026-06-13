#if 0
#ifndef __RENDERMODELSOUNDUPDATE_H__
#define __RENDERMODELSOUNDUPDATE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class RenderModelSoundUpdate :
    public RenderModelInstance::ExtUpdate
{
public:
    RenderModelSoundUpdate(RenderModelSoundUpdate const &); /* compiler_generated() */
    RenderModelSoundUpdate(Sob const *);
    virtual ~RenderModelSoundUpdate() override;
    void setup(RenderModelInstance *, SoundEntityHandle const &, __int32);
    virtual bool update() override;
private:
    virtual void getSelfTransform(matrix4 &) const;
    virtual bool isAudible() const;
    RenderModelInstance *m_pRMInstance; // 0x4
    Sob const *m_pSob; // 0x8
    __int32 m_markerID; // 0xC
    SoundEntityHandle m_soundHandle; // 0x10
public:
    static void *operator new(unsigned __int32 size);
    static void operator delete(void *p, unsigned __int32 size);
    RenderModelSoundUpdate &operator=(RenderModelSoundUpdate const &); /* compiler_generated() */
};
static_assert(sizeof(RenderModelSoundUpdate) == 24, "Invalid RenderModelSoundUpdate size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __RENDERMODELSOUNDUPDATE_H__
#endif
