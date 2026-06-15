#if 0
#ifndef __FXPROPERTY_H__
#define __FXPROPERTY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FXProp
{
private:
    char const *m_name; // 0x4
    char const *m_desc; // 0x8
public:
    FXProp(FXProp const &); /* compiler_generated() */
    _inline FXProp(char const *, char const *);
    _inline char const *GetName() const;
    _inline char const *GetDescription() const;
    virtual VarMulti GetValue() const = 0;
    virtual bool SetValue(VarMulti const &) = 0;
    FXProp &operator=(FXProp const &); /* compiler_generated() */
};
static_assert(sizeof(FXProp) == 12, "Invalid FXProp size");

struct FXPropCompare :
    public std::binary_function<FXProp const *,char const *,bool>
{
    bool operator()(FXProp const *, char const *) const;
};
static_assert(sizeof(FXPropCompare) == 1, "Invalid FXPropCompare size");

class FXPropLimit<float,FXPropPredLimit<float> > :
    public FXProp
{
private:
    float *m_val; // 0xC
    FXPropPredLimit<float> m_pred; // 0x10
public:
    FXPropLimit<float,FXPropPredLimit<float> >(FXPropLimit<float,FXPropPredLimit<float> > const &); /* compiler_generated() */
    _inline FXPropLimit<float,FXPropPredLimit<float> >(char const *, char const *, float *, FXPropPredLimit<float> const &);
    virtual _inline VarMulti GetValue() const override;
    virtual _inline bool SetValue(VarMulti const &) override;
};
static_assert(sizeof(FXPropLimit<float,FXPropPredLimit<float> >) == 24, "Invalid FXPropLimit<float,FXPropPredLimit<float> > size");

class FXPropLimit<bool,FXPropPredUnchecked<bool> > :
    public FXProp
{
private:
    bool *m_val; // 0xC
    FXPropPredUnchecked<bool> m_pred; // 0x10
public:
    FXPropLimit<bool,FXPropPredUnchecked<bool> >(FXPropLimit<bool,FXPropPredUnchecked<bool> > const &); /* compiler_generated() */
    _inline FXPropLimit<bool,FXPropPredUnchecked<bool> >(char const *, char const *, bool *, FXPropPredUnchecked<bool> const &);
    virtual _inline VarMulti GetValue() const override;
    virtual _inline bool SetValue(VarMulti const &) override;
    FXPropLimit<bool,FXPropPredUnchecked<bool> > &operator=(FXPropLimit<bool,FXPropPredUnchecked<bool> > const &); /* compiler_generated() */
};
static_assert(sizeof(FXPropLimit<bool,FXPropPredUnchecked<bool> >) == 20, "Invalid FXPropLimit<bool,FXPropPredUnchecked<bool> > size");

class FXPropLimit<int,FXPropPredLimit<int> > :
    public FXProp
{
private:
    __int32 *m_val; // 0xC
    FXPropPredLimit<int> m_pred; // 0x10
public:
    FXPropLimit<int,FXPropPredLimit<int> >(FXPropLimit<int,FXPropPredLimit<int> > const &); /* compiler_generated() */
    _inline FXPropLimit<int,FXPropPredLimit<int> >(char const *, char const *, __int32 *, FXPropPredLimit<int> const &);
    virtual _inline VarMulti GetValue() const override;
    virtual _inline bool SetValue(VarMulti const &) override;
};
static_assert(sizeof(FXPropLimit<int,FXPropPredLimit<int> >) == 24, "Invalid FXPropLimit<int,FXPropPredLimit<int> > size");

class FXPropLimit<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,FXPropPredUnchecked<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > :
    public FXProp
{
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > *m_val; // 0xC
    FXPropPredUnchecked<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > m_pred; // 0x10
public:
    FXPropLimit<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,FXPropPredUnchecked<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(FXPropLimit<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,FXPropPredUnchecked<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const &); /* compiler_generated() */
    _inline FXPropLimit<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,FXPropPredUnchecked<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(char const *, char const *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > *, FXPropPredUnchecked<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > const &);
    virtual _inline VarMulti GetValue() const override;
    virtual _inline bool SetValue(VarMulti const &) override;
    FXPropLimit<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,FXPropPredUnchecked<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &operator=(FXPropLimit<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,FXPropPredUnchecked<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const &); /* compiler_generated() */
};
static_assert(sizeof(FXPropLimit<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,FXPropPredUnchecked<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >) == 20, "Invalid FXPropLimit<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,FXPropPredUnchecked<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > size");

class FXPropLimit<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > >,FXPropPredUnchecked<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > > > :
    public FXProp
{
private:
    std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > *m_val; // 0xC
    FXPropPredUnchecked<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > > m_pred; // 0x10
public:
    FXPropLimit<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > >,FXPropPredUnchecked<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > > >(FXPropLimit<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > >,FXPropPredUnchecked<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > > > const &); /* compiler_generated() */
    _inline FXPropLimit<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > >,FXPropPredUnchecked<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > > >(char const *, char const *, std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > *, FXPropPredUnchecked<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > > const &);
    virtual _inline VarMulti GetValue() const override;
    virtual _inline bool SetValue(VarMulti const &) override;
    FXPropLimit<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > >,FXPropPredUnchecked<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > > > &operator=(FXPropLimit<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > >,FXPropPredUnchecked<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > > > const &); /* compiler_generated() */
};
static_assert(sizeof(FXPropLimit<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > >,FXPropPredUnchecked<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > > >) == 20, "Invalid FXPropLimit<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > >,FXPropPredUnchecked<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > > > size");

class FXPropLimit<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > >,FXPropPredUnchecked<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > > > :
    public FXProp
{
private:
    std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > *m_val; // 0xC
    FXPropPredUnchecked<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > > m_pred; // 0x10
public:
    FXPropLimit<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > >,FXPropPredUnchecked<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > > >(FXPropLimit<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > >,FXPropPredUnchecked<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > > > const &); /* compiler_generated() */
    _inline FXPropLimit<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > >,FXPropPredUnchecked<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > > >(char const *, char const *, std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > *, FXPropPredUnchecked<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > > const &);
    virtual _inline VarMulti GetValue() const override;
    virtual _inline bool SetValue(VarMulti const &) override;
    FXPropLimit<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > >,FXPropPredUnchecked<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > > > &operator=(FXPropLimit<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > >,FXPropPredUnchecked<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > > > const &); /* compiler_generated() */
};
static_assert(sizeof(FXPropLimit<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > >,FXPropPredUnchecked<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > > >) == 20, "Invalid FXPropLimit<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > >,FXPropPredUnchecked<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > > > size");

class FXPropLimit<int,FXPropPredUnchecked<int> > :
    public FXProp
{
private:
    __int32 *m_val; // 0xC
    FXPropPredUnchecked<int> m_pred; // 0x10
public:
    FXPropLimit<int,FXPropPredUnchecked<int> >(FXPropLimit<int,FXPropPredUnchecked<int> > const &); /* compiler_generated() */
    _inline FXPropLimit<int,FXPropPredUnchecked<int> >(char const *, char const *, __int32 *, FXPropPredUnchecked<int> const &);
    virtual _inline VarMulti GetValue() const override;
    virtual _inline bool SetValue(VarMulti const &) override;
    FXPropLimit<int,FXPropPredUnchecked<int> > &operator=(FXPropLimit<int,FXPropPredUnchecked<int> > const &); /* compiler_generated() */
};
static_assert(sizeof(FXPropLimit<int,FXPropPredUnchecked<int> >) == 20, "Invalid FXPropLimit<int,FXPropPredUnchecked<int> > size");

class FXPropLimit<float,FXPropPredUnchecked<float> > :
    public FXProp
{
private:
    float *m_val; // 0xC
    FXPropPredUnchecked<float> m_pred; // 0x10
public:
    FXPropLimit<float,FXPropPredUnchecked<float> >(FXPropLimit<float,FXPropPredUnchecked<float> > const &); /* compiler_generated() */
    _inline FXPropLimit<float,FXPropPredUnchecked<float> >(char const *, char const *, float *, FXPropPredUnchecked<float> const &);
    virtual _inline VarMulti GetValue() const override;
    virtual _inline bool SetValue(VarMulti const &) override;
    FXPropLimit<float,FXPropPredUnchecked<float> > &operator=(FXPropLimit<float,FXPropPredUnchecked<float> > const &); /* compiler_generated() */
};
static_assert(sizeof(FXPropLimit<float,FXPropPredUnchecked<float> >) == 20, "Invalid FXPropLimit<float,FXPropPredUnchecked<float> > size");

class FXPropLimit<vector4,FXPropPredUnchecked<vector4> > :
    public FXProp
{
private:
    vector4 *m_val; // 0xC
    FXPropPredUnchecked<vector4> m_pred; // 0x10
public:
    FXPropLimit<vector4,FXPropPredUnchecked<vector4> >(FXPropLimit<vector4,FXPropPredUnchecked<vector4> > const &); /* compiler_generated() */
    _inline FXPropLimit<vector4,FXPropPredUnchecked<vector4> >(char const *, char const *, vector4 *, FXPropPredUnchecked<vector4> const &);
    virtual _inline VarMulti GetValue() const override;
    virtual _inline bool SetValue(VarMulti const &) override;
    FXPropLimit<vector4,FXPropPredUnchecked<vector4> > &operator=(FXPropLimit<vector4,FXPropPredUnchecked<vector4> > const &); /* compiler_generated() */
};
static_assert(sizeof(FXPropLimit<vector4,FXPropPredUnchecked<vector4> >) == 20, "Invalid FXPropLimit<vector4,FXPropPredUnchecked<vector4> > size");

class FXPropLimitTimeArray<vector3,FXPropPredUnchecked<vector3> > :
    public FXProp
{
public:
    typedef std::pair<float,vector3> TimeValue;
private:
    std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > *m_val; // 0xC
    FXPropPredUnchecked<vector3> m_pred; // 0x10
public:
    FXPropLimitTimeArray<vector3,FXPropPredUnchecked<vector3> >(FXPropLimitTimeArray<vector3,FXPropPredUnchecked<vector3> > const &); /* compiler_generated() */
    _inline FXPropLimitTimeArray<vector3,FXPropPredUnchecked<vector3> >(char const *, char const *, std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > *, FXPropPredUnchecked<vector3> const &);
    virtual _inline VarMulti GetValue() const override;
    virtual _inline bool SetValue(VarMulti const &) override;
    FXPropLimitTimeArray<vector3,FXPropPredUnchecked<vector3> > &operator=(FXPropLimitTimeArray<vector3,FXPropPredUnchecked<vector3> > const &); /* compiler_generated() */
};
static_assert(sizeof(FXPropLimitTimeArray<vector3,FXPropPredUnchecked<vector3> >) == 20, "Invalid FXPropLimitTimeArray<vector3,FXPropPredUnchecked<vector3> > size");

class FXPropLimitTimeArray<float,FXPropPredLimit<float> > :
    public FXProp
{
public:
    typedef std::pair<float,float> TimeValue;
private:
    std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > *m_val; // 0xC
    FXPropPredLimit<float> m_pred; // 0x10
public:
    FXPropLimitTimeArray<float,FXPropPredLimit<float> >(FXPropLimitTimeArray<float,FXPropPredLimit<float> > const &); /* compiler_generated() */
    _inline FXPropLimitTimeArray<float,FXPropPredLimit<float> >(char const *, char const *, std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > *, FXPropPredLimit<float> const &);
    virtual _inline VarMulti GetValue() const override;
    virtual _inline bool SetValue(VarMulti const &) override;
};
static_assert(sizeof(FXPropLimitTimeArray<float,FXPropPredLimit<float> >) == 24, "Invalid FXPropLimitTimeArray<float,FXPropPredLimit<float> > size");

class FXPropLimitTimeArray<vector3,FXPropPredVolume> :
    public FXProp
{
public:
    typedef std::pair<float,vector3> TimeValue;
private:
    std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > *m_val; // 0xC
    FXPropPredVolume m_pred; // 0x10
public:
    FXPropLimitTimeArray<vector3,FXPropPredVolume>(FXPropLimitTimeArray<vector3,FXPropPredVolume> const &); /* compiler_generated() */
    _inline FXPropLimitTimeArray<vector3,FXPropPredVolume>(char const *, char const *, std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > *, FXPropPredVolume const &);
    virtual _inline VarMulti GetValue() const override;
    virtual _inline bool SetValue(VarMulti const &) override;
    FXPropLimitTimeArray<vector3,FXPropPredVolume> &operator=(FXPropLimitTimeArray<vector3,FXPropPredVolume> const &); /* compiler_generated() */
};
static_assert(sizeof(FXPropLimitTimeArray<vector3,FXPropPredVolume>) == 20, "Invalid FXPropLimitTimeArray<vector3,FXPropPredVolume> size");

class FXPropPredUnchecked<bool>
{
public:
    bool operator()(bool const &) const;
};
static_assert(sizeof(FXPropPredUnchecked<bool>) == 1, "Invalid FXPropPredUnchecked<bool> size");

class FXPropPredUnchecked<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >
{
public:
    bool operator()(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) const;
};
static_assert(sizeof(FXPropPredUnchecked<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >) == 1, "Invalid FXPropPredUnchecked<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > size");

class FXPropPredUnchecked<vector3>
{
public:
    bool operator()(vector3 const &) const;
};
static_assert(sizeof(FXPropPredUnchecked<vector3>) == 1, "Invalid FXPropPredUnchecked<vector3> size");

class FXPropPredUnchecked<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > >
{
public:
    bool operator()(std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > const &) const;
};
static_assert(sizeof(FXPropPredUnchecked<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > >) == 1, "Invalid FXPropPredUnchecked<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > > size");

class FXPropPredUnchecked<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > >
{
public:
    bool operator()(std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > const &) const;
};
static_assert(sizeof(FXPropPredUnchecked<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > >) == 1, "Invalid FXPropPredUnchecked<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > > size");

class FXPropPredUnchecked<int>
{
public:
    bool operator()(__int32 const &) const;
};
static_assert(sizeof(FXPropPredUnchecked<int>) == 1, "Invalid FXPropPredUnchecked<int> size");

class FXPropPredUnchecked<float>
{
public:
    bool operator()(float const &) const;
};
static_assert(sizeof(FXPropPredUnchecked<float>) == 1, "Invalid FXPropPredUnchecked<float> size");

class FXPropPredUnchecked<vector4>
{
public:
    bool operator()(vector4 const &) const;
};
static_assert(sizeof(FXPropPredUnchecked<vector4>) == 1, "Invalid FXPropPredUnchecked<vector4> size");

class FXPropPredLimit<float>
{
private:
    float const m_min; // 0x0
    float const m_max; // 0x4
public:
    _inline FXPropPredLimit<float>(float const &, float const &);
    bool operator()(float const &) const;
};
static_assert(sizeof(FXPropPredLimit<float>) == 8, "Invalid FXPropPredLimit<float> size");

class FXPropPredLimit<int>
{
private:
    __int32 const m_min; // 0x0
    __int32 const m_max; // 0x4
public:
    _inline FXPropPredLimit<int>(__int32 const &, __int32 const &);
    bool operator()(__int32 const &) const;
};
static_assert(sizeof(FXPropPredLimit<int>) == 8, "Invalid FXPropPredLimit<int> size");

class FXPropPredVolume
{
public:
    bool operator()(vector3 const &) const;
};
static_assert(sizeof(FXPropPredVolume) == 1, "Invalid FXPropPredVolume size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline FXProp::FXProp(char const *, char const *) // 0x6E4F5D
{
    mangled_assert("??0FXProp@@QAE@PBD0@Z");
    todo("implement");
}

_inline char const *FXProp::GetName() const // 0x6F8DFA
{
    mangled_assert("?GetName@FXProp@@QBEPBDXZ");
    todo("implement");
}

_inline char const *FXProp::GetDescription() const // 0x6F8DF6
{
    mangled_assert("?GetDescription@FXProp@@QBEPBDXZ");
    todo("implement");
}

_inline bool FXPropCompare::operator()(FXProp const *, char const *) const // 0x6F899C
{
    mangled_assert("??RFXPropCompare@@QBE_NPBVFXProp@@PBD@Z");
    todo("implement");
}

_inline FXPropLimit<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > >,FXPropPredUnchecked<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > > >::FXPropLimit<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > >,FXPropPredUnchecked<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > > >(char const *, char const *, std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > *, FXPropPredUnchecked<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > > const &) // 0x6EA756
{
    mangled_assert("??0?$FXPropLimit@V?$vector@U?$pair@MVvector3@@@std@@V?$allocator@U?$pair@MVvector3@@@std@@@2@@std@@V?$FXPropPredUnchecked@V?$vector@U?$pair@MVvector3@@@std@@V?$allocator@U?$pair@MVvector3@@@std@@@2@@std@@@@@@QAE@PBD0PAV?$vector@U?$pair@MVvector3@@@std@@V?$allocator@U?$pair@MVvector3@@@std@@@2@@std@@ABV?$FXPropPredUnchecked@V?$vector@U?$pair@MVvector3@@@std@@V?$allocator@U?$pair@MVvector3@@@std@@@2@@std@@@@@Z");
    todo("implement");
}

_inline FXPropLimit<int,FXPropPredLimit<int> >::FXPropLimit<int,FXPropPredLimit<int> >(char const *, char const *, __int32 *, FXPropPredLimit<int> const &) // 0x6E4CFB
{
    mangled_assert("??0?$FXPropLimit@HV?$FXPropPredLimit@H@@@@QAE@PBD0PAHABV?$FXPropPredLimit@H@@@Z");
    todo("implement");
}

_inline FXPropLimit<int,FXPropPredUnchecked<int> >::FXPropLimit<int,FXPropPredUnchecked<int> >(char const *, char const *, __int32 *, FXPropPredUnchecked<int> const &) // 0x6E4D2A
{
    mangled_assert("??0?$FXPropLimit@HV?$FXPropPredUnchecked@H@@@@QAE@PBD0PAHABV?$FXPropPredUnchecked@H@@@Z");
    todo("implement");
}

_inline FXPropLimit<float,FXPropPredLimit<float> >::FXPropLimit<float,FXPropPredLimit<float> >(char const *, char const *, float *, FXPropPredLimit<float> const &) // 0x6E4D4A
{
    mangled_assert("??0?$FXPropLimit@MV?$FXPropPredLimit@M@@@@QAE@PBD0PAMABV?$FXPropPredLimit@M@@@Z");
    todo("implement");
}

_inline FXPropLimit<float,FXPropPredUnchecked<float> >::FXPropLimit<float,FXPropPredUnchecked<float> >(char const *, char const *, float *, FXPropPredUnchecked<float> const &) // 0x6E4D79
{
    mangled_assert("??0?$FXPropLimit@MV?$FXPropPredUnchecked@M@@@@QAE@PBD0PAMABV?$FXPropPredUnchecked@M@@@Z");
    todo("implement");
}

_inline FXPropLimit<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,FXPropPredUnchecked<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >::FXPropLimit<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,FXPropPredUnchecked<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(char const *, char const *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > *, FXPropPredUnchecked<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > const &) // 0x6E4D99
{
    mangled_assert("??0?$FXPropLimit@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$FXPropPredUnchecked@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@@@QAE@PBD0PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$FXPropPredUnchecked@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@@Z");
    todo("implement");
}

_inline FXPropLimit<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > >,FXPropPredUnchecked<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > > >::FXPropLimit<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > >,FXPropPredUnchecked<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > > >(char const *, char const *, std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > *, FXPropPredUnchecked<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > > const &) // 0x6E4DB9
{
    mangled_assert("??0?$FXPropLimit@V?$vector@U?$pair@MVvector4@@@std@@V?$allocator@U?$pair@MVvector4@@@std@@@2@@std@@V?$FXPropPredUnchecked@V?$vector@U?$pair@MVvector4@@@std@@V?$allocator@U?$pair@MVvector4@@@std@@@2@@std@@@@@@QAE@PBD0PAV?$vector@U?$pair@MVvector4@@@std@@V?$allocator@U?$pair@MVvector4@@@std@@@2@@std@@ABV?$FXPropPredUnchecked@V?$vector@U?$pair@MVvector4@@@std@@V?$allocator@U?$pair@MVvector4@@@std@@@2@@std@@@@@Z");
    todo("implement");
}

_inline FXPropLimit<bool,FXPropPredUnchecked<bool> >::FXPropLimit<bool,FXPropPredUnchecked<bool> >(char const *, char const *, bool *, FXPropPredUnchecked<bool> const &) // 0x6E4DD9
{
    mangled_assert("??0?$FXPropLimit@_NV?$FXPropPredUnchecked@_N@@@@QAE@PBD0PA_NABV?$FXPropPredUnchecked@_N@@@Z");
    todo("implement");
}

_inline FXPropLimit<vector4,FXPropPredUnchecked<vector4> >::FXPropLimit<vector4,FXPropPredUnchecked<vector4> >(char const *, char const *, vector4 *, FXPropPredUnchecked<vector4> const &) // 0x6ED606
{
    mangled_assert("??0?$FXPropLimit@Vvector4@@V?$FXPropPredUnchecked@Vvector4@@@@@@QAE@PBD0PAVvector4@@ABV?$FXPropPredUnchecked@Vvector4@@@@@Z");
    todo("implement");
}

_inline VarMulti FXPropLimit<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > >,FXPropPredUnchecked<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > > >::GetValue() const // 0x6EBCCC
{
    mangled_assert("?GetValue@?$FXPropLimit@V?$vector@U?$pair@MVvector3@@@std@@V?$allocator@U?$pair@MVvector3@@@std@@@2@@std@@V?$FXPropPredUnchecked@V?$vector@U?$pair@MVvector3@@@std@@V?$allocator@U?$pair@MVvector3@@@std@@@2@@std@@@@@@UBE?AVVarMulti@@XZ");
    todo("implement");
}

_inline VarMulti FXPropLimit<int,FXPropPredLimit<int> >::GetValue() const // 0x6E6328
{
    mangled_assert("?GetValue@?$FXPropLimit@HV?$FXPropPredLimit@H@@@@UBE?AVVarMulti@@XZ");
    todo("implement");
}

_inline VarMulti FXPropLimit<int,FXPropPredUnchecked<int> >::GetValue() const // 0x6E6342
{
    mangled_assert("?GetValue@?$FXPropLimit@HV?$FXPropPredUnchecked@H@@@@UBE?AVVarMulti@@XZ");
    todo("implement");
}

_inline VarMulti FXPropLimit<float,FXPropPredLimit<float> >::GetValue() const // 0x6E635C
{
    mangled_assert("?GetValue@?$FXPropLimit@MV?$FXPropPredLimit@M@@@@UBE?AVVarMulti@@XZ");
    todo("implement");
}

_inline VarMulti FXPropLimit<float,FXPropPredUnchecked<float> >::GetValue() const // 0x6E6376
{
    mangled_assert("?GetValue@?$FXPropLimit@MV?$FXPropPredUnchecked@M@@@@UBE?AVVarMulti@@XZ");
    todo("implement");
}

_inline VarMulti FXPropLimit<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,FXPropPredUnchecked<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >::GetValue() const // 0x6E6390
{
    mangled_assert("?GetValue@?$FXPropLimit@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$FXPropPredUnchecked@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@@@UBE?AVVarMulti@@XZ");
    todo("implement");
}

_inline VarMulti FXPropLimit<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > >,FXPropPredUnchecked<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > > >::GetValue() const // 0x6E63AA
{
    mangled_assert("?GetValue@?$FXPropLimit@V?$vector@U?$pair@MVvector4@@@std@@V?$allocator@U?$pair@MVvector4@@@std@@@2@@std@@V?$FXPropPredUnchecked@V?$vector@U?$pair@MVvector4@@@std@@V?$allocator@U?$pair@MVvector4@@@std@@@2@@std@@@@@@UBE?AVVarMulti@@XZ");
    todo("implement");
}

_inline VarMulti FXPropLimit<bool,FXPropPredUnchecked<bool> >::GetValue() const // 0x6E63C4
{
    mangled_assert("?GetValue@?$FXPropLimit@_NV?$FXPropPredUnchecked@_N@@@@UBE?AVVarMulti@@XZ");
    todo("implement");
}

_inline VarMulti FXPropLimit<vector4,FXPropPredUnchecked<vector4> >::GetValue() const // 0x6EDCFD
{
    mangled_assert("?GetValue@?$FXPropLimit@Vvector4@@V?$FXPropPredUnchecked@Vvector4@@@@@@UBE?AVVarMulti@@XZ");
    todo("implement");
}

_inline bool FXPropLimit<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > >,FXPropPredUnchecked<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > > >::SetValue(VarMulti const &) // 0x6EC8CA
{
    mangled_assert("?SetValue@?$FXPropLimit@V?$vector@U?$pair@MVvector3@@@std@@V?$allocator@U?$pair@MVvector3@@@std@@@2@@std@@V?$FXPropPredUnchecked@V?$vector@U?$pair@MVvector3@@@std@@V?$allocator@U?$pair@MVvector3@@@std@@@2@@std@@@@@@UAE_NABVVarMulti@@@Z");
    todo("implement");
}

_inline bool FXPropLimit<int,FXPropPredLimit<int> >::SetValue(VarMulti const &) // 0x6E7B7E
{
    mangled_assert("?SetValue@?$FXPropLimit@HV?$FXPropPredLimit@H@@@@UAE_NABVVarMulti@@@Z");
    todo("implement");
}

_inline bool FXPropLimit<int,FXPropPredUnchecked<int> >::SetValue(VarMulti const &) // 0x6E7BB6
{
    mangled_assert("?SetValue@?$FXPropLimit@HV?$FXPropPredUnchecked@H@@@@UAE_NABVVarMulti@@@Z");
    todo("implement");
}

_inline bool FXPropLimit<float,FXPropPredLimit<float> >::SetValue(VarMulti const &) // 0x6E7BE0
{
    mangled_assert("?SetValue@?$FXPropLimit@MV?$FXPropPredLimit@M@@@@UAE_NABVVarMulti@@@Z");
    todo("implement");
}

_inline bool FXPropLimit<float,FXPropPredUnchecked<float> >::SetValue(VarMulti const &) // 0x6E7C0E
{
    mangled_assert("?SetValue@?$FXPropLimit@MV?$FXPropPredUnchecked@M@@@@UAE_NABVVarMulti@@@Z");
    todo("implement");
}

_inline bool FXPropLimit<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,FXPropPredUnchecked<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >::SetValue(VarMulti const &) // 0x6E7C2C
{
    mangled_assert("?SetValue@?$FXPropLimit@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$FXPropPredUnchecked@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@@@UAE_NABVVarMulti@@@Z");
    todo("implement");
}

_inline bool FXPropLimit<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > >,FXPropPredUnchecked<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > > >::SetValue(VarMulti const &) // 0x6E7C8E
{
    mangled_assert("?SetValue@?$FXPropLimit@V?$vector@U?$pair@MVvector4@@@std@@V?$allocator@U?$pair@MVvector4@@@std@@@2@@std@@V?$FXPropPredUnchecked@V?$vector@U?$pair@MVvector4@@@std@@V?$allocator@U?$pair@MVvector4@@@std@@@2@@std@@@@@@UAE_NABVVarMulti@@@Z");
    todo("implement");
}

_inline bool FXPropLimit<bool,FXPropPredUnchecked<bool> >::SetValue(VarMulti const &) // 0x6E7CE9
{
    mangled_assert("?SetValue@?$FXPropLimit@_NV?$FXPropPredUnchecked@_N@@@@UAE_NABVVarMulti@@@Z");
    todo("implement");
}

_inline bool FXPropLimit<vector4,FXPropPredUnchecked<vector4> >::SetValue(VarMulti const &) // 0x6EEFA6
{
    mangled_assert("?SetValue@?$FXPropLimit@Vvector4@@V?$FXPropPredUnchecked@Vvector4@@@@@@UAE_NABVVarMulti@@@Z");
    todo("implement");
}

_inline FXPropLimitTimeArray<float,FXPropPredLimit<float> >::FXPropLimitTimeArray<float,FXPropPredLimit<float> >(char const *, char const *, std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > *, FXPropPredLimit<float> const &) // 0x6E4DF9
{
    mangled_assert("??0?$FXPropLimitTimeArray@MV?$FXPropPredLimit@M@@@@QAE@PBD0PAV?$vector@U?$pair@MM@std@@V?$allocator@U?$pair@MM@std@@@2@@std@@ABV?$FXPropPredLimit@M@@@Z");
    todo("implement");
}

_inline FXPropLimitTimeArray<vector3,FXPropPredUnchecked<vector3> >::FXPropLimitTimeArray<vector3,FXPropPredUnchecked<vector3> >(char const *, char const *, std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > *, FXPropPredUnchecked<vector3> const &) // 0x6E4E28
{
    mangled_assert("??0?$FXPropLimitTimeArray@Vvector3@@V?$FXPropPredUnchecked@Vvector3@@@@@@QAE@PBD0PAV?$vector@U?$pair@MVvector3@@@std@@V?$allocator@U?$pair@MVvector3@@@std@@@2@@std@@ABV?$FXPropPredUnchecked@Vvector3@@@@@Z");
    todo("implement");
}

_inline FXPropLimitTimeArray<vector3,FXPropPredVolume>::FXPropLimitTimeArray<vector3,FXPropPredVolume>(char const *, char const *, std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > *, FXPropPredVolume const &) // 0x6E8E59
{
    mangled_assert("??0?$FXPropLimitTimeArray@Vvector3@@VFXPropPredVolume@@@@QAE@PBD0PAV?$vector@U?$pair@MVvector3@@@std@@V?$allocator@U?$pair@MVvector3@@@std@@@2@@std@@ABVFXPropPredVolume@@@Z");
    todo("implement");
}

_inline VarMulti FXPropLimitTimeArray<float,FXPropPredLimit<float> >::GetValue() const // 0x6E63DE
{
    mangled_assert("?GetValue@?$FXPropLimitTimeArray@MV?$FXPropPredLimit@M@@@@UBE?AVVarMulti@@XZ");
    todo("implement");
}

_inline VarMulti FXPropLimitTimeArray<vector3,FXPropPredUnchecked<vector3> >::GetValue() const // 0x6E63F8
{
    mangled_assert("?GetValue@?$FXPropLimitTimeArray@Vvector3@@V?$FXPropPredUnchecked@Vvector3@@@@@@UBE?AVVarMulti@@XZ");
    todo("implement");
}

_inline VarMulti FXPropLimitTimeArray<vector3,FXPropPredVolume>::GetValue() const // 0x6E9A70
{
    mangled_assert("?GetValue@?$FXPropLimitTimeArray@Vvector3@@VFXPropPredVolume@@@@UBE?AVVarMulti@@XZ");
    todo("implement");
}

_inline bool FXPropLimitTimeArray<float,FXPropPredLimit<float> >::SetValue(VarMulti const &) // 0x6E7D13
{
    mangled_assert("?SetValue@?$FXPropLimitTimeArray@MV?$FXPropPredLimit@M@@@@UAE_NABVVarMulti@@@Z");
    todo("implement");
}

_inline bool FXPropLimitTimeArray<vector3,FXPropPredUnchecked<vector3> >::SetValue(VarMulti const &) // 0x6E7D98
{
    mangled_assert("?SetValue@?$FXPropLimitTimeArray@Vvector3@@V?$FXPropPredUnchecked@Vvector3@@@@@@UAE_NABVVarMulti@@@Z");
    todo("implement");
}

_inline bool FXPropLimitTimeArray<vector3,FXPropPredVolume>::SetValue(VarMulti const &) // 0x6EA30F
{
    mangled_assert("?SetValue@?$FXPropLimitTimeArray@Vvector3@@VFXPropPredVolume@@@@UAE_NABVVarMulti@@@Z");
    todo("implement");
}

_inline bool FXPropPredUnchecked<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > >::operator()(std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > const &) const // 0x6EACA4
{
    mangled_assert("??R?$FXPropPredUnchecked@V?$vector@U?$pair@MVvector3@@@std@@V?$allocator@U?$pair@MVvector3@@@std@@@2@@std@@@@QBE_NABV?$vector@U?$pair@MVvector3@@@std@@V?$allocator@U?$pair@MVvector3@@@std@@@2@@std@@@Z");
    todo("implement");
}

_inline bool FXPropPredUnchecked<int>::operator()(__int32 const &) const // 0x6E5C23
{
    mangled_assert("??R?$FXPropPredUnchecked@H@@QBE_NABH@Z");
    todo("implement");
}

_inline bool FXPropPredUnchecked<float>::operator()(float const &) const // 0x6E5C28
{
    mangled_assert("??R?$FXPropPredUnchecked@M@@QBE_NABM@Z");
    todo("implement");
}

_inline bool FXPropPredUnchecked<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >::operator()(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) const // 0x6E5C2D
{
    mangled_assert("??R?$FXPropPredUnchecked@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@QBE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

_inline bool FXPropPredUnchecked<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > >::operator()(std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > const &) const // 0x6E5C32
{
    mangled_assert("??R?$FXPropPredUnchecked@V?$vector@U?$pair@MVvector4@@@std@@V?$allocator@U?$pair@MVvector4@@@std@@@2@@std@@@@QBE_NABV?$vector@U?$pair@MVvector4@@@std@@V?$allocator@U?$pair@MVvector4@@@std@@@2@@std@@@Z");
    todo("implement");
}

_inline bool FXPropPredUnchecked<vector3>::operator()(vector3 const &) const // 0x6E5C37
{
    mangled_assert("??R?$FXPropPredUnchecked@Vvector3@@@@QBE_NABVvector3@@@Z");
    todo("implement");
}

_inline bool FXPropPredUnchecked<bool>::operator()(bool const &) const // 0x6E5C3C
{
    mangled_assert("??R?$FXPropPredUnchecked@_N@@QBE_NAB_N@Z");
    todo("implement");
}

_inline bool FXPropPredUnchecked<vector4>::operator()(vector4 const &) const // 0x6EDB75
{
    mangled_assert("??R?$FXPropPredUnchecked@Vvector4@@@@QBE_NABVvector4@@@Z");
    todo("implement");
}

_inline FXPropPredLimit<int>::FXPropPredLimit<int>(__int32 const &, __int32 const &) // 0x6E4E48
{
    mangled_assert("??0?$FXPropPredLimit@H@@QAE@ABH0@Z");
    todo("implement");
}

_inline FXPropPredLimit<float>::FXPropPredLimit<float>(float const &, float const &) // 0x6E4E5E
{
    mangled_assert("??0?$FXPropPredLimit@M@@QAE@ABM0@Z");
    todo("implement");
}

_inline bool FXPropPredLimit<int>::operator()(__int32 const &) const // 0x6E5BE9
{
    mangled_assert("??R?$FXPropPredLimit@H@@QBE_NABH@Z");
    todo("implement");
}

_inline bool FXPropPredLimit<float>::operator()(float const &) const // 0x6E5C02
{
    mangled_assert("??R?$FXPropPredLimit@M@@QBE_NABM@Z");
    todo("implement");
}

_inline bool FXPropPredVolume::operator()(vector3 const &) const // 0x6E902E
{
    mangled_assert("??RFXPropPredVolume@@QBE_NABVvector3@@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __FXPROPERTY_H__
#endif
