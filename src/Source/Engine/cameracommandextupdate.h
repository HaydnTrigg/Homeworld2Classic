#if 0
#ifndef __CAMERACOMMANDEXTUPDATE_H__
#define __CAMERACOMMANDEXTUPDATE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CameraCommandExtUpdate
{
public:
    virtual _inline ~CameraCommandExtUpdate();
    virtual void Update(Camera const &) = 0;
    CameraCommandExtUpdate(CameraCommandExtUpdate const &); /* compiler_generated() */
    _inline CameraCommandExtUpdate(); /* compiler_generated() */
    CameraCommandExtUpdate &operator=(CameraCommandExtUpdate const &); /* compiler_generated() */
};
static_assert(sizeof(CameraCommandExtUpdate) == 4, "Invalid CameraCommandExtUpdate size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_56B2D5(CameraCommandExtUpdate *const);
_inline CameraCommandExtUpdate::~CameraCommandExtUpdate() // 0x56B2D5
{
    mangled_assert("??1CameraCommandExtUpdate@@UAE@XZ");
    todo("implement");
    _sub_56B2D5(this);
}

/* ---------- private code */

#endif // __CAMERACOMMANDEXTUPDATE_H__
#endif
