#if 0
#ifndef __TRANSIENTSCREEN_H__
#define __TRANSIENTSCREEN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::TransientScreen :
    public UI::NewUIScreen
{
public:
    TransientScreen(UI::TransientScreen const &); /* compiler_generated() */
    TransientScreen(char const *);
    virtual ~TransientScreen() override;
    float GetDuration() const;
protected:
    virtual void OnLoad(LuaConfig &) override;
private:
    float m_duration; // 0x19C
public:
    UI::TransientScreen &operator=(UI::TransientScreen const &); /* compiler_generated() */
};
static_assert(sizeof(UI::TransientScreen) == 416, "Invalid UI::TransientScreen size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __TRANSIENTSCREEN_H__
#endif
