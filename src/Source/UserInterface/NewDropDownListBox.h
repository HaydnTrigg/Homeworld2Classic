#if 0
#ifndef __NEWDROPDOWNLISTBOX_H__
#define __NEWDROPDOWNLISTBOX_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::NewDropDownListBox :
    public UI::InterfaceElement
{
public:
    NewDropDownListBox(UI::NewDropDownListBox const &);
    NewDropDownListBox(LuaConfig &);
    NewDropDownListBox(UI::InterfaceElement *, char const *, UI::ComboBoxStyle *);
    UI::NewDropDownListBox const &operator=(UI::NewDropDownListBox const &);
    virtual ~NewDropDownListBox() override;
    virtual _inline UI::InterfaceElement *clone() override;
    void EmptyListBox();
    void ClearListBox();
    virtual void Draw2(Vector_2i const &, Rect_i const &) override;
    _inline __int32 GetListBoxItemCount() const;
    _inline UI::ListBoxItem *GetListBoxItem(__int32) const;
    _inline UI::ListBoxItem *GetSelectedListBoxItem();
    _inline UI::ListBoxItem *GetListBoxItemWithCustomData(unsigned __int32);
    bool RemoveListBoxItem(UI::ListBoxItem *);
    void InsertListBoxItem(UI::ListBoxItem *, bool);
    void SelectItem(__int32);
    void SelectItemWithCustomData(unsigned __int32);
    void SelectItemWithCustomData2(unsigned __int32);
    std::_Vector_iterator<std::_Vector_val<std::_Simple_types<UI::ListBoxItem *> > > begin();
    std::_Vector_iterator<std::_Vector_val<std::_Simple_types<UI::ListBoxItem *> > > end();
    _inline void ConnectOnItemSelect(void (*)(UI::InterfaceElement *, __int32));
    void ResizeDropDownListBox(__int32);
    _inline UI::NewListBox *GetChildListBox();
    void ShowDropDownListBox();
    void HideDropDownListBox();
    static _inline UI::NewDropDownListBox *GetFocusedDropDownListBox();
protected:
    void Load(LuaConfig &);
    virtual void OnMouseClicked(Vector_2i const &, UI::MouseButton const &) override;
    virtual void OnResize(__int32, __int32) override;
    virtual void OnEnable(bool) override;
private:
    UI::NewListBox *m_listBox; // 0x400
    UI::NewButton *m_dropDownButton; // 0x404
    unsigned __int32 m_minItemsToShow; // 0x408
    unsigned __int32 m_maxItemsToShow; // 0x40C
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundOnShowDrop; // 0x410
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundOnHideDrop; // 0x428
    void Init();
    static void DropDownButtonClicked(UI::InterfaceElement *e);
    static void DropDownItemClicked(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 button);
    static UI::NewDropDownListBox *ms_focusedDropDownListBox;
};
static_assert(sizeof(UI::NewDropDownListBox) == 1088, "Invalid UI::NewDropDownListBox size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern UI::InterfaceElement *_sub_6836EB(UI::NewDropDownListBox *const);
_inline UI::InterfaceElement *UI::NewDropDownListBox::clone() // 0x6836EB
{
    mangled_assert("?clone@NewDropDownListBox@UI@@UAEPAVInterfaceElement@2@XZ");
    todo("implement");
    UI::InterfaceElement * __result = _sub_6836EB(this);
    return __result;
}

_extern __int32 _sub_57F9CA(UI::NewDropDownListBox const *const);
_inline __int32 UI::NewDropDownListBox::GetListBoxItemCount() const // 0x57F9CA
{
    mangled_assert("?GetListBoxItemCount@NewDropDownListBox@UI@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_57F9CA(this);
    return __result;
}

_extern UI::ListBoxItem *_sub_587CF3(UI::NewDropDownListBox const *const, __int32);
_inline UI::ListBoxItem *UI::NewDropDownListBox::GetListBoxItem(__int32) const // 0x587CF3
{
    mangled_assert("?GetListBoxItem@NewDropDownListBox@UI@@QBEPAVListBoxItem@2@H@Z");
    todo("implement");
    UI::ListBoxItem * __result = _sub_587CF3(this, arg);
    return __result;
}

_extern UI::ListBoxItem *_sub_5783B0(UI::NewDropDownListBox *const);
_inline UI::ListBoxItem *UI::NewDropDownListBox::GetSelectedListBoxItem() // 0x5783B0
{
    mangled_assert("?GetSelectedListBoxItem@NewDropDownListBox@UI@@QAEPAVListBoxItem@2@XZ");
    todo("implement");
    UI::ListBoxItem * __result = _sub_5783B0(this);
    return __result;
}

_extern UI::ListBoxItem *_sub_57F9D7(UI::NewDropDownListBox *const, unsigned __int32);
_inline UI::ListBoxItem *UI::NewDropDownListBox::GetListBoxItemWithCustomData(unsigned __int32) // 0x57F9D7
{
    mangled_assert("?GetListBoxItemWithCustomData@NewDropDownListBox@UI@@QAEPAVListBoxItem@2@I@Z");
    todo("implement");
    UI::ListBoxItem * __result = _sub_57F9D7(this, arg);
    return __result;
}

_extern void _sub_57ED79(UI::NewDropDownListBox *const, void (*)(UI::InterfaceElement *, __int32));
_inline void UI::NewDropDownListBox::ConnectOnItemSelect(void (*)(UI::InterfaceElement *, __int32)) // 0x57ED79
{
    mangled_assert("?ConnectOnItemSelect@NewDropDownListBox@UI@@QAEXP6GXPAVInterfaceElement@2@H@Z@Z");
    todo("implement");
    _sub_57ED79(this, arg);
}

_extern UI::NewListBox *_sub_587CE8(UI::NewDropDownListBox *const);
_inline UI::NewListBox *UI::NewDropDownListBox::GetChildListBox() // 0x587CE8
{
    mangled_assert("?GetChildListBox@NewDropDownListBox@UI@@QAEPAVNewListBox@2@XZ");
    todo("implement");
    UI::NewListBox * __result = _sub_587CE8(this);
    return __result;
}

_extern UI::NewDropDownListBox *_sub_672258();
_inline UI::NewDropDownListBox *UI::NewDropDownListBox::GetFocusedDropDownListBox() // 0x672258
{
    mangled_assert("?GetFocusedDropDownListBox@NewDropDownListBox@UI@@SGPAV12@XZ");
    todo("implement");
    UI::NewDropDownListBox * __result = _sub_672258();
    return __result;
}

/* ---------- private code */

#endif // __NEWDROPDOWNLISTBOX_H__
#endif
