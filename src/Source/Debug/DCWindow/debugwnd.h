#if 0
#ifndef __DEBUGWND_H__
#define __DEBUGWND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class DebugPane
{
public:
    DebugPane(DebugPane const &); /* compiler_generated() */
private:
    DebugPane();
public:
    DebugPane(__int32, DebugPane *);
    ~DebugPane();
    bool bufferAlloc();
    bool fontChoose(bool);
    void resetTitle();
    __int32 print(char const *, char const *);
    void repaint(HDC__ *);
    void clear();
    __int32 lineFeed();
    void textEntryInit(char const *, bool);
    void inputCallback(char *);
    void commandProcess(unsigned __int32, unsigned __int32, unsigned __int32);
    void editFocus(unsigned __int32);
    void editFocusKill(char *);
    _inline bool getEnabled();
    _inline void setWindowPosition(__int32, __int32);
    _inline HWND__ *getWindowHandle();
    _inline __int32 getHeight();
    void scrollRangeSet();
    void viewScroll(__int32, bool);
    void scrollIntoView();
    void scrollTrack();
    bool limitSize(tagRECT *, __int32);
    bool newSize(__int32, __int32);
    bool resizeBuffer(__int32, __int32, __int32);
    bool windowSizeToFont(bool);
    bool editWindowSizeToFont(bool);
    void editWindowMoveToResizedFont();
    void configurationWrite(_iobuf *, __int32);
    void logOptionsDialog();
    void logDialogInit(HWND__ *);
    void logStop();
    bool logStart(char *, bool, bool);
    void logString(char const *);
    void stringAddToHistory(char const *);
    char const *queryHistory();
    bool historyAlloc();
    void filterDialog();
    DebugFilter m_filter; // 0x0
private:
    unsigned __int32 m_flags; // 0x908
    __int32 m_name; // 0x90C
    __int32 m_width; // 0x910
    __int32 m_height; // 0x914
    __int32 m_cursorX; // 0x918
    __int32 m_cursorY; // 0x91C
    __int32 m_viewTop; // 0x920
    __int32 m_bufferHeight; // 0x924
    char *m_buffer; // 0x928
    bool m_bLineFeedPending; // 0x92C
    bool m_bLogging; // 0x92D
    bool m_bSafeLogging; // 0x92E
    bool m_bClearCutLogging; // 0x92F
    char m_logPath[256]; // 0x930
    _iobuf *m_logFile; // 0xA30
    std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > m_history; // 0xA34
    unsigned __int32 m_historyIndex; // 0xA40
    __int32 m_windowX; // 0xA44
    __int32 m_windowY; // 0xA48
    __int32 m_editHeight; // 0xA4C
    __int32 m_extraWidth; // 0xA50
    __int32 m_extraHeight; // 0xA54
    __int32 m_windowWidth; // 0xA58
    __int32 m_windowHeight; // 0xA5C
    __int32 m_fontWidth; // 0xA60
    __int32 m_fontHeight; // 0xA64
    HWND__ *m_windowHandle; // 0xA68
    HWND__ *m_editHandle; // 0xA6C
    HDC__ *m_deviceContext; // 0xA70
    bool m_bFontChosen; // 0xA74
    tagLOGFONTA m_logicalFont; // 0xA78
    HFONT__ *m_font; // 0xAB4
    bool m_bInScrollCommand; // 0xAB8
    unsigned __int32 m_focusKey; // 0xABC
    void charsPrint(char const *, __int32, __int32);
    void keyPrintIfPending(char const *);
    typedef std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > historyContainer;
public:
    DebugPane &operator=(DebugPane const &); /* compiler_generated() */
};
static_assert(sizeof(DebugPane) == 2752, "Invalid DebugPane size");

class AutoCompleteSys
{
public:
    AutoCompleteSys(AutoCompleteSys const &); /* compiler_generated() */
    AutoCompleteSys();
    std::set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basicstring_less_insensitive<char>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > m_keywordSet; // 0x0
    bool m_keywordAutoComplete; // 0x8
    unsigned __int32 m_keywordAutoIndex; // 0xC
    bool m_autoCompleteKeyEvent; // 0x10
    void Complete(DebugPane *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    void KeywordAdd(char const *);
    void KeywordRmv(char const *);
    void Reset();
    bool Detect(char const *);
    _inline ~AutoCompleteSys(); /* compiler_generated() */
    AutoCompleteSys &operator=(AutoCompleteSys const &); /* compiler_generated() */
};
static_assert(sizeof(AutoCompleteSys) == 20, "Invalid AutoCompleteSys size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool DebugPane::getEnabled() // 0x1000476F
{
    mangled_assert("?getEnabled@DebugPane@@QAE_NXZ");
    todo("implement");
}

_inline void DebugPane::setWindowPosition(__int32, __int32) // 0x10005628
{
    mangled_assert("?setWindowPosition@DebugPane@@QAEXHH@Z");
    todo("implement");
}

_inline HWND__ *DebugPane::getWindowHandle() // 0x10004780
{
    mangled_assert("?getWindowHandle@DebugPane@@QAEPAUHWND__@@XZ");
    todo("implement");
}

_inline __int32 DebugPane::getHeight() // 0x10004779
{
    mangled_assert("?getHeight@DebugPane@@QAEHXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __DEBUGWND_H__
/* combined */
#ifndef __DEBUGWND_H__
#define __DEBUGWND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class DebugPane
{
public:
    DebugPane(DebugPane const &); /* compiler_generated() */
private:
    DebugPane();
public:
    DebugPane(__int32, DebugPane *);
    ~DebugPane();
    bool bufferAlloc();
    bool fontChoose(bool);
    void resetTitle();
    __int32 print(char const *, char const *);
    void repaint(HDC__ *);
    void clear();
    __int32 lineFeed();
    void textEntryInit(char const *, bool);
    void inputCallback(char *);
    void commandProcess(unsigned __int32, unsigned __int32, unsigned __int32);
    void editFocus(unsigned __int32);
    void editFocusKill(char *);
    bool getEnabled();
    void setWindowPosition(__int32, __int32);
    HWND__ *getWindowHandle();
    __int32 getHeight();
    void scrollRangeSet();
    void viewScroll(__int32, bool);
    void scrollIntoView();
    void scrollTrack();
    bool limitSize(tagRECT *, __int32);
    bool newSize(__int32, __int32);
    bool resizeBuffer(__int32, __int32, __int32);
    bool windowSizeToFont(bool);
    bool editWindowSizeToFont(bool);
    void editWindowMoveToResizedFont();
    void configurationWrite(_iobuf *, __int32);
    void logOptionsDialog();
    void logDialogInit(HWND__ *);
    void logStop();
    bool logStart(char *, bool, bool);
    void logString(char const *);
    void stringAddToHistory(char const *);
    char const *queryHistory();
    bool historyAlloc();
    void filterDialog();
    DebugFilter m_filter; // 0x0
private:
    unsigned __int32 m_flags; // 0x908
    __int32 m_name; // 0x90C
    __int32 m_width; // 0x910
    __int32 m_height; // 0x914
    __int32 m_cursorX; // 0x918
    __int32 m_cursorY; // 0x91C
    __int32 m_viewTop; // 0x920
    __int32 m_bufferHeight; // 0x924
    char *m_buffer; // 0x928
    bool m_bLineFeedPending; // 0x92C
    bool m_bLogging; // 0x92D
    bool m_bSafeLogging; // 0x92E
    bool m_bClearCutLogging; // 0x92F
    char m_logPath[256]; // 0x930
    _iobuf *m_logFile; // 0xA30
    std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > m_history; // 0xA34
    unsigned __int32 m_historyIndex; // 0xA40
    __int32 m_windowX; // 0xA44
    __int32 m_windowY; // 0xA48
    __int32 m_editHeight; // 0xA4C
    __int32 m_extraWidth; // 0xA50
    __int32 m_extraHeight; // 0xA54
    __int32 m_windowWidth; // 0xA58
    __int32 m_windowHeight; // 0xA5C
    __int32 m_fontWidth; // 0xA60
    __int32 m_fontHeight; // 0xA64
    HWND__ *m_windowHandle; // 0xA68
    HWND__ *m_editHandle; // 0xA6C
    HDC__ *m_deviceContext; // 0xA70
    bool m_bFontChosen; // 0xA74
    tagLOGFONTA m_logicalFont; // 0xA78
    HFONT__ *m_font; // 0xAB4
    bool m_bInScrollCommand; // 0xAB8
    unsigned __int32 m_focusKey; // 0xABC
    void charsPrint(char const *, __int32, __int32);
    void keyPrintIfPending(char const *);
    typedef std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > historyContainer;
public:
    DebugPane &operator=(DebugPane const &); /* compiler_generated() */
};
static_assert(sizeof(DebugPane) == 2752, "Invalid DebugPane size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DEBUGWND_H__
#endif
