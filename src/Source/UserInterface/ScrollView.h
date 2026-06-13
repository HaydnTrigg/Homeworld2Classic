#if 0
#ifndef __SCROLLVIEW_H__
#define __SCROLLVIEW_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::ScrollView :
    public UI::InterfaceElement
{
public:
    ScrollView(UI::ScrollView const &);
    ScrollView(LuaConfig &);
    ScrollView(UI::InterfaceElement *, char const *);
    virtual ~ScrollView() override;
    virtual _inline UI::InterfaceElement *clone() override;
    UI::ScrollView const &operator=(UI::ScrollView const &);
    virtual void Draw2(Vector_2i const &, Rect_i const &) override;
    void SetContentsRect(Rect_i const &);
    Rect_i GetContentsRect() const;
    Rect_i GetViewRect() const;
    void EnableHorizontalScrollbar(bool);
    void EnableVerticalScrollbar(bool);
    virtual void AddChildR(UI::InterfaceElement *) override;
    virtual UI::InterfaceElement *RemoveChildR(UI::InterfaceElement *) override;
    void SetStepSize(__int32);
    void SetPageSize(__int32);
    void ClearContents();
    void SetContentsAutosize(bool);
protected:
    void Load(LuaConfig &);
    UI::NewScrollBar *m_sbarVert; // 0x400
    UI::NewScrollBar *m_sbarHorz; // 0x404
    UI::NewFrame *m_contents; // 0x408
private:
    bool m_enableScrollHorz; // 0x40C
    bool m_enableScrollVert; // 0x40D
    Rect_i m_contentsRect; // 0x410
    Vector_2i m_scrollPosition; // 0x420
protected:
    virtual void OnResize(__int32, __int32) override;
private:
    void UpdateContents();
    void UpdateScrollBars();
    void Init();
    static void OnScrollHorz(UI::InterfaceElement *e, __int32 pos);
    static void OnScrollVert(UI::InterfaceElement *e, __int32 pos);
public:
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(UI::ScrollView) == 1064, "Invalid UI::ScrollView size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern UI::InterfaceElement *_sub_68C578(UI::ScrollView *const);
_inline UI::InterfaceElement *UI::ScrollView::clone() // 0x68C578
{
    mangled_assert("?clone@ScrollView@UI@@UAEPAVInterfaceElement@2@XZ");
    todo("implement");
    UI::InterfaceElement * __result = _sub_68C578(this);
    return __result;
}

/* ---------- private code */

#endif // __SCROLLVIEW_H__
#endif
