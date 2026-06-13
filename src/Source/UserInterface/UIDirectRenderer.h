#if 0
#ifndef __UIDIRECTRENDERER_H__
#define __UIDIRECTRENDERER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UIDirectRenderer :
    public UIRenderProxy
{
public:
    UIDirectRenderer(UIDirectRenderer const &); /* compiler_generated() */
    UIDirectRenderer();
    virtual ~UIDirectRenderer() override;
    virtual void RenderBegin() override;
    virtual void RenderEnd() override;
    virtual void RenderQuad(FatVertex *, Texture *, UIRenderProxy::ShaderType) override;
    virtual void RenderQuad(FatVertex *, Texture *) override;
    virtual void RenderQuad(FatVertex *) override;
    virtual void RenderText(float, float, char const *, UIText &) override;
    virtual void RenderText(UI::NewText const &, unsigned __int32) override;
    virtual void RenderLine(FatVertex *) override;
    virtual void RenderCustom(UICustom const *) override;
    virtual void EnableClipping(vector4 const &) override;
    virtual void DisableClipping() override;
private:
    void InitShaders();
    bool m_bClip; // 0x4
    ClipRect *m_clipRect; // 0x8
    CompoundStateBlock *m_compountStateBlocks[1]; // 0xC
    struct StatEntry
    {
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > type; // 0x0
        unsigned __int32 count; // 0x18
        float timeMS; // 0x1C
        _inline StatEntry(UIDirectRenderer::StatEntry const &); /* compiler_generated() */
        _inline StatEntry(); /* compiler_generated() */
        _inline ~StatEntry(); /* compiler_generated() */
        UIDirectRenderer::StatEntry &operator=(UIDirectRenderer::StatEntry const &); /* compiler_generated() */
    };
    static_assert(sizeof(StatEntry) == 32, "Invalid StatEntry size");
public:
    static std::vector<UIDirectRenderer::StatEntry,std::allocator<UIDirectRenderer::StatEntry> > const &GetStat();
    UIDirectRenderer &operator=(UIDirectRenderer const &); /* compiler_generated() */
};
static_assert(sizeof(UIDirectRenderer) == 16, "Invalid UIDirectRenderer size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __UIDIRECTRENDERER_H__
#endif
