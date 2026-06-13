#if 0
#ifndef __FXCOMBO_H__
#define __FXCOMBO_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FXCombo
{
public:
    static FXManager::Style const STYLE;
    class Type :
        public FXManager::Type
    {
    public:
        Type(FXCombo::Type const &); /* compiler_generated() */
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
    private:
        std::vector<FXProp *,std::allocator<FXProp *> > m_properties; // 0x24
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_fx[8]; // 0x30
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > &m_fx1; // 0xF0
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > &m_fx2; // 0xF4
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > &m_fx3; // 0xF8
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > &m_fx4; // 0xFC
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > &m_fx5; // 0x100
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > &m_fx6; // 0x104
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > &m_fx7; // 0x108
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > &m_fx8; // 0x10C
        void SetDefaults();
        void SetProperties();
    };
    static_assert(sizeof(Type) == 272, "Invalid Type size");
    class Obj :
        public FXManager::Object
    {
    public:
        Obj(FXCombo::Obj const &); /* compiler_generated() */
        Obj(FXCombo::Type const *, FXManager::Handle const &, FXManager::Handle const &, __int32 const);
        virtual ~Obj() override;
        virtual bool Update(float) override;
        virtual void Display(float) override;
        virtual void SetTransform(matrix4 const &) override;
        virtual void SetScale(float) override;
        virtual void SetLength(float) override;
        virtual bool SetFadeT(float) override;
        virtual void SetVelocity(vector3 const &) override;
    private:
        FXManager::Handle m_fx[8]; // 0x78
        unsigned __int32 m_fxCount; // 0xB8
    };
    static_assert(sizeof(Obj) == 188, "Invalid Obj size");
};
static_assert(sizeof(FXCombo) == 1, "Invalid FXCombo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FXCOMBO_H__
#endif
