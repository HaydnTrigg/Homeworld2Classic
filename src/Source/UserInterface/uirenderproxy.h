#if 0
#ifndef __UIRENDERPROXY_H__
#define __UIRENDERPROXY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UIRenderProxy
{
public:
    UIRenderProxy(UIRenderProxy const &); /* compiler_generated() */
    _inline UIRenderProxy();
    virtual _inline ~UIRenderProxy();
    enum ShaderType
    {
        SH_BlackAndWhite = 0,
        SH_COUNT,
    };
    virtual void RenderBegin() = 0;
    virtual void RenderEnd() = 0;
    virtual void RenderQuad(FatVertex *, Texture *, UIRenderProxy::ShaderType) = 0;
    virtual void RenderQuad(FatVertex *, Texture *) = 0;
    virtual void RenderQuad(FatVertex *) = 0;
    virtual void RenderText(float, float, char const *, UIText &) = 0;
    virtual void RenderText(UI::NewText const &, unsigned __int32) = 0;
    virtual void RenderLine(FatVertex *) = 0;
    virtual void RenderCustom(UICustom const *) = 0;
    virtual void EnableClipping(vector4 const &) = 0;
    virtual void DisableClipping() = 0;
    UIRenderProxy &operator=(UIRenderProxy const &); /* compiler_generated() */
};
static_assert(sizeof(UIRenderProxy) == 4, "Invalid UIRenderProxy size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_68AF26(UIRenderProxy *const);
_inline UIRenderProxy::UIRenderProxy() // 0x68AF26
{
    mangled_assert("??0UIRenderProxy@@QAE@XZ");
    todo("implement");
    _sub_68AF26(this);
}

_extern void _sub_68AF78(UIRenderProxy *const);
_inline UIRenderProxy::~UIRenderProxy() // 0x68AF78
{
    mangled_assert("??1UIRenderProxy@@UAE@XZ");
    todo("implement");
    _sub_68AF78(this);
}

/* ---------- private code */

#endif // __UIRENDERPROXY_H__
#endif
