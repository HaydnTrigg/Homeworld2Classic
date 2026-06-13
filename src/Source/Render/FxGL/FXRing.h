#if 0
#ifndef __FXRING_H__
#define __FXRING_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FXRing
{
public:
    static FXManager::Style const STYLE;
    class Type :
        public FXManager::Type
    {
    public:
        Type(FXRing::Type const &); /* compiler_generated() */
        Type(char const *);
        virtual ~Type() override;
        FXRing::Renderer *Renderer() const;
        void RendererAddRef() const;
        void RendererRelease() const;
        virtual FXManager::Style GetStyle() const override;
        virtual float GetMaximumDuration() const override;
        virtual bool NeverDistanceCulled() const override;
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
        float m_epsilonRadius; // 0x34
        float m_epsilonRate; // 0x38
        float m_epsilonSpinX; // 0x3C
        float m_epsilonSpinY; // 0x40
        float m_epsilonSpinZ; // 0x44
        float m_depthOffset; // 0x48
        bool m_randomSpin; // 0x4C
        bool m_randomBitmap; // 0x4D
        bool m_loop; // 0x4E
        bool m_billboard; // 0x4F
        bool m_selfIlluminated; // 0x50
        bool m_useMesh; // 0x51
        bool m_useDepthTest; // 0x52
        bool m_useDepthSort; // 0x53
        bool m_useAlternateFOV; // 0x54
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_texture; // 0x58
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_mesh; // 0x70
        __int32 m_blend; // 0x88
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_deathSpawnFX; // 0x8C
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_birthSpawnFX; // 0xA4
        float m_pointDistance; // 0xBC
        std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > m_frameColour; // 0xC0
        std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > m_frameRadius; // 0xCC
        std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > m_frameOffset; // 0xD8
        std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > m_frameSpinX; // 0xE4
        std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > m_frameSpinY; // 0xF0
        std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > m_frameSpinZ; // 0xFC
        boost::scoped_ptr<FXRing::Renderer> m_renderer; // 0x108
        unsigned __int32 m_rendererCount; // 0x10C
        void SetDefaults();
        void SetProperties();
    public:
        FXRing::Type &operator=(FXRing::Type const &); /* compiler_generated() */
    };
    static_assert(sizeof(Type) == 272, "Invalid Type size");
    class Obj :
        public FXManager::Object
    {
    public:
        Obj(FXRing::Obj const &); /* compiler_generated() */
        Obj(FXRing::Type const *, FXManager::Handle const &, FXManager::Handle const &, unsigned __int32);
        virtual ~Obj() override;
        virtual bool Update(float) override;
        virtual void Display(float) override;
        virtual _inline bool GetOffset(vector3 &) const override;
        virtual _inline bool GetColour(vector4 &) const override;
        MeshInstance *m_meshInstance; // 0x78
        float m_age; // 0x7C
        vector3 m_spin; // 0x80
        vector4 m_colour; // 0x8C
        float m_radius; // 0x9C
        vector3 m_offset; // 0xA0
        float m_epsilonRadius; // 0xAC
        float m_epsilonRate; // 0xB0
        vector3 m_epsilonSpin; // 0xB4
        unsigned char m_textureFrame; // 0xC0
    private:
        void UpdateRadius();
        void SpawnOnDeath(float);
        void SpawnOnBirth();
    };
    static_assert(sizeof(Obj) == 196, "Invalid Obj size");
    class Renderer
    {
    public:
        Renderer(FXRing::Renderer const &); /* compiler_generated() */
        Renderer(FXRing::Type const *);
        ~Renderer();
        Mesh const *GetMesh() const;
        float GetMeshRadius() const;
        FXMeshList const *GetMeshList() const;
        FXShader const *GetShader() const;
        void RenderBegin();
        void RenderEnd();
        void DisplayRing(FXRing::Obj const *, float, vector4 const &, float, vector3 const &, vector3 const &, unsigned char, MeshInstance *);
        struct Parms
        {
            matrix4 transform; // 0x0
            vector4 color; // 0x40
            float age; // 0x50
            unsigned char textureFrame; // 0x54
            MeshInstance *instance; // 0x58
            _inline Parms(); /* compiler_generated() */
        };
        static_assert(sizeof(Parms) == 92, "Invalid Parms size");
    private:
        FXRing::Type const *m_type; // 0x0
        Mesh *m_mesh; // 0x4
        FXMeshList *m_meshList; // 0x8
        Texture *m_texture; // 0xC
        TextureAnim *m_textureAnim; // 0x10
        FXShader *m_shader; // 0x14
        float m_meshRadius; // 0x18
        matrix4 m_billboardMatrix; // 0x1C
        std::vector<FXRing::Renderer::Parms,std::allocator<FXRing::Renderer::Parms> > m_arrayParms; // 0x5C
        void RenderBillboards();
        void RenderMeshesAnimated();
        void RenderMeshesStatic();
    public:
        FXRing::Renderer &operator=(FXRing::Renderer const &); /* compiler_generated() */
    };
    static_assert(sizeof(Renderer) == 104, "Invalid Renderer size");
};
static_assert(sizeof(FXRing) == 1, "Invalid FXRing size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_6E62DA(FXRing::Obj const *const, vector3 &);
_inline bool FXRing::Obj::GetOffset(vector3 &) const // 0x6E62DA
{
    mangled_assert("?GetOffset@Obj@FXRing@@UBE_NAAVvector3@@@Z");
    todo("implement");
    bool __result = _sub_6E62DA(this, arg);
    return __result;
}

_extern bool _sub_6E61E0(FXRing::Obj const *const, vector4 &);
_inline bool FXRing::Obj::GetColour(vector4 &) const // 0x6E61E0
{
    mangled_assert("?GetColour@Obj@FXRing@@UBE_NAAVvector4@@@Z");
    todo("implement");
    bool __result = _sub_6E61E0(this, arg);
    return __result;
}

/* ---------- private code */

#endif // __FXRING_H__
#endif
