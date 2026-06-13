#if 0
#ifndef __BUILDQUEUEMENU_H__
#define __BUILDQUEUEMENU_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::BuildQueueMenu :
    public UI::NewUIScreen,
    public SquadronList::Observer
{
public:
    BuildQueueMenu(UI::BuildQueueMenu const &); /* compiler_generated() */
    BuildQueueMenu(char const *);
    virtual ~BuildQueueMenu() override;
    virtual void Update(unsigned __int32) override;
    virtual void Notify_Insertion(Squadron *) override;
    virtual void Notify_Removal(Squadron *) override;
protected:
    virtual void OnLoad(LuaConfig &) override;
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
private:
    static void OnSelectBuild(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void OnPauseBuild(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void OnCancelBuild(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void OnPauseSubsystem(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void OnCancelSubsystem(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void OnSelectResearch(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void OnPauseResearch(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void OnCancelResearch(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    UI::InterfaceElement *m_buildQueueFrame; // 0x1A0
    UI::InterfaceElement *m_buildQueueItem; // 0x1A4
    UI::InterfaceElement *m_researchQueueItem; // 0x1A8
    UI::InterfaceElement *m_subsystemQueueItem; // 0x1AC
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_fstringBuild; // 0x1B0
    __int32 m_regionWidth; // 0x1C8
    bool m_rebuild; // 0x1CC
    void AddSelection(Selection const &);
public:
    UI::BuildQueueMenu &operator=(UI::BuildQueueMenu const &); /* compiler_generated() */
};
static_assert(sizeof(UI::BuildQueueMenu) == 464, "Invalid UI::BuildQueueMenu size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __BUILDQUEUEMENU_H__
#endif
