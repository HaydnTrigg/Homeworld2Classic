#if 0
#ifndef __NISSPEECH_H__
#define __NISSPEECH_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class NISSpeech
{
public:
    NISSpeech(NISSpeech const &); /* compiler_generated() */
    NISSpeech();
    ~NISSpeech();
    void SetSpeechDirectory(char const *);
    void PlaySpeech(float, char const *, float);
    void StopAll();
private:
    void GetSpeechFilename(char const *, char *, unsigned __int32);
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_speechDirectory; // 0x0
public:
    NISSpeech &operator=(NISSpeech const &); /* compiler_generated() */
};
static_assert(sizeof(NISSpeech) == 24, "Invalid NISSpeech size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __NISSPEECH_H__
#endif
