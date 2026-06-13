#if 0
#ifndef __FXHYPERSPACE_H__
#define __FXHYPERSPACE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FXHyperspace
{
public:
    static FXManager::Style const STYLE;
    class Type :
        public FXManager::Type
    {
    public:
        Type(FXHyperspace::Type const &); /* compiler_generated() */
        Type(char const *);
        virtual ~Type() override;
        FXHyperspace::Renderer *Renderer() const;
        void RendererAddRef() const;
        void RendererRelease() const;
        virtual FXManager::Style GetStyle() const override;
        virtual float GetMaximumDuration() const override;
        virtual void CreateObject(void *, FXManager::Handle const &, FXManager::Handle const &, __int32 const) const override;
        virtual void Precache() override;
        virtual void Flush() override;
        virtual void RenderBegin() const override;
        virtual void RenderEnd() const override;
        virtual void LinkedFx(std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &) const override;
        virtual bool PropertyList(std::list<FXManager::Type::Property,std::allocator<FXManager::Type::Property> > &) const override;
        virtual bool PropertyAt(unsigned __int32 const, FXManager::Type::Property &) const override;
        virtual bool PropertyGet(char const *, VarMulti &) const override;
        virtual bool PropertySet(char const *, VarMulti const &) override;
    private:
        std::vector<FXProp *,std::allocator<FXProp *> > m_properties; // 0x24
        float m_duration; // 0x30
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_texture; // 0x34
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_edgeTexture; // 0x4C
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_edgeTexture2; // 0x64
        __int32 m_blend; // 0x7C
        std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > m_frameColour; // 0x80
        std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > m_frameEdgeColour; // 0x8C
        std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > m_frameWidth; // 0x98
        std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > m_frameHeight; // 0xA4
        std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > m_frameOffset; // 0xB0
        std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > m_frameLineWidth; // 0xBC
        std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > m_frameEdgeTextureUOffset; // 0xC8
        std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > m_frameEdgeTextureURepeat; // 0xD4
        std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > m_frameEdgeTexture2UOffset; // 0xE0
        std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > m_frameEdgeTexture2URepeat; // 0xEC
        boost::scoped_ptr<FXHyperspace::Renderer> m_renderer; // 0xF8
        unsigned __int32 m_rendererCount; // 0xFC
        void SetDefaults();
        void SetProperties();
    public:
        FXHyperspace::Type &operator=(FXHyperspace::Type const &); /* compiler_generated() */
    };
    static_assert(sizeof(Type) == 256, "Invalid Type size");
    class Obj :
        public FXManager::Object
    {
    public:
        Obj(FXHyperspace::Obj const &); /* compiler_generated() */
        Obj(FXHyperspace::Type const *, FXManager::Handle const &, FXManager::Handle const &, unsigned __int32);
        virtual ~Obj() override;
        virtual bool Update(float) override;
        virtual void Display(float) override;
        virtual _inline bool GetOffset(vector3 &) const override;
        virtual _inline bool SetOffset(vector3 const &) override;
        virtual _inline float GetHeight() const override;
        virtual _inline bool SetHeight(float) override;
        float m_age; // 0x78
        vector4 m_colour; // 0x7C
        vector4 m_edgeColour; // 0x8C
        float m_width; // 0x9C
        float m_height; // 0xA0
        float m_objHeight; // 0xA4
        vector3 m_offset; // 0xA8
        float m_uoff[2]; // 0xB4
        float m_urep[2]; // 0xBC
        float m_lineWidth; // 0xC4
    private:
        void UpdateRadius();
    };
    static_assert(sizeof(Obj) == 200, "Invalid Obj size");
    class Renderer
    {
    public:
        Renderer(FXHyperspace::Renderer const &); /* compiler_generated() */
        Renderer(FXHyperspace::Type const *);
        ~Renderer();
        Mesh const *GetMesh() const;
        float GetMeshRadius() const;
        FXMeshList const *GetMeshList() const;
        FXShader const *GetShader() const;
        void RenderBegin();
        void RenderEnd();
        void DisplayHyperspace(FXHyperspace::Obj const *, float, vector4 const &, vector4 const &, float, float, vector3 const &, float *, float *, float);
        struct Parms
        {
            matrix4 transform; // 0x0
            vector4 color; // 0x40
            vector4 edgeColor; // 0x50
            float age; // 0x60
            float width; // 0x64
            float height; // 0x68
            float uoff[2]; // 0x6C
            float urep[2]; // 0x74
            float lineWidth; // 0x7C
            _inline Parms(); /* compiler_generated() */
        };
        static_assert(sizeof(Parms) == 128, "Invalid Parms size");
    private:
        FXHyperspace::Type const *m_type; // 0x0
        Texture *m_texture; // 0x4
        Texture *m_edgeTexture; // 0x8
        Texture *m_edgeTexture2; // 0xC
        TextureAnim *m_textureAnim; // 0x10
        FXShader *m_shader; // 0x14
        FXShader *m_edgeShader; // 0x18
        FXShader *m_edgeShader2; // 0x1C
        std::vector<FXHyperspace::Renderer::Parms,std::allocator<FXHyperspace::Renderer::Parms> > m_arrayParms; // 0x20
        void SetupQuad(FatVertex *, FXHyperspace::Renderer::Parms const &, vector4 const &);
        void RenderHyperspaceWindow();
        void RenderHyperspaceOutline();
    public:
        FXHyperspace::Renderer &operator=(FXHyperspace::Renderer const &); /* compiler_generated() */
    };
    static_assert(sizeof(Renderer) == 44, "Invalid Renderer size");
};
static_assert(sizeof(FXHyperspace) == 1, "Invalid FXHyperspace size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_6F2157(FXHyperspace::Obj const *const, vector3 &);
_inline bool FXHyperspace::Obj::GetOffset(vector3 &) const // 0x6F2157
{
    mangled_assert("?GetOffset@Obj@FXHyperspace@@UBE_NAAVvector3@@@Z");
    todo("implement");
    bool __result = _sub_6F2157(this, arg);
    return __result;
}

_extern bool _sub_6F2EF2(FXHyperspace::Obj *const, vector3 const &);
_inline bool FXHyperspace::Obj::SetOffset(vector3 const &) // 0x6F2EF2
{
    mangled_assert("?SetOffset@Obj@FXHyperspace@@UAE_NABVvector3@@@Z");
    todo("implement");
    bool __result = _sub_6F2EF2(this, arg);
    return __result;
}

_extern float _sub_6F214C(FXHyperspace::Obj const *const);
_inline float FXHyperspace::Obj::GetHeight() const // 0x6F214C
{
    mangled_assert("?GetHeight@Obj@FXHyperspace@@UBEMXZ");
    todo("implement");
    float __result = _sub_6F214C(this);
    return __result;
}

_extern bool _sub_6F2EDF(FXHyperspace::Obj *const, float);
_inline bool FXHyperspace::Obj::SetHeight(float) // 0x6F2EDF
{
    mangled_assert("?SetHeight@Obj@FXHyperspace@@UAE_NM@Z");
    todo("implement");
    bool __result = _sub_6F2EDF(this, arg);
    return __result;
}

/* ---------- private code */

#endif // __FXHYPERSPACE_H__
#endif
