#if 0
#ifndef __TABLECELL_H__
#define __TABLECELL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::TableCell :
    public UI::InterfaceElement
{
public:
    TableCell(UI::TableCell const &);
    TableCell(UI::Table *);
    virtual _inline ~TableCell() override;
    virtual _inline UI::InterfaceElement *clone() override;
    UI::TableCell const &operator=(UI::TableCell const &);
    virtual void Load(LuaConfig &);
    void AddElement(UI::InterfaceElement *);
    void ResizeChildren();
    void SetAutoResizeChildren(bool);
    bool GetAutoResizeChildren() const;
    _inline void SetParentTable(UI::Table *);
    UI::Table *m_parentTable; // 0x400
private:
    bool m_autoResizeChildren; // 0x404
public:
    static UI::TableCell *Create(LuaConfig &lc, UI::Table *parent);
protected:
    virtual void OnResize(__int32, __int32) override;
public:
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(UI::TableCell) == 1032, "Invalid UI::TableCell size");

class UI::TextTableCell :
    public UI::TableCell
{
public:
    TextTableCell(UI::TextTableCell const &);
    TextTableCell(UI::Table *);
    virtual _inline ~TextTableCell() override;
    virtual _inline UI::InterfaceElement *clone() override;
    UI::TextTableCell const &operator=(UI::TextTableCell const &);
    virtual void Load(LuaConfig &) override;
    wchar_t const *GetText() const;
    void SetText(wchar_t const *);
    UI::TextButton *GetTextButton();
private:
    UI::TextButton *m_btnText; // 0x408
public:
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(UI::TextTableCell) == 1040, "Invalid UI::TextTableCell size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline UI::TableCell::~TableCell() // 0x68F282
{
    mangled_assert("??1TableCell@UI@@UAE@XZ");
    todo("implement");
}

_inline UI::InterfaceElement *UI::TableCell::clone() // 0x68F67E
{
    mangled_assert("?clone@TableCell@UI@@UAEPAVInterfaceElement@2@XZ");
    todo("implement");
}

_inline void UI::TableCell::SetParentTable(UI::Table *) // 0x6868DE
{
    mangled_assert("?SetParentTable@TableCell@UI@@QAEXPAVTable@2@@Z");
    todo("implement");
}

_inline UI::TextTableCell::~TextTableCell() // 0x68F28D
{
    mangled_assert("??1TextTableCell@UI@@UAE@XZ");
    todo("implement");
}

_inline UI::InterfaceElement *UI::TextTableCell::clone() // 0x68F6B8
{
    mangled_assert("?clone@TextTableCell@UI@@UAEPAVInterfaceElement@2@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __TABLECELL_H__
#endif
