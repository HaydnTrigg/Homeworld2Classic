#if 0
#ifndef __MOVIE_H__
#define __MOVIE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::Movie :
    public UI::InterfaceElement
{
public:
    Movie(UI::Movie const &);
    Movie(LuaConfig &);
    virtual ~Movie() override;
    virtual UI::InterfaceElement *clone() override;
    virtual void Draw2(Vector_2i const &, Rect_i const &) override;
    virtual void OnUpdate(unsigned __int32) override;
    unsigned __int32 GetElapsedTime();
    void Load(LuaConfig &);
    void Play(unsigned __int32);
    void Stop();
    void *SetCallback(void (*)());
    _inline float GetPrevAlpha() const;
protected:
    virtual void OnKeyPressed(unsigned char, UI::KeyModifier const &) override;
private:
    void CommonInit();
    float ComputeFade(float);
    void ComputeAbortFade();
    Texture *m_texture; // 0x400
    float m_top; // 0x404
    float m_bottom; // 0x408
    float m_left; // 0x40C
    float m_right; // 0x410
    Video *m_video; // 0x414
    unsigned char *m_vidBuf; // 0x418
    unsigned char *m_audBuf; // 0x41C
    unsigned __int32 prevFrameNum; // 0x420
    float m_prevFrameElapsedTime; // 0x424
    float m_secondsBeforeAbort; // 0x428
    unsigned __int32 m_prevElapsedTime; // 0x42C
    long m_musicHandle; // 0x430
    bool m_abort; // 0x434
    bool useSelfTimer; // 0x435
    unsigned char m_abortAlpha; // 0x436
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_filenameV; // 0x438
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_filenameA; // 0x450
    void (*movieDoneCallback)(); // 0x468
    float m_fadeOutStart; // 0x46C
    float m_fadeOutEnd; // 0x470
    float m_abortFadeOutStart; // 0x474
    float m_abortFadeOutLength; // 0x478
    unsigned __int32 m_nisHandle; // 0x47C
    float m_prevAlpha; // 0x480
public:
    UI::Movie &operator=(UI::Movie const &); /* compiler_generated() */
};
static_assert(sizeof(UI::Movie) == 1160, "Invalid UI::Movie size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline float UI::Movie::GetPrevAlpha() const // 0x5914FC
{
    mangled_assert("?GetPrevAlpha@Movie@UI@@QBEMXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __MOVIE_H__
#endif
