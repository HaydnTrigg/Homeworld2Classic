#if 0
#ifndef __QUEUELISTBOXITEM_H__
#define __QUEUELISTBOXITEM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum UI::QueueListBoxItemType
{
    eShip = 0,
    eResearch,
    eSubsystem,
};

/* ---------- definitions */

class UI::QueueListBoxItem :
    public UI::ListBoxItem
{
public:
    QueueListBoxItem(UI::QueueListBoxItem const &); /* compiler_generated() */
    QueueListBoxItem(UI::ListBoxItem *, UI::QueueListBoxItemType);
    _inline void SetType(UI::QueueListBoxItemType);
    _inline void SetBuildShip(SobID const &);
    Ship *GetBuildShipPtr();
    void AddBuildJob(unsigned __int32);
    void SetShipNameText(wchar_t const *);
    void SetIcon(boost::shared_ptr<UI::Graphic>);
    void EnableMoveToTop(bool);
    virtual void Draw2(Vector_2i const &, Rect_i const &) override;
    void RemoveLastBuildJob();
    void MoveToTopOfQueue();
    static std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > ms_fstringText;
private:
    void Init();
    UI::QueueListBoxItemType m_type; // 0x570
    SobID m_buildShipSobID; // 0x574
    std::vector<unsigned int,std::allocator<unsigned int> > m_jobIDVector; // 0x580
    UI::ProgressBar *m_progress; // 0x58C
    UI::NewTextLabel *m_lblShipName; // 0x590
    UI::NewTextLabel *m_lblResearchName; // 0x594
    UI::InterfaceElement *m_frmResearchIcon; // 0x598
    UI::NewButton *m_btnMoveToTop; // 0x59C
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_shipName; // 0x5A0
    __int32 m_borderWidth; // 0x5B8
    unsigned __int32 m_maxShips; // 0x5BC
    static void OnCancelButtonClicked(UI::InterfaceElement *cancelButton, __int32 x, __int32 y, unsigned __int32 button);
    static void OnToTopButtonClicked(UI::InterfaceElement *toTopButton, __int32 x, __int32 y, unsigned __int32 button);
public:
    virtual _inline ~QueueListBoxItem() override; /* compiler_generated() */
    UI::QueueListBoxItem &operator=(UI::QueueListBoxItem const &); /* compiler_generated() */
};
static_assert(sizeof(UI::QueueListBoxItem) == 1472, "Invalid UI::QueueListBoxItem size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void UI::QueueListBoxItem::SetType(UI::QueueListBoxItemType) // 0x5820C2
{
    mangled_assert("?SetType@QueueListBoxItem@UI@@QAEXW4QueueListBoxItemType@2@@Z");
    todo("implement");
}

_inline void UI::QueueListBoxItem::SetBuildShip(SobID const &) // 0x581F55
{
    mangled_assert("?SetBuildShip@QueueListBoxItem@UI@@QAEXABVSobID@@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __QUEUELISTBOXITEM_H__
#endif
