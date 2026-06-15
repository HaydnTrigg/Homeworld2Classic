#if 0
#ifndef __PLAYERSETUP_H__
#define __PLAYERSETUP_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::PlayerSetup :
    public UI::NewUIScreen
{
public:
    PlayerSetup(UI::PlayerSetup const &); /* compiler_generated() */
    PlayerSetup(char const *);
    virtual ~PlayerSetup() override;
    void SetTeamColor(__int32, __int32, __int32);
    void SetStripeColor(__int32, __int32, __int32);
    void GetTeamColor(__int32 &, __int32 &, __int32 &);
    void GetStripeColor(__int32 &, __int32 &, __int32 &);
    void SetPlayerToSetup(bool, __int32);
    void SetTeamColorHSV(__int32, __int32, __int32, bool);
    void SetStripeColorHSV(__int32, __int32, __int32, bool);
    _inline __int32 GetHue() const;
    _inline __int32 GetSaturation() const;
    _inline __int32 GetValue() const;
    void SetStripeEdit(bool);
    _inline bool GetStripeEdit() const;
    _inline void SetColorPickerPressed(bool);
    _inline bool GetColorPickerPressed() const;
    _inline void SetGreyScalePressed(bool);
    _inline bool GetGreyScalePressed() const;
    void SetEmblemFileName(char const *);
    _inline char const *GetEmblemFileName() const;
    void CommitValues();
    void CancelValues();
    void EnableChatNameTextInput(bool);
    void RestoreDefaults();
    void SetCPUName(wchar_t const *);
    void SwapColors();
protected:
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
    enum
    {
        NUM_EMBLEMS = 4, // 0x0004
    };
private:
    UI::InterfaceElement *m_colorPicker; // 0x19C
    UI::InterfaceElement *m_greyScale; // 0x1A0
    UI::InterfaceElement *m_shipTeamColor; // 0x1A4
    UI::InterfaceElement *m_shipStripeColor; // 0x1A8
    UI::InterfaceElement *m_vshipTeamColor; // 0x1AC
    UI::InterfaceElement *m_vshipStripeColor; // 0x1B0
    UI::RadioButton *m_teamColor; // 0x1B4
    UI::RadioButton *m_stripeColor; // 0x1B8
    UI::InterfaceElement *m_emblemBack; // 0x1BC
    UI::InterfaceElement *m_emblemStripes; // 0x1C0
    UI::InterfaceElement *m_emblem[4]; // 0x1C4
    UI::InterfaceElement *m_colorSwatches; // 0x1D4
    UI::NewTextInput *m_chatName; // 0x1D8
    UI::NewButton *m_restoreDefaults; // 0x1DC
    __int32 m_hue; // 0x1E0
    __int32 m_saturation; // 0x1E4
    __int32 m_value; // 0x1E8
    bool m_stripeEdit; // 0x1EC
    bool m_loadValues; // 0x1ED
    bool m_colorPickerPressed; // 0x1EE
    bool m_greyScalePressed; // 0x1EF
    __int32 m_cpuIndex; // 0x1F0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_emblemFileName; // 0x1F4
    void LoadColorsFromProfile(PlayerProfile *);
    bool ValidateChatName();
    static void OnColorPicker(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 pressed);
    static void OnGreyScale(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 pressed);
    static void OnColorPickerPressed(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 pressed);
    static void OnGreyScalePressed(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 pressed);
    static void OnRestoreDefaultsClicked(UI::InterfaceElement *sender);
    static void OnClickBase(UI::InterfaceElement *sender);
    static void OnClickStripe(UI::InterfaceElement *sender);
    static void OnDoubleClickSwap(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void OnClickSwatch(UI::InterfaceElement *sender);
    static void OnClickSaveSwatch(UI::InterfaceElement *sender);
    static void OnAccept(UI::InterfaceElement *sender);
    static void OnCancel(UI::InterfaceElement *sender);
    static void OnAcceptChatNameWarning(UI::InterfaceElement *sender);
public:
    UI::PlayerSetup &operator=(UI::PlayerSetup const &); /* compiler_generated() */
};
static_assert(sizeof(UI::PlayerSetup) == 524, "Invalid UI::PlayerSetup size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline __int32 UI::PlayerSetup::GetHue() const // 0x5A0392
{
    mangled_assert("?GetHue@PlayerSetup@UI@@QBEHXZ");
    todo("implement");
}

_inline __int32 UI::PlayerSetup::GetSaturation() const // 0x5A0399
{
    mangled_assert("?GetSaturation@PlayerSetup@UI@@QBEHXZ");
    todo("implement");
}

_inline __int32 UI::PlayerSetup::GetValue() const // 0x5A0405
{
    mangled_assert("?GetValue@PlayerSetup@UI@@QBEHXZ");
    todo("implement");
}

_inline bool UI::PlayerSetup::GetStripeEdit() const // 0x5A03CF
{
    mangled_assert("?GetStripeEdit@PlayerSetup@UI@@QBE_NXZ");
    todo("implement");
}

_inline void UI::PlayerSetup::SetColorPickerPressed(bool) // 0x5A10C8
{
    mangled_assert("?SetColorPickerPressed@PlayerSetup@UI@@QAEX_N@Z");
    todo("implement");
}

_inline bool UI::PlayerSetup::GetColorPickerPressed() const // 0x5A0384
{
    mangled_assert("?GetColorPickerPressed@PlayerSetup@UI@@QBE_NXZ");
    todo("implement");
}

_inline void UI::PlayerSetup::SetGreyScalePressed(bool) // 0x5A11B4
{
    mangled_assert("?SetGreyScalePressed@PlayerSetup@UI@@QAEX_N@Z");
    todo("implement");
}

_inline bool UI::PlayerSetup::GetGreyScalePressed() const // 0x5A038B
{
    mangled_assert("?GetGreyScalePressed@PlayerSetup@UI@@QBE_NXZ");
    todo("implement");
}

_inline char const *UI::PlayerSetup::GetEmblemFileName() const // 0x575268
{
    mangled_assert("?GetEmblemFileName@PlayerSetup@UI@@QBEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __PLAYERSETUP_H__
#endif
