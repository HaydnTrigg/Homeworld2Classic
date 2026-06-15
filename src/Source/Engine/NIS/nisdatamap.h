#if 0
#ifndef __NISDATAMAP_H__
#define __NISDATAMAP_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class NISDataMap<AnimCurve>
{
public:
    NISDataMap<AnimCurve>(NISDataMap<AnimCurve> const &); /* compiler_generated() */
    _inline NISDataMap<AnimCurve>();
    _inline ~NISDataMap<AnimCurve>();
    _inline void Add(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, AnimCurve *);
    _inline AnimCurve *Get(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    _inline void Clear();
    struct DataRef
    {
        unsigned __int32 m_count; // 0x0
        AnimCurve *m_data; // 0x4
    };
    static_assert(sizeof(DataRef) == 8, "Invalid DataRef size");
    typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NISDataMap<AnimCurve>::DataRef,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NISDataMap<AnimCurve>::DataRef> > > DataRefMap;
private:
    std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NISDataMap<AnimCurve>::DataRef,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NISDataMap<AnimCurve>::DataRef> > > m_map; // 0x0
public:
    NISDataMap<AnimCurve> &operator=(NISDataMap<AnimCurve> const &); /* compiler_generated() */
};
static_assert(sizeof(NISDataMap<AnimCurve>) == 8, "Invalid NISDataMap<AnimCurve> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline NISDataMap<AnimCurve>::NISDataMap<AnimCurve>() // 0x54E975
{
    mangled_assert("??0?$NISDataMap@VAnimCurve@@@@QAE@XZ");
    todo("implement");
}

_inline NISDataMap<AnimCurve>::~NISDataMap<AnimCurve>() // 0x54EA50
{
    mangled_assert("??1?$NISDataMap@VAnimCurve@@@@QAE@XZ");
    todo("implement");
}

_inline void NISDataMap<AnimCurve>::Add(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, AnimCurve *) // 0x54EC77
{
    mangled_assert("?Add@?$NISDataMap@VAnimCurve@@@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimCurve@@@Z");
    todo("implement");
}

_inline AnimCurve *NISDataMap<AnimCurve>::Get(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x54ECFD
{
    mangled_assert("?Get@?$NISDataMap@VAnimCurve@@@@QAEPAVAnimCurve@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

_inline void NISDataMap<AnimCurve>::Clear() // 0x54ECAB
{
    mangled_assert("?Clear@?$NISDataMap@VAnimCurve@@@@QAEXXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __NISDATAMAP_H__
#endif
