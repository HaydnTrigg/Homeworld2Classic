#if 0
#ifndef __NEWLISTBOX_H__
#define __NEWLISTBOX_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::NewListBox :
    public UI::InterfaceElement
{
public:
    NewListBox(UI::NewListBox const &);
    NewListBox(LuaConfig &);
    NewListBox(UI::InterfaceElement *, char const *, UI::ListBoxStyle *);
    virtual ~NewListBox() override;
    UI::NewListBox const &operator=(UI::NewListBox const &);
    virtual _inline UI::InterfaceElement *clone() override;
    virtual void Draw2(Vector_2i const &, Rect_i const &) override;
    void InsertListBoxItem(UI::ListBoxItem *, bool);
    bool RemoveListBoxItem(unsigned __int32);
    bool RemoveListBoxItem(UI::ListBoxItem *);
    void EmptyListBox();
    void ClearListBox();
    UI::ListBoxItem *GetListBoxItem(__int32) const;
    _inline UI::ListBoxItem *GetSelectedListBoxItem();
    UI::ListBoxItem *GetListBoxItemWithCustomData(unsigned __int32);
    _inline __int32 GetCount() const;
    _inline __int32 GetSelectedIndex() const;
    bool IsSelected(__int32) const;
    UI::Size GetItemSize() const;
    void SelectItem(__int32);
    bool SelectItemWithCustomData(unsigned __int32);
    bool SelectItemWithCustomData2(unsigned __int32);
    void DeselectAll();
    _inline void UseLeftScroll(bool);
    _inline void SetHugBottom(bool);
    bool GetHugBottom() const;
    _inline void SetMultiSelect(bool);
    _inline bool GetMultiSelect() const;
    virtual void AddChildR(UI::InterfaceElement *) override;
    virtual UI::InterfaceElement *RemoveChildR(UI::InterfaceElement *) override;
    _inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<UI::ListBoxItem *> > > begin();
    _inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<UI::ListBoxItem *> > > end();
    void SetScrollBarVisible(bool);
    _inline void ConnectOnItemSelect(void (*)(UI::InterfaceElement *, __int32));
    void SetContentsSize(UI::Size const &);
    UI::Size GetContentsSize() const;
    virtual void ChildMoveNotify() override;
    virtual void ChildResizeNotify() override;
    _inline UI::NewScrollBar *GetScrollBar();
    _inline __int32 GetScrollBarSpace() const;
    void SetScrollBarSpace(__int32);
    void ScrollToSelectedItem();
protected:
    void Load(LuaConfig &);
    virtual void CalcAutoSize() override;
    virtual void OnResize(__int32, __int32) override;
private:
    __int32 m_count; // 0x400
    __int32 m_selected; // 0x404
    __int32 m_pos; // 0x408
    __int32 m_contentsH; // 0x40C
    bool m_useLeftScroll; // 0x410
    bool m_scrollVisible; // 0x411
    bool m_hugBottom; // 0x412
    bool m_multiSelect; // 0x413
    __int32 m_scrollBarSpace; // 0x414
    __int32 m_maxItems; // 0x418
    std::vector<UI::ListBoxItem *,std::allocator<UI::ListBoxItem *> > m_items; // 0x41C
    UI::UIIntSignal m_onItemSelect; // 0x428
    UI::NewScrollBar *m_sbarVert; // 0x434
    UI::NewFrame *m_contents; // 0x438
    __int32 m_scrollButtonWidth; // 0x43C
    __int32 m_itemButtonWidth; // 0x440
    bool m_leftScrollBar; // 0x444
    bool m_scrollBarVisible; // 0x445
    void UpdateItemsIndex();
    void UpdateListBox();
    void Init();
    static void OnScrollVert(UI::InterfaceElement *e, __int32 pos);
};
static_assert(sizeof(UI::NewListBox) == 1096, "Invalid UI::NewListBox size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline UI::InterfaceElement *UI::NewListBox::clone() // 0x67D2A2
{
    mangled_assert("?clone@NewListBox@UI@@UAEPAVInterfaceElement@2@XZ");
    todo("implement");
}

_inline UI::ListBoxItem *UI::NewListBox::GetSelectedListBoxItem() // 0x57283F
{
    mangled_assert("?GetSelectedListBoxItem@NewListBox@UI@@QAEPAVListBoxItem@2@XZ");
    todo("implement");
}

_inline __int32 UI::NewListBox::GetCount() const // 0x57273E
{
    mangled_assert("?GetCount@NewListBox@UI@@QBEHXZ");
    todo("implement");
}

_inline __int32 UI::NewListBox::GetSelectedIndex() const // 0x59E42C
{
    mangled_assert("?GetSelectedIndex@NewListBox@UI@@QBEHXZ");
    todo("implement");
}

_inline void UI::NewListBox::UseLeftScroll(bool) // 0x67D270
{
    mangled_assert("?UseLeftScroll@NewListBox@UI@@QAEX_N@Z");
    todo("implement");
}

_inline void UI::NewListBox::SetHugBottom(bool) // 0x67D0C6
{
    mangled_assert("?SetHugBottom@NewListBox@UI@@QAEX_N@Z");
    todo("implement");
}

_inline void UI::NewListBox::SetMultiSelect(bool) // 0x67D0ED
{
    mangled_assert("?SetMultiSelect@NewListBox@UI@@QAEX_N@Z");
    todo("implement");
}

_inline bool UI::NewListBox::GetMultiSelect() const // 0x682BA6
{
    mangled_assert("?GetMultiSelect@NewListBox@UI@@QBE_NXZ");
    todo("implement");
}

_inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<UI::ListBoxItem *> > > UI::NewListBox::begin() // 0x575A4B
{
    mangled_assert("?begin@NewListBox@UI@@QAE?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PAVListBoxItem@UI@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<UI::ListBoxItem *> > > UI::NewListBox::end() // 0x575A66
{
    mangled_assert("?end@NewListBox@UI@@QAE?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PAVListBoxItem@UI@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline void UI::NewListBox::ConnectOnItemSelect(void (*)(UI::InterfaceElement *, __int32)) // 0x57259B
{
    mangled_assert("?ConnectOnItemSelect@NewListBox@UI@@QAEXP6GXPAVInterfaceElement@2@H@Z@Z");
    todo("implement");
}

_inline UI::NewScrollBar *UI::NewListBox::GetScrollBar() // 0x57FA30
{
    mangled_assert("?GetScrollBar@NewListBox@UI@@QAEPAVNewScrollBar@2@XZ");
    todo("implement");
}

_inline __int32 UI::NewListBox::GetScrollBarSpace() const // 0x67C7A5
{
    mangled_assert("?GetScrollBarSpace@NewListBox@UI@@QBEHXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __NEWLISTBOX_H__
#endif
