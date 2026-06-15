#if 0
#ifndef __LISTBOXITEM_H__
#define __LISTBOXITEM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::ListBoxItem :
    public UI::TextButton
{
public:
    ListBoxItem(LuaConfig &);
    ListBoxItem(UI::ListBoxItem const &);
    ListBoxItem(char const *);
    virtual ~ListBoxItem() override;
    UI::ListBoxItem const &operator=(UI::ListBoxItem const &);
    virtual _inline UI::InterfaceElement *clone() override;
    _inline __int32 GetIndex() const;
    _inline void SetIndex(__int32);
    _inline bool GetSelected() const;
    void SetSelected(bool);
    _inline void SetParentListBox(UI::NewListBox *);
    _inline void SetSelectable(bool);
    _inline bool GetSelectable() const;
protected:
    virtual void OnMousePressed(Vector_2i const &, UI::MouseButton const &) override;
    virtual void OnMouseReleased(Vector_2i const &, UI::MouseButton const &) override;
    virtual void OnMouseEnter(Vector_2i const &, UI::MouseButton const &) override;
    virtual void OnMouseExit(Vector_2i const &, UI::MouseButton const &) override;
    virtual void OnKeyPressed(unsigned char, UI::KeyModifier const &) override;
    virtual void OnKeyReleased(unsigned char, UI::KeyModifier const &) override;
    virtual void OnMouseClicked(Vector_2i const &, UI::MouseButton const &) override;
    void Load(LuaConfig &);
    bool m_selected; // 0x560
    bool m_selectable; // 0x561
    __int32 m_index; // 0x564
    UI::NewListBox *m_listBox; // 0x568
public:
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(UI::ListBoxItem) == 1392, "Invalid UI::ListBoxItem size");

class UI::TextListBoxItem :
    public UI::ListBoxItem
{
public:
    TextListBoxItem(LuaConfig &);
    TextListBoxItem(UI::TextListBoxItem const &);
    TextListBoxItem(char const *, wchar_t const *);
    virtual ~TextListBoxItem() override;
    UI::TextListBoxItem const &operator=(UI::TextListBoxItem const &);
    virtual _inline UI::InterfaceElement *clone() override;
    UI::NewText &GetTextInfo();
    virtual void Draw2(Vector_2i const &, Rect_i const &) override;
protected:
    void Load(LuaConfig &);
};
static_assert(sizeof(UI::TextListBoxItem) == 1392, "Invalid UI::TextListBoxItem size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline UI::InterfaceElement *UI::ListBoxItem::clone() // 0x5A4EF5
{
    mangled_assert("?clone@ListBoxItem@UI@@UAEPAVInterfaceElement@2@XZ");
    todo("implement");
}

_inline __int32 UI::ListBoxItem::GetIndex() const // 0x57838E
{
    mangled_assert("?GetIndex@ListBoxItem@UI@@QBEHXZ");
    todo("implement");
}

_inline void UI::ListBoxItem::SetIndex(__int32) // 0x67D0D3
{
    mangled_assert("?SetIndex@ListBoxItem@UI@@QAEXH@Z");
    todo("implement");
}

_inline bool UI::ListBoxItem::GetSelected() const // 0x67C7AC
{
    mangled_assert("?GetSelected@ListBoxItem@UI@@QBE_NXZ");
    todo("implement");
}

_inline void UI::ListBoxItem::SetParentListBox(UI::NewListBox *) // 0x67D0FA
{
    mangled_assert("?SetParentListBox@ListBoxItem@UI@@QAEXPAVNewListBox@2@@Z");
    todo("implement");
}

_inline void UI::ListBoxItem::SetSelectable(bool) // 0x5940C9
{
    mangled_assert("?SetSelectable@ListBoxItem@UI@@QAEX_N@Z");
    todo("implement");
}

_inline bool UI::ListBoxItem::GetSelectable() const // 0x572838
{
    mangled_assert("?GetSelectable@ListBoxItem@UI@@QBE_NXZ");
    todo("implement");
}

_inline UI::InterfaceElement *UI::TextListBoxItem::clone() // 0x682D3A
{
    mangled_assert("?clone@TextListBoxItem@UI@@UAEPAVInterfaceElement@2@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __LISTBOXITEM_H__
#endif
