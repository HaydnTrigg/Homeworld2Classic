#if 0
#ifndef __UISOUNDMANAGER_H__
#define __UISOUNDMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::UISoundManager
{
public:
    static void Startup();
    static void Shutdown();
    static UI::UISoundManager *Instance();
    typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,PatchID,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,PatchID> > > SoundMap;
    void LoadSoundMap(char const *);
    void PlaySound(char const *);
    void SetVolume(float);
    float GetVolume() const;
    UISoundManager(UI::UISoundManager const &); /* compiler_generated() */
private:
    UISoundManager();
    ~UISoundManager();
    class Data;
    boost::scoped_ptr<UI::UISoundManager::Data> m_pimpl; // 0x0
public:
    UI::UISoundManager &operator=(UI::UISoundManager const &); /* compiler_generated() */
};
static_assert(sizeof(UI::UISoundManager) == 4, "Invalid UI::UISoundManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __UISOUNDMANAGER_H__
#endif
