#if 0
#ifndef __BGLIGHTANIM_H__
#define __BGLIGHTANIM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class BgLightAnim :
    public GameEventSys::Listener
{
public:
    static bool Startup();
    static bool Shutdown();
    static BgLightAnim *Instance();
    BgLightAnim(BgLightAnim const &); /* compiler_generated() */
private:
    BgLightAnim();
    ~BgLightAnim();
public:
    void Play(char const *);
    bool IsPlaying() const;
    void Update(float);
    virtual void OnEvent(GameEventSys::Event const &) override;
    class Data;
private:
    boost::shared_ptr<BgLightAnim::Data> m_pimpl; // 0x4
public:
    BgLightAnim &operator=(BgLightAnim const &); /* compiler_generated() */
};
static_assert(sizeof(BgLightAnim) == 12, "Invalid BgLightAnim size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __BGLIGHTANIM_H__
#endif
