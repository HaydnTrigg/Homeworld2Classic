#if 0
#ifndef __APPINIT_H__
#define __APPINIT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class AppInit
{
public:
    static char const *Startup();
    static void Shutdown();
};
static_assert(sizeof(AppInit) == 1, "Invalid AppInit size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __APPINIT_H__
#endif
