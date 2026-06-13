#if 0
#ifndef __MENUFACTORY_H__
#define __MENUFACTORY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::MenuFactory
{
public:
    static UI::NewUIScreen *CreateMenu(char const *filename, char const *sectionName, char const *type, bool callPostLoad);
};
static_assert(sizeof(UI::MenuFactory) == 1, "Invalid UI::MenuFactory size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MENUFACTORY_H__
#endif
