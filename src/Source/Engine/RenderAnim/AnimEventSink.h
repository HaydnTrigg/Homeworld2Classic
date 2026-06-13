#if 0
#ifndef __ANIMEVENTSINK_H__
#define __ANIMEVENTSINK_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class AnimEventSink
{
public:
    typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > VarPair;
    typedef std::vector<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > VarPairCont;
    virtual ~AnimEventSink();
    void setVariable(char const *, char const *);
    char const *getVariable(char const *) const;
    virtual void onEvent(AnimEvent &, AnimEventContext *) = 0;
    virtual void detach() = 0;
private:
    std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > findVariable(char const *) const;
    std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > findVariable(char const *);
    std::vector<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > m_cVar; // 0x4
public:
    AnimEventSink(AnimEventSink const &); /* compiler_generated() */
    _inline AnimEventSink(); /* compiler_generated() */
    AnimEventSink &operator=(AnimEventSink const &); /* compiler_generated() */
};
static_assert(sizeof(AnimEventSink) == 16, "Invalid AnimEventSink size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ANIMEVENTSINK_H__
#endif
