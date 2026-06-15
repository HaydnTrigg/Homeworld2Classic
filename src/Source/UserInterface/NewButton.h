#if 0
#ifndef __NEWBUTTON_H__
#define __NEWBUTTON_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum UI::ButtonState
{
    BS_None = 0,
    BS_Down,
};

/* ---------- definitions */

class UI::NewButton :
    public UI::InterfaceElement
{
public:
    NewButton(LuaConfig &);
    NewButton(UI::NewButton const &);
    NewButton(UI::InterfaceElement *, char const *, bool);
    virtual ~NewButton() override;
    UI::NewButton const &operator=(UI::NewButton const &);
    virtual _inline UI::InterfaceElement *clone() override;
    virtual void Draw2(Vector_2i const &, Rect_i const &) override;
    _inline void ConnectOnButtonClicked(void (*)(UI::InterfaceElement *));
    _inline void SetIsToggleButton(bool);
    _inline bool IsToggleButton() const;
    _inline bool IsPressed() const;
    void SetPressed(bool);
    _inline void StartFlashing(unsigned __int32);
    _inline void StopFlashing();
    _inline bool IsFlashing();
    _inline bool InFlash();
    void SetFlashSpeed(unsigned __int32);
    _inline boost::shared_ptr<UI::Graphic> GetOverGraphic();
    boost::shared_ptr<UI::Graphic> GetClickedGraphic();
    _inline boost::shared_ptr<UI::Graphic> GetPressedGraphic();
    boost::shared_ptr<UI::Graphic> GetFlashGraphic();
    _inline void SetOverGraphic(boost::shared_ptr<UI::Graphic>);
    void SetClickedGraphic(boost::shared_ptr<UI::Graphic>);
    _inline void SetPressedGraphic(boost::shared_ptr<UI::Graphic>);
    void SetFlashGraphic(boost::shared_ptr<UI::Graphic>);
    _inline void SetOverColor(Color_4b const &);
    void SetClickedColor(Color_4b const &);
    _inline void SetPressedColor(Color_4b const &);
    void SetFlashColor(Color_4b const &);
    void SetOverBorderColor(Color_4b const &);
    void SetClickedBorderColor(Color_4b const &);
    void SetPressedBorderColor(Color_4b const &);
    void SetFlashBorderColor(Color_4b const &);
protected:
    void Load(LuaConfig &, bool);
    virtual void OnMousePressed(Vector_2i const &, UI::MouseButton const &) override;
    virtual void OnMouseReleased(Vector_2i const &, UI::MouseButton const &) override;
    virtual void OnMouseEnter(Vector_2i const &, UI::MouseButton const &) override;
    virtual void OnMouseExit(Vector_2i const &, UI::MouseButton const &) override;
    virtual void OnKeyPressed(unsigned char, UI::KeyModifier const &) override;
    virtual void OnKeyReleased(unsigned char, UI::KeyModifier const &) override;
    virtual void OnMouseClicked(Vector_2i const &, UI::MouseButton const &) override;
    virtual void OnUpdate(unsigned __int32) override;
    _inline UI::ButtonState GetButtonState() const;
    UI::UISignal m_onButtonClicked; // 0x400
private:
    bool m_isToggleButton; // 0x40C
    bool m_isPressed; // 0x40D
    boost::shared_ptr<UI::Graphic> m_over; // 0x410
    boost::shared_ptr<UI::Graphic> m_clicked; // 0x418
    boost::shared_ptr<UI::Graphic> m_pressed; // 0x420
    boost::shared_ptr<UI::Graphic> m_flash; // 0x428
    boost::shared_ptr<UI::Graphic> m_disabledPressed; // 0x430
    boost::shared_ptr<UI::Graphic> m_disabled; // 0x438
    Color_4b m_overColor; // 0x440
    Color_4b m_clickedColor; // 0x444
    Color_4b m_pressedColor; // 0x448
    Color_4b m_flashColor; // 0x44C
    Color_4b m_overBorderColor; // 0x450
    Color_4b m_clickedBorderColor; // 0x454
    Color_4b m_pressedBorderColor; // 0x458
    Color_4b m_flashBorderColor; // 0x45C
    unsigned __int32 m_flashSpeed; // 0x460
    unsigned __int32 m_flashCount; // 0x464
    unsigned __int32 m_flashTimer; // 0x468
    bool m_inFlash; // 0x46C
    UI::ButtonState m_state; // 0x470
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundOnButtonPressed; // 0x474
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundOnButtonUnpressed; // 0x48C
public:
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(UI::NewButton) == 1192, "Invalid UI::NewButton size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline UI::InterfaceElement *UI::NewButton::clone() // 0x67E2EC
{
    mangled_assert("?clone@NewButton@UI@@UAEPAVInterfaceElement@2@XZ");
    todo("implement");
}

_inline void UI::NewButton::ConnectOnButtonClicked(void (*)(UI::InterfaceElement *)) // 0x570B83
{
    mangled_assert("?ConnectOnButtonClicked@NewButton@UI@@QAEXP6GXPAVInterfaceElement@2@@Z@Z");
    todo("implement");
}

_inline void UI::NewButton::SetIsToggleButton(bool) // 0x682D01
{
    mangled_assert("?SetIsToggleButton@NewButton@UI@@QAEX_N@Z");
    todo("implement");
}

_inline bool UI::NewButton::IsToggleButton() const // 0x5B1039
{
    mangled_assert("?IsToggleButton@NewButton@UI@@QBE_NXZ");
    todo("implement");
}

_inline bool UI::NewButton::IsPressed() const // 0x570BFF
{
    mangled_assert("?IsPressed@NewButton@UI@@QBE_NXZ");
    todo("implement");
}

_inline void UI::NewButton::StartFlashing(unsigned __int32) // 0x57019A
{
    mangled_assert("?StartFlashing@NewButton@UI@@QAEXI@Z");
    todo("implement");
}

_inline void UI::NewButton::StopFlashing() // 0x5701B7
{
    mangled_assert("?StopFlashing@NewButton@UI@@QAEXXZ");
    todo("implement");
}

_inline bool UI::NewButton::IsFlashing() // 0x572A8B
{
    mangled_assert("?IsFlashing@NewButton@UI@@QAE_NXZ");
    todo("implement");
}

_inline bool UI::NewButton::InFlash() // 0x68A168
{
    mangled_assert("?InFlash@NewButton@UI@@QAE_NXZ");
    todo("implement");
}

_inline boost::shared_ptr<UI::Graphic> UI::NewButton::GetOverGraphic() // 0x59954F
{
    mangled_assert("?GetOverGraphic@NewButton@UI@@QAE?AV?$shared_ptr@VGraphic@UI@@@boost@@XZ");
    todo("implement");
}

_inline boost::shared_ptr<UI::Graphic> UI::NewButton::GetPressedGraphic() // 0x57F9E9
{
    mangled_assert("?GetPressedGraphic@NewButton@UI@@QAE?AV?$shared_ptr@VGraphic@UI@@@boost@@XZ");
    todo("implement");
}

_inline void UI::NewButton::SetOverGraphic(boost::shared_ptr<UI::Graphic>) // 0x59A69B
{
    mangled_assert("?SetOverGraphic@NewButton@UI@@QAEXV?$shared_ptr@VGraphic@UI@@@boost@@@Z");
    todo("implement");
}

_inline void UI::NewButton::SetPressedGraphic(boost::shared_ptr<UI::Graphic>) // 0x59A9FE
{
    mangled_assert("?SetPressedGraphic@NewButton@UI@@QAEXV?$shared_ptr@VGraphic@UI@@@boost@@@Z");
    todo("implement");
}

_inline void UI::NewButton::SetOverColor(Color_4b const &) // 0x575A0D
{
    mangled_assert("?SetOverColor@NewButton@UI@@QAEXABUColor_4b@@@Z");
    todo("implement");
}

_inline void UI::NewButton::SetPressedColor(Color_4b const &) // 0x575A1C
{
    mangled_assert("?SetPressedColor@NewButton@UI@@QAEXABUColor_4b@@@Z");
    todo("implement");
}

_inline UI::ButtonState UI::NewButton::GetButtonState() const // 0x68A161
{
    mangled_assert("?GetButtonState@NewButton@UI@@IBE?AW4ButtonState@2@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __NEWBUTTON_H__
#endif
