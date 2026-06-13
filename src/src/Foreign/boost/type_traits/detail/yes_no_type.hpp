#ifndef __YES_NO_TYPE_H__
#define __YES_NO_TYPE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __YES_NO_TYPE_H__
/* combined */
#ifndef __YES_NO_TYPE_H__
#define __YES_NO_TYPE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct boost::type_traits::no_type
{
    char padding[8]; // 0x0
};
static_assert(sizeof(boost::type_traits::no_type) == 8, "Invalid boost::type_traits::no_type size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __YES_NO_TYPE_H__
