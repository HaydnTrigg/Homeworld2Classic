#if 0
#ifndef __CHATUI_H__
#define __CHATUI_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::ChatUI
{
public:
    ChatUI();
    ~ChatUI();
    enum ChatList
    {
        LobbyMessages = 0,
        ActiveMessages,
    };
    void SetFrameRoot(UI::NewFrame *);
    void SetListPlayers(UI::NewListBox *);
    void SetListPlayersTemplate(UI::ListBoxItem *);
    void SetListMessages(UI::NewListBox *, bool);
    void SetListMessagesTemplate(UI::ListBoxItem *);
    void SetButtonSend(UI::NewButton *);
    void SetButtonWhisper(UI::NewButton *);
    void SetButtonWhisperToList(UI::NewButton *);
    void SetButtonBroadcast(UI::NewButton *);
    void SetButtonSuppress(UI::NewButton *);
    void SetInputChat(UI::DestinationTextInput *, bool);
    void UpdateChatDestinations();
    void SaveChatMessages(std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > &, UI::ChatUI::ChatList) const;
    void ClearChatInput();
    void SetChatFormats(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32);
    void Activate(bool);
    void LobbyPlayerConnect(wchar_t const *);
    void LobbyPlayerDisconnect(wchar_t const *);
    void LobbyPlayerConnectMessage(wchar_t const *, bool);
    void LobbyPlayerChanged(wchar_t const *);
    void SendChatLobby();
    void SendChatNoLobby(StagingArea *, unsigned __int32);
    void ReceiveMessage(LobbyChatType, wchar_t const *, wchar_t const *, bool);
    void SetVisible(bool);
    UI::NewListBox *ToggleChatList(bool);
    void AddMessage(wchar_t const *, bool);
    static void IgnoreToAllCallback(UI::InterfaceElement *sender);
    static void WhisperToIgnoreCallback(UI::InterfaceElement *sender);
    static void AllToWhisperCallback(UI::InterfaceElement *sender);
private:
    void DoRefreshPlayers();
    unsigned __int32 FindPlayerIndex(wchar_t const *);
    void BuildChatText(LobbyChatType, wchar_t const *, wchar_t const *, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &);
    void BuildWhisperEcho(wchar_t const *, wchar_t const *, wchar_t const *, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &);
    void BuildPlayerJoinedLeftText(wchar_t const *, bool, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &);
    static void OnWhisperClicked(UI::InterfaceElement *);
    static void OnBroadcastClicked(UI::InterfaceElement *);
    static wchar_t const *GetChatName(UI::ListBoxItem *item);
    class Data;
    UI::ChatUI::Data *m_pimpl; // 0x0
};
static_assert(sizeof(UI::ChatUI) == 4, "Invalid UI::ChatUI size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CHATUI_H__
#endif
