#if 0
#ifndef __PROGRESSBAR_H__
#define __PROGRESSBAR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::ProgressBar :
    public UI::InterfaceElement
{
public:
    _inline ProgressBar(UI::ProgressBar const &); /* compiler_generated() */
    ProgressBar(LuaConfig &);
    ProgressBar(UI::InterfaceElement *, char const *);
    ProgressBar();
    virtual ~ProgressBar() override;
    virtual _inline UI::InterfaceElement *clone() override;
    virtual void Draw2(Vector_2i const &, Rect_i const &) override;
    void SetProgress(__int32);
    void SetProgressAsRatio(float);
    _inline void SetRange(__int32, __int32);
    void SetStepSize(__int32);
    void StepUp(__int32);
    void StepDown(__int32);
    _inline __int32 GetProgress() const;
    _inline float GetProgressAsRatio() const;
    _inline __int32 GetRange() const;
    __int32 GetStepSize() const;
    void SetProgressGraphic(boost::shared_ptr<UI::Graphic> const &);
    boost::shared_ptr<UI::Graphic> const &GetProgressGraphic() const;
    _inline void SetProgressColor(Color_4b const &);
    Color_4b GetProgressColor_4b() const;
    _inline Rect_i GetProgressRect() const;
    void ConnectOnProgress(void (*)(UI::InterfaceElement *, __int32));
protected:
    void Load(LuaConfig &);
private:
    __int32 m_min; // 0x400
    __int32 m_max; // 0x404
    __int32 m_stepSize; // 0x408
    __int32 m_progress; // 0x40C
    boost::shared_ptr<UI::Graphic> m_graphic; // 0x410
    Rect_i m_progressRect; // 0x418
    Color_4b m_progressColor; // 0x428
    UI::UIIntSignal m_onProgress; // 0x42C
    void Init();
public:
    UI::ProgressBar &operator=(UI::ProgressBar const &); /* compiler_generated() */
};
static_assert(sizeof(UI::ProgressBar) == 1080, "Invalid UI::ProgressBar size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern UI::InterfaceElement *_sub_67C18F(UI::ProgressBar *const);
_inline UI::InterfaceElement *UI::ProgressBar::clone() // 0x67C18F
{
    mangled_assert("?clone@ProgressBar@UI@@UAEPAVInterfaceElement@2@XZ");
    todo("implement");
    UI::InterfaceElement * __result = _sub_67C18F(this);
    return __result;
}

_extern void _sub_58208A(UI::ProgressBar *const, __int32, __int32);
_inline void UI::ProgressBar::SetRange(__int32, __int32) // 0x58208A
{
    mangled_assert("?SetRange@ProgressBar@UI@@QAEXHH@Z");
    todo("implement");
    _sub_58208A(this, arg, arg);
}

_extern __int32 _sub_599583(UI::ProgressBar const *const);
_inline __int32 UI::ProgressBar::GetProgress() const // 0x599583
{
    mangled_assert("?GetProgress@ProgressBar@UI@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_599583(this);
    return __result;
}

_extern float _sub_67BF28(UI::ProgressBar const *const);
_inline float UI::ProgressBar::GetProgressAsRatio() const // 0x67BF28
{
    mangled_assert("?GetProgressAsRatio@ProgressBar@UI@@QBEMXZ");
    todo("implement");
    float __result = _sub_67BF28(this);
    return __result;
}

_extern __int32 _sub_59958A(UI::ProgressBar const *const);
_inline __int32 UI::ProgressBar::GetRange() const // 0x59958A
{
    mangled_assert("?GetRange@ProgressBar@UI@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_59958A(this);
    return __result;
}

_extern void _sub_58207B(UI::ProgressBar *const, Color_4b const &);
_inline void UI::ProgressBar::SetProgressColor(Color_4b const &) // 0x58207B
{
    mangled_assert("?SetProgressColor@ProgressBar@UI@@QAEXABUColor_4b@@@Z");
    todo("implement");
    _sub_58207B(this, arg);
}

_extern Rect_i _sub_5A48FF(UI::ProgressBar const *const);
_inline Rect_i UI::ProgressBar::GetProgressRect() const // 0x5A48FF
{
    mangled_assert("?GetProgressRect@ProgressBar@UI@@QBE?AURect_i@@XZ");
    todo("implement");
    Rect_i __result = _sub_5A48FF(this);
    return __result;
}

/* ---------- private code */

#endif // __PROGRESSBAR_H__
#endif
