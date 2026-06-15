#if 0
#ifndef __FXTRAIL_H__
#define __FXTRAIL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FXTrail
{
public:
    static FXManager::Style const STYLE;
    class Type :
        public FXManager::Type
    {
    public:
        Type(FXTrail::Type const &); /* compiler_generated() */
        Type(char const *);
        virtual ~Type() override;
        FXTrail::Renderer *Renderer() const;
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
        float m_length; // 0x30
        float m_epsilonLength; // 0x34
        float m_width; // 0x38
        float m_epsilonWidth; // 0x3C
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_texture; // 0x40
        __int32 m_blend; // 0x58
        vector4 m_colourHead; // 0x5C
        vector4 m_colourTail; // 0x6C
        bool m_billboard; // 0x7C
        float m_deathRate; // 0x80
        float m_duration; // 0x84
        float m_epsilonDuration; // 0x88
        float m_fadeOutTime; // 0x8C
        float m_lineDistance; // 0x90
        boost::scoped_ptr<FXTrail::Renderer> m_renderer; // 0x94
        unsigned __int32 m_rendererCount; // 0x98
        void SetDefaults();
        void SetProperties();
    public:
        FXTrail::Type &operator=(FXTrail::Type const &); /* compiler_generated() */
    };
    static_assert(sizeof(Type) == 156, "Invalid Type size");
    class Object :
        public FXManager::Object
    {
public:
        struct Segment
        {
            float age; // 0x0
            vector3 position; // 0x4
            vector3 width; // 0x10
            vector3 direction; // 0x1C
            float scale; // 0x28
            float fade; // 0x2C
            _inline Segment(); /* compiler_generated() */
        };
        static_assert(sizeof(Segment) == 48, "Invalid Segment size");
        typedef std::vector<FXTrail::Object::Segment,std::allocator<FXTrail::Object::Segment> > SegmentList;
        Object(FXTrail::Object const &); /* compiler_generated() */
        Object(FXTrail::Type const *, FXManager::Handle const &, FXManager::Handle const &, __int32);
        virtual ~Object() override;
        virtual bool Update(float) override;
        virtual void Display(float) override;
    private:
        float m_age; // 0x78
        float m_length; // 0x7C
        float m_width; // 0x80
        float m_duration; // 0x84
        vector3 m_prevPosition; // 0x88
        vector3 m_travelDir; // 0x94
        std::vector<FXTrail::Object::Segment,std::allocator<FXTrail::Object::Segment> > m_segments; // 0xA0
        float m_fadeOutAge; // 0xAC
        void UpdateRadius();
    };
    static_assert(sizeof(Object) == 176, "Invalid Object size");
    class Renderer
    {
    public:
        Renderer(FXTrail::Renderer const &); /* compiler_generated() */
        Renderer(FXTrail::Type const *);
        ~Renderer();
        void RenderBegin();
        void RenderEnd();
        void RenderStat();
        void Display(FXTrail::Object const *, std::vector<FXTrail::Object::Segment,std::allocator<FXTrail::Object::Segment> > const &, float const);
        struct Stat
        {
            _inline Stat();
            __int32 refCount; // 0x0
            __int32 numReports; // 0x4
            __int32 numTris; // 0x8
        };
        static_assert(sizeof(Stat) == 12, "Invalid Stat size");
        struct Parms
        {
            std::vector<FXTrail::Object::Segment,std::allocator<FXTrail::Object::Segment> > const *segments; // 0x0
            float length; // 0x4
        };
        static_assert(sizeof(Parms) == 8, "Invalid Parms size");
    private:
        FXTrail::Type const *m_type; // 0x0
        Texture *m_texture; // 0x4
        FXShader *m_shader; // 0x8
        vector3 m_billboardOut; // 0xC
        vector3 m_viewpoint; // 0x18
        std::vector<FXTrail::Renderer::Parms,std::allocator<FXTrail::Renderer::Parms> > m_arrayParms; // 0x24
        static FXTrail::Renderer::Stat m_stat;
        void RenderTrail(std::vector<FXTrail::Object::Segment,std::allocator<FXTrail::Object::Segment> > const *, float);
        void RenderTrailLine(std::vector<FXTrail::Object::Segment,std::allocator<FXTrail::Object::Segment> > const *, float);
    public:
        FXTrail::Renderer &operator=(FXTrail::Renderer const &); /* compiler_generated() */
    };
    static_assert(sizeof(Renderer) == 48, "Invalid Renderer size");
};
static_assert(sizeof(FXTrail) == 1, "Invalid FXTrail size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline FXTrail::Renderer::Stat::Stat() // 0x6ED8C7
{
    mangled_assert("??0Stat@Renderer@FXTrail@@QAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __FXTRAIL_H__
#endif
