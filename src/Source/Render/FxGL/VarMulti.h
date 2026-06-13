#if 0
#ifndef __VARMULTI_H__
#define __VARMULTI_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class VarMulti
{
public:
    enum VarType
    {
        VARTYPE_FLOAT = 0,
        VARTYPE_BOOL,
        VARTYPE_INT,
        VARTYPE_VECTOR3,
        VARTYPE_STRING,
        VARTYPE_COLOUR,
        VARTYPE_ARRAY_FLOAT,
        VARTYPE_ARRAY_VECTOR3,
        VARTYPE_ARRAY_COLOUR,
        VARTYPE_ARRAY_TIMEFLOAT,
        VARTYPE_ARRAY_TIMEVECTOR3,
        VARTYPE_ARRAY_TIMECOLOUR,
        VARTYPE_EMPTY,
    };
    VarMulti(VarMulti const &);
    VarMulti();
    ~VarMulti();
    VarMulti &operator=(VarMulti const &);
    bool IsEmpty() const;
    _inline VarMulti::VarType GetType() const;
    _inline void SetFloat(float);
    _inline bool GetFloat(float &) const;
    _inline void SetBool(bool);
    _inline bool GetBool(bool &) const;
    _inline void SetInt(__int32);
    _inline bool GetInt(__int32 &) const;
    void SetVector3(vector3 const &);
    _inline bool GetVector3(vector3 &) const;
    void SetString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    _inline bool GetString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &) const;
    void SetColour(vector4 const &);
    _inline bool GetColour(vector4 &) const;
    void SetArrayFloat(std::vector<float,std::allocator<float> > const &);
    bool GetArrayFloat(std::vector<float,std::allocator<float> > &) const;
    void SetArrayVector3(std::vector<vector3,std::allocator<vector3> > const &);
    bool GetArrayVector3(std::vector<vector3,std::allocator<vector3> > &) const;
    void SetArrayColour(std::vector<vector4,std::allocator<vector4> > const &);
    bool GetArrayColour(std::vector<vector4,std::allocator<vector4> > &) const;
    void SetArrayTimeFloat(std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > const &);
    bool GetArrayTimeFloat(std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > &) const;
    void SetArrayTimeColour(std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > const &);
    bool GetArrayTimeColour(std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > &) const;
    void SetArrayTimeVector3(std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > const &);
    bool GetArrayTimeVector3(std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > &) const;
private:
    VarMulti::VarType m_type; // 0x0
    unsigned char m_buf[32]; // 0x4
    void Reset();
};
static_assert(sizeof(VarMulti) == 36, "Invalid VarMulti size");

/* ---------- prototypes */

extern _inline void VarMultiFill<float>(VarMulti &v, float const &t);
extern _inline void VarMultiFill<bool>(VarMulti &v, bool const &t);
extern _inline void VarMultiFill<int>(VarMulti &v, __int32 const &t);
extern _inline void VarMultiFill<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >(VarMulti &v, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &t);
extern _inline void VarMultiFill<vector4>(VarMulti &v, vector4 const &t);
extern _inline void VarMultiFill<std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > >(VarMulti &v, std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > const &t);
extern _inline void VarMultiFill<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > >(VarMulti &v, std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > const &t);
extern _inline void VarMultiFill<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > >(VarMulti &v, std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > const &t);
extern _inline VarMulti VarMultiFill<int>(__int32 const &t);
extern _inline VarMulti VarMultiFill<float>(float const &t);
extern _inline VarMulti VarMultiFill<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &t);
extern _inline VarMulti VarMultiFill<std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > >(std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > const &t);
extern _inline VarMulti VarMultiFill<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > >(std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > const &t);
extern _inline VarMulti VarMultiFill<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > >(std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > const &t);
extern _inline VarMulti VarMultiFill<bool>(bool const &t);
extern _inline VarMulti VarMultiFill<vector4>(vector4 const &t);
extern _inline bool VarMultiExtract<float>(VarMulti const &v, float &t);
extern _inline bool VarMultiExtract<bool>(VarMulti const &v, bool &t);
extern _inline bool VarMultiExtract<int>(VarMulti const &v, __int32 &t);
extern _inline bool VarMultiExtract<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >(VarMulti const &v, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &t);
extern _inline bool VarMultiExtract<vector4>(VarMulti const &v, vector4 &t);
extern _inline bool VarMultiExtract<std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > >(VarMulti const &v, std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > &t);
extern _inline bool VarMultiExtract<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > >(VarMulti const &v, std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > &t);
extern _inline bool VarMultiExtract<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > >(VarMulti const &v, std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > &t);

/* ---------- globals */

/* ---------- public code */

_extern void _sub_6E3A2A(VarMulti &, float const &);
_inline void VarMultiFill<float>(VarMulti &v, float const &t) // 0x6E3A2A
{
    mangled_assert("??$VarMultiFill@M@@YGXAAVVarMulti@@ABM@Z");
    todo("implement");
    _sub_6E3A2A(v, t);
}

_extern void _sub_6E3BE0(VarMulti &, bool const &);
_inline void VarMultiFill<bool>(VarMulti &v, bool const &t) // 0x6E3BE0
{
    mangled_assert("??$VarMultiFill@_N@@YGXAAVVarMulti@@AB_N@Z");
    todo("implement");
    _sub_6E3BE0(v, t);
}

_extern void _sub_6E39AF(VarMulti &, __int32 const &);
_inline void VarMultiFill<int>(VarMulti &v, __int32 const &t) // 0x6E39AF
{
    mangled_assert("??$VarMultiFill@H@@YGXAAVVarMulti@@ABH@Z");
    todo("implement");
    _sub_6E39AF(v, t);
}

_extern void _sub_6E3A98(VarMulti &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
_inline void VarMultiFill<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >(VarMulti &v, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &t) // 0x6E3A98
{
    mangled_assert("??$VarMultiFill@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@YGXAAVVarMulti@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_6E3A98(v, t);
}

_extern void _sub_6ED187(VarMulti &, vector4 const &);
_inline void VarMultiFill<vector4>(VarMulti &v, vector4 const &t) // 0x6ED187
{
    mangled_assert("??$VarMultiFill@Vvector4@@@@YGXAAVVarMulti@@ABVvector4@@@Z");
    todo("implement");
    _sub_6ED187(v, t);
}

_extern void _sub_6E3AEA(VarMulti &, std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > const &);
_inline void VarMultiFill<std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > >(VarMulti &v, std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > const &t) // 0x6E3AEA
{
    mangled_assert("??$VarMultiFill@V?$vector@U?$pair@MM@std@@V?$allocator@U?$pair@MM@std@@@2@@std@@@@YGXAAVVarMulti@@ABV?$vector@U?$pair@MM@std@@V?$allocator@U?$pair@MM@std@@@2@@std@@@Z");
    todo("implement");
    _sub_6E3AEA(v, t);
}

_extern void _sub_6E3B3C(VarMulti &, std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > const &);
_inline void VarMultiFill<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > >(VarMulti &v, std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > const &t) // 0x6E3B3C
{
    mangled_assert("??$VarMultiFill@V?$vector@U?$pair@MVvector3@@@std@@V?$allocator@U?$pair@MVvector3@@@std@@@2@@std@@@@YGXAAVVarMulti@@ABV?$vector@U?$pair@MVvector3@@@std@@V?$allocator@U?$pair@MVvector3@@@std@@@2@@std@@@Z");
    todo("implement");
    _sub_6E3B3C(v, t);
}

_extern void _sub_6E3B8E(VarMulti &, std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > const &);
_inline void VarMultiFill<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > >(VarMulti &v, std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > const &t) // 0x6E3B8E
{
    mangled_assert("??$VarMultiFill@V?$vector@U?$pair@MVvector4@@@std@@V?$allocator@U?$pair@MVvector4@@@std@@@2@@std@@@@YGXAAVVarMulti@@ABV?$vector@U?$pair@MVvector4@@@std@@V?$allocator@U?$pair@MVvector4@@@std@@@2@@std@@@Z");
    todo("implement");
    _sub_6E3B8E(v, t);
}

_extern VarMulti _sub_6E395F(__int32 const &);
_inline VarMulti VarMultiFill<int>(__int32 const &t) // 0x6E395F
{
    mangled_assert("??$VarMultiFill@H@@YG?AVVarMulti@@ABH@Z");
    todo("implement");
    VarMulti __result = _sub_6E395F(t);
    return __result;
}

_extern VarMulti _sub_6E39D0(float const &);
_inline VarMulti VarMultiFill<float>(float const &t) // 0x6E39D0
{
    mangled_assert("??$VarMultiFill@M@@YG?AVVarMulti@@ABM@Z");
    todo("implement");
    VarMulti __result = _sub_6E39D0(t);
    return __result;
}

_extern VarMulti _sub_6E3A56(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
_inline VarMulti VarMultiFill<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &t) // 0x6E3A56
{
    mangled_assert("??$VarMultiFill@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@YG?AVVarMulti@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    VarMulti __result = _sub_6E3A56(t);
    return __result;
}

_extern VarMulti _sub_6E3AA8(std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > const &);
_inline VarMulti VarMultiFill<std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > >(std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > const &t) // 0x6E3AA8
{
    mangled_assert("??$VarMultiFill@V?$vector@U?$pair@MM@std@@V?$allocator@U?$pair@MM@std@@@2@@std@@@@YG?AVVarMulti@@ABV?$vector@U?$pair@MM@std@@V?$allocator@U?$pair@MM@std@@@2@@std@@@Z");
    todo("implement");
    VarMulti __result = _sub_6E3AA8(t);
    return __result;
}

_extern VarMulti _sub_6E3AFA(std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > const &);
_inline VarMulti VarMultiFill<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > >(std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > const &t) // 0x6E3AFA
{
    mangled_assert("??$VarMultiFill@V?$vector@U?$pair@MVvector3@@@std@@V?$allocator@U?$pair@MVvector3@@@std@@@2@@std@@@@YG?AVVarMulti@@ABV?$vector@U?$pair@MVvector3@@@std@@V?$allocator@U?$pair@MVvector3@@@std@@@2@@std@@@Z");
    todo("implement");
    VarMulti __result = _sub_6E3AFA(t);
    return __result;
}

_extern VarMulti _sub_6E3B4C(std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > const &);
_inline VarMulti VarMultiFill<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > >(std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > const &t) // 0x6E3B4C
{
    mangled_assert("??$VarMultiFill@V?$vector@U?$pair@MVvector4@@@std@@V?$allocator@U?$pair@MVvector4@@@std@@@2@@std@@@@YG?AVVarMulti@@ABV?$vector@U?$pair@MVvector4@@@std@@V?$allocator@U?$pair@MVvector4@@@std@@@2@@std@@@Z");
    todo("implement");
    VarMulti __result = _sub_6E3B4C(t);
    return __result;
}

_extern VarMulti _sub_6E3B9E(bool const &);
_inline VarMulti VarMultiFill<bool>(bool const &t) // 0x6E3B9E
{
    mangled_assert("??$VarMultiFill@_N@@YG?AVVarMulti@@AB_N@Z");
    todo("implement");
    VarMulti __result = _sub_6E3B9E(t);
    return __result;
}

_extern VarMulti _sub_6ED145(vector4 const &);
_inline VarMulti VarMultiFill<vector4>(vector4 const &t) // 0x6ED145
{
    mangled_assert("??$VarMultiFill@Vvector4@@@@YG?AVVarMulti@@ABVvector4@@@Z");
    todo("implement");
    VarMulti __result = _sub_6ED145(t);
    return __result;
}

_extern bool _sub_6E38EC(VarMulti const &, float &);
_inline bool VarMultiExtract<float>(VarMulti const &v, float &t) // 0x6E38EC
{
    mangled_assert("??$VarMultiExtract@M@@YG_NABVVarMulti@@AAM@Z");
    todo("implement");
    bool __result = _sub_6E38EC(v, t);
    return __result;
}

_extern bool _sub_6E3944(VarMulti const &, bool &);
_inline bool VarMultiExtract<bool>(VarMulti const &v, bool &t) // 0x6E3944
{
    mangled_assert("??$VarMultiExtract@_N@@YG_NABVVarMulti@@AA_N@Z");
    todo("implement");
    bool __result = _sub_6E3944(v, t);
    return __result;
}

_extern bool _sub_6E38D1(VarMulti const &, __int32 &);
_inline bool VarMultiExtract<int>(VarMulti const &v, __int32 &t) // 0x6E38D1
{
    mangled_assert("??$VarMultiExtract@H@@YG_NABVVarMulti@@AAH@Z");
    todo("implement");
    bool __result = _sub_6E38D1(v, t);
    return __result;
}

_extern bool _sub_6E3904(VarMulti const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
_inline bool VarMultiExtract<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >(VarMulti const &v, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &t) // 0x6E3904
{
    mangled_assert("??$VarMultiExtract@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@YG_NABVVarMulti@@AAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_6E3904(v, t);
    return __result;
}

_extern bool _sub_6ED135(VarMulti const &, vector4 &);
_inline bool VarMultiExtract<vector4>(VarMulti const &v, vector4 &t) // 0x6ED135
{
    mangled_assert("??$VarMultiExtract@Vvector4@@@@YG_NABVVarMulti@@AAVvector4@@@Z");
    todo("implement");
    bool __result = _sub_6ED135(v, t);
    return __result;
}

_extern bool _sub_6E3914(VarMulti const &, std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > &);
_inline bool VarMultiExtract<std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > >(VarMulti const &v, std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > &t) // 0x6E3914
{
    mangled_assert("??$VarMultiExtract@V?$vector@U?$pair@MM@std@@V?$allocator@U?$pair@MM@std@@@2@@std@@@@YG_NABVVarMulti@@AAV?$vector@U?$pair@MM@std@@V?$allocator@U?$pair@MM@std@@@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_6E3914(v, t);
    return __result;
}

_extern bool _sub_6E3924(VarMulti const &, std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > &);
_inline bool VarMultiExtract<std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > >(VarMulti const &v, std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > &t) // 0x6E3924
{
    mangled_assert("??$VarMultiExtract@V?$vector@U?$pair@MVvector3@@@std@@V?$allocator@U?$pair@MVvector3@@@std@@@2@@std@@@@YG_NABVVarMulti@@AAV?$vector@U?$pair@MVvector3@@@std@@V?$allocator@U?$pair@MVvector3@@@std@@@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_6E3924(v, t);
    return __result;
}

_extern bool _sub_6E3934(VarMulti const &, std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > &);
_inline bool VarMultiExtract<std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > >(VarMulti const &v, std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > &t) // 0x6E3934
{
    mangled_assert("??$VarMultiExtract@V?$vector@U?$pair@MVvector4@@@std@@V?$allocator@U?$pair@MVvector4@@@std@@@2@@std@@@@YG_NABVVarMulti@@AAV?$vector@U?$pair@MVvector4@@@std@@V?$allocator@U?$pair@MVvector4@@@std@@@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_6E3934(v, t);
    return __result;
}

_extern VarMulti::VarType _sub_6E2787(VarMulti const *const);
_inline VarMulti::VarType VarMulti::GetType() const // 0x6E2787
{
    mangled_assert("?GetType@VarMulti@@QBE?AW4VarType@1@XZ");
    todo("implement");
    VarMulti::VarType __result = _sub_6E2787(this);
    return __result;
}

_extern void _sub_6E2AB8(VarMulti *const, float);
_inline void VarMulti::SetFloat(float) // 0x6E2AB8
{
    mangled_assert("?SetFloat@VarMulti@@QAEXM@Z");
    todo("implement");
    _sub_6E2AB8(this, arg);
}

_extern bool _sub_6E2734(VarMulti const *const, float &);
_inline bool VarMulti::GetFloat(float &) const // 0x6E2734
{
    mangled_assert("?GetFloat@VarMulti@@QBE_NAAM@Z");
    todo("implement");
    bool __result = _sub_6E2734(this, arg);
    return __result;
}

_extern void _sub_6E2A80(VarMulti *const, bool);
_inline void VarMulti::SetBool(bool) // 0x6E2A80
{
    mangled_assert("?SetBool@VarMulti@@QAEX_N@Z");
    todo("implement");
    _sub_6E2A80(this, arg);
}

_extern bool _sub_6E2700(VarMulti const *const, bool &);
_inline bool VarMulti::GetBool(bool &) const // 0x6E2700
{
    mangled_assert("?GetBool@VarMulti@@QBE_NAA_N@Z");
    todo("implement");
    bool __result = _sub_6E2700(this, arg);
    return __result;
}

_extern void _sub_6E2AD2(VarMulti *const, __int32);
_inline void VarMulti::SetInt(__int32) // 0x6E2AD2
{
    mangled_assert("?SetInt@VarMulti@@QAEXH@Z");
    todo("implement");
    _sub_6E2AD2(this, arg);
}

_extern bool _sub_6E274B(VarMulti const *const, __int32 &);
_inline bool VarMulti::GetInt(__int32 &) const // 0x6E274B
{
    mangled_assert("?GetInt@VarMulti@@QBE_NAAH@Z");
    todo("implement");
    bool __result = _sub_6E274B(this, arg);
    return __result;
}

_extern bool _sub_6E2762(VarMulti const *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
_inline bool VarMulti::GetString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &) const // 0x6E2762
{
    mangled_assert("?GetString@VarMulti@@QBE_NAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_6E2762(this, arg);
    return __result;
}

_extern bool _sub_6E278A(VarMulti const *const, vector3 &);
_inline bool VarMulti::GetVector3(vector3 &) const // 0x6E278A
{
    mangled_assert("?GetVector3@VarMulti@@QBE_NAAVvector3@@@Z");
    todo("implement");
    bool __result = _sub_6E278A(this, arg);
    return __result;
}

_extern bool _sub_6E2717(VarMulti const *const, vector4 &);
_inline bool VarMulti::GetColour(vector4 &) const // 0x6E2717
{
    mangled_assert("?GetColour@VarMulti@@QBE_NAAVvector4@@@Z");
    todo("implement");
    bool __result = _sub_6E2717(this, arg);
    return __result;
}

/* ---------- private code */

#endif // __VARMULTI_H__
#endif
