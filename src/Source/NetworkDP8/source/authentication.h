#if 0
#ifndef __AUTHENTICATION_H__
#define __AUTHENTICATION_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Net::Authentication
{
public:
    struct Hash
    {
        unsigned char m_value[16]; // 0x0
        _inline Hash(unsigned char const *);
    };
    static_assert(sizeof(Hash) == 16, "Invalid Hash size");
    typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Net::Authentication::Hash> > > hashiterator;
    _inline Authentication(Net::Authentication const &); /* compiler_generated() */
    Authentication();
    void AddEntry(unsigned char const *, wchar_t const *);
    _inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Net::Authentication::Hash> > > begin() const;
    _inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Net::Authentication::Hash> > > end() const;
    _inline unsigned __int32 size() const;
    _inline std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > const &GetMods() const;
    _inline std::vector<wchar_t,std::allocator<wchar_t> > const &GetDescriptions() const;
    _inline void const *GetRaw() const;
    _inline unsigned __int32 GetRawSize() const;
private:
    std::vector<Net::Authentication::Hash,std::allocator<Net::Authentication::Hash> > m_hashs; // 0x0
    std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > m_mods; // 0xC
    std::vector<wchar_t,std::allocator<wchar_t> > m_descriptions; // 0x18
public:
    _inline ~Authentication(); /* compiler_generated() */
    Net::Authentication &operator=(Net::Authentication const &); /* compiler_generated() */
};
static_assert(sizeof(Net::Authentication) == 36, "Invalid Net::Authentication size");

/* ---------- prototypes */

extern _inline bool Net::operator==(Net::Authentication::Hash const &x, Net::Authentication::Hash const &y);
extern _inline bool Net::operator!=(Net::Authentication::Hash const &x, Net::Authentication::Hash const &y);

/* ---------- globals */

/* ---------- public code */

_inline Net::Authentication::Hash::Hash(unsigned char const *) // 0x6D56CE
{
    mangled_assert("??0Hash@Authentication@Net@@QAE@QBE@Z");
    todo("implement");
}

_inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Net::Authentication::Hash> > > Net::Authentication::begin() const // 0x6D41FE
{
    mangled_assert("?begin@Authentication@Net@@QBE?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UHash@Authentication@Net@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Net::Authentication::Hash> > > Net::Authentication::end() const // 0x6D43FD
{
    mangled_assert("?end@Authentication@Net@@QBE?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UHash@Authentication@Net@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline unsigned __int32 Net::Authentication::size() const // 0x6D4D81
{
    mangled_assert("?size@Authentication@Net@@QBEIXZ");
    todo("implement");
}

_inline std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > const &Net::Authentication::GetMods() const // 0x5B9212
{
    mangled_assert("?GetMods@Authentication@Net@@QBEABV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@XZ");
    todo("implement");
}

_inline std::vector<wchar_t,std::allocator<wchar_t> > const &Net::Authentication::GetDescriptions() const // 0x6D3270
{
    mangled_assert("?GetDescriptions@Authentication@Net@@QBEABV?$vector@_WV?$allocator@_W@std@@@std@@XZ");
    todo("implement");
}

_inline void const *Net::Authentication::GetRaw() const // 0x6D3643
{
    mangled_assert("?GetRaw@Authentication@Net@@QBEPBXXZ");
    todo("implement");
}

_inline unsigned __int32 Net::Authentication::GetRawSize() const // 0x6D3646
{
    mangled_assert("?GetRawSize@Authentication@Net@@QBEIXZ");
    todo("implement");
}

_inline bool Net::operator==(Net::Authentication::Hash const &x, Net::Authentication::Hash const &y) // 0x6D2692
{
    mangled_assert("??8Net@@YG_NABUHash@Authentication@0@0@Z");
    todo("implement");
}

_inline bool Net::operator!=(Net::Authentication::Hash const &x, Net::Authentication::Hash const &y) // 0x6D2720
{
    mangled_assert("??9Net@@YG_NABUHash@Authentication@0@0@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __AUTHENTICATION_H__
#endif
