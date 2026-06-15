#ifndef __GCD_LCM_H__
#define __GCD_LCM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern unsigned __int32 boost::details::pool::gcd<unsigned int>(unsigned __int32 A, unsigned __int32 B);
extern unsigned __int32 boost::details::pool::lcm<unsigned int>(unsigned __int32 const &A, unsigned __int32 const &B);

/* ---------- globals */

/* ---------- public code */

unsigned __int32 boost::details::pool::gcd<unsigned int>(unsigned __int32 A, unsigned __int32 B) // 0x51CF3F
{
    mangled_assert("??$gcd@I@pool@details@boost@@YGIII@Z");
    todo("implement");
}

unsigned __int32 boost::details::pool::lcm<unsigned int>(unsigned __int32 const &A, unsigned __int32 const &B) // 0x51CF82
{
    mangled_assert("??$lcm@I@pool@details@boost@@YGIABI0@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __GCD_LCM_H__
