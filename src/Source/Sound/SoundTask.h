#if 0
#ifndef __SOUNDTASK_H__
#define __SOUNDTASK_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SoundTask :
    public Task
{
private:
    virtual __int32 taskFunction(float) override;
public:
    SoundTask(SoundTask const &); /* compiler_generated() */
    _inline SoundTask(); /* compiler_generated() */
    virtual _inline ~SoundTask() override; /* compiler_generated() */
    SoundTask &operator=(SoundTask const &); /* compiler_generated() */
};
static_assert(sizeof(SoundTask) == 48, "Invalid SoundTask size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SOUNDTASK_H__
#endif
