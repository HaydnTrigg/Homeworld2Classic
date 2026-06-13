#if 0
#ifndef __ISTEAMHTMLSURFACE_H__
#define __ISTEAMHTMLSURFACE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ISteamHTMLSurface
{
public:
    virtual ~ISteamHTMLSurface();
    virtual bool Init() = 0;
    virtual bool Shutdown() = 0;
    virtual unsigned long long CreateBrowser(char const *, char const *) = 0;
    virtual void RemoveBrowser(unsigned __int32) = 0;
    virtual void LoadURL(unsigned __int32, char const *, char const *) = 0;
    virtual void SetSize(unsigned __int32, unsigned __int32, unsigned __int32) = 0;
    virtual void StopLoad(unsigned __int32) = 0;
    virtual void Reload(unsigned __int32) = 0;
    virtual void GoBack(unsigned __int32) = 0;
    virtual void GoForward(unsigned __int32) = 0;
    virtual void AddHeader(unsigned __int32, char const *, char const *) = 0;
    virtual void ExecuteJavascript(unsigned __int32, char const *) = 0;
    enum EHTMLMouseButton
    {
        eHTMLMouseButton_Left = 0,
        eHTMLMouseButton_Right,
        eHTMLMouseButton_Middle,
    };
    virtual void MouseUp(unsigned __int32, ISteamHTMLSurface::EHTMLMouseButton) = 0;
    virtual void MouseDown(unsigned __int32, ISteamHTMLSurface::EHTMLMouseButton) = 0;
    virtual void MouseDoubleClick(unsigned __int32, ISteamHTMLSurface::EHTMLMouseButton) = 0;
    virtual void MouseMove(unsigned __int32, __int32, __int32) = 0;
    virtual void MouseWheel(unsigned __int32, __int32) = 0;
    enum EMouseCursor
    {
        dc_user = 0,
        dc_none,
        dc_arrow,
        dc_ibeam,
        dc_hourglass,
        dc_waitarrow,
        dc_crosshair,
        dc_up,
        dc_sizenw,
        dc_sizese,
        dc_sizene,
        dc_sizesw,
        dc_sizew,
        dc_sizee,
        dc_sizen,
        dc_sizes,
        dc_sizewe,
        dc_sizens,
        dc_sizeall,
        dc_no,
        dc_hand,
        dc_blank,
        dc_middle_pan,
        dc_north_pan,
        dc_north_east_pan,
        dc_east_pan,
        dc_south_east_pan,
        dc_south_pan,
        dc_south_west_pan,
        dc_west_pan,
        dc_north_west_pan,
        dc_alias,
        dc_cell,
        dc_colresize,
        dc_copycur,
        dc_verticaltext,
        dc_rowresize,
        dc_zoomin,
        dc_zoomout,
        dc_help,
        dc_custom,
        dc_last,
    };
    enum EHTMLKeyModifiers
    {
        eHTMLKeyModifier_None = 0, // 0x0000
        eHTMLKeyModifier_AltDown = 1, // 0x0001
        eHTMLKeyModifier_CrtlDown = 2, // 0x0002
        eHTMLKeyModifier_ShiftDown = 4, // 0x0004
    };
    virtual void KeyDown(unsigned __int32, unsigned __int32, ISteamHTMLSurface::EHTMLKeyModifiers) = 0;
    virtual void KeyUp(unsigned __int32, unsigned __int32, ISteamHTMLSurface::EHTMLKeyModifiers) = 0;
    virtual void KeyChar(unsigned __int32, unsigned __int32, ISteamHTMLSurface::EHTMLKeyModifiers) = 0;
    virtual void SetHorizontalScroll(unsigned __int32, unsigned __int32) = 0;
    virtual void SetVerticalScroll(unsigned __int32, unsigned __int32) = 0;
    virtual void SetKeyFocus(unsigned __int32, bool) = 0;
    virtual void ViewSource(unsigned __int32) = 0;
    virtual void CopyToClipboard(unsigned __int32) = 0;
    virtual void PasteFromClipboard(unsigned __int32) = 0;
    virtual void Find(unsigned __int32, char const *, bool, bool) = 0;
    virtual void StopFind(unsigned __int32) = 0;
    virtual void GetLinkAtPosition(unsigned __int32, __int32, __int32) = 0;
    virtual void SetCookie(char const *, char const *, char const *, char const *, unsigned __int32, bool, bool) = 0;
    virtual void SetPageScaleFactor(unsigned __int32, float, __int32, __int32) = 0;
    virtual void AllowStartRequest(unsigned __int32, bool) = 0;
    virtual void JSDialogResponse(unsigned __int32, bool) = 0;
    virtual void FileLoadDialogResponse(unsigned __int32, char const **) = 0;
    ISteamHTMLSurface(ISteamHTMLSurface const &); /* compiler_generated() */
    ISteamHTMLSurface(); /* compiler_generated() */
    ISteamHTMLSurface &operator=(ISteamHTMLSurface const &); /* compiler_generated() */
};
static_assert(sizeof(ISteamHTMLSurface) == 4, "Invalid ISteamHTMLSurface size");

struct HTML_BrowserReady_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4501, // 0x1195
    };
    static HTML_BrowserReady_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    unsigned __int32 unBrowserHandle; // 0x0
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    HTML_BrowserReady_t(); /* compiler_generated() */
};
static_assert(sizeof(HTML_BrowserReady_t) == 4, "Invalid HTML_BrowserReady_t size");

struct HTML_NeedsPaint_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4502, // 0x1196
    };
    static HTML_NeedsPaint_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    unsigned __int32 unBrowserHandle; // 0x0
    char const *pBGRA; // 0x4
    unsigned __int32 unWide; // 0x8
    unsigned __int32 unTall; // 0xC
    unsigned __int32 unUpdateX; // 0x10
    unsigned __int32 unUpdateY; // 0x14
    unsigned __int32 unUpdateWide; // 0x18
    unsigned __int32 unUpdateTall; // 0x1C
    unsigned __int32 unScrollX; // 0x20
    unsigned __int32 unScrollY; // 0x24
    float flPageScale; // 0x28
    unsigned __int32 unPageSerial; // 0x2C
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_1(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_2(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_3(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_4(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_5(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_6(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_7(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_8(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_9(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_10(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_11(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    HTML_NeedsPaint_t(); /* compiler_generated() */
};
static_assert(sizeof(HTML_NeedsPaint_t) == 48, "Invalid HTML_NeedsPaint_t size");

struct HTML_StartRequest_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4503, // 0x1197
    };
    static HTML_StartRequest_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    unsigned __int32 unBrowserHandle; // 0x0
    char const *pchURL; // 0x4
    char const *pchTarget; // 0x8
    char const *pchPostData; // 0xC
    bool bIsRedirect; // 0x10
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_1(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_2(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_3(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_4(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    HTML_StartRequest_t(); /* compiler_generated() */
};
static_assert(sizeof(HTML_StartRequest_t) == 20, "Invalid HTML_StartRequest_t size");

struct HTML_CloseBrowser_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4504, // 0x1198
    };
    static HTML_CloseBrowser_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    unsigned __int32 unBrowserHandle; // 0x0
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    HTML_CloseBrowser_t(); /* compiler_generated() */
};
static_assert(sizeof(HTML_CloseBrowser_t) == 4, "Invalid HTML_CloseBrowser_t size");

struct HTML_URLChanged_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4505, // 0x1199
    };
    static HTML_URLChanged_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    unsigned __int32 unBrowserHandle; // 0x0
    char const *pchURL; // 0x4
    char const *pchPostData; // 0x8
    bool bIsRedirect; // 0xC
    char const *pchPageTitle; // 0x10
    bool bNewNavigation; // 0x14
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_1(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_2(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_3(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_4(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_5(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    HTML_URLChanged_t(); /* compiler_generated() */
};
static_assert(sizeof(HTML_URLChanged_t) == 24, "Invalid HTML_URLChanged_t size");

struct HTML_FinishedRequest_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4506, // 0x119A
    };
    static HTML_FinishedRequest_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    unsigned __int32 unBrowserHandle; // 0x0
    char const *pchURL; // 0x4
    char const *pchPageTitle; // 0x8
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_1(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_2(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    HTML_FinishedRequest_t(); /* compiler_generated() */
};
static_assert(sizeof(HTML_FinishedRequest_t) == 12, "Invalid HTML_FinishedRequest_t size");

struct HTML_OpenLinkInNewTab_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4507, // 0x119B
    };
    static HTML_OpenLinkInNewTab_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    unsigned __int32 unBrowserHandle; // 0x0
    char const *pchURL; // 0x4
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_1(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    HTML_OpenLinkInNewTab_t(); /* compiler_generated() */
};
static_assert(sizeof(HTML_OpenLinkInNewTab_t) == 8, "Invalid HTML_OpenLinkInNewTab_t size");

struct HTML_ChangedTitle_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4508, // 0x119C
    };
    static HTML_ChangedTitle_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    unsigned __int32 unBrowserHandle; // 0x0
    char const *pchTitle; // 0x4
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_1(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    HTML_ChangedTitle_t(); /* compiler_generated() */
};
static_assert(sizeof(HTML_ChangedTitle_t) == 8, "Invalid HTML_ChangedTitle_t size");

struct HTML_SearchResults_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4509, // 0x119D
    };
    static HTML_SearchResults_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    unsigned __int32 unBrowserHandle; // 0x0
    unsigned __int32 unResults; // 0x4
    unsigned __int32 unCurrentMatch; // 0x8
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_1(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_2(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    HTML_SearchResults_t(); /* compiler_generated() */
};
static_assert(sizeof(HTML_SearchResults_t) == 12, "Invalid HTML_SearchResults_t size");

struct HTML_CanGoBackAndForward_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4510, // 0x119E
    };
    static HTML_CanGoBackAndForward_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    unsigned __int32 unBrowserHandle; // 0x0
    bool bCanGoBack; // 0x4
    bool bCanGoForward; // 0x5
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_1(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_2(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    HTML_CanGoBackAndForward_t(); /* compiler_generated() */
};
static_assert(sizeof(HTML_CanGoBackAndForward_t) == 8, "Invalid HTML_CanGoBackAndForward_t size");

struct HTML_HorizontalScroll_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4511, // 0x119F
    };
    static HTML_HorizontalScroll_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    unsigned __int32 unBrowserHandle; // 0x0
    unsigned __int32 unScrollMax; // 0x4
    unsigned __int32 unScrollCurrent; // 0x8
    float flPageScale; // 0xC
    bool bVisible; // 0x10
    unsigned __int32 unPageSize; // 0x14
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_1(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_2(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_3(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_4(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_5(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    HTML_HorizontalScroll_t(); /* compiler_generated() */
};
static_assert(sizeof(HTML_HorizontalScroll_t) == 24, "Invalid HTML_HorizontalScroll_t size");

struct HTML_VerticalScroll_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4512, // 0x11A0
    };
    static HTML_VerticalScroll_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    unsigned __int32 unBrowserHandle; // 0x0
    unsigned __int32 unScrollMax; // 0x4
    unsigned __int32 unScrollCurrent; // 0x8
    float flPageScale; // 0xC
    bool bVisible; // 0x10
    unsigned __int32 unPageSize; // 0x14
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_1(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_2(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_3(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_4(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_5(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    HTML_VerticalScroll_t(); /* compiler_generated() */
};
static_assert(sizeof(HTML_VerticalScroll_t) == 24, "Invalid HTML_VerticalScroll_t size");

struct HTML_LinkAtPosition_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4513, // 0x11A1
    };
    static HTML_LinkAtPosition_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    unsigned __int32 unBrowserHandle; // 0x0
    unsigned __int32 x; // 0x4
    unsigned __int32 y; // 0x8
    char const *pchURL; // 0xC
    bool bInput; // 0x10
    bool bLiveLink; // 0x11
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_1(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_2(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_3(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_4(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_5(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    HTML_LinkAtPosition_t(); /* compiler_generated() */
};
static_assert(sizeof(HTML_LinkAtPosition_t) == 20, "Invalid HTML_LinkAtPosition_t size");

struct HTML_JSAlert_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4514, // 0x11A2
    };
    static HTML_JSAlert_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    unsigned __int32 unBrowserHandle; // 0x0
    char const *pchMessage; // 0x4
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_1(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    HTML_JSAlert_t(); /* compiler_generated() */
};
static_assert(sizeof(HTML_JSAlert_t) == 8, "Invalid HTML_JSAlert_t size");

struct HTML_JSConfirm_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4515, // 0x11A3
    };
    static HTML_JSConfirm_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    unsigned __int32 unBrowserHandle; // 0x0
    char const *pchMessage; // 0x4
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_1(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    HTML_JSConfirm_t(); /* compiler_generated() */
};
static_assert(sizeof(HTML_JSConfirm_t) == 8, "Invalid HTML_JSConfirm_t size");

struct HTML_FileOpenDialog_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4516, // 0x11A4
    };
    static HTML_FileOpenDialog_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    unsigned __int32 unBrowserHandle; // 0x0
    char const *pchTitle; // 0x4
    char const *pchInitialFile; // 0x8
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_1(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_2(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    HTML_FileOpenDialog_t(); /* compiler_generated() */
};
static_assert(sizeof(HTML_FileOpenDialog_t) == 12, "Invalid HTML_FileOpenDialog_t size");

struct HTML_ComboNeedsPaint_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4517, // 0x11A5
    };
    static HTML_ComboNeedsPaint_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    unsigned __int32 unBrowserHandle; // 0x0
    char const *pBGRA; // 0x4
    unsigned __int32 unWide; // 0x8
    unsigned __int32 unTall; // 0xC
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_1(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_2(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_3(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    HTML_ComboNeedsPaint_t(); /* compiler_generated() */
};
static_assert(sizeof(HTML_ComboNeedsPaint_t) == 16, "Invalid HTML_ComboNeedsPaint_t size");

struct HTML_ShowPopup_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4518, // 0x11A6
    };
    static HTML_ShowPopup_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    unsigned __int32 unBrowserHandle; // 0x0
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    HTML_ShowPopup_t(); /* compiler_generated() */
};
static_assert(sizeof(HTML_ShowPopup_t) == 4, "Invalid HTML_ShowPopup_t size");

struct HTML_HidePopup_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4519, // 0x11A7
    };
    static HTML_HidePopup_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    unsigned __int32 unBrowserHandle; // 0x0
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    HTML_HidePopup_t(); /* compiler_generated() */
};
static_assert(sizeof(HTML_HidePopup_t) == 4, "Invalid HTML_HidePopup_t size");

struct HTML_SizePopup_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4520, // 0x11A8
    };
    static HTML_SizePopup_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    unsigned __int32 unBrowserHandle; // 0x0
    unsigned __int32 unX; // 0x4
    unsigned __int32 unY; // 0x8
    unsigned __int32 unWide; // 0xC
    unsigned __int32 unTall; // 0x10
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_1(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_2(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_3(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_4(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    HTML_SizePopup_t(); /* compiler_generated() */
};
static_assert(sizeof(HTML_SizePopup_t) == 20, "Invalid HTML_SizePopup_t size");

struct HTML_NewWindow_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4521, // 0x11A9
    };
    static HTML_NewWindow_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    unsigned __int32 unBrowserHandle; // 0x0
    char const *pchURL; // 0x4
    unsigned __int32 unX; // 0x8
    unsigned __int32 unY; // 0xC
    unsigned __int32 unWide; // 0x10
    unsigned __int32 unTall; // 0x14
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_1(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_2(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_3(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_4(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_5(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    HTML_NewWindow_t(); /* compiler_generated() */
};
static_assert(sizeof(HTML_NewWindow_t) == 24, "Invalid HTML_NewWindow_t size");

struct HTML_SetCursor_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4522, // 0x11AA
    };
    static HTML_SetCursor_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    unsigned __int32 unBrowserHandle; // 0x0
    unsigned __int32 eMouseCursor; // 0x4
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_1(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    HTML_SetCursor_t(); /* compiler_generated() */
};
static_assert(sizeof(HTML_SetCursor_t) == 8, "Invalid HTML_SetCursor_t size");

struct HTML_StatusText_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4523, // 0x11AB
    };
    static HTML_StatusText_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    unsigned __int32 unBrowserHandle; // 0x0
    char const *pchMsg; // 0x4
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_1(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    HTML_StatusText_t(); /* compiler_generated() */
};
static_assert(sizeof(HTML_StatusText_t) == 8, "Invalid HTML_StatusText_t size");

struct HTML_ShowToolTip_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4524, // 0x11AC
    };
    static HTML_ShowToolTip_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    unsigned __int32 unBrowserHandle; // 0x0
    char const *pchMsg; // 0x4
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_1(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    HTML_ShowToolTip_t(); /* compiler_generated() */
};
static_assert(sizeof(HTML_ShowToolTip_t) == 8, "Invalid HTML_ShowToolTip_t size");

struct HTML_UpdateToolTip_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4525, // 0x11AD
    };
    static HTML_UpdateToolTip_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    unsigned __int32 unBrowserHandle; // 0x0
    char const *pchMsg; // 0x4
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static void GetMemberVar_1(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    HTML_UpdateToolTip_t(); /* compiler_generated() */
};
static_assert(sizeof(HTML_UpdateToolTip_t) == 8, "Invalid HTML_UpdateToolTip_t size");

struct HTML_HideToolTip_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4526, // 0x11AE
    };
    static HTML_HideToolTip_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    unsigned __int32 unBrowserHandle; // 0x0
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    HTML_HideToolTip_t(); /* compiler_generated() */
};
static_assert(sizeof(HTML_HideToolTip_t) == 4, "Invalid HTML_HideToolTip_t size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ISTEAMHTMLSURFACE_H__
#endif
