#if 0
#ifndef __CONTENTDOWNLOAD_H__
#define __CONTENTDOWNLOAD_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ContentDownloadFSM
{
public:
    ContentDownloadFSM(ContentDownloadFSM const &); /* compiler_generated() */
    ContentDownloadFSM(Net::Session *);
    ~ContentDownloadFSM();
    bool Run();
private:
    bool AreAllPlayersReady() const;
    bool AreWeReady() const;
    void CancelDownloads(unsigned __int32);
    void CancelUploads(unsigned __int32);
    bool EnterLoop();
    void IssueFileRequests();
    void ReceiveMessages();
    void RequestBadge(__int32);
    void RequestLevel();
    void SaveBadge(std::auto_ptr<FileDownload>);
    void SaveLevel(std::auto_ptr<FileDownload>);
    void SendProgress();
    void UpdateUI() const;
    void OnMessage(Net::Message const &);
    void OnDestroyPlayer(unsigned __int32);
    void OnDownloadStatus(unsigned __int32, MessageDownloadStatus const *);
    void OnFileRequest(unsigned __int32, MessageFileRequest const *);
    void OnFileHeader(unsigned __int32, MessageFileHeader const *);
    void OnFileChunk(unsigned __int32, MessageFileChunk const *);
    void OnPlayerReady(unsigned __int32);
    enum PlayerState
    {
        NOTREADY = 0,
        READY,
    };
    struct PlayerInfo
    {
        ContentDownloadFSM::PlayerState m_state; // 0x0
        __int32 m_nbFiles; // 0x4
        unsigned __int32 m_progress; // 0x8
        unsigned __int32 m_maxProgress; // 0xC
        _inline PlayerInfo();
    };
    static_assert(sizeof(PlayerInfo) == 16, "Invalid PlayerInfo size");
    typedef std::map<unsigned int,ContentDownloadFSM::PlayerInfo,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,ContentDownloadFSM::PlayerInfo> > > PlayerMap;
    typedef std::list<FileDownload *,std::allocator<FileDownload *> > DownloadList;
    typedef std::list<FileUpload *,std::allocator<FileUpload *> > UploadList;
    Net::Session *m_session; // 0x0
    std::map<unsigned int,ContentDownloadFSM::PlayerInfo,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,ContentDownloadFSM::PlayerInfo> > > m_players; // 0x4
    bool m_bReadySent; // 0xC
    std::list<FileDownload *,std::allocator<FileDownload *> > m_downloads; // 0x10
    std::list<FileUpload *,std::allocator<FileUpload *> > m_uploads; // 0x18
    unsigned __int32 m_lastStatus; // 0x20
    bool m_bProgressDirty; // 0x24
public:
    ContentDownloadFSM &operator=(ContentDownloadFSM const &); /* compiler_generated() */
};
static_assert(sizeof(ContentDownloadFSM) == 40, "Invalid ContentDownloadFSM size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline ContentDownloadFSM::PlayerInfo::PlayerInfo() // 0x5BA711
{
    mangled_assert("??0PlayerInfo@ContentDownloadFSM@@QAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __CONTENTDOWNLOAD_H__
#endif
