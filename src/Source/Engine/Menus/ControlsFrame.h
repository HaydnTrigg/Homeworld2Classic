#if 0
#ifndef __CONTROLSFRAME_H__
#define __CONTROLSFRAME_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::ControlsFrame :
    public UI::NewFrame
{
public:
    ControlsFrame(UI::ControlsFrame const &); /* compiler_generated() */
    ControlsFrame(UI::InterfaceElement *, char const *, UI::NewFrame const &);
    virtual ~ControlsFrame() override;
    void Refresh(KeyBindingList const &);
    void ResetSelectedKey();
    KeyBindingList const &GetKeyBindings();
    static void CancelWaitingForInput();
private:
    void LoadKeyGroup(LuaConfig &);
    void InsertHeaderItem(wchar_t const *);
    void InsertControlItem(__int32, bool);
    void AssignKeyCombo(std::smallvector<int,5,std::allocator<int> > const &, std::smallvector<int,5,std::allocator<int> > const &);
    UI::TextButton *GetKeyButtonWithBindingId(__int32);
    static UI::TextButton *ms_btnWaitingKeyInput;
    boost::scoped_ptr<UI::ControlsFrameData> m_pimpl; // 0x400
    static void OnKeyButtonClicked(UI::InterfaceElement *button);
    static void OnKeyButtonLoseFocus(UI::InterfaceElement *button);
    static void OnResetKeyClicked(UI::InterfaceElement *button);
    static void OnRestoreDefaultsClicked(UI::InterfaceElement *button);
    static void OnKeyButtonKeyPressed(UI::InterfaceElement *button, unsigned short key, __int32 mods);
    static void OnKeyButtonKeyReleased(UI::InterfaceElement *button, unsigned short key, __int32 mods);
    static void OnListBoxItemSelect(UI::InterfaceElement *listbox, __int32 index);
    static void ReplaceKeyCombo_Yes(UI::InterfaceElement *dlgButton);
    static void ReplaceKeyCombo_No(UI::InterfaceElement *dlgButton);
    static bool IsBindedToKeyUpEvent(std::smallvector<int,5,std::allocator<int> > const &tempCombo, KeyBinding const *binding, KeyBindingList const &localKeyBindings);
public:
    UI::ControlsFrame &operator=(UI::ControlsFrame const &); /* compiler_generated() */
};
static_assert(sizeof(UI::ControlsFrame) == 1032, "Invalid UI::ControlsFrame size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CONTROLSFRAME_H__
#endif
