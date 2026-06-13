#ifndef __ICE_NOT_H__
#define __ICE_NOT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ICE_NOT_H__
/* combined */
#ifndef __ICE_NOT_H__
#define __ICE_NOT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct boost::type_traits::ice_not<1>
{
    static bool const value;
};
static_assert(sizeof(boost::type_traits::ice_not<1>) == 1, "Invalid boost::type_traits::ice_not<1> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ICE_NOT_H__
