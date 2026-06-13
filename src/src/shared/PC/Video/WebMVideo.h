#if 0
#ifndef __WEBMVIDEO_H__
#define __WEBMVIDEO_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class WebMVideo :
    private Video
{
public:
    typedef mkvparser::Segment seg_t;
    WebMVideo(WebMVideo const &); /* compiler_generated() */
    WebMVideo();
    virtual unsigned long Open(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, void *, unsigned __int32 const) override;
    virtual unsigned long Play(void *) override;
    virtual unsigned long GetFrame(unsigned long const, unsigned long &) override;
    virtual unsigned long Stop() override;
    virtual unsigned long Close() override;
    virtual unsigned long GetFrameSize(unsigned __int32 &, unsigned __int32 &) const override;
    virtual unsigned long GetFPS(double &) const override;
    virtual unsigned long GetNumFrames(unsigned __int32 &) const override;
private:
    mkvparser::MkvReader m_reader; // 0x8
    mkvparser::Segment *m_pSegment; // 0x20
    vpx_codec_ctx m_vpxcodec; // 0x24
    bool m_bVPXCodecInitialized; // 0x40
    mkvparser::VideoTrack const *m_pVideoTrack; // 0x44
    mkvparser::AudioTrack const *m_pAudioTrack; // 0x48
    mkvparser::BlockEntry const *m_pBlockEntry; // 0x4C
    __int32 m_nCurrentFrame; // 0x50
    void *m_videoBuffer; // 0x54
    void *m_audioBuffer; // 0x58
    unsigned __int32 m_nAudioBufferSize; // 0x5C
    __int32 m_nNumFrames; // 0x60
public:
    ~WebMVideo(); /* compiler_generated() */
    WebMVideo &operator=(WebMVideo const &); /* compiler_generated() */
};
static_assert(sizeof(WebMVideo) == 104, "Invalid WebMVideo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __WEBMVIDEO_H__
#endif
