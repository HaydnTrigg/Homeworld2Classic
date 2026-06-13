#if 0
#ifndef __RECTANGLEPACKER_H__
#define __RECTANGLEPACKER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class RectanglePacker
{
public:
    _inline RectanglePacker(RectanglePacker const &); /* compiler_generated() */
    RectanglePacker(unsigned long, unsigned long);
    bool AddRectangle(unsigned long, unsigned long, unsigned long &, unsigned long &);
    unsigned long GetWidth() const;
    unsigned long GetHeight() const;
    unsigned long GetFreePixelCount() const;
    unsigned long GetUsedWidth() const;
    unsigned long GetUsedHeight() const;
    void Crop(unsigned long, unsigned long);
private:
    unsigned long m_width; // 0x0
    unsigned long m_height; // 0x4
    std::vector<unsigned long,std::allocator<unsigned long> > m_lineUsedPixels; // 0x8
    unsigned long m_freePixelCount; // 0x14
    unsigned long m_usedWidth; // 0x18
    unsigned long m_usedHeight; // 0x1C
public:
    _inline ~RectanglePacker(); /* compiler_generated() */
    RectanglePacker &operator=(RectanglePacker const &); /* compiler_generated() */
};
static_assert(sizeof(RectanglePacker) == 32, "Invalid RectanglePacker size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __RECTANGLEPACKER_H__
#endif
