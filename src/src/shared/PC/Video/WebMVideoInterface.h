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

_extern _sub_6FC11E(WebMVideoInterface *const);
_inline WebMVideoInterface::WebMVideoInterface() // 0x6FC11E
{
    mangled_assert("??0WebMVideoInterface@@IAE@XZ");
    todo("implement");
    _sub_6FC11E(this);
}

_extern bool _sub_6FC19C(WebMVideoInterface *const);
_inline bool WebMVideoInterface::Initialize() // 0x6FC19C
{
    mangled_assert("?Initialize@WebMVideoInterface@@MAE_NXZ");
    todo("implement");
    bool __result = _sub_6FC19C(this);
    return __result;
}

_extern bool _sub_6FC12F(WebMVideoInterface *const);
_inline bool WebMVideoInterface::DeInitialize() // 0x6FC12F
{
    mangled_assert("?DeInitialize@WebMVideoInterface@@MAE_NXZ");
    todo("implement");
    bool __result = _sub_6FC12F(this);
    return __result;
}

/* ---------- private code */

#endif // __WEBMVIDEOINTERFACE_H__
#endif
