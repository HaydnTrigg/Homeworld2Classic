#if 0
#ifndef __ANIMEVENTDATA_H__
#define __ANIMEVENTDATA_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class AnimEventData
{
public:
    struct Param
    {
        unsigned long name; // 0x0
        unsigned long value; // 0x4
    };
    static_assert(sizeof(Param) == 8, "Invalid Param size");
    _inline AnimEventData(AnimEventData const &); /* compiler_generated() */
    AnimEventData();
    ~AnimEventData();
    _inline char const *getName() const;
    void setName(char const *);
    void addParam(char const *, char const *);
    void removeParam(char const *);
    void changeParam(char const *, char const *);
    char const *findParam(char const *) const;
    __int32 findParamIndex(char const *) const;
    void clearParams();
    unsigned __int32 getParamCount() const;
    char const *getParamName(unsigned __int32) const;
    char const *getParamValue(unsigned __int32) const;
    void reserveParams(unsigned __int32);
    typedef std::vector<AnimEventData::Param,std::allocator<AnimEventData::Param> > ParamCont;
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x0
    std::vector<AnimEventData::Param,std::allocator<AnimEventData::Param> > m_param; // 0x18
public:
    _inline AnimEventData &operator=(AnimEventData const &); /* compiler_generated() */
};
static_assert(sizeof(AnimEventData) == 36, "Invalid AnimEventData size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline char const *AnimEventData::getName() const // 0x51091D
{
    mangled_assert("?getName@AnimEventData@@QBEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __ANIMEVENTDATA_H__
#endif
