#if 0
#ifndef __SMPTE_H__
#define __SMPTE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SMPTE
{
public:
    SMPTE();
    ~SMPTE();
    void setStartTime(float);
    void setFrameRate(float);
    void setFont(char const *);
    void setFormatString(char const *);
    void setColour(vector4 const &);
    void setPosition(float, float);
    void setRightJustified(bool);
    void render(float);
private:
    float m_startTime; // 0x0
    float m_frameRate; // 0x4
    float m_x; // 0x8
    float m_y; // 0xC
    vector4 m_colour; // 0x10
    char m_format[80]; // 0x20
    char m_fontName[80]; // 0x70
    bool m_bRightJustified; // 0xC0
};
static_assert(sizeof(SMPTE) == 196, "Invalid SMPTE size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SMPTE_H__
#endif
