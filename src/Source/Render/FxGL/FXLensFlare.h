#if 0
#ifndef __FXLENSFLARE_H__
#define __FXLENSFLARE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FXLensFlare
{
public:
    static FXManager::Style const STYLE;
    class Type :
        public FXManager::Type
    {
    public:
        Type(FXLensFlare::Type const &); /* compiler_generated() */
        Type(char const *);
        virtual ~Type() override;
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
        bool m_bInfinite; // 0x34
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_lensflare; // 0x38
        std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > m_frameColour; // 0x50
        std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > m_frameRadius; // 0x5C
        void SetDefaults();
        void SetProperties();
    public:
        FXLensFlare::Type &operator=(FXLensFlare::Type const &); /* compiler_generated() */
    };
    static_assert(sizeof(Type) == 104, "Invalid Type size");
    class Obj :
        public FXManager::Object
    {
    public:
        Obj(FXLensFlare::Obj const &); /* compiler_generated() */
        Obj(FXLensFlare::Type const *, FXManager::Handle const &, FXManager::Handle const &, unsigned __int32);
        virtual ~Obj() override;
        virtual void SetTransform(matrix4 const &) override;
        virtual bool Update(float) override;
        virtual void Display(float) override;
        virtual void SetVisible(bool) override;
        float m_age; // 0x78
        float m_radius; // 0x7C
        vector4 m_colour; // 0x80
        unsigned __int32 m_flareHandle; // 0x90
        bool m_bInitialUpdateDone; // 0x94
    private:
        void UpdateRadius();
        void CreateFlare();
        void DestroyFlare();
        void UpdateFlare(vector3 const &, vector4 const &, float);
    };
    static_assert(sizeof(Obj) == 152, "Invalid Obj size");
    class Renderer;
};
static_assert(sizeof(FXLensFlare) == 1, "Invalid FXLensFlare size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FXLENSFLARE_H__
#endif
