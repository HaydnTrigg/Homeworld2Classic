#if 0
#ifndef __VIDEO_H__
#define __VIDEO_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Video
{
public:
    Video(Video const &); /* compiler_generated() */
protected:
    _inline Video();
public:
    virtual unsigned long Open(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, void *, unsigned __int32 const) = 0;
    virtual unsigned long Play(void *) = 0;
    virtual unsigned long GetFrame(unsigned long const, unsigned long &) = 0;
    virtual unsigned long Stop() = 0;
    virtual unsigned long Close() = 0;
    virtual unsigned long GetFrameSize(unsigned __int32 &, unsigned __int32 &) const = 0;
    virtual unsigned long GetFPS(double &) const = 0;
    virtual unsigned long GetNumFrames(unsigned __int32 &) const = 0;
    Video &operator=(Video const &); /* compiler_generated() */
};
static_assert(sizeof(Video) == 4, "Invalid Video size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline Video::Video() // 0x6FC1FB
{
    mangled_assert("??0Video@@IAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __VIDEO_H__
#endif
