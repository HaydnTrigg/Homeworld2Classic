#if 0
#ifndef __STEAMPEER_H__
#define __STEAMPEER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ServerMatchmakingManager :
    private ISteamMatchmakingServerListResponse
{
public:
    _inline ServerMatchmakingManager(ServerMatchmakingManager const &); /* compiler_generated() */
    ServerMatchmakingManager(SteamPeer *);
    ~ServerMatchmakingManager();
    void RefreshInternetServers();
    virtual void ServerResponded(void *, __int32) override;
    virtual void ServerFailedToRespond(void *, __int32) override;
    virtual void RefreshComplete(void *, EMatchMakingServerResponse) override;
    SteamPeer *m_steampeer; // 0x4
    void *m_hServerListRequest; // 0x8
    _inline ServerMatchmakingManager &operator=(ServerMatchmakingManager const &); /* compiler_generated() */
};
static_assert(sizeof(ServerMatchmakingManager) == 12, "Invalid ServerMatchmakingManager size");

class SteamPeer
{
public:
    class Dispatch;
    typedef std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > PlayerCont;
    _inline SteamPeer(SteamPeer const &); /* compiler_generated() */
    SteamPeer();
    ~SteamPeer();
    bool Initialize(char const *, char const *, SteamEvent *);
    void Release();
    char const *GetWantedNickname() const;
    char const *GetActualNickname() const;
    void SessionGetList();
    void SessionGetListStop();
    void SessionHost(SteamLobbySessionDesc const &);
    void SessionJoin(char const *);
    void SessionCancel();
    void SessionStart();
    void SessionChangeSettings(SteamLobbySessionDesc const &);
    bool SessionGetDesc(unsigned long long, SteamLobbySessionDesc &) const;
    bool SessionUpdate(unsigned long long) const;
    SteamLobbySessionDesc const &GetLocalSession() const;
    void PlayerUpdateList();
    void PlayerGetList(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
    char const *PlayerGetName() const;
    bool PlayerGetDesc(char const *, SteamLobbyPlayerDesc &) const;
    void PlayerSetPlaying(bool);
    void ChatConnect(char const *);
    void ChatDisconnect();
    void SetConnectionFailureText(char const *);
    void OnLobbyCreated(LobbyCreated_t *, bool);
    CCallResult<SteamPeer,LobbyCreated_t> m_SteamCallResultLobbyCreated; // 0x0
    CCallResult<SteamPeer,LobbyEnter_t> m_SteamCallResultLobbyEntered; // 0x20
    CCallback<SteamPeer,LobbyChatMsg_t,0> m_CallbackChatMsg; // 0x40
    CCallback<SteamPeer,LobbyDataUpdate_t,0> m_CallbackLobbyDataUpdate; // 0x54
private:
    SteamPeer::Dispatch *m_dispatch; // 0x68
    SteamPeer::Data *m_pimpl; // 0x6C
    CSteamID m_steamIDLobby; // 0x70
    ServerMatchmakingManager *pSteamInternetMatchmaking; // 0x78
public:
    void OnLobbyEntered(LobbyEnter_t *, bool);
    void OnLobbyChatMsg(LobbyChatMsg_t *);
    void OnLobbyDataUpdate(LobbyDataUpdate_t *);
    bool CDAuthenticate(char const *);
    unsigned long long GetLobbyID();
    class Data;
    _inline SteamPeer &operator=(SteamPeer const &); /* compiler_generated() */
};
static_assert(sizeof(SteamPeer) == 128, "Invalid SteamPeer size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __STEAMPEER_H__
#endif
