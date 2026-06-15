#if 0
#ifndef __WEBMVIDEOINTERFACE_H__
#define __WEBMVIDEOINTERFACE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class WebMVideoInterface :
    public VideoInterface
{
public:
    WebMVideoInterface(WebMVideoInterface const &); /* compiler_generated() */
protected:
    _inline WebMVideoInterface();
public:
    virtual Video *CreateVideo(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, void *, unsigned __int32 const) override;
protected:
    virtual _inline bool Initialize() override;
    virtual _inline bool DeInitialize() override;
public:
    WebMVideoInterface &operator=(WebMVideoInterface const &); /* compiler_generated() */
};
static_assert(sizeof(WebMVideoInterface) == 4, "Invalid WebMVideoInterface size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline WebMVideoInterface::WebMVideoInterface() // 0x6FC11E
{
    mangled_assert("??0WebMVideoInterface@@IAE@XZ");
    todo("implement");
}

_inline bool WebMVideoInterface::Initialize() // 0x6FC19C
{
    mangled_assert("?Initialize@WebMVideoInterface@@MAE_NXZ");
    todo("implement");
}

_inline bool WebMVideoInterface::DeInitialize() // 0x6FC12F
{
    mangled_assert("?DeInitialize@WebMVideoInterface@@MAE_NXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __WEBMVIDEOINTERFACE_H__
#endif
