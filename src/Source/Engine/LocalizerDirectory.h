#if 0
#ifndef __LOCALIZERDIRECTORY_H__
#define __LOCALIZERDIRECTORY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LocalizerDirectory
{
public:
    static bool Restart();
    static LocalizerDirectory *Instance();
    static bool Shutdown();
    bool Append(char const *, __int32, __int32);
    static ArchiveIterator<Archive::TOCProxy> FindLocaleTOC(Archive *archive);
    static bool MapArchiveWithLocale(unsigned long archiveID, unsigned __int32 priority);
    static bool MapArchiveOnlyLocale(unsigned long archiveID, unsigned __int32 priority);
    static void UnloadLocale(char const *filename);
    static char const *_stristr(char const *string, char *substring);
private:
    std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > m_dictionaryNames; // 0x0
public:
    LocalizerDirectory(LocalizerDirectory const &); /* compiler_generated() */
private:
    _inline LocalizerDirectory();
    ~LocalizerDirectory();
    static LocalizerDirectory *s_instance;
public:
    LocalizerDirectory &operator=(LocalizerDirectory const &); /* compiler_generated() */
};
static_assert(sizeof(LocalizerDirectory) == 12, "Invalid LocalizerDirectory size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline LocalizerDirectory::LocalizerDirectory() // 0x604776
{
    mangled_assert("??0LocalizerDirectory@@AAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __LOCALIZERDIRECTORY_H__
#endif
