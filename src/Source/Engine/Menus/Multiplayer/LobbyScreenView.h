#if 0
#ifndef __LOBBYSCREENVIEW_H__
#define __LOBBYSCREENVIEW_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::LobbyScreenView
{
public:
    class GameDisableTest
    {
    public:
        virtual bool Test(LobbySessionDesc const &) = 0;
        GameDisableTest(UI::LobbyScreenView::GameDisableTest const &); /* compiler_generated() */
        _inline GameDisableTest(); /* compiler_generated() */
        UI::LobbyScreenView::GameDisableTest &operator=(UI::LobbyScreenView::GameDisableTest const &); /* compiler_generated() */
    };
    static_assert(sizeof(GameDisableTest) == 4, "Invalid GameDisableTest size");
    LobbyScreenView(UI::LobbyScreenView const &); /* compiler_generated() */
    LobbyScreenView(UI::LobbyScreenDoc *);
    ~LobbyScreenView();
    bool IsEmpty() const;
    UI::GameFilter const &GetFilter() const;
    unsigned long long GetSelectedID() const;
    void SetFilter(UI::GameFilter const &);
    void SetGamesTable(UI::Table *);
    void SetGameDisableTest(UI::LobbyScreenView::GameDisableTest *);
    void SetColours(vector4 const &, vector4 const &);
    void OnDocUpdated();
private:
    void OnFilterUpdate();
    unsigned __int32 AddGameRow(unsigned long long, wchar_t const *);
    void UpdateGameRow(unsigned __int32, LobbySessionDesc const &);
    void UpdateGameRowText(unsigned __int32, wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *);
    void SetRowCellEnabled(UI::Table *, unsigned __int32, unsigned __int32, bool);
    static void OnSortGames(UI::InterfaceElement *sender);
    UI::LobbyScreenDoc *m_doc; // 0x0
    UI::Table *m_tableGames; // 0x4
    UI::GameFilter m_gameFilter; // 0x8
    UI::LobbyScreenView::GameDisableTest *m_gameDisableTest; // 0x58
    vector4 m_enabledColour; // 0x5C
    vector4 m_disabledColour; // 0x6C
public:
    UI::LobbyScreenView &operator=(UI::LobbyScreenView const &); /* compiler_generated() */
};
static_assert(sizeof(UI::LobbyScreenView) == 124, "Invalid UI::LobbyScreenView size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LOBBYSCREENVIEW_H__
#endif
