#if 0
#ifndef __VIDEOINTERFACE_H__
#define __VIDEOINTERFACE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class VideoInterface
{
public:
    VideoInterface(VideoInterface const &); /* compiler_generated() */
protected:
    _inline VideoInterface();
public:
    static bool InitInterface();
    static bool ExitInterface();
    static VideoInterface *GetInstance();
    virtual _inline Video *CreateVideo(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, void *, unsigned __int32 const);
protected:
    virtual _inline bool Initialize();
    virtual _inline bool DeInitialize();
private:
    static VideoInterface *ms_instance;
public:
    VideoInterface &operator=(VideoInterface const &); /* compiler_generated() */
};
static_assert(sizeof(VideoInterface) == 4, "Invalid VideoInterface size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline VideoInterface::VideoInterface() // 0x6FC115
{
    mangled_assert("??0VideoInterface@@IAE@XZ");
    todo("implement");
}

_inline Video *VideoInterface::CreateVideo(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, void *, unsigned __int32 const) // 0x6FC127
{
    mangled_assert("?CreateVideo@VideoInterface@@UAEPAVVideo@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAXI@Z");
    todo("implement");
}

_inline bool VideoInterface::Initialize() // 0x6FC199
{
    mangled_assert("?Initialize@VideoInterface@@MAE_NXZ");
    todo("implement");
}

_inline bool VideoInterface::DeInitialize() // 0x6FC12C
{
    mangled_assert("?DeInitialize@VideoInterface@@MAE_NXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __VIDEOINTERFACE_H__
#endif
