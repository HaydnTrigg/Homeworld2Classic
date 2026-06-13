#if 0
#ifndef __INTERFACEELEMENT_H__
#define __INTERFACEELEMENT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::InterfaceElement
{
public:
    typedef bool (*SortFunc)(UI::InterfaceElement const *, UI::InterfaceElement const *);
    InterfaceElement(UI::InterfaceElement const &);
    InterfaceElement(LuaConfig &);
    InterfaceElement(UI::InterfaceElement *, char const *);
    virtual ~InterfaceElement();
    virtual _inline UI::InterfaceElement *clone();
    UI::InterfaceElement const &CopyNoChildren(UI::InterfaceElement const &);
    UI::InterfaceElement const &operator=(UI::InterfaceElement const &);
    static UI::InterfaceElement *NewCreate(LuaConfig &lc, char const *typeName);
    static _inline void BindKeyBinder(void (*functionCB)(unsigned __int32, wchar_t const *, wchar_t *, unsigned __int32));
    virtual void Draw2(Vector_2i const &, Rect_i const &);
    virtual void AddChildR(UI::InterfaceElement *);
    virtual UI::InterfaceElement *RemoveChildR(UI::InterfaceElement *);
    void Click(Vector_2i const &, UI::MouseButton const &);
    void DoubleClick(Vector_2i const &, UI::MouseButton const &);
    _inline std::list<UI::InterfaceElement *,std::allocator<UI::InterfaceElement *> > &GetChildList();
    _inline std::_List_iterator<std::_List_val<std::_List_simple_types<UI::InterfaceElement *> > > begin();
    _inline std::_List_iterator<std::_List_val<std::_List_simple_types<UI::InterfaceElement *> > > end();
    _inline bool empty();
    void AddLine(UI::Line const &);
    void RemoveAllChildren();
    void DestroyAllChildren();
    UI::InterfaceElement *FindNamedElement(char const *);
    UI::InterfaceElement *FindElement(unsigned __int32);
    Rect_i GetAbsoluteDimensions() const;
    Vector_2i GetAbsolutePosition() const;
    Vector_2i GetAbsoluteFromLocal(Vector_2i const &) const;
    Vector_2i GetLocalFromAbsolute(Vector_2i const &) const;
    void AddRadioItem(UI::RadioItem *);
    void RemoveRadioItem(UI::RadioItem *);
    void UnselectAllRadioItems();
    bool HandleEvent(UI::EventType, UI::EventInfo const &);
    _inline void ConnectOnMouseMoved(void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32));
    _inline void ConnectOnMouseEnter(void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32));
    _inline void ConnectOnMouseExit(void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32));
    _inline void ConnectOnMousePressed(void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32));
    _inline void ConnectOnMouseReleased(void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32));
    _inline void ConnectOnMouseClicked(void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32));
    _inline void ConnectOnMouseDoubleClicked(void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32));
    _inline void ConnectOnKeyPressed(void (*)(UI::InterfaceElement *, unsigned short, __int32));
    _inline void ConnectOnKeyReleased(void (*)(UI::InterfaceElement *, unsigned short, __int32));
    void ConnectOnKeyRepeat(void (*)(UI::InterfaceElement *, unsigned short, __int32));
    void ConnectOnFocusIn(void (*)(UI::InterfaceElement *));
    _inline void ConnectOnFocusOut(void (*)(UI::InterfaceElement *));
    _inline bool DisconnectOnMouseClicked(void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32));
    bool DisconnectOnMousePressed(void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32));
    bool DisconnectOnMouseExit(void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32));
    bool DisconnectOnMouseEnter(void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32));
    _inline bool DisconnectOnKeyPressed(void (*)(UI::InterfaceElement *, unsigned short, __int32));
    _inline bool DisconnectOnKeyReleased(void (*)(UI::InterfaceElement *, unsigned short, __int32));
    bool DisconnectOnKeyRepeat(void (*)(UI::InterfaceElement *, unsigned short, __int32));
    _inline void SetName(char const *);
    _inline void SetVisible(bool);
    _inline void SetBackgroundGraphic(boost::shared_ptr<UI::Graphic>);
    _inline void SetBackgroundGraphic2(boost::shared_ptr<UI::Graphic>);
    _inline void ClearBackgroundGraphic();
    _inline void SetBackgroundGraphicVisible(bool);
    _inline void SetBackgroundGraphic2Visible(bool);
    _inline void SetDisabledGraphic(boost::shared_ptr<UI::Graphic>);
    _inline void SetBackgroundColor(Color_4b const &);
    _inline void SetBackgroundGraphicColor(Color_4b const &);
    _inline void SetBorderColor(Color_4b const &);
    _inline void SetBorderWidth(unsigned __int32);
    _inline void SetOuterBorderWidth(unsigned __int32);
    _inline void SetDisabledColor(Color_4b const &);
    _inline void SetDisabledBorderColor(Color_4b const &);
    void SetGiveParentFocus(bool);
    _inline void SetGiveParentMouseInput(bool);
    void SetGiveParentMouseInputRecursive(bool);
    _inline void SetParent3(UI::InterfaceElement *);
    void SetHelpTip(wchar_t const *);
    void SetDisabledHelpTip(wchar_t const *);
    void SetHelpTipTextLabel(char const *);
    void SetHelpTipScreen(char const *);
    _inline void SetHotKeyID(unsigned __int32);
    _inline void SetClipRect(Rect_i const &);
    _inline void SetBackgroundRepeat(bool);
    _inline void SetCustomData(unsigned long long);
    _inline void SetCustomData2(unsigned __int32);
    _inline void SetCustomData3(__int32);
    void SetParentNewUIScreen(UI::NewUIScreen *);
    void SetUseMaxSize(bool);
    void SetUseMinSize(bool);
    _inline void SetGreyscale(bool);
    void SetMaxSize(UI::Size const &);
    void SetMinSize(UI::Size const &);
    void SetEnabled(bool);
    _inline void SetMarginWidth(__int32);
    void SetMarginHeight(__int32);
    void SetVAlign(unsigned __int32);
    void SetHAlign(unsigned __int32);
    void SetAllowDoubleClick(bool);
    _inline void Move(Vector_2i const &);
    virtual void Move(__int32, __int32);
    _inline void Resize(UI::Size const &);
    virtual void Resize(__int32, __int32);
    void SetDimensions(__int32, __int32, __int32, __int32);
    _inline void SetDimensions(Rect_i const &);
    _inline Color_4b GetBackgroundColor() const;
    Color_4b GetDisabledColor() const;
    _inline Color_4b GetBorderColor() const;
    _inline unsigned __int32 GetBorderWidth() const;
    unsigned __int32 GetOuterBorderWidth() const;
    bool HasBackgroundGraphic() const;
    _inline bool HasBackgroundGraphic2() const;
    bool HasDisabledGraphic() const;
    _inline __int32 GetWidth() const;
    _inline __int32 GetHeight() const;
    _inline __int32 GetX() const;
    _inline __int32 GetY() const;
    _inline bool GetEnabled() const;
    _inline bool GetVisible() const;
    _inline char const *GetName() const;
    _inline UI::Size GetSize() const;
    UI::Size GetMinSize() const;
    _inline UI::Size GetMaxSize() const;
    _inline unsigned long long GetCustomData() const;
    _inline unsigned __int32 GetCustomData2() const;
    _inline __int32 GetCustomData3() const;
    _inline bool GetBackgroundRepeat() const;
    _inline boost::shared_ptr<UI::Graphic> GetBackgroundGraphic() const;
    _inline boost::shared_ptr<UI::Graphic> GetBackgroundGraphic2() const;
    _inline boost::shared_ptr<UI::Graphic> GetDisabledGraphic() const;
    _inline bool GetGiveParentFocus() const;
    bool GetGiveParentMouseInput() const;
    bool GetUseMaxSize() const;
    bool GetUseMinSize() const;
    bool GetGreyscale() const;
    _inline unsigned __int32 GetID() const;
    _inline UI::NewUIScreen *GetParentNewUIScreen() const;
    _inline UI::InterfaceElement *GetParent3() const;
    _inline Rect_i GetClipRect() const;
    wchar_t const *GetHelpTip() const;
    _inline unsigned __int32 GetHotKeyID() const;
    Vector_2i GetPosition() const;
    Rect_i GetDimensions() const;
    bool AreAnyParentsDisabled() const;
    void SetAutoSize(bool);
    _inline bool GetAutoSize() const;
    void SetAutoArrange(bool);
    _inline bool GetAutoArrange() const;
    void SetAutoArrangeWidth(__int32);
    _inline __int32 GetAutoArrangeWidth() const;
    _inline __int32 GetMarginWidth() const;
    _inline __int32 GetMarginHeight() const;
    _inline unsigned __int32 GetVAlign() const;
    _inline unsigned __int32 GetHAlign() const;
    bool GetAllowDoubleClick() const;
    static void FillRect(Color_4b const &color, Rect_i const &rect, Rect_i const &clip);
    static void DrawLine(Color_4b const &color, Vector_2i const &p1, Vector_2i const &p2, long lineWidth, Rect_i const &clip, bool above);
    static void DrawLine(Vector_2i const &offset, UI::Line const &line, Rect_i const &clip);
    static void FillBorderRect(Color_4b const &color, Rect_i const &rect, Color_4b const &borderColor, long borderWidth, long outerBorderWidth, Rect_i const &clip);
    void SetChildVisible(char const *, bool);
    void SetChildEnabled(char const *, bool);
    void ShowHelpTip();
    void HideHelpTip();
    _inline bool HasMouseEntered() const;
    static bool CustomDataComp(UI::InterfaceElement const *item1, UI::InterfaceElement const *item2);
    static bool CustomData2Comp(UI::InterfaceElement const *item1, UI::InterfaceElement const *item2);
    void SortChildren(bool (*)(UI::InterfaceElement const *, UI::InterfaceElement const *));
protected:
    std::list<UI::InterfaceElement *,std::allocator<UI::InterfaceElement *> > m_children; // 0x8
    std::list<UI::Line,std::allocator<UI::Line> > m_lines; // 0x10
    bool m_autosize; // 0x18
private:
    bool m_visible; // 0x19
    bool m_enabled; // 0x1A
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x1C
    bool m_backgroundGraphicVisible; // 0x34
    bool m_backgroundGraphic2Visible; // 0x35
    boost::shared_ptr<UI::Graphic> m_backgroundGraphic; // 0x38
    boost::shared_ptr<UI::Graphic> m_backgroundGraphic2; // 0x40
    boost::shared_ptr<UI::Graphic> m_disabledGraphic; // 0x48
    unsigned __int32 m_bgGraphicHAlign; // 0x50
    unsigned __int32 m_bgGraphicVAlign; // 0x54
    Color_4b m_backgroundColor; // 0x58
    Color_4b m_borderColor; // 0x5C
    Color_4b m_disabledColor; // 0x60
    Color_4b m_disabledBorderColor; // 0x64
    Color_4b m_backgroundGraphicColor; // 0x68
    long m_borderWidth; // 0x6C
    long m_outerBorderWidth; // 0x70
    Vector_2i m_position; // 0x74
    UI::Size m_size; // 0x7C
    unsigned long long m_customData; // 0x88
    unsigned __int32 m_customData2; // 0x90
    __int32 m_customData3; // 0x94
    bool m_backgroundRepeat; // 0x98
    bool m_autoarrange; // 0x99
    __int32 m_autoarrangeWidth; // 0x9C
    __int32 m_autoarrangeSpace; // 0xA0
    bool m_giveParentFocus; // 0xA4
    bool m_giveParentMouseInput; // 0xA5
    bool m_resizeToParent; // 0xA6
    UI::Size m_minSize; // 0xA8
    UI::Size m_maxSize; // 0xB0
    bool m_useMinSize; // 0xB8
    bool m_useMaxSize; // 0xB9
    __int32 m_marginWidth; // 0xBC
    __int32 m_marginHeight; // 0xC0
    __int32 m_hotKeyID; // 0xC4
    bool m_greyscale; // 0xC8
    unsigned __int32 m_hAlign; // 0xCC
    unsigned __int32 m_vAlign; // 0xD0
    unsigned __int32 m_ID; // 0xD4
    Rect_i m_clipRect; // 0xD8
    UI::InterfaceElement *m_parent3; // 0xE8
    UI::NewUIScreen *m_parentNewUIScreen; // 0xEC
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_helpTip; // 0xF0
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_helpTipDisabled; // 0x108
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_helpTipTextLabel; // 0x120
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_helpTipScreen; // 0x138
    std::list<UI::RadioItem *,std::allocator<UI::RadioItem *> > m_radioItems; // 0x150
    UI::UIMouseSignal m_onMouseMoved; // 0x158
    UI::UIMouseSignal m_onMouseEnter; // 0x164
    UI::UIMouseSignal m_onMouseExit; // 0x170
    UI::UIMouseSignal m_onMousePressed; // 0x17C
    UI::UIMouseSignal m_onMouseReleased; // 0x188
    UI::UIMouseSignal m_onMouseClicked; // 0x194
    UI::UIMouseSignal m_onMouseDoubleClicked; // 0x1A0
    UI::UIKeySignal m_onKeyPressed; // 0x1AC
    UI::UIKeySignal m_onKeyReleased; // 0x1B8
    UI::UIKeySignal m_onKeyRepeat; // 0x1C4
    UI::UISignal m_onFocusIn; // 0x1D0
    UI::UISignal m_onFocusOut; // 0x1DC
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_luaOnMouseMoved; // 0x1E8
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_luaOnMouseClicked; // 0x200
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_luaOnMouseEnter; // 0x218
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_luaOnMouseExit; // 0x230
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_luaOnMousePressed; // 0x248
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_luaOnMouseReleased; // 0x260
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_luaOnMouseDoubleClicked; // 0x278
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_luaOnKeyPressed; // 0x290
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_luaOnKeyReleased; // 0x2A8
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_luaOnKeyRepeat; // 0x2C0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_luaOnResize; // 0x2D8
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_luaOnUpdate; // 0x2F0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_luaOnLoad; // 0x308
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_luaOnDraw; // 0x320
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundOnEnter; // 0x338
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundOnExit; // 0x350
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundOnClicked; // 0x368
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundOnPressed; // 0x380
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundOnReleased; // 0x398
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundOnKeyDown; // 0x3B0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundOnKeyUp; // 0x3C8
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundOnKeyRepeat; // 0x3E0
    bool m_hasMouseEntered; // 0x3F8
    bool m_allowDoubleClick; // 0x3F9
protected:
    void Load(LuaConfig &);
    void LoadNoChildren(LuaConfig &);
    virtual void CalcAutoSize();
    virtual _inline void OnMouseMoved(Vector_2i const &, UI::MouseButton const &);
    virtual _inline void OnMousePressed(Vector_2i const &, UI::MouseButton const &);
    virtual _inline void OnMouseReleased(Vector_2i const &, UI::MouseButton const &);
    virtual _inline void OnMouseClicked(Vector_2i const &, UI::MouseButton const &);
    virtual _inline void OnMouseDoubleClicked(Vector_2i const &, UI::MouseButton const &);
    virtual _inline void OnMouseEnter(Vector_2i const &, UI::MouseButton const &);
    virtual _inline void OnMouseExit(Vector_2i const &, UI::MouseButton const &);
    virtual _inline void OnResize(__int32, __int32);
    virtual _inline void OnUpdate(unsigned __int32);
    virtual _inline void OnMouseWheelUp();
    virtual _inline void OnMouseWheelDown();
    virtual _inline void OnFocus(bool);
    virtual _inline void OnEnable(bool);
    virtual void OnKeyPressed(unsigned char, UI::KeyModifier const &);
    virtual void OnKeyReleased(unsigned char, UI::KeyModifier const &);
    virtual void OnKeyRepeat(unsigned char, UI::KeyModifier const &);
    virtual void ChildMoveNotify();
    virtual void ChildResizeNotify();
    virtual void ParentResizeNotify();
    void DrawBackground(Rect_i const &, Rect_i const &);
    void DrawChildren(Vector_2i const &, Rect_i const &);
    void DrawLines(Vector_2i const &, Rect_i const &);
    void ResizeInternal(__int32, __int32);
private:
    static unsigned __int32 ms_count;
    static void (*ms_keybinder)(unsigned __int32, wchar_t const *, wchar_t *, unsigned __int32);
    void Init();
public:
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(UI::InterfaceElement) == 1024, "Invalid UI::InterfaceElement size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern UI::InterfaceElement *_sub_66D89F(UI::InterfaceElement *const);
_inline UI::InterfaceElement *UI::InterfaceElement::clone() // 0x66D89F
{
    mangled_assert("?clone@InterfaceElement@UI@@UAEPAV12@XZ");
    todo("implement");
    UI::InterfaceElement * __result = _sub_66D89F(this);
    return __result;
}

_extern void _sub_4F67D2(void (*)(unsigned __int32, wchar_t const *, wchar_t *, unsigned __int32));
_inline void UI::InterfaceElement::BindKeyBinder(void (*functionCB)(unsigned __int32, wchar_t const *, wchar_t *, unsigned __int32)) // 0x4F67D2
{
    mangled_assert("?BindKeyBinder@InterfaceElement@UI@@SGXP6GXIPB_WPA_WI@Z@Z");
    todo("implement");
    _sub_4F67D2(functionCB);
}

_extern std::list<UI::InterfaceElement *,std::allocator<UI::InterfaceElement *> > &_sub_570B9F(UI::InterfaceElement *const);
_inline std::list<UI::InterfaceElement *,std::allocator<UI::InterfaceElement *> > &UI::InterfaceElement::GetChildList() // 0x570B9F
{
    mangled_assert("?GetChildList@InterfaceElement@UI@@QAEAAV?$list@PAVInterfaceElement@UI@@V?$allocator@PAVInterfaceElement@UI@@@std@@@std@@XZ");
    todo("implement");
    std::list<UI::InterfaceElement *,std::allocator<UI::InterfaceElement *> > & __result = _sub_570B9F(this);
    return __result;
}

_extern std::_List_iterator<std::_List_val<std::_List_simple_types<UI::InterfaceElement *> > > _sub_5709D3(UI::InterfaceElement *const);
_inline std::_List_iterator<std::_List_val<std::_List_simple_types<UI::InterfaceElement *> > > UI::InterfaceElement::begin() // 0x5709D3
{
    mangled_assert("?begin@InterfaceElement@UI@@QAE?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@PAVInterfaceElement@UI@@@std@@@std@@@std@@XZ");
    todo("implement");
    std::_List_iterator<std::_List_val<std::_List_simple_types<UI::InterfaceElement *> > > __result = _sub_5709D3(this);
    return __result;
}

_extern std::_List_iterator<std::_List_val<std::_List_simple_types<UI::InterfaceElement *> > > _sub_570A36(UI::InterfaceElement *const);
_inline std::_List_iterator<std::_List_val<std::_List_simple_types<UI::InterfaceElement *> > > UI::InterfaceElement::end() // 0x570A36
{
    mangled_assert("?end@InterfaceElement@UI@@QAE?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@PAVInterfaceElement@UI@@@std@@@std@@@std@@XZ");
    todo("implement");
    std::_List_iterator<std::_List_val<std::_List_simple_types<UI::InterfaceElement *> > > __result = _sub_570A36(this);
    return __result;
}

_extern bool _sub_590058(UI::InterfaceElement *const);
_inline bool UI::InterfaceElement::empty() // 0x590058
{
    mangled_assert("?empty@InterfaceElement@UI@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_590058(this);
    return __result;
}

_extern void _sub_5A014A(UI::InterfaceElement *const, void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32));
_inline void UI::InterfaceElement::ConnectOnMouseMoved(void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32)) // 0x5A014A
{
    mangled_assert("?ConnectOnMouseMoved@InterfaceElement@UI@@QAEXP6GXPAV12@HHI@Z@Z");
    todo("implement");
    _sub_5A014A(this, arg);
}

_extern void _sub_57EDA0(UI::InterfaceElement *const, void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32));
_inline void UI::InterfaceElement::ConnectOnMouseEnter(void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32)) // 0x57EDA0
{
    mangled_assert("?ConnectOnMouseEnter@InterfaceElement@UI@@QAEXP6GXPAV12@HHI@Z@Z");
    todo("implement");
    _sub_57EDA0(this, arg);
}

_extern void _sub_57EDBC(UI::InterfaceElement *const, void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32));
_inline void UI::InterfaceElement::ConnectOnMouseExit(void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32)) // 0x57EDBC
{
    mangled_assert("?ConnectOnMouseExit@InterfaceElement@UI@@QAEXP6GXPAV12@HHI@Z@Z");
    todo("implement");
    _sub_57EDBC(this, arg);
}

_extern void _sub_57EDD8(UI::InterfaceElement *const, void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32));
_inline void UI::InterfaceElement::ConnectOnMousePressed(void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32)) // 0x57EDD8
{
    mangled_assert("?ConnectOnMousePressed@InterfaceElement@UI@@QAEXP6GXPAV12@HHI@Z@Z");
    todo("implement");
    _sub_57EDD8(this, arg);
}

_extern void _sub_56FDB8(UI::InterfaceElement *const, void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32));
_inline void UI::InterfaceElement::ConnectOnMouseReleased(void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32)) // 0x56FDB8
{
    mangled_assert("?ConnectOnMouseReleased@InterfaceElement@UI@@QAEXP6GXPAV12@HHI@Z@Z");
    todo("implement");
    _sub_56FDB8(this, arg);
}

_extern void _sub_57ED84(UI::InterfaceElement *const, void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32));
_inline void UI::InterfaceElement::ConnectOnMouseClicked(void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32)) // 0x57ED84
{
    mangled_assert("?ConnectOnMouseClicked@InterfaceElement@UI@@QAEXP6GXPAV12@HHI@Z@Z");
    todo("implement");
    _sub_57ED84(this, arg);
}

_extern void _sub_575241(UI::InterfaceElement *const, void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32));
_inline void UI::InterfaceElement::ConnectOnMouseDoubleClicked(void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32)) // 0x575241
{
    mangled_assert("?ConnectOnMouseDoubleClicked@InterfaceElement@UI@@QAEXP6GXPAV12@HHI@Z@Z");
    todo("implement");
    _sub_575241(this, arg);
}

_extern void _sub_5725B7(UI::InterfaceElement *const, void (*)(UI::InterfaceElement *, unsigned short, __int32));
_inline void UI::InterfaceElement::ConnectOnKeyPressed(void (*)(UI::InterfaceElement *, unsigned short, __int32)) // 0x5725B7
{
    mangled_assert("?ConnectOnKeyPressed@InterfaceElement@UI@@QAEXP6GXPAV12@GH@Z@Z");
    todo("implement");
    _sub_5725B7(this, arg);
}

_extern void _sub_5725D3(UI::InterfaceElement *const, void (*)(UI::InterfaceElement *, unsigned short, __int32));
_inline void UI::InterfaceElement::ConnectOnKeyReleased(void (*)(UI::InterfaceElement *, unsigned short, __int32)) // 0x5725D3
{
    mangled_assert("?ConnectOnKeyReleased@InterfaceElement@UI@@QAEXP6GXPAV12@GH@Z@Z");
    todo("implement");
    _sub_5725D3(this, arg);
}

_extern void _sub_57257F(UI::InterfaceElement *const, void (*)(UI::InterfaceElement *));
_inline void UI::InterfaceElement::ConnectOnFocusOut(void (*)(UI::InterfaceElement *)) // 0x57257F
{
    mangled_assert("?ConnectOnFocusOut@InterfaceElement@UI@@QAEXP6GXPAV12@@Z@Z");
    todo("implement");
    _sub_57257F(this, arg);
}

_extern bool _sub_5A1ECA(UI::InterfaceElement *const, void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32));
_inline bool UI::InterfaceElement::DisconnectOnMouseClicked(void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32)) // 0x5A1ECA
{
    mangled_assert("?DisconnectOnMouseClicked@InterfaceElement@UI@@QAE_NP6GXPAV12@HHI@Z@Z");
    todo("implement");
    bool __result = _sub_5A1ECA(this, arg);
    return __result;
}

_extern bool _sub_57270F(UI::InterfaceElement *const, void (*)(UI::InterfaceElement *, unsigned short, __int32));
_inline bool UI::InterfaceElement::DisconnectOnKeyPressed(void (*)(UI::InterfaceElement *, unsigned short, __int32)) // 0x57270F
{
    mangled_assert("?DisconnectOnKeyPressed@InterfaceElement@UI@@QAE_NP6GXPAV12@GH@Z@Z");
    todo("implement");
    bool __result = _sub_57270F(this, arg);
    return __result;
}

_extern bool _sub_57271A(UI::InterfaceElement *const, void (*)(UI::InterfaceElement *, unsigned short, __int32));
_inline bool UI::InterfaceElement::DisconnectOnKeyReleased(void (*)(UI::InterfaceElement *, unsigned short, __int32)) // 0x57271A
{
    mangled_assert("?DisconnectOnKeyReleased@InterfaceElement@UI@@QAE_NP6GXPAV12@GH@Z@Z");
    todo("implement");
    bool __result = _sub_57271A(this, arg);
    return __result;
}

_extern void _sub_573826(UI::InterfaceElement *const, char const *);
_inline void UI::InterfaceElement::SetName(char const *) // 0x573826
{
    mangled_assert("?SetName@InterfaceElement@UI@@QAEXPBD@Z");
    todo("implement");
    _sub_573826(this, arg);
}

_extern void _sub_570190(UI::InterfaceElement *const, bool);
_inline void UI::InterfaceElement::SetVisible(bool) // 0x570190
{
    mangled_assert("?SetVisible@InterfaceElement@UI@@QAEX_N@Z");
    todo("implement");
    _sub_570190(this, arg);
}

_extern void _sub_574AB7(UI::InterfaceElement *const, boost::shared_ptr<UI::Graphic>);
_inline void UI::InterfaceElement::SetBackgroundGraphic(boost::shared_ptr<UI::Graphic>) // 0x574AB7
{
    mangled_assert("?SetBackgroundGraphic@InterfaceElement@UI@@QAEXV?$shared_ptr@VGraphic@UI@@@boost@@@Z");
    todo("implement");
    _sub_574AB7(this, arg);
}

_extern void _sub_66D145(UI::InterfaceElement *const, boost::shared_ptr<UI::Graphic>);
_inline void UI::InterfaceElement::SetBackgroundGraphic2(boost::shared_ptr<UI::Graphic>) // 0x66D145
{
    mangled_assert("?SetBackgroundGraphic2@InterfaceElement@UI@@QAEXV?$shared_ptr@VGraphic@UI@@@boost@@@Z");
    todo("implement");
    _sub_66D145(this, arg);
}

_extern void _sub_5993E6(UI::InterfaceElement *const);
_inline void UI::InterfaceElement::ClearBackgroundGraphic() // 0x5993E6
{
    mangled_assert("?ClearBackgroundGraphic@InterfaceElement@UI@@QAEXXZ");
    todo("implement");
    _sub_5993E6(this);
}

_extern void _sub_581CEA(UI::InterfaceElement *const, bool);
_inline void UI::InterfaceElement::SetBackgroundGraphicVisible(bool) // 0x581CEA
{
    mangled_assert("?SetBackgroundGraphicVisible@InterfaceElement@UI@@QAEX_N@Z");
    todo("implement");
    _sub_581CEA(this, arg);
}

_extern void _sub_581CD4(UI::InterfaceElement *const, bool);
_inline void UI::InterfaceElement::SetBackgroundGraphic2Visible(bool) // 0x581CD4
{
    mangled_assert("?SetBackgroundGraphic2Visible@InterfaceElement@UI@@QAEX_N@Z");
    todo("implement");
    _sub_581CD4(this, arg);
}

_extern void _sub_59A5AB(UI::InterfaceElement *const, boost::shared_ptr<UI::Graphic>);
_inline void UI::InterfaceElement::SetDisabledGraphic(boost::shared_ptr<UI::Graphic>) // 0x59A5AB
{
    mangled_assert("?SetDisabledGraphic@InterfaceElement@UI@@QAEXV?$shared_ptr@VGraphic@UI@@@boost@@@Z");
    todo("implement");
    _sub_59A5AB(this, arg);
}

_extern void _sub_574AAB(UI::InterfaceElement *const, Color_4b const &);
_inline void UI::InterfaceElement::SetBackgroundColor(Color_4b const &) // 0x574AAB
{
    mangled_assert("?SetBackgroundColor@InterfaceElement@UI@@QAEXABUColor_4b@@@Z");
    todo("implement");
    _sub_574AAB(this, arg);
}

_extern void _sub_581CDE(UI::InterfaceElement *const, Color_4b const &);
_inline void UI::InterfaceElement::SetBackgroundGraphicColor(Color_4b const &) // 0x581CDE
{
    mangled_assert("?SetBackgroundGraphicColor@InterfaceElement@UI@@QAEXABUColor_4b@@@Z");
    todo("implement");
    _sub_581CDE(this, arg);
}

_extern void _sub_67D0AA(UI::InterfaceElement *const, Color_4b const &);
_inline void UI::InterfaceElement::SetBorderColor(Color_4b const &) // 0x67D0AA
{
    mangled_assert("?SetBorderColor@InterfaceElement@UI@@QAEXABUColor_4b@@@Z");
    todo("implement");
    _sub_67D0AA(this, arg);
}

_extern void _sub_5A4DF1(UI::InterfaceElement *const, unsigned __int32);
_inline void UI::InterfaceElement::SetBorderWidth(unsigned __int32) // 0x5A4DF1
{
    mangled_assert("?SetBorderWidth@InterfaceElement@UI@@QAEXI@Z");
    todo("implement");
    _sub_5A4DF1(this, arg);
}

_extern void _sub_5AC296(UI::InterfaceElement *const, unsigned __int32);
_inline void UI::InterfaceElement::SetOuterBorderWidth(unsigned __int32) // 0x5AC296
{
    mangled_assert("?SetOuterBorderWidth@InterfaceElement@UI@@QAEXI@Z");
    todo("implement");
    _sub_5AC296(this, arg);
}

_extern void _sub_5A35AD(UI::InterfaceElement *const, Color_4b const &);
_inline void UI::InterfaceElement::SetDisabledColor(Color_4b const &) // 0x5A35AD
{
    mangled_assert("?SetDisabledColor@InterfaceElement@UI@@QAEXABUColor_4b@@@Z");
    todo("implement");
    _sub_5A35AD(this, arg);
}

_extern void _sub_581F86(UI::InterfaceElement *const, Color_4b const &);
_inline void UI::InterfaceElement::SetDisabledBorderColor(Color_4b const &) // 0x581F86
{
    mangled_assert("?SetDisabledBorderColor@InterfaceElement@UI@@QAEXABUColor_4b@@@Z");
    todo("implement");
    _sub_581F86(this, arg);
}

_extern void _sub_66D22B(UI::InterfaceElement *const, bool);
_inline void UI::InterfaceElement::SetGiveParentMouseInput(bool) // 0x66D22B
{
    mangled_assert("?SetGiveParentMouseInput@InterfaceElement@UI@@QAEX_N@Z");
    todo("implement");
    _sub_66D22B(this, arg);
}

_extern void _sub_573844(UI::InterfaceElement *const, UI::InterfaceElement *);
_inline void UI::InterfaceElement::SetParent3(UI::InterfaceElement *) // 0x573844
{
    mangled_assert("?SetParent3@InterfaceElement@UI@@QAEXPAV12@@Z");
    todo("implement");
    _sub_573844(this, arg);
}

_extern void _sub_581FE5(UI::InterfaceElement *const, unsigned __int32);
_inline void UI::InterfaceElement::SetHotKeyID(unsigned __int32) // 0x581FE5
{
    mangled_assert("?SetHotKeyID@InterfaceElement@UI@@QAEXI@Z");
    todo("implement");
    _sub_581FE5(this, arg);
}

_extern void _sub_66D1BF(UI::InterfaceElement *const, Rect_i const &);
_inline void UI::InterfaceElement::SetClipRect(Rect_i const &) // 0x66D1BF
{
    mangled_assert("?SetClipRect@InterfaceElement@UI@@QAEXABURect_i@@@Z");
    todo("implement");
    _sub_66D1BF(this, arg);
}

_extern void _sub_67D09D(UI::InterfaceElement *const, bool);
_inline void UI::InterfaceElement::SetBackgroundRepeat(bool) // 0x67D09D
{
    mangled_assert("?SetBackgroundRepeat@InterfaceElement@UI@@QAEX_N@Z");
    todo("implement");
    _sub_67D09D(this, arg);
}

_extern void _sub_570179(UI::InterfaceElement *const, unsigned long long);
_inline void UI::InterfaceElement::SetCustomData(unsigned long long) // 0x570179
{
    mangled_assert("?SetCustomData@InterfaceElement@UI@@QAEX_K@Z");
    todo("implement");
    _sub_570179(this, arg);
}

_extern void _sub_57016C(UI::InterfaceElement *const, unsigned __int32);
_inline void UI::InterfaceElement::SetCustomData2(unsigned __int32) // 0x57016C
{
    mangled_assert("?SetCustomData2@InterfaceElement@UI@@QAEXI@Z");
    todo("implement");
    _sub_57016C(this, arg);
}

_extern void _sub_57377F(UI::InterfaceElement *const, __int32);
_inline void UI::InterfaceElement::SetCustomData3(__int32) // 0x57377F
{
    mangled_assert("?SetCustomData3@InterfaceElement@UI@@QAEXH@Z");
    todo("implement");
    _sub_57377F(this, arg);
}

_extern void _sub_581F92(UI::InterfaceElement *const, bool);
_inline void UI::InterfaceElement::SetGreyscale(bool) // 0x581F92
{
    mangled_assert("?SetGreyscale@InterfaceElement@UI@@QAEX_N@Z");
    todo("implement");
    _sub_581F92(this, arg);
}

_extern void _sub_67D0E0(UI::InterfaceElement *const, __int32);
_inline void UI::InterfaceElement::SetMarginWidth(__int32) // 0x67D0E0
{
    mangled_assert("?SetMarginWidth@InterfaceElement@UI@@QAEXH@Z");
    todo("implement");
    _sub_67D0E0(this, arg);
}

_extern void _sub_5888D2(UI::InterfaceElement *const, Vector_2i const &);
_inline void UI::InterfaceElement::Move(Vector_2i const &) // 0x5888D2
{
    mangled_assert("?Move@InterfaceElement@UI@@QAEXABUVector_2i@@@Z");
    todo("implement");
    _sub_5888D2(this, arg);
}

_extern void _sub_589F38(UI::InterfaceElement *const, UI::Size const &);
_inline void UI::InterfaceElement::Resize(UI::Size const &) // 0x589F38
{
    mangled_assert("?Resize@InterfaceElement@UI@@QAEXABVSize@2@@Z");
    todo("implement");
    _sub_589F38(this, arg);
}

_extern void _sub_66F248(UI::InterfaceElement *const, Rect_i const &);
_inline void UI::InterfaceElement::SetDimensions(Rect_i const &) // 0x66F248
{
    mangled_assert("?SetDimensions@InterfaceElement@UI@@QAEXABURect_i@@@Z");
    todo("implement");
    _sub_66F248(this, arg);
}

_extern Color_4b _sub_57F925(UI::InterfaceElement const *const);
_inline Color_4b UI::InterfaceElement::GetBackgroundColor() const // 0x57F925
{
    mangled_assert("?GetBackgroundColor@InterfaceElement@UI@@QBE?AUColor_4b@@XZ");
    todo("implement");
    Color_4b __result = _sub_57F925(this);
    return __result;
}

_extern Color_4b _sub_67DCC5(UI::InterfaceElement const *const);
_inline Color_4b UI::InterfaceElement::GetBorderColor() const // 0x67DCC5
{
    mangled_assert("?GetBorderColor@InterfaceElement@UI@@QBE?AUColor_4b@@XZ");
    todo("implement");
    Color_4b __result = _sub_67DCC5(this);
    return __result;
}

_extern unsigned __int32 _sub_5A48FB(UI::InterfaceElement const *const);
_inline unsigned __int32 UI::InterfaceElement::GetBorderWidth() const // 0x5A48FB
{
    mangled_assert("?GetBorderWidth@InterfaceElement@UI@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_5A48FB(this);
    return __result;
}

_extern bool _sub_67DCD8(UI::InterfaceElement const *const);
_inline bool UI::InterfaceElement::HasBackgroundGraphic2() const // 0x67DCD8
{
    mangled_assert("?HasBackgroundGraphic2@InterfaceElement@UI@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_67DCD8(this);
    return __result;
}

_extern __int32 _sub_57FA45(UI::InterfaceElement const *const);
_inline __int32 UI::InterfaceElement::GetWidth() const // 0x57FA45
{
    mangled_assert("?GetWidth@InterfaceElement@UI@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_57FA45(this);
    return __result;
}

_extern __int32 _sub_577657(UI::InterfaceElement const *const);
_inline __int32 UI::InterfaceElement::GetHeight() const // 0x577657
{
    mangled_assert("?GetHeight@InterfaceElement@UI@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_577657(this);
    return __result;
}

_extern __int32 _sub_57FA49(UI::InterfaceElement const *const);
_inline __int32 UI::InterfaceElement::GetX() const // 0x57FA49
{
    mangled_assert("?GetX@InterfaceElement@UI@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_57FA49(this);
    return __result;
}

_extern __int32 _sub_576283(UI::InterfaceElement const *const);
_inline __int32 UI::InterfaceElement::GetY() const // 0x576283
{
    mangled_assert("?GetY@InterfaceElement@UI@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_576283(this);
    return __result;
}

_extern bool _sub_570BAA(UI::InterfaceElement const *const);
_inline bool UI::InterfaceElement::GetEnabled() const // 0x570BAA
{
    mangled_assert("?GetEnabled@InterfaceElement@UI@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_570BAA(this);
    return __result;
}

_extern bool _sub_5783D1(UI::InterfaceElement const *const);
_inline bool UI::InterfaceElement::GetVisible() const // 0x5783D1
{
    mangled_assert("?GetVisible@InterfaceElement@UI@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_5783D1(this);
    return __result;
}

_extern char const *_sub_578395(UI::InterfaceElement const *const);
_inline char const *UI::InterfaceElement::GetName() const // 0x578395
{
    mangled_assert("?GetName@InterfaceElement@UI@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_578395(this);
    return __result;
}

_extern UI::Size _sub_576251(UI::InterfaceElement const *const);
_inline UI::Size UI::InterfaceElement::GetSize() const // 0x576251
{
    mangled_assert("?GetSize@InterfaceElement@UI@@QBE?AVSize@2@XZ");
    todo("implement");
    UI::Size __result = _sub_576251(this);
    return __result;
}

_extern UI::Size _sub_577662(UI::InterfaceElement const *const);
_inline UI::Size UI::InterfaceElement::GetMaxSize() const // 0x577662
{
    mangled_assert("?GetMaxSize@InterfaceElement@UI@@QBE?AVSize@2@XZ");
    todo("implement");
    UI::Size __result = _sub_577662(this);
    return __result;
}

_extern unsigned long long _sub_56FDD7(UI::InterfaceElement const *const);
_inline unsigned long long UI::InterfaceElement::GetCustomData() const // 0x56FDD7
{
    mangled_assert("?GetCustomData@InterfaceElement@UI@@QBE_KXZ");
    todo("implement");
    unsigned long long __result = _sub_56FDD7(this);
    return __result;
}

_extern unsigned __int32 _sub_5727C9(UI::InterfaceElement const *const);
_inline unsigned __int32 UI::InterfaceElement::GetCustomData2() const // 0x5727C9
{
    mangled_assert("?GetCustomData2@InterfaceElement@UI@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_5727C9(this);
    return __result;
}

_extern __int32 _sub_5727D0(UI::InterfaceElement const *const);
_inline __int32 UI::InterfaceElement::GetCustomData3() const // 0x5727D0
{
    mangled_assert("?GetCustomData3@InterfaceElement@UI@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_5727D0(this);
    return __result;
}

_extern bool _sub_67C6BC(UI::InterfaceElement const *const);
_inline bool UI::InterfaceElement::GetBackgroundRepeat() const // 0x67C6BC
{
    mangled_assert("?GetBackgroundRepeat@InterfaceElement@UI@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_67C6BC(this);
    return __result;
}

_extern boost::shared_ptr<UI::Graphic> _sub_574023(UI::InterfaceElement const *const);
_inline boost::shared_ptr<UI::Graphic> UI::InterfaceElement::GetBackgroundGraphic() const // 0x574023
{
    mangled_assert("?GetBackgroundGraphic@InterfaceElement@UI@@QBE?AV?$shared_ptr@VGraphic@UI@@@boost@@XZ");
    todo("implement");
    boost::shared_ptr<UI::Graphic> __result = _sub_574023(this);
    return __result;
}

_extern boost::shared_ptr<UI::Graphic> _sub_67DC9E(UI::InterfaceElement const *const);
_inline boost::shared_ptr<UI::Graphic> UI::InterfaceElement::GetBackgroundGraphic2() const // 0x67DC9E
{
    mangled_assert("?GetBackgroundGraphic2@InterfaceElement@UI@@QBE?AV?$shared_ptr@VGraphic@UI@@@boost@@XZ");
    todo("implement");
    boost::shared_ptr<UI::Graphic> __result = _sub_67DC9E(this);
    return __result;
}

_extern boost::shared_ptr<UI::Graphic> _sub_5994F8(UI::InterfaceElement const *const);
_inline boost::shared_ptr<UI::Graphic> UI::InterfaceElement::GetDisabledGraphic() const // 0x5994F8
{
    mangled_assert("?GetDisabledGraphic@InterfaceElement@UI@@QBE?AV?$shared_ptr@VGraphic@UI@@@boost@@XZ");
    todo("implement");
    boost::shared_ptr<UI::Graphic> __result = _sub_5994F8(this);
    return __result;
}

_extern bool _sub_67225E(UI::InterfaceElement const *const);
_inline bool UI::InterfaceElement::GetGiveParentFocus() const // 0x67225E
{
    mangled_assert("?GetGiveParentFocus@InterfaceElement@UI@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_67225E(this);
    return __result;
}

_extern unsigned __int32 _sub_5727D7(UI::InterfaceElement const *const);
_inline unsigned __int32 UI::InterfaceElement::GetID() const // 0x5727D7
{
    mangled_assert("?GetID@InterfaceElement@UI@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_5727D7(this);
    return __result;
}

_extern UI::NewUIScreen *_sub_570BE9(UI::InterfaceElement const *const);
_inline UI::NewUIScreen *UI::InterfaceElement::GetParentNewUIScreen() const // 0x570BE9
{
    mangled_assert("?GetParentNewUIScreen@InterfaceElement@UI@@QBEPAVNewUIScreen@2@XZ");
    todo("implement");
    UI::NewUIScreen * __result = _sub_570BE9(this);
    return __result;
}

_extern UI::InterfaceElement *_sub_57282D(UI::InterfaceElement const *const);
_inline UI::InterfaceElement *UI::InterfaceElement::GetParent3() const // 0x57282D
{
    mangled_assert("?GetParent3@InterfaceElement@UI@@QBEPAV12@XZ");
    todo("implement");
    UI::InterfaceElement * __result = _sub_57282D(this);
    return __result;
}

_extern Rect_i _sub_66E240(UI::InterfaceElement const *const);
_inline Rect_i UI::InterfaceElement::GetClipRect() const // 0x66E240
{
    mangled_assert("?GetClipRect@InterfaceElement@UI@@QBE?AURect_i@@XZ");
    todo("implement");
    Rect_i __result = _sub_66E240(this);
    return __result;
}

_extern unsigned __int32 _sub_57F9AE(UI::InterfaceElement const *const);
_inline unsigned __int32 UI::InterfaceElement::GetHotKeyID() const // 0x57F9AE
{
    mangled_assert("?GetHotKeyID@InterfaceElement@UI@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_57F9AE(this);
    return __result;
}

_extern bool _sub_66B6B9(UI::InterfaceElement const *const);
_inline bool UI::InterfaceElement::GetAutoSize() const // 0x66B6B9
{
    mangled_assert("?GetAutoSize@InterfaceElement@UI@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_66B6B9(this);
    return __result;
}

_extern bool _sub_66B6B2(UI::InterfaceElement const *const);
_inline bool UI::InterfaceElement::GetAutoArrange() const // 0x66B6B2
{
    mangled_assert("?GetAutoArrange@InterfaceElement@UI@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_66B6B2(this);
    return __result;
}

_extern __int32 _sub_5AEE11(UI::InterfaceElement const *const);
_inline __int32 UI::InterfaceElement::GetAutoArrangeWidth() const // 0x5AEE11
{
    mangled_assert("?GetAutoArrangeWidth@InterfaceElement@UI@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_5AEE11(this);
    return __result;
}

_extern __int32 _sub_66B740(UI::InterfaceElement const *const);
_inline __int32 UI::InterfaceElement::GetMarginWidth() const // 0x66B740
{
    mangled_assert("?GetMarginWidth@InterfaceElement@UI@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_66B740(this);
    return __result;
}

_extern __int32 _sub_66B739(UI::InterfaceElement const *const);
_inline __int32 UI::InterfaceElement::GetMarginHeight() const // 0x66B739
{
    mangled_assert("?GetMarginHeight@InterfaceElement@UI@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_66B739(this);
    return __result;
}

_extern unsigned __int32 _sub_66B75F(UI::InterfaceElement const *const);
_inline unsigned __int32 UI::InterfaceElement::GetVAlign() const // 0x66B75F
{
    mangled_assert("?GetVAlign@InterfaceElement@UI@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_66B75F(this);
    return __result;
}

_extern unsigned __int32 _sub_66B6F8(UI::InterfaceElement const *const);
_inline unsigned __int32 UI::InterfaceElement::GetHAlign() const // 0x66B6F8
{
    mangled_assert("?GetHAlign@InterfaceElement@UI@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_66B6F8(this);
    return __result;
}

_extern bool _sub_672A3F(UI::InterfaceElement const *const);
_inline bool UI::InterfaceElement::HasMouseEntered() const // 0x672A3F
{
    mangled_assert("?HasMouseEntered@InterfaceElement@UI@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_672A3F(this);
    return __result;
}

_extern void _sub_573291(UI::InterfaceElement *const, Vector_2i const &, UI::MouseButton const &);
_inline void UI::InterfaceElement::OnMouseMoved(Vector_2i const &, UI::MouseButton const &) // 0x573291
{
    mangled_assert("?OnMouseMoved@InterfaceElement@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
    _sub_573291(this, arg, arg);
}

_extern void _sub_573294(UI::InterfaceElement *const, Vector_2i const &, UI::MouseButton const &);
_inline void UI::InterfaceElement::OnMousePressed(Vector_2i const &, UI::MouseButton const &) // 0x573294
{
    mangled_assert("?OnMousePressed@InterfaceElement@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
    _sub_573294(this, arg, arg);
}

_extern void _sub_573297(UI::InterfaceElement *const, Vector_2i const &, UI::MouseButton const &);
_inline void UI::InterfaceElement::OnMouseReleased(Vector_2i const &, UI::MouseButton const &) // 0x573297
{
    mangled_assert("?OnMouseReleased@InterfaceElement@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
    _sub_573297(this, arg, arg);
}

_extern void _sub_573285(UI::InterfaceElement *const, Vector_2i const &, UI::MouseButton const &);
_inline void UI::InterfaceElement::OnMouseClicked(Vector_2i const &, UI::MouseButton const &) // 0x573285
{
    mangled_assert("?OnMouseClicked@InterfaceElement@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
    _sub_573285(this, arg, arg);
}

_extern void _sub_573288(UI::InterfaceElement *const, Vector_2i const &, UI::MouseButton const &);
_inline void UI::InterfaceElement::OnMouseDoubleClicked(Vector_2i const &, UI::MouseButton const &) // 0x573288
{
    mangled_assert("?OnMouseDoubleClicked@InterfaceElement@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
    _sub_573288(this, arg, arg);
}

_extern void _sub_57328B(UI::InterfaceElement *const, Vector_2i const &, UI::MouseButton const &);
_inline void UI::InterfaceElement::OnMouseEnter(Vector_2i const &, UI::MouseButton const &) // 0x57328B
{
    mangled_assert("?OnMouseEnter@InterfaceElement@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
    _sub_57328B(this, arg, arg);
}

_extern void _sub_57328E(UI::InterfaceElement *const, Vector_2i const &, UI::MouseButton const &);
_inline void UI::InterfaceElement::OnMouseExit(Vector_2i const &, UI::MouseButton const &) // 0x57328E
{
    mangled_assert("?OnMouseExit@InterfaceElement@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
    _sub_57328E(this, arg, arg);
}

_extern void _sub_573345(UI::InterfaceElement *const, __int32, __int32);
_inline void UI::InterfaceElement::OnResize(__int32, __int32) // 0x573345
{
    mangled_assert("?OnResize@InterfaceElement@UI@@MAEXHH@Z");
    todo("implement");
    _sub_573345(this, arg, arg);
}

_extern void _sub_5733F1(UI::InterfaceElement *const, unsigned __int32);
_inline void UI::InterfaceElement::OnUpdate(unsigned __int32) // 0x5733F1
{
    mangled_assert("?OnUpdate@InterfaceElement@UI@@MAEXI@Z");
    todo("implement");
    _sub_5733F1(this, arg);
}

_extern void _sub_57329B(UI::InterfaceElement *const);
_inline void UI::InterfaceElement::OnMouseWheelUp() // 0x57329B
{
    mangled_assert("?OnMouseWheelUp@InterfaceElement@UI@@MAEXXZ");
    todo("implement");
    _sub_57329B(this);
}

_extern void _sub_57329A(UI::InterfaceElement *const);
_inline void UI::InterfaceElement::OnMouseWheelDown() // 0x57329A
{
    mangled_assert("?OnMouseWheelDown@InterfaceElement@UI@@MAEXXZ");
    todo("implement");
    _sub_57329A(this);
}

_extern void _sub_572B6F(UI::InterfaceElement *const, bool);
_inline void UI::InterfaceElement::OnFocus(bool) // 0x572B6F
{
    mangled_assert("?OnFocus@InterfaceElement@UI@@MAEX_N@Z");
    todo("implement");
    _sub_572B6F(this, arg);
}

_extern void _sub_572B6C(UI::InterfaceElement *const, bool);
_inline void UI::InterfaceElement::OnEnable(bool) // 0x572B6C
{
    mangled_assert("?OnEnable@InterfaceElement@UI@@MAEX_N@Z");
    todo("implement");
    _sub_572B6C(this, arg);
}

_extern UI::TextListBoxItem *_sub_5B4273(UI::InterfaceElement *const, char const *, bool);
_inline UI::TextListBoxItem *UI::InterfaceElement::FindNamedElementT<UI::TextListBoxItem>(char const *, bool) // 0x5B4273
{
    mangled_assert("??$FindNamedElementT@VTextListBoxItem@UI@@@InterfaceElement@UI@@QAEPAVTextListBoxItem@1@PBD_N@Z");
    todo("implement");
    UI::TextListBoxItem * __result = _sub_5B4273(this, arg, arg);
    return __result;
}

_extern UI::NewTextLabel const *_sub_5B09B6(UI::InterfaceElement *const, char const *, bool);
_inline UI::NewTextLabel const *UI::InterfaceElement::FindNamedElementT<UI::NewTextLabel const >(char const *, bool) // 0x5B09B6
{
    mangled_assert("??$FindNamedElementT@$$CBVNewTextLabel@UI@@@InterfaceElement@UI@@QAEPBVNewTextLabel@1@PBD_N@Z");
    todo("implement");
    UI::NewTextLabel const * __result = _sub_5B09B6(this, arg, arg);
    return __result;
}

_extern UI::Table *_sub_58EAEB(UI::InterfaceElement *const, char const *, bool);
_inline UI::Table *UI::InterfaceElement::FindNamedElementT<UI::Table>(char const *, bool) // 0x58EAEB
{
    mangled_assert("??$FindNamedElementT@VTable@UI@@@InterfaceElement@UI@@QAEPAVTable@1@PBD_N@Z");
    todo("implement");
    UI::Table * __result = _sub_58EAEB(this, arg, arg);
    return __result;
}

_extern UI::NewFrame *_sub_579F3A(UI::InterfaceElement *const, char const *, bool);
_inline UI::NewFrame *UI::InterfaceElement::FindNamedElementT<UI::NewFrame>(char const *, bool) // 0x579F3A
{
    mangled_assert("??$FindNamedElementT@VNewFrame@UI@@@InterfaceElement@UI@@QAEPAVNewFrame@1@PBD_N@Z");
    todo("implement");
    UI::NewFrame * __result = _sub_579F3A(this, arg, arg);
    return __result;
}

_extern UI::ProgressBar *_sub_579F46(UI::InterfaceElement *const, char const *, bool);
_inline UI::ProgressBar *UI::InterfaceElement::FindNamedElementT<UI::ProgressBar>(char const *, bool) // 0x579F46
{
    mangled_assert("??$FindNamedElementT@VProgressBar@UI@@@InterfaceElement@UI@@QAEPAVProgressBar@1@PBD_N@Z");
    todo("implement");
    UI::ProgressBar * __result = _sub_579F46(this, arg, arg);
    return __result;
}

_extern UI::NewDropDownListBox *_sub_577C7E(UI::InterfaceElement *const, char const *, bool);
_inline UI::NewDropDownListBox *UI::InterfaceElement::FindNamedElementT<UI::NewDropDownListBox>(char const *, bool) // 0x577C7E
{
    mangled_assert("??$FindNamedElementT@VNewDropDownListBox@UI@@@InterfaceElement@UI@@QAEPAVNewDropDownListBox@1@PBD_N@Z");
    todo("implement");
    UI::NewDropDownListBox * __result = _sub_577C7E(this, arg, arg);
    return __result;
}

_extern UI::ListBoxItem *_sub_571A08(UI::InterfaceElement *const, char const *, bool);
_inline UI::ListBoxItem *UI::InterfaceElement::FindNamedElementT<UI::ListBoxItem>(char const *, bool) // 0x571A08
{
    mangled_assert("??$FindNamedElementT@VListBoxItem@UI@@@InterfaceElement@UI@@QAEPAVListBoxItem@1@PBD_N@Z");
    todo("implement");
    UI::ListBoxItem * __result = _sub_571A08(this, arg, arg);
    return __result;
}

_extern UI::NewButton *_sub_571A14(UI::InterfaceElement *const, char const *, bool);
_inline UI::NewButton *UI::InterfaceElement::FindNamedElementT<UI::NewButton>(char const *, bool) // 0x571A14
{
    mangled_assert("??$FindNamedElementT@VNewButton@UI@@@InterfaceElement@UI@@QAEPAVNewButton@1@PBD_N@Z");
    todo("implement");
    UI::NewButton * __result = _sub_571A14(this, arg, arg);
    return __result;
}

_extern UI::NewListBox *_sub_571A20(UI::InterfaceElement *const, char const *, bool);
_inline UI::NewListBox *UI::InterfaceElement::FindNamedElementT<UI::NewListBox>(char const *, bool) // 0x571A20
{
    mangled_assert("??$FindNamedElementT@VNewListBox@UI@@@InterfaceElement@UI@@QAEPAVNewListBox@1@PBD_N@Z");
    todo("implement");
    UI::NewListBox * __result = _sub_571A20(this, arg, arg);
    return __result;
}

_extern UI::NewTextLabel *_sub_571A2C(UI::InterfaceElement *const, char const *, bool);
_inline UI::NewTextLabel *UI::InterfaceElement::FindNamedElementT<UI::NewTextLabel>(char const *, bool) // 0x571A2C
{
    mangled_assert("??$FindNamedElementT@VNewTextLabel@UI@@@InterfaceElement@UI@@QAEPAVNewTextLabel@1@PBD_N@Z");
    todo("implement");
    UI::NewTextLabel * __result = _sub_571A2C(this, arg, arg);
    return __result;
}

_extern UI::TextButton *_sub_571A38(UI::InterfaceElement *const, char const *, bool);
_inline UI::TextButton *UI::InterfaceElement::FindNamedElementT<UI::TextButton>(char const *, bool) // 0x571A38
{
    mangled_assert("??$FindNamedElementT@VTextButton@UI@@@InterfaceElement@UI@@QAEPAVTextButton@1@PBD_N@Z");
    todo("implement");
    UI::TextButton * __result = _sub_571A38(this, arg, arg);
    return __result;
}

/* ---------- private code */

#endif // __INTERFACEELEMENT_H__
#endif
