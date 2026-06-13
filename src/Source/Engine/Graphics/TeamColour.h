#if 0
#ifndef __TEAMCOLOUR_H__
#define __TEAMCOLOUR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class TeamColour :
    public SaveObject
{
public:
    TeamColour(SaveGameData *);
    TeamColour(TeamColour const &);
    TeamColour(__int32);
    virtual ~TeamColour() override;
    void setTeamColours(vector4 const &, vector4 const &);
    void setTrailColour(vector4 const &);
    _inline vector4 const &getBaseColour() const;
    _inline vector4 const &getStripeColour() const;
    _inline vector4 const &getTrailColour() const;
    _inline vector4 const &getTrailHotColour() const;
    void setBadgeTexture(char const *);
    void setTrailColourTexture(char const *);
    _inline Texture const *getBadgeTexture() const;
    _inline Texture const *getTrailTexture() const;
    _inline char const *getBadgeTextureName() const;
    _inline char const *getTrailColourTextureName() const;
    _inline unsigned __int32 getBaseStripeBadgeCRC() const;
    TeamColour &operator=(TeamColour const &);
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
private:
    void colourizeTrail(vector4 const &);
    void colourizeTrailFromTexture(vector4 const &);
    void computeCRC();
    vector4 m_teamBaseColour; // 0xC
    vector4 m_teamStripeColour; // 0x1C
    vector4 m_teamTrailColour; // 0x2C
    vector4 m_teamTrailHotColour; // 0x3C
    unsigned __int32 m_baseStripeBadgeCRC; // 0x4C
    Texture *m_trailTexture; // 0x50
    Texture *m_badgeTexture; // 0x54
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_badgeTextureName; // 0x58
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_trailColourTextureName; // 0x70
};
static_assert(sizeof(TeamColour) == 136, "Invalid TeamColour size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_56D87A(TeamColour *const);
_inline bool TeamColour::isDeterministic() // 0x56D87A
{
    mangled_assert("?isDeterministic@TeamColour@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_56D87A(this);
    return __result;
}

_extern char const *_sub_56D933(TeamColour *const);
_inline char const *TeamColour::saveToken() // 0x56D933
{
    mangled_assert("?saveToken@TeamColour@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_56D933(this);
    return __result;
}

_extern vector4 const &_sub_487E77(TeamColour const *const);
_inline vector4 const &TeamColour::getBaseColour() const // 0x487E77
{
    mangled_assert("?getBaseColour@TeamColour@@QBEABVvector4@@XZ");
    todo("implement");
    vector4 const & __result = _sub_487E77(this);
    return __result;
}

_extern vector4 const &_sub_487F6A(TeamColour const *const);
_inline vector4 const &TeamColour::getStripeColour() const // 0x487F6A
{
    mangled_assert("?getStripeColour@TeamColour@@QBEABVvector4@@XZ");
    todo("implement");
    vector4 const & __result = _sub_487F6A(this);
    return __result;
}

_extern vector4 const &_sub_56D866(TeamColour const *const);
_inline vector4 const &TeamColour::getTrailColour() const // 0x56D866
{
    mangled_assert("?getTrailColour@TeamColour@@QBEABVvector4@@XZ");
    todo("implement");
    vector4 const & __result = _sub_56D866(this);
    return __result;
}

_extern vector4 const &_sub_441CB1(TeamColour const *const);
_inline vector4 const &TeamColour::getTrailHotColour() const // 0x441CB1
{
    mangled_assert("?getTrailHotColour@TeamColour@@QBEABVvector4@@XZ");
    todo("implement");
    vector4 const & __result = _sub_441CB1(this);
    return __result;
}

_extern Texture const *_sub_48C099(TeamColour const *const);
_inline Texture const *TeamColour::getBadgeTexture() const // 0x48C099
{
    mangled_assert("?getBadgeTexture@TeamColour@@QBEPBVTexture@@XZ");
    todo("implement");
    Texture const * __result = _sub_48C099(this);
    return __result;
}

_extern Texture const *_sub_447B5E(TeamColour const *const);
_inline Texture const *TeamColour::getTrailTexture() const // 0x447B5E
{
    mangled_assert("?getTrailTexture@TeamColour@@QBEPBVTexture@@XZ");
    todo("implement");
    Texture const * __result = _sub_447B5E(this);
    return __result;
}

_extern char const *_sub_5107E4(TeamColour const *const);
_inline char const *TeamColour::getBadgeTextureName() const // 0x5107E4
{
    mangled_assert("?getBadgeTextureName@TeamColour@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_5107E4(this);
    return __result;
}

_extern char const *_sub_56D86A(TeamColour const *const);
_inline char const *TeamColour::getTrailColourTextureName() const // 0x56D86A
{
    mangled_assert("?getTrailColourTextureName@TeamColour@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_56D86A(this);
    return __result;
}

_extern unsigned __int32 _sub_487E7B(TeamColour const *const);
_inline unsigned __int32 TeamColour::getBaseStripeBadgeCRC() const // 0x487E7B
{
    mangled_assert("?getBaseStripeBadgeCRC@TeamColour@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_487E7B(this);
    return __result;
}

/* ---------- private code */

#endif // __TEAMCOLOUR_H__
#endif
