#if 0
#ifndef __FXSPRAY_H__
#define __FXSPRAY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FXSpray
{
public:
    static FXManager::Style const STYLE;
    class Type :
        public FXManager::Type
    {
public:
        enum DirectionOverride
        {
            DO_Normal = 0,
            DO_Up,
            DO_Down,
            DO_Count,
        };
        Type(FXSpray::Type const &); /* compiler_generated() */
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
        float m_emitterDuration; // 0x30
        bool m_emitterLoop; // 0x34
        bool m_emitterScaleSpeed; // 0x35
        bool m_forceOneFirstFrame; // 0x36
        __int32 m_emitterDirection; // 0x38
        float m_emitterInheritVelocity; // 0x3C
        float m_emitterDrag; // 0x40
        std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > m_emitFrameRate; // 0x44
        std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > m_emitFrameLODPercent; // 0x50
        std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > m_emitFrameDeviation; // 0x5C
        std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > m_emitFrameVolume; // 0x68
        std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > m_emitFrameOffset; // 0x74
        std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > m_emitFrameInitialSpeed; // 0x80
        std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > m_emitFrameRotRate; // 0x8C
        std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > m_gravwellStrengthFrames; // 0x98
        std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > m_particleScaleFrames; // 0xA4
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_particleFx; // 0xB0
        __int32 m_particleDynamics; // 0xC8
    private:
        void SetDefaults();
        void SetProperties();
    public:
        FXSpray::Type &operator=(FXSpray::Type const &); /* compiler_generated() */
    };
    static_assert(sizeof(Type) == 204, "Invalid Type size");
    class Obj :
        public FXManager::Object
    {
    public:
        Obj(FXSpray::Obj const &); /* compiler_generated() */
        Obj(FXSpray::Type const *, FXManager::Handle const &, FXManager::Handle const &, __int32);
        virtual ~Obj() override;
        virtual bool Update(float) override;
        virtual void Display(float) override;
        virtual _inline float GetGravwellStrength() const override;
    private:
        float m_age; // 0x78
        float m_remain; // 0x7C
        float m_gravwellStrength; // 0x80
        vector3 m_lastPosition; // 0x84
        void GenerateParticles(float, float, bool);
    };
    static_assert(sizeof(Obj) == 144, "Invalid Obj size");
};
static_assert(sizeof(FXSpray) == 1, "Invalid FXSpray size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern float _sub_6E96AE(FXSpray::Obj const *const);
_inline float FXSpray::Obj::GetGravwellStrength() const // 0x6E96AE
{
    mangled_assert("?GetGravwellStrength@Obj@FXSpray@@UBEMXZ");
    todo("implement");
    float __result = _sub_6E96AE(this);
    return __result;
}

/* ---------- private code */

#endif // __FXSPRAY_H__
#endif
