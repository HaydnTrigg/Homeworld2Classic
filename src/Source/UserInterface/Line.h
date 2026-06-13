#if 0
#ifndef __LINE_H__
#define __LINE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::Line
{
public:
    Line(LuaConfig &);
    Line();
    ~Line();
    void Load(LuaConfig &);
    void SetCoords(Vector_2i const &, Vector_2i const &);
    void SetCoords(long, long, long, long);
    void SetLineWidth(long);
    void SetColor(Color_4b const &);
    void SetAbove(bool);
    void Get(Vector_2i &, Vector_2i &, Color_4b &, long &, bool &) const;
private:
    Vector_2i m_p1; // 0x0
    Vector_2i m_p2; // 0x8
    long m_lineWidth; // 0x10
    Color_4b m_color; // 0x14
    bool m_above; // 0x18
};
static_assert(sizeof(UI::Line) == 28, "Invalid UI::Line size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LINE_H__
#endif
