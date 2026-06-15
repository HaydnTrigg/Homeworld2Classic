#if 0
#ifndef __NEWSCROLLBAR_H__
#define __NEWSCROLLBAR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::NewScrollBar :
    public UI::InterfaceElement
{
public:
    NewScrollBar(UI::NewScrollBar const &);
    NewScrollBar(LuaConfig &);
    NewScrollBar(UI::InterfaceElement *, char const *);
    UI::NewScrollBar const &operator=(UI::NewScrollBar const &);
    virtual ~NewScrollBar() override;
    virtual _inline UI::InterfaceElement *clone() override;
    virtual void Draw2(Vector_2i const &, Rect_i const &) override;
    void SetRange(__int32, __int32);
    void GetRange(__int32 &, __int32 &) const;
    float GetScalarPosition() const;
    __int32 GetScrollPosition() const;
    void SetScrollPosition(__int32);
    void SetScalarScrollPosition(float);
    __int32 GetScrollButtonWidth() const;
    __int32 GetScrollButtonHeight() const;
    __int32 GetMinScrollBarSize() const;
    void SetScrollButtonPosition(Vector_2i);
    bool GetResizeToParent() const;
    _inline UI::ScrollBarOrientation GetOrientation() const;
    void SetOrientation(UI::ScrollBarOrientation);
    void SetScrollBarEnabled(bool);
    void SetResizeToParent(bool);
    _inline void SetStepSize(__int32);
    _inline void SetPageSize(__int32);
    void StepUp(__int32);
    void StepDown(__int32);
    void PageUp(__int32);
    void PageDown(__int32);
    void UpdateScrollPosition();
    _inline void ConnectOnScroll(void (*)(UI::InterfaceElement *, __int32));
    _inline void ConnectOnTrackButtonReleased(void (*)(UI::InterfaceElement *));
    _inline UI::ScrollBarTrackButton *GetTrackButton();
    void NotifyTrackButtonReleased();
protected:
    virtual void OnResize(__int32, __int32) override;
    virtual void OnMousePressed(Vector_2i const &, UI::MouseButton const &) override;
    virtual _inline void OnMouseWheelUp() override;
    virtual _inline void OnMouseWheelDown() override;
    virtual _inline void OnScroll(__int32);
    void Load(LuaConfig &);
private:
    UI::NewButton *m_btnPlus; // 0x400
    UI::NewButton *m_btnMinus; // 0x404
    UI::ScrollBarTrackButton *m_btnTrack; // 0x408
    __int32 m_scrollPosition; // 0x40C
    __int32 m_max; // 0x410
    __int32 m_min; // 0x414
    __int32 m_stepSize; // 0x418
    __int32 m_pageSize; // 0x41C
    bool m_resizeToParent; // 0x420
    UI::ScrollBarOrientation m_orientation; // 0x424
    UI::NewButton *m_btnUp; // 0x428
    UI::NewButton *m_btnDown; // 0x42C
    UI::NewButton *m_btnRight; // 0x430
    UI::NewButton *m_btnLeft; // 0x434
    UI::ScrollBarTrackButton *m_btnTrackVert; // 0x438
    UI::ScrollBarTrackButton *m_btnTrackHorz; // 0x43C
    UI::NewFrame *m_frmTrack; // 0x440
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_sliderLabel; // 0x444
    UI::UIIntSignal m_onScroll; // 0x45C
    UI::UISignal m_onTrackReleased; // 0x468
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundOnPage; // 0x474
    void UpdateTrackButton();
    void Init();
    __int32 GetTrackFrameSize();
    static void OnStepUpClicked(UI::InterfaceElement *e);
    static void OnStepDownClicked(UI::InterfaceElement *e);
};
static_assert(sizeof(UI::NewScrollBar) == 1168, "Invalid UI::NewScrollBar size");

class UI::ScrollBarTrackButton :
    public UI::NewButton
{
public:
    _inline ScrollBarTrackButton(UI::ScrollBarTrackButton const &); /* compiler_generated() */
    ScrollBarTrackButton(LuaConfig &);
    ScrollBarTrackButton(UI::NewScrollBar *, char const *);
    virtual _inline UI::InterfaceElement *clone() override;
    _inline void SetParentScrollBar(UI::NewScrollBar *);
    virtual void Draw2(Vector_2i const &, Rect_i const &) override;
protected:
    virtual void OnMouseMoved(Vector_2i const &, UI::MouseButton const &) override;
    virtual void OnMousePressed(Vector_2i const &, UI::MouseButton const &) override;
    virtual void OnMouseReleased(Vector_2i const &, UI::MouseButton const &) override;
    __int32 GetMin() const;
    __int32 GetMax() const;
private:
    UI::NewScrollBar *m_parentScrollBar; // 0x4A8
    Vector_2i m_clickPos; // 0x4AC
public:
    virtual _inline ~ScrollBarTrackButton() override; /* compiler_generated() */
    _inline UI::ScrollBarTrackButton &operator=(UI::ScrollBarTrackButton const &); /* compiler_generated() */
};
static_assert(sizeof(UI::ScrollBarTrackButton) == 1208, "Invalid UI::ScrollBarTrackButton size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline UI::InterfaceElement *UI::NewScrollBar::clone() // 0x6828FB
{
    mangled_assert("?clone@NewScrollBar@UI@@UAEPAVInterfaceElement@2@XZ");
    todo("implement");
}

_inline UI::ScrollBarOrientation UI::NewScrollBar::GetOrientation() const // 0x68181A
{
    mangled_assert("?GetOrientation@NewScrollBar@UI@@QBE?AW4ScrollBarOrientation@2@XZ");
    todo("implement");
}

_inline void UI::NewScrollBar::SetStepSize(__int32) // 0x68C3AB
{
    mangled_assert("?SetStepSize@NewScrollBar@UI@@QAEXH@Z");
    todo("implement");
}

_inline void UI::NewScrollBar::SetPageSize(__int32) // 0x68C37F
{
    mangled_assert("?SetPageSize@NewScrollBar@UI@@QAEXH@Z");
    todo("implement");
}

_inline void UI::NewScrollBar::ConnectOnScroll(void (*)(UI::InterfaceElement *, __int32)) // 0x578356
{
    mangled_assert("?ConnectOnScroll@NewScrollBar@UI@@QAEXP6GXPAVInterfaceElement@2@H@Z@Z");
    todo("implement");
}

_inline void UI::NewScrollBar::ConnectOnTrackButtonReleased(void (*)(UI::InterfaceElement *)) // 0x578372
{
    mangled_assert("?ConnectOnTrackButtonReleased@NewScrollBar@UI@@QAEXP6GXPAVInterfaceElement@2@@Z@Z");
    todo("implement");
}

_inline UI::ScrollBarTrackButton *UI::NewScrollBar::GetTrackButton() // 0x57FA3E
{
    mangled_assert("?GetTrackButton@NewScrollBar@UI@@QAEPAVScrollBarTrackButton@2@XZ");
    todo("implement");
}

_inline void UI::NewScrollBar::OnMouseWheelUp() // 0x682201
{
    mangled_assert("?OnMouseWheelUp@NewScrollBar@UI@@MAEXXZ");
    todo("implement");
}

_inline void UI::NewScrollBar::OnMouseWheelDown() // 0x6821F9
{
    mangled_assert("?OnMouseWheelDown@NewScrollBar@UI@@MAEXXZ");
    todo("implement");
}

_inline void UI::NewScrollBar::OnScroll(__int32) // 0x682316
{
    mangled_assert("?OnScroll@NewScrollBar@UI@@MAEXH@Z");
    todo("implement");
}

_inline UI::InterfaceElement *UI::ScrollBarTrackButton::clone() // 0x682935
{
    mangled_assert("?clone@ScrollBarTrackButton@UI@@UAEPAVInterfaceElement@2@XZ");
    todo("implement");
}

_inline void UI::ScrollBarTrackButton::SetParentScrollBar(UI::NewScrollBar *) // 0x6824B2
{
    mangled_assert("?SetParentScrollBar@ScrollBarTrackButton@UI@@QAEXPAVNewScrollBar@2@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __NEWSCROLLBAR_H__
#endif
