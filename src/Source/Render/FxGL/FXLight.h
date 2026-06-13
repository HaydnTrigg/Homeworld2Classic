#if 0
#ifndef __FXLIGHT_H__
#define __FXLIGHT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FXLight
{
public:
    static FXManager::Style const STYLE;
    class Type :
        public FXManager::Type
    {
    public:
        Type(FXLight::Type const &); /* compiler_generated() */
        Type(char const *);
        virtual ~Type() override;
        virtual FXManager::Style GetStyle() const override;
        virtual bool IsVisible() const override;
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
        std::vector<FXProp *,std::allocator<FXProp *> > m_properties; // 0x24
        float m_duration; // 0x30
        bool m_loop; // 0x34
        __int32 m_priority; // 0x38
        std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > m_frameColour; // 0x3C
        std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > m_frameRadius; // 0x48
        std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > m_frameOffset; // 0x54
    private:
        void SetDefaults();
        void SetProperties();
    public:
        FXLight::Type &operator=(FXLight::Type const &); /* compiler_generated() */
    };
    static_assert(sizeof(Type) == 96, "Invalid Type size");
    class Obj :
        public FXManager::Object
    {
    public:
        Obj(FXLight::Obj const &); /* compiler_generated() */
        Obj(FXLight::Type const *, FXManager::Handle const &, FXManager::Handle const &, __int32);
        virtual ~Obj() override;
        virtual bool Update(float) override;
        virtual void Display(float) override;
    private:
        float m_age; // 0x78
        vector4 m_colour; // 0x7C
        float m_radius; // 0x8C
        vector3 m_offset; // 0x90
        LightHandle m_lightHandle; // 0x9C
        void CreateLight();
        void DestroyLight();
        void UpdateLight(vector3 const &, vector4 const &, float);
        void UpdateRadius();
    };
    static_assert(sizeof(Obj) == 160, "Invalid Obj size");
};
static_assert(sizeof(FXLight) == 1, "Invalid FXLight size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FXLIGHT_H__
#endif
