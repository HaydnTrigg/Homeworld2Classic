#if 0
#ifndef __MOVIERECORDER_H__
#define __MOVIERECORDER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MovieRecorder
{
public:
    MovieRecorder(MovieRecorder const &); /* compiler_generated() */
    MovieRecorder();
    ~MovieRecorder();
    static MovieRecorder *i();
    static void release();
    bool start(char const *, float);
    bool stop();
    enum FileType
    {
        JPG = 0,
        TGA,
        NumTypes,
    };
    void setFileType(unsigned __int32);
    void setOverExposure(bool);
    void frameCapture();
private:
    unsigned __int32 movieNumberify(char const *);
    void makeMovieFrameName(char *, char const *, unsigned __int32);
    static MovieRecorder *s_instance;
    bool m_bRecording; // 0x0
    bool m_bOverExpose; // 0x1
    __int32 m_screenWidth; // 0x4
    __int32 m_screenHeight; // 0x8
    MovieRecorder::FileType m_fileType; // 0xC
    unsigned char *m_jpgBuffer; // 0x10
    unsigned char *m_jpgAccumBuffer; // 0x14
    unsigned __int32 *m_tgaBuffer; // 0x18
    unsigned __int32 *m_tgaAccumBuffer; // 0x1C
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_movieName; // 0x20
    unsigned __int32 m_frameNum; // 0x38
public:
    MovieRecorder &operator=(MovieRecorder const &); /* compiler_generated() */
};
static_assert(sizeof(MovieRecorder) == 60, "Invalid MovieRecorder size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MOVIERECORDER_H__
#endif
