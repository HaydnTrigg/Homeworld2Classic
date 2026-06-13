#if 0
#ifndef __FXCONDITIONAL_H__
#define __FXCONDITIONAL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FXConditional
{
public:
    static FXManager::Style const STYLE;
    class Type :
        public FXManager::Type
    {
    public:
        Type(FXConditional::Type const &); /* compiler_generated() */
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
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_fx1; // 0x30
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_fx2; // 0x48
        void SetDefaults();
        void SetProperties();
    public:
        FXConditional::Type &operator=(FXConditional::Type const &); /* compiler_generated() */
    };
    static_assert(sizeof(Type) == 96, "Invalid Type size");
    class Obj :
        public FXManager::Object
    {
    public:
        Obj(FXConditional::Obj const &); /* compiler_generated() */
        Obj(FXConditional::Type const *, FXManager::Handle const &, FXManager::Handle const &, unsigned __int32);
        virtual ~Obj() override;
        virtual bool Update(float) override;
        virtual void Display(float) override;
        virtual void SetTransform(matrix4 const &) override;
        virtual void SetScale(float) override;
        virtual void SetLength(float) override;
        virtual void SetVisible(bool) override;
        virtual void SetStop() override;
    private:
        FXManager::Handle m_fx[2]; // 0x78
        unsigned __int32 m_fxCount; // 0x88
    };
    static_assert(sizeof(Obj) == 140, "Invalid Obj size");
};
static_assert(sizeof(FXConditional) == 1, "Invalid FXConditional size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FXCONDITIONAL_H__
#endif
