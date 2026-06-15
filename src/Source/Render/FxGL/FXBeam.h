#if 0
#ifndef __FXBEAM_H__
#define __FXBEAM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FXBeam
{
public:
    static FXManager::Style const STYLE;
    class Type :
        public FXManager::Type
    {
    public:
        Type(FXBeam::Type const &); /* compiler_generated() */
        Type(char const *);
        virtual ~Type() override;
        FXBeam::Renderer *Renderer() const;
        void RendererAddRef() const;
        void RendererRelease() const;
        virtual FXManager::Style GetStyle() const override;
        virtual float GetMaximumDuration() const override;
        virtual void CreateObject(void *, FXManager::Handle const &, FXManager::Handle const &, __int32 const) const override;
        virtual void Precache() override;
        virtual void Flush() override;
        virtual void RenderBegin() const override;
        virtual void RenderEnd() const override;
        virtual void RenderStat() override;
        virtual void LinkedFx(std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &) const override;
        virtual bool PropertyList(std::list<FXManager::Type::Property,std::allocator<FXManager::Type::Property> > &) const override;
        virtual bool PropertyAt(unsigned __int32 const, FXManager::Type::Property &) const override;
        virtual bool PropertyGet(char const *, VarMulti &) const override;
        virtual bool PropertySet(char const *, VarMulti const &) override;
    private:
        std::vector<FXProp *,std::allocator<FXProp *> > m_properties; // 0x24
        float m_duration; // 0x30
        bool m_loop; // 0x34
        bool m_selfIlluminated; // 0x35
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_texture; // 0x38
        __int32 m_blend; // 0x50
        float m_epsilonLength; // 0x54
        float m_epsilonWidth; // 0x58
        float m_lineDistance; // 0x5C
        std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > m_frameLength; // 0x60
        std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > m_frameNoise; // 0x6C
        std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > m_frameSegments; // 0x78
        std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > m_frameTextureUOffset; // 0x84
        std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > m_frameTextureURepeat; // 0x90
        std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > m_frameWidth; // 0x9C
        std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > m_frameColour; // 0xA8
        std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > m_frameArc; // 0xB4
        std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > m_frameOffset; // 0xC0
        boost::scoped_ptr<FXBeam::Renderer> m_renderer; // 0xCC
        unsigned __int32 m_rendererCount; // 0xD0
        void SetDefaults();
        void SetProperties();
    public:
        FXBeam::Type &operator=(FXBeam::Type const &); /* compiler_generated() */
    };
    static_assert(sizeof(Type) == 212, "Invalid Type size");
    class Obj :
        public FXManager::Object
    {
    public:
        Obj(FXBeam::Obj const &); /* compiler_generated() */
        Obj(FXBeam::Type const *, FXManager::Handle const &, FXManager::Handle const &, __int32);
        virtual ~Obj() override;
        virtual bool Update(float) override;
        virtual void Display(float) override;
        virtual _inline bool SetFadeT(float) override;
        float m_age; // 0x78
        float m_epsilonLength; // 0x7C
        float m_epsilonWidth; // 0x80
        float m_length; // 0x84
        float m_noise; // 0x88
        float m_segments; // 0x8C
        float m_uoff; // 0x90
        float m_urep; // 0x94
        float m_width; // 0x98
        float m_fadeT; // 0x9C
        vector4 m_color; // 0xA0
        vector3 m_arc; // 0xB0
        vector3 m_offset; // 0xBC
    private:
        void UpdateRadius();
    };
    static_assert(sizeof(Obj) == 200, "Invalid Obj size");
    class Renderer
    {
    public:
        Renderer(FXBeam::Renderer const &); /* compiler_generated() */
        Renderer(FXBeam::Type const *);
        ~Renderer();
        void RenderBegin();
        void RenderEnd();
        void RenderStat();
        void Display(FXBeam::Obj const *, float, vector4 const &, float, float, float, float, float, float, vector3 const &, vector3 const &, float, unsigned __int32);
        struct Stat
        {
            _inline Stat();
            __int32 refCount; // 0x0
            __int32 numReports; // 0x4
            __int32 numTris; // 0x8
        };
        static_assert(sizeof(Stat) == 12, "Invalid Stat size");
    private:
        static FXBeam::Renderer::Stat s_stat;
        struct Parms
        {
            FatVertex fv[32]; // 0x0
            unsigned short count; // 0xD00
            float age; // 0xD04
            bool bLine; // 0xD08
            _inline Parms(); /* compiler_generated() */
        };
        static_assert(sizeof(Parms) == 3340, "Invalid Parms size");
        FXBeam::Type const *m_type; // 0x0
        Texture *m_texture; // 0x4
        TextureAnim *m_textureAnim; // 0x8
        FXShader *m_shader; // 0xC
        vector3 m_billboardUp; // 0x10
        vector3 m_billboardRight; // 0x1C
        vector3 m_billboardOut; // 0x28
        vector3 m_viewpoint; // 0x34
        std::vector<FXBeam::Renderer::Parms,std::allocator<FXBeam::Renderer::Parms> > m_arrayParms; // 0x40
    public:
        FXBeam::Renderer &operator=(FXBeam::Renderer const &); /* compiler_generated() */
    };
    static_assert(sizeof(Renderer) == 76, "Invalid Renderer size");
};
static_assert(sizeof(FXBeam) == 1, "Invalid FXBeam size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool FXBeam::Obj::SetFadeT(float) // 0x6EC3B6
{
    mangled_assert("?SetFadeT@Obj@FXBeam@@UAE_NM@Z");
    todo("implement");
}

_inline FXBeam::Renderer::Stat::Stat() // 0x6EA981
{
    mangled_assert("??0Stat@Renderer@FXBeam@@QAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __FXBEAM_H__
#endif
