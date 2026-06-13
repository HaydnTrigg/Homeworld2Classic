#if 0
#ifndef __SUBTITLE_H__
#define __SUBTITLE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum SubtitleMode
{
    SubtitleMode_Default = 0,
    SubtitleMode_Narrow,
    SubtitleMode_COUNT,
};

/* ---------- definitions */

class Subtitle_Card
{
public:
    Subtitle_Card();
    float timeElapsed; // 0x0
    float duration; // 0x4
    float fadeIn; // 0x8
    float fadeOut; // 0xC
    vector4 col; // 0x10
    wchar_t const *text; // 0x20
};
static_assert(sizeof(Subtitle_Card) == 36, "Invalid Subtitle_Card size");

class Subtitle_Region
{
public:
    Subtitle_Region(Subtitle_Region const &); /* compiler_generated() */
    Subtitle_Region();
    void Reset();
    void SetTextWidget(char const *);
    void SetIconWidget(char const *);
    void SetNarrowTextWidget(char const *);
    void OnModeChange(UI::SubtitleScreen *, SubtitleMode);
    void Hide(UI::SubtitleScreen *);
    bool IsHidden(UI::SubtitleScreen *);
    void ShowText(UI::SubtitleScreen *, wchar_t const *, vector4 const &, float, SubtitleMode);
    void ShowIcon(UI::SubtitleScreen *, Texture *);
    void SetTextAlphaFactor(float);
    float GetTextAlphaFactor() const;
    void CardsClear();
    bool CardsEmpty() const;
    void CardInsert(Subtitle_Card const &);
    void CardPopFirst();
    Subtitle_Card *CardFirst();
    struct Updater
    {
        virtual void update(Subtitle_Region *) = 0;
        Updater(Subtitle_Region::Updater const &); /* compiler_generated() */
        _inline Updater(); /* compiler_generated() */
        Subtitle_Region::Updater &operator=(Subtitle_Region::Updater const &); /* compiler_generated() */
    };
    static_assert(sizeof(Updater) == 4, "Invalid Updater size");
    char bDefined; // 0x0
    char bEnabled; // 0x1
    char bAborted; // 0x2
    char bContinuous; // 0x3
    char bSkippable; // 0x4
    float textScrollStart; // 0x8
    float textScrollEnd; // 0xC
    float scrollDistance; // 0x10
    float textAlphaFactor; // 0x14
    Texture *picture; // 0x18
    wchar_t chopBuffer[2112]; // 0x1C
    Subtitle_Region::Updater *updater; // 0x109C
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_textName; // 0x10A0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_iconName; // 0x10B8
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_narrowTextName; // 0x10D0
    std::list<Subtitle_Card,std::allocator<Subtitle_Card> > m_cards; // 0x10E8
public:
    _inline ~Subtitle_Region(); /* compiler_generated() */
    Subtitle_Region &operator=(Subtitle_Region const &); /* compiler_generated() */
};
static_assert(sizeof(Subtitle_Region) == 4336, "Invalid Subtitle_Region size");

class Subtitle_Theme
{
public:
    Subtitle_Theme();
    ~Subtitle_Theme();
    vector4 textColour; // 0x0
    Texture *picture[10]; // 0x10
    unsigned char numPictures; // 0x38
    unsigned char pictureColourScheme; // 0x39
    float fadeIn; // 0x3C
    float fadeOut; // 0x40
};
static_assert(sizeof(Subtitle_Theme) == 68, "Invalid Subtitle_Theme size");

class Subtitle
{
public:
    Subtitle(Subtitle const &); /* compiler_generated() */
private:
    Subtitle();
    ~Subtitle();
    enum RegionDef
    {
        Region_NIS = 0,
        Region_LetterBoxBar,
        Region_CloseCaptioned,
        Region_LocationCard,
        Region_TimeCounter,
        Region_Message,
        Region_LetterBoxAnimatic,
        SUBTITLE_NumRegions,
    };
    enum ThemeDef
    {
        Theme_CloseCaptioned = 0, // 0x0000
        Theme_LocationCard = 1, // 0x0001
        Theme_TimeCounter = 13, // 0x000D
    };
    enum ActorDef
    {
        Actor_FleetIntel = 0, // 0x0000
        Actor_FleetCommand = 1, // 0x0001
        Actor_Makaan = 2, // 0x0002
        Actor_Keeper = 3, // 0x0003
        Actor_Chimera = 4, // 0x0004
        Actor_Bentusi = 5, // 0x0005
        Actor_Talorn = 6, // 0x0006
        Actor_Bishop = 7, // 0x0007
        Actor_Shipyard = 8, // 0x0008
        Actor_Tanis = 9, // 0x0009
        Actor_AllShips = 10, // 0x000A
        Actor_AllShips2 = 11, // 0x000B
        Actor_AllShips3 = 12, // 0x000C
        Actor_LocationCard = 15, // 0x000F
    };
public:
    static Subtitle *instance();
    static _inline Subtitle *i();
    static void release();
    void start();
    void reset();
    void resetTextures();
    void end();
    static bool startSystem();
    static bool endSystem();
    void update();
    void add(__int32, char const *, char const *, float, Subtitle::RegionDef);
    void addTimeCounter(Subtitle_Region::Updater *);
    void endTimeCounter();
    void skip();
    bool isdone(__int32, Subtitle::RegionDef);
    void ResetContinuous();
    Subtitle_Region &GetRegion(unsigned __int32);
    Subtitle_Theme &GetTheme(unsigned __int32);
    void ReleaseScreen();
    void TimerPush(TimerProxy *);
    void TimerPop();
    void SetMode(SubtitleMode);
private:
    void scanForControls(wchar_t *, Subtitle_Region **, Subtitle_Theme **, char *, unsigned char *);
    bool linkToScreen();
    void draw(Subtitle_Region *, float);
    void readLuaFile(char const *);
    void createSubtitleCards(Subtitle_Region *, Subtitle_Theme *, __int32, wchar_t **, unsigned char, float);
    char m_closeCaptionEnabled; // 0x0
    bool m_bSkipPlaying; // 0x1
    Subtitle_Region m_region[7]; // 0x4
    Subtitle_Theme m_theme[16]; // 0x7694
    __int32 m_speechHandle; // 0x7AD4
    boost::scoped_ptr<Subtitle::Data> m_pimpl; // 0x7AD8
    class Data;
public:
    Subtitle &operator=(Subtitle const &); /* compiler_generated() */
};
static_assert(sizeof(Subtitle) == 31452, "Invalid Subtitle size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern Subtitle *_sub_45152E();
_inline Subtitle *Subtitle::i() // 0x45152E
{
    mangled_assert("?i@Subtitle@@SGPAV1@XZ");
    todo("implement");
    Subtitle * __result = _sub_45152E();
    return __result;
}

/* ---------- private code */

#endif // __SUBTITLE_H__
#endif
