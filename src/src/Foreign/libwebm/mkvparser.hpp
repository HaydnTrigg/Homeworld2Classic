#ifndef __MKVPARSER_H__
#define __MKVPARSER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class mkvparser::IMkvReader
{
public:
    virtual __int32 Read(long long, long, unsigned char *) = 0;
    virtual __int32 Length(long long *, long long *) = 0;
protected:
    virtual ~IMkvReader();
public:
    IMkvReader(mkvparser::IMkvReader const &); /* compiler_generated() */
    _inline IMkvReader(); /* compiler_generated() */
    mkvparser::IMkvReader &operator=(mkvparser::IMkvReader const &); /* compiler_generated() */
};
static_assert(sizeof(mkvparser::IMkvReader) == 4, "Invalid mkvparser::IMkvReader size");

struct mkvparser::EBMLHeader
{
    EBMLHeader();
    ~EBMLHeader();
    long long m_version; // 0x0
    long long m_readVersion; // 0x8
    long long m_maxIdLength; // 0x10
    long long m_maxSizeLength; // 0x18
    char *m_docType; // 0x20
    long long m_docTypeVersion; // 0x28
    long long m_docTypeReadVersion; // 0x30
    long long Parse(mkvparser::IMkvReader *, long long &);
    void Init();
};
static_assert(sizeof(mkvparser::EBMLHeader) == 56, "Invalid mkvparser::EBMLHeader size");

class mkvparser::Block
{
public:
    Block(long long, long long);
private:
    Block(mkvparser::Block const &);
    mkvparser::Block &operator=(mkvparser::Block const &);
public:
    long long const m_start; // 0x0
    long long const m_size; // 0x8
private:
    long long m_track; // 0x10
    short m_timecode; // 0x18
    unsigned char m_flags; // 0x1A
    mkvparser::Block::Frame *m_frames; // 0x1C
    __int32 m_frame_count; // 0x20
public:
    ~Block();
    long Parse(mkvparser::Cluster const *);
    long long GetTrackNumber() const;
    long long GetTimeCode(mkvparser::Cluster const *) const;
    long long GetTime(mkvparser::Cluster const *) const;
    bool IsKey() const;
    void SetKey(bool);
    bool IsInvisible() const;
    enum Lacing
    {
        kLacingNone = 0,
        kLacingXiph,
        kLacingFixed,
        kLacingEbml,
    };
    mkvparser::Block::Lacing GetLacing() const;
    __int32 GetFrameCount() const;
    struct Frame
    {
        long long pos; // 0x0
        long len; // 0x8
        long Read(mkvparser::IMkvReader *, unsigned char *) const;
    };
    static_assert(sizeof(Frame) == 16, "Invalid Frame size");
    mkvparser::Block::Frame const &GetFrame(__int32) const;
};
static_assert(sizeof(mkvparser::Block) == 40, "Invalid mkvparser::Block size");

class mkvparser::BlockEntry
{
protected:
    BlockEntry(mkvparser::Cluster *, long);
private:
    BlockEntry(mkvparser::BlockEntry const &);
    mkvparser::BlockEntry &operator=(mkvparser::BlockEntry const &);
public:
    virtual ~BlockEntry();
    bool EOS() const;
    mkvparser::Cluster const *GetCluster() const;
    long GetIndex() const;
    virtual mkvparser::Block const *GetBlock() const = 0;
    enum Kind
    {
        kBlockEOS = 0,
        kBlockSimple,
        kBlockGroup,
    };
    virtual mkvparser::BlockEntry::Kind GetKind() const = 0;
protected:
    mkvparser::Cluster *const m_pCluster; // 0x4
    long const m_index; // 0x8
};
static_assert(sizeof(mkvparser::BlockEntry) == 12, "Invalid mkvparser::BlockEntry size");

class mkvparser::SimpleBlock :
    public mkvparser::BlockEntry
{
public:
    SimpleBlock(mkvparser::Cluster *, long, long long, long long);
private:
    SimpleBlock(mkvparser::SimpleBlock const &);
    mkvparser::SimpleBlock &operator=(mkvparser::SimpleBlock const &);
public:
    long Parse();
    virtual mkvparser::BlockEntry::Kind GetKind() const override;
    virtual mkvparser::Block const *GetBlock() const override;
protected:
    mkvparser::Block m_block; // 0x10
public:
    virtual _inline ~SimpleBlock() override; /* compiler_generated() */
};
static_assert(sizeof(mkvparser::SimpleBlock) == 56, "Invalid mkvparser::SimpleBlock size");

class mkvparser::BlockGroup :
    public mkvparser::BlockEntry
{
public:
    BlockGroup(mkvparser::Cluster *, long, long long, long long, long long, long long, long long);
private:
    BlockGroup(mkvparser::BlockGroup const &);
    mkvparser::BlockGroup &operator=(mkvparser::BlockGroup const &);
public:
    long Parse();
    virtual mkvparser::BlockEntry::Kind GetKind() const override;
    virtual mkvparser::Block const *GetBlock() const override;
    long long GetPrevTimeCode() const;
    long long GetNextTimeCode() const;
    long long GetDurationTimeCode() const;
private:
    mkvparser::Block m_block; // 0x10
    long long const m_prev; // 0x38
    long long const m_next; // 0x40
    long long const m_duration; // 0x48
public:
    virtual _inline ~BlockGroup() override; /* compiler_generated() */
};
static_assert(sizeof(mkvparser::BlockGroup) == 80, "Invalid mkvparser::BlockGroup size");

class mkvparser::ContentEncoding
{
public:
    enum
    {
        kCTR = 1, // 0x0001
    };
private:
    ContentEncoding(mkvparser::ContentEncoding const &);
public:
    ContentEncoding();
    ~ContentEncoding();
    struct ContentCompression
    {
        ContentCompression();
        ~ContentCompression();
        unsigned long long algo; // 0x0
        unsigned char *settings; // 0x8
        long long settings_len; // 0x10
    };
    static_assert(sizeof(ContentCompression) == 24, "Invalid ContentCompression size");
    struct ContentEncAESSettings
    {
        _inline ContentEncAESSettings();
        _inline ~ContentEncAESSettings();
        unsigned long long cipher_mode; // 0x0
    };
    static_assert(sizeof(ContentEncAESSettings) == 8, "Invalid ContentEncAESSettings size");
    struct ContentEncryption
    {
        ContentEncryption();
        ~ContentEncryption();
        unsigned long long algo; // 0x0
        unsigned char *key_id; // 0x8
        long long key_id_len; // 0x10
        unsigned char *signature; // 0x18
        long long signature_len; // 0x20
        unsigned char *sig_key_id; // 0x28
        long long sig_key_id_len; // 0x30
        unsigned long long sig_algo; // 0x38
        unsigned long long sig_hash_algo; // 0x40
        mkvparser::ContentEncoding::ContentEncAESSettings aes_settings; // 0x48
    };
    static_assert(sizeof(ContentEncryption) == 80, "Invalid ContentEncryption size");
    mkvparser::ContentEncoding::ContentCompression const *GetCompressionByIndex(unsigned long) const;
    unsigned long GetCompressionCount() const;
    long ParseCompressionEntry(long long, long long, mkvparser::IMkvReader *, mkvparser::ContentEncoding::ContentCompression *);
    mkvparser::ContentEncoding::ContentEncryption const *GetEncryptionByIndex(unsigned long) const;
    unsigned long GetEncryptionCount() const;
    long ParseContentEncAESSettingsEntry(long long, long long, mkvparser::IMkvReader *, mkvparser::ContentEncoding::ContentEncAESSettings *);
    long ParseContentEncodingEntry(long long, long long, mkvparser::IMkvReader *);
    long ParseEncryptionEntry(long long, long long, mkvparser::IMkvReader *, mkvparser::ContentEncoding::ContentEncryption *);
    unsigned long long encoding_order() const;
    unsigned long long encoding_scope() const;
    unsigned long long encoding_type() const;
private:
    mkvparser::ContentEncoding::ContentCompression **compression_entries_; // 0x0
    mkvparser::ContentEncoding::ContentCompression **compression_entries_end_; // 0x4
    mkvparser::ContentEncoding::ContentEncryption **encryption_entries_; // 0x8
    mkvparser::ContentEncoding::ContentEncryption **encryption_entries_end_; // 0xC
    unsigned long long encoding_order_; // 0x10
    unsigned long long encoding_scope_; // 0x18
    unsigned long long encoding_type_; // 0x20
    mkvparser::ContentEncoding &operator=(mkvparser::ContentEncoding const &);
};
static_assert(sizeof(mkvparser::ContentEncoding) == 40, "Invalid mkvparser::ContentEncoding size");

class mkvparser::Track
{
protected:
    Track(mkvparser::Segment *, long long, long long);
private:
    Track(mkvparser::Track const &);
    mkvparser::Track &operator=(mkvparser::Track const &);
    class Info
    {
    private:
        Info(mkvparser::Track::Info const &);
    public:
        Info();
        ~Info();
        __int32 Copy(mkvparser::Track::Info &) const;
        void Clear();
    private:
        mkvparser::Track::Info &operator=(mkvparser::Track::Info const &);
    public:
        long type; // 0x0
        long number; // 0x4
        unsigned long long uid; // 0x8
        unsigned long long defaultDuration; // 0x10
        char *nameAsUTF8; // 0x18
        char *language; // 0x1C
        char *codecId; // 0x20
        char *codecNameAsUTF8; // 0x24
        unsigned char *codecPrivate; // 0x28
        unsigned __int32 codecPrivateSize; // 0x2C
        bool lacing; // 0x30
        mkvparser::Track::Settings settings; // 0x38
    private:
        __int32 CopyStr(char **, mkvparser::Track::Info &) const;
    };
    static_assert(sizeof(Info) == 72, "Invalid Info size");
public:
    static long Create(mkvparser::Segment *pSegment, mkvparser::Track::Info const &info, long long element_start, long long element_size, mkvparser::Track *&pResult);
    enum Type
    {
        kVideo = 1, // 0x0001
        kAudio = 2, // 0x0002
        kSubtitle = 17, // 0x0011
        kMetadata = 33, // 0x0021 '!'
    };
    mkvparser::Segment *const m_pSegment; // 0x8
    long long const m_element_start; // 0x10
    long long const m_element_size; // 0x18
protected:
    mkvparser::Track::Info m_info; // 0x20
    mkvparser::Track::EOSBlock m_eos; // 0x68
private:
    mkvparser::ContentEncoding **content_encoding_entries_; // 0x74
    mkvparser::ContentEncoding **content_encoding_entries_end_; // 0x78
public:
    virtual ~Track();
    long GetType() const;
    long GetNumber() const;
    unsigned long long GetUid() const;
    char const *GetNameAsUTF8() const;
    char const *GetLanguage() const;
    char const *GetCodecNameAsUTF8() const;
    char const *GetCodecId() const;
    unsigned char const *GetCodecPrivate(unsigned __int32 &) const;
    bool GetLacing() const;
    unsigned long long GetDefaultDuration() const;
    mkvparser::BlockEntry const *GetEOS() const;
    struct Settings
    {
        long long start; // 0x0
        long long size; // 0x8
    };
    static_assert(sizeof(Settings) == 16, "Invalid Settings size");
    long GetFirst(mkvparser::BlockEntry const *&) const;
    long GetNext(mkvparser::BlockEntry const *, mkvparser::BlockEntry const *&) const;
    virtual bool VetEntry(mkvparser::BlockEntry const *) const;
    virtual long Seek(long long, mkvparser::BlockEntry const *&) const;
    mkvparser::ContentEncoding const *GetContentEncodingByIndex(unsigned long) const;
    unsigned long GetContentEncodingCount() const;
    long ParseContentEncodingsEntry(long long, long long);
    class EOSBlock :
        public mkvparser::BlockEntry
    {
    public:
        EOSBlock(mkvparser::Track::EOSBlock const &); /* compiler_generated() */
        EOSBlock();
        virtual mkvparser::BlockEntry::Kind GetKind() const override;
        virtual mkvparser::Block const *GetBlock() const override;
        virtual _inline ~EOSBlock() override; /* compiler_generated() */
        mkvparser::Track::EOSBlock &operator=(mkvparser::Track::EOSBlock const &); /* compiler_generated() */
    };
    static_assert(sizeof(EOSBlock) == 12, "Invalid EOSBlock size");
};
static_assert(sizeof(mkvparser::Track) == 128, "Invalid mkvparser::Track size");

class mkvparser::VideoTrack :
    public mkvparser::Track
{
private:
    VideoTrack(mkvparser::Segment *, long long, long long);
    VideoTrack(mkvparser::VideoTrack const &);
    mkvparser::VideoTrack &operator=(mkvparser::VideoTrack const &);
public:
    static long Parse(mkvparser::Segment *pSegment, mkvparser::Track::Info const &info, long long element_start, long long element_size, mkvparser::VideoTrack *&pResult);
    long long GetWidth() const;
    long long GetHeight() const;
    double GetFrameRate() const;
    virtual bool VetEntry(mkvparser::BlockEntry const *) const override;
    virtual long Seek(long long, mkvparser::BlockEntry const *&) const override;
private:
    long long m_width; // 0x80
    long long m_height; // 0x88
    double m_rate; // 0x90
public:
    virtual _inline ~VideoTrack() override; /* compiler_generated() */
};
static_assert(sizeof(mkvparser::VideoTrack) == 152, "Invalid mkvparser::VideoTrack size");

class mkvparser::AudioTrack :
    public mkvparser::Track
{
private:
    AudioTrack(mkvparser::Segment *, long long, long long);
    AudioTrack(mkvparser::AudioTrack const &);
    mkvparser::AudioTrack &operator=(mkvparser::AudioTrack const &);
public:
    static long Parse(mkvparser::Segment *pSegment, mkvparser::Track::Info const &info, long long element_start, long long element_size, mkvparser::AudioTrack *&pResult);
    double GetSamplingRate() const;
    long long GetChannels() const;
    long long GetBitDepth() const;
private:
    double m_rate; // 0x80
    long long m_channels; // 0x88
    long long m_bitDepth; // 0x90
public:
    virtual _inline ~AudioTrack() override; /* compiler_generated() */
};
static_assert(sizeof(mkvparser::AudioTrack) == 152, "Invalid mkvparser::AudioTrack size");

class mkvparser::Tracks
{
public:
    Tracks(mkvparser::Segment *, long long, long long, long long, long long);
private:
    Tracks(mkvparser::Tracks const &);
    mkvparser::Tracks &operator=(mkvparser::Tracks const &);
public:
    mkvparser::Segment *const m_pSegment; // 0x0
    long long const m_start; // 0x8
    long long const m_size; // 0x10
    long long const m_element_start; // 0x18
    long long const m_element_size; // 0x20
private:
    mkvparser::Track **m_trackEntries; // 0x28
    mkvparser::Track **m_trackEntriesEnd; // 0x2C
public:
    ~Tracks();
    long Parse();
    unsigned long GetTracksCount() const;
    mkvparser::Track const *GetTrackByNumber(long) const;
    mkvparser::Track const *GetTrackByIndex(unsigned long) const;
private:
    long ParseTrackEntry(long long, long long, long long, long long, mkvparser::Track *&) const;
};
static_assert(sizeof(mkvparser::Tracks) == 48, "Invalid mkvparser::Tracks size");

class mkvparser::Chapters
{
public:
    Chapters(mkvparser::Segment *, long long, long long, long long, long long);
private:
    Chapters(mkvparser::Chapters const &);
    mkvparser::Chapters &operator=(mkvparser::Chapters const &);
public:
    mkvparser::Segment *const m_pSegment; // 0x0
    long long const m_start; // 0x8
    long long const m_size; // 0x10
    long long const m_element_start; // 0x18
    long long const m_element_size; // 0x20
private:
    mkvparser::Chapters::Edition *m_editions; // 0x28
    __int32 m_editions_size; // 0x2C
    __int32 m_editions_count; // 0x30
public:
    ~Chapters();
    long Parse();
    class Atom
    {
    private:
        Atom(mkvparser::Chapters::Atom const &);
        Atom();
        ~Atom();
        mkvparser::Chapters::Atom &operator=(mkvparser::Chapters::Atom const &);
    public:
        unsigned long long GetUID() const;
        char const *GetStringUID() const;
        long long GetStartTimecode() const;
        long long GetStopTimecode() const;
        long long GetStartTime(mkvparser::Chapters const *) const;
        long long GetStopTime(mkvparser::Chapters const *) const;
        __int32 GetDisplayCount() const;
        mkvparser::Chapters::Display const *GetDisplay(__int32) const;
    private:
        void Init();
        void ShallowCopy(mkvparser::Chapters::Atom &) const;
        void Clear();
        long Parse(mkvparser::IMkvReader *, long long, long long);
        static long long GetTime(mkvparser::Chapters const *pChapters, long long timecode);
        long ParseDisplay(mkvparser::IMkvReader *, long long, long long);
        bool ExpandDisplaysArray();
        char *m_string_uid; // 0x0
        unsigned long long m_uid; // 0x8
        long long m_start_timecode; // 0x10
        long long m_stop_timecode; // 0x18
        mkvparser::Chapters::Display *m_displays; // 0x20
        __int32 m_displays_size; // 0x24
        __int32 m_displays_count; // 0x28
    };
    static_assert(sizeof(Atom) == 48, "Invalid Atom size");
    class Edition
    {
    private:
        Edition(mkvparser::Chapters::Edition const &);
        Edition();
        ~Edition();
        mkvparser::Chapters::Edition &operator=(mkvparser::Chapters::Edition const &);
    public:
        __int32 GetAtomCount() const;
        mkvparser::Chapters::Atom const *GetAtom(__int32) const;
    private:
        void Init();
        void ShallowCopy(mkvparser::Chapters::Edition &) const;
        void Clear();
        long Parse(mkvparser::IMkvReader *, long long, long long);
        long ParseAtom(mkvparser::IMkvReader *, long long, long long);
        bool ExpandAtomsArray();
        mkvparser::Chapters::Atom *m_atoms; // 0x0
        __int32 m_atoms_size; // 0x4
        __int32 m_atoms_count; // 0x8
    };
    static_assert(sizeof(Edition) == 12, "Invalid Edition size");
    class Display
    {
    private:
        Display(mkvparser::Chapters::Display const &);
        Display();
        ~Display();
        mkvparser::Chapters::Display &operator=(mkvparser::Chapters::Display const &);
    public:
        char const *GetString() const;
        char const *GetLanguage() const;
        char const *GetCountry() const;
    private:
        void Init();
        void ShallowCopy(mkvparser::Chapters::Display &) const;
        void Clear();
        long Parse(mkvparser::IMkvReader *, long long, long long);
        char *m_string; // 0x0
        char *m_language; // 0x4
        char *m_country; // 0x8
    };
    static_assert(sizeof(Display) == 12, "Invalid Display size");
    __int32 GetEditionCount() const;
    mkvparser::Chapters::Edition const *GetEdition(__int32) const;
private:
    long ParseEdition(long long, long long);
    bool ExpandEditionsArray();
};
static_assert(sizeof(mkvparser::Chapters) == 56, "Invalid mkvparser::Chapters size");

class mkvparser::SegmentInfo
{
public:
    SegmentInfo(mkvparser::Segment *, long long, long long, long long, long long);
private:
    SegmentInfo(mkvparser::SegmentInfo const &);
    mkvparser::SegmentInfo &operator=(mkvparser::SegmentInfo const &);
public:
    mkvparser::Segment *const m_pSegment; // 0x0
    long long const m_start; // 0x8
    long long const m_size; // 0x10
    long long const m_element_start; // 0x18
    long long const m_element_size; // 0x20
private:
    long long m_timecodeScale; // 0x28
    double m_duration; // 0x30
    char *m_pMuxingAppAsUTF8; // 0x38
    char *m_pWritingAppAsUTF8; // 0x3C
    char *m_pTitleAsUTF8; // 0x40
public:
    ~SegmentInfo();
    long Parse();
    long long GetTimeCodeScale() const;
    long long GetDuration() const;
    char const *GetMuxingAppAsUTF8() const;
    char const *GetWritingAppAsUTF8() const;
    char const *GetTitleAsUTF8() const;
};
static_assert(sizeof(mkvparser::SegmentInfo) == 72, "Invalid mkvparser::SegmentInfo size");

class mkvparser::SeekHead
{
public:
    SeekHead(mkvparser::Segment *, long long, long long, long long, long long);
private:
    SeekHead(mkvparser::SeekHead const &);
    mkvparser::SeekHead &operator=(mkvparser::SeekHead const &);
public:
    mkvparser::Segment *const m_pSegment; // 0x0
    long long const m_start; // 0x8
    long long const m_size; // 0x10
    long long const m_element_start; // 0x18
    long long const m_element_size; // 0x20
private:
    mkvparser::SeekHead::Entry *m_entries; // 0x28
    __int32 m_entry_count; // 0x2C
    mkvparser::SeekHead::VoidElement *m_void_elements; // 0x30
    __int32 m_void_element_count; // 0x34
public:
    ~SeekHead();
    long Parse();
    struct Entry
    {
        long long id; // 0x0
        long long pos; // 0x8
        long long element_start; // 0x10
        long long element_size; // 0x18
    };
    static_assert(sizeof(Entry) == 32, "Invalid Entry size");
    __int32 GetCount() const;
    mkvparser::SeekHead::Entry const *GetEntry(__int32) const;
    struct VoidElement
    {
        long long element_start; // 0x0
        long long element_size; // 0x8
    };
    static_assert(sizeof(VoidElement) == 16, "Invalid VoidElement size");
    __int32 GetVoidElementCount() const;
    mkvparser::SeekHead::VoidElement const *GetVoidElement(__int32) const;
private:
    static bool ParseEntry(mkvparser::IMkvReader *pReader, long long start, long long size_, mkvparser::SeekHead::Entry *pEntry);
};
static_assert(sizeof(mkvparser::SeekHead) == 56, "Invalid mkvparser::SeekHead size");

class mkvparser::CuePoint
{
private:
    CuePoint(mkvparser::CuePoint const &);
    CuePoint(long, long long);
    ~CuePoint();
    mkvparser::CuePoint &operator=(mkvparser::CuePoint const &);
public:
    long long m_element_start; // 0x0
    long long m_element_size; // 0x8
private:
    long const m_index; // 0x10
    long long m_timecode; // 0x18
    mkvparser::CuePoint::TrackPosition *m_track_positions; // 0x20
    unsigned __int32 m_track_positions_count; // 0x24
public:
    void Load(mkvparser::IMkvReader *);
    long long GetTimeCode() const;
    long long GetTime(mkvparser::Segment const *) const;
    struct TrackPosition
    {
        long long m_track; // 0x0
        long long m_pos; // 0x8
        long long m_block; // 0x10
        void Parse(mkvparser::IMkvReader *, long long, long long);
    };
    static_assert(sizeof(TrackPosition) == 24, "Invalid TrackPosition size");
    mkvparser::CuePoint::TrackPosition const *Find(mkvparser::Track const *) const;
};
static_assert(sizeof(mkvparser::CuePoint) == 40, "Invalid mkvparser::CuePoint size");

class mkvparser::Cues
{
private:
    Cues(mkvparser::Cues const &);
    Cues(mkvparser::Segment *, long long, long long, long long, long long);
    ~Cues();
    mkvparser::Cues &operator=(mkvparser::Cues const &);
public:
    mkvparser::Segment *const m_pSegment; // 0x0
    long long const m_start; // 0x8
    long long const m_size; // 0x10
    long long const m_element_start; // 0x18
    long long const m_element_size; // 0x20
private:
    mkvparser::CuePoint **m_cue_points; // 0x28
    long m_count; // 0x2C
    long m_preload_count; // 0x30
    long long m_pos; // 0x38
public:
    bool Find(long long, mkvparser::Track const *, mkvparser::CuePoint const *&, mkvparser::CuePoint::TrackPosition const *&) const;
    mkvparser::CuePoint const *GetFirst() const;
    mkvparser::CuePoint const *GetLast() const;
    mkvparser::CuePoint const *GetNext(mkvparser::CuePoint const *) const;
    mkvparser::BlockEntry const *GetBlock(mkvparser::CuePoint const *, mkvparser::CuePoint::TrackPosition const *) const;
    bool LoadCuePoint() const;
    long GetCount() const;
    bool DoneParsing() const;
private:
    void Init() const;
    void PreloadCuePoint(long &, long long) const;
};
static_assert(sizeof(mkvparser::Cues) == 64, "Invalid mkvparser::Cues size");

class mkvparser::Cluster
{
protected:
    Cluster(mkvparser::Segment *, long, long long);
public:
    Cluster();
private:
    Cluster(mkvparser::Cluster const &);
    mkvparser::Cluster &operator=(mkvparser::Cluster const &);
public:
    mkvparser::Segment *const m_pSegment; // 0x0
    long long const m_element_start; // 0x8
private:
    long m_index; // 0x10
    long long m_pos; // 0x18
    long long m_element_size; // 0x20
    long long m_timecode; // 0x28
    mkvparser::BlockEntry **m_entries; // 0x30
    long m_entries_size; // 0x34
    long m_entries_count; // 0x38
public:
    static mkvparser::Cluster *Create(mkvparser::Segment *pSegment, long idx, long long off);
    ~Cluster();
    bool EOS() const;
    long long GetTimeCode() const;
    long long GetTime() const;
    long long GetFirstTime() const;
    long long GetLastTime() const;
    long GetFirst(mkvparser::BlockEntry const *&) const;
    long GetLast(mkvparser::BlockEntry const *&) const;
    long GetNext(mkvparser::BlockEntry const *, mkvparser::BlockEntry const *&) const;
    long GetEntry(long, mkvparser::BlockEntry const *&) const;
    mkvparser::BlockEntry const *GetEntry(mkvparser::CuePoint const &, mkvparser::CuePoint::TrackPosition const &) const;
    mkvparser::BlockEntry const *GetEntry(mkvparser::Track const *, long long) const;
    static long HasBlockEntries(mkvparser::Segment const *pSegment, long long off, long long &pos, long &len);
    long GetEntryCount() const;
    long Load(long long &, long &) const;
    long Parse(long long &, long &) const;
    long long GetPosition() const;
    long GetIndex() const;
    long long GetElementSize() const;
private:
    long ParseSimpleBlock(long long, long long &, long &);
    long ParseBlockGroup(long long, long long &, long &);
    long CreateBlock(long long, long long, long long);
    long CreateBlockGroup(long long, long long);
    long CreateSimpleBlock(long long, long long);
};
static_assert(sizeof(mkvparser::Cluster) == 64, "Invalid mkvparser::Cluster size");

class mkvparser::Segment
{
private:
    Segment(mkvparser::IMkvReader *, long long, long long, long long);
    Segment(mkvparser::Segment const &);
    mkvparser::Segment &operator=(mkvparser::Segment const &);
public:
    mkvparser::IMkvReader *const m_pReader; // 0x0
    long long const m_element_start; // 0x8
    long long const m_start; // 0x10
    long long const m_size; // 0x18
    mkvparser::Cluster m_eos; // 0x20
private:
    long long m_pos; // 0x60
    mkvparser::Cluster *m_pUnknownSize; // 0x68
    mkvparser::SeekHead *m_pSeekHead; // 0x6C
    mkvparser::SegmentInfo *m_pInfo; // 0x70
    mkvparser::Tracks *m_pTracks; // 0x74
    mkvparser::Cues *m_pCues; // 0x78
    mkvparser::Chapters *m_pChapters; // 0x7C
    mkvparser::Cluster **m_clusters; // 0x80
    long m_clusterCount; // 0x84
    long m_clusterPreloadCount; // 0x88
    long m_clusterSize; // 0x8C
public:
    static long long CreateInstance(mkvparser::IMkvReader *pReader, long long pos, mkvparser::Segment *&pSegment);
    ~Segment();
    long Load();
    bool DoneParsing() const;
    long long ParseHeaders();
    _inline long LoadCluster();
    long LoadCluster(long long &, long &);
    long ParseNext(mkvparser::Cluster const *, mkvparser::Cluster const *&, long long &, long &);
    mkvparser::SeekHead const *GetSeekHead() const;
    mkvparser::Tracks const *GetTracks() const;
    mkvparser::SegmentInfo const *GetInfo() const;
    mkvparser::Cues const *GetCues() const;
    mkvparser::Chapters const *GetChapters() const;
    long long GetDuration() const;
    unsigned long GetCount() const;
    mkvparser::Cluster const *GetFirst() const;
    mkvparser::Cluster const *GetLast() const;
    mkvparser::Cluster const *GetNext(mkvparser::Cluster const *);
    mkvparser::Cluster const *FindCluster(long long) const;
    mkvparser::Cluster const *FindOrPreloadCluster(long long);
    long ParseCues(long long, long long &, long &);
private:
    long DoLoadCluster(long long &, long &);
    long DoLoadClusterUnknownSize(long long &, long &);
    long DoParseNext(mkvparser::Cluster const *&, long long &, long &);
    void AppendCluster(mkvparser::Cluster *);
    void PreloadCluster(mkvparser::Cluster *, __int32);
    mkvparser::BlockEntry const *GetBlock(mkvparser::CuePoint const &, mkvparser::CuePoint::TrackPosition const &);
};
static_assert(sizeof(mkvparser::Segment) == 144, "Invalid mkvparser::Segment size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_72E0C0(mkvparser::ContentEncoding::ContentEncAESSettings *const);
_inline mkvparser::ContentEncoding::ContentEncAESSettings::ContentEncAESSettings() // 0x72E0C0
{
    mangled_assert("??0ContentEncAESSettings@ContentEncoding@mkvparser@@QAE@XZ");
    todo("implement");
    _sub_72E0C0(this);
}

_extern void _sub_72E640(mkvparser::ContentEncoding::ContentEncAESSettings *const);
_inline mkvparser::ContentEncoding::ContentEncAESSettings::~ContentEncAESSettings() // 0x72E640
{
    mangled_assert("??1ContentEncAESSettings@ContentEncoding@mkvparser@@QAE@XZ");
    todo("implement");
    _sub_72E640(this);
}

_extern long _sub_733230(mkvparser::Segment *const);
_inline long mkvparser::Segment::LoadCluster() // 0x733230
{
    mangled_assert("?LoadCluster@Segment@mkvparser@@QAEJXZ");
    todo("implement");
    long __result = _sub_733230(this);
    return __result;
}

/* ---------- private code */

#endif // __MKVPARSER_H__
