#ifndef __ARG_H__
#define __ARG_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::arg<1>
{
};
static_assert(sizeof(boost::arg<1>) == 1, "Invalid boost::arg<1> size");

class boost::arg<2>
{
};
static_assert(sizeof(boost::arg<2>) == 1, "Invalid boost::arg<2> size");

class boost::arg<9>
{
};
static_assert(sizeof(boost::arg<9>) == 1, "Invalid boost::arg<9> size");

class boost::arg<8>
{
};
static_assert(sizeof(boost::arg<8>) == 1, "Invalid boost::arg<8> size");

class boost::arg<7>
{
};
static_assert(sizeof(boost::arg<7>) == 1, "Invalid boost::arg<7> size");

class boost::arg<6>
{
};
static_assert(sizeof(boost::arg<6>) == 1, "Invalid boost::arg<6> size");

class boost::arg<5>
{
};
static_assert(sizeof(boost::arg<5>) == 1, "Invalid boost::arg<5> size");

class boost::arg<4>
{
};
static_assert(sizeof(boost::arg<4>) == 1, "Invalid boost::arg<4> size");

class boost::arg<3>
{
};
static_assert(sizeof(boost::arg<3>) == 1, "Invalid boost::arg<3> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ARG_H__
