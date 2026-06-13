#if 0
#ifndef __PLAYERPROFILEMAN_H__
#define __PLAYERPROFILEMAN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class PlayerProfileMan :
    private boost::noncopyable
{
public:
    PlayerProfileMan(PlayerProfileMan const &); /* compiler_generated() */
private:
    PlayerProfileMan();
    ~PlayerProfileMan();
public:
    static PlayerProfileMan *Instance();
    static bool Initialize();
    static bool Shutdown();
    class Observer
    {
    public:
        virtual void SavingPlayerProfile() = 0;
        virtual void LoadedPlayerProfile() = 0;
        Observer(PlayerProfileMan::Observer const &); /* compiler_generated() */
        Observer(); /* compiler_generated() */
        PlayerProfileMan::Observer &operator=(PlayerProfileMan::Observer const &); /* compiler_generated() */
    };
    static_assert(sizeof(Observer) == 4, "Invalid Observer size");
    void ProfileLoad(char const *);
    char const *ProfileSave();
    void AddObserver(PlayerProfileMan::Observer *);
    void RemoveObserver(PlayerProfileMan::Observer *);
    unsigned __int32 ProfileGetCount() const;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > ProfileGetAt(unsigned __int32) const;
    PlayerProfile *GetCurrentProfile();
    bool SetCurrentProfile(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
    bool ProfileCreate(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
    bool ProfileDelete(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
    bool ProfileIsValid();
    bool ProfileExists(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
    void CopyDefaultToProfile(char const *, char const *);
    struct ProfileEntry
    {
        fwstring<16> name; // 0x0
        fstring<260> folder; // 0x22
        _inline ProfileEntry(); /* compiler_generated() */
        _inline ~ProfileEntry(); /* compiler_generated() */
    };
    static_assert(sizeof(ProfileEntry) == 296, "Invalid ProfileEntry size");
    typedef std::vector<PlayerProfileMan::ProfileEntry,std::allocator<PlayerProfileMan::ProfileEntry> > ProfileList;
    typedef std::set<PlayerProfileMan::Observer *,std::less<PlayerProfileMan::Observer *>,std::allocator<PlayerProfileMan::Observer *> > ProfileObserverList;
private:
    std::vector<PlayerProfileMan::ProfileEntry,std::allocator<PlayerProfileMan::ProfileEntry> > m_profiles; // 0x0
    boost::scoped_ptr<PlayerProfile> m_profileCurrent; // 0xC
    std::set<PlayerProfileMan::Observer *,std::less<PlayerProfileMan::Observer *>,std::allocator<PlayerProfileMan::Observer *> > m_observers; // 0x10
    void Init();
    void Shut();
    bool CurrentProfileOpen(PlayerProfileMan::ProfileEntry const &);
    void CurrentProfileSave();
    void CurrentProfileClose();
    void CreateFolderProfiles();
    unsigned __int32 GetNextDirNumber();
public:
    PlayerProfileMan &operator=(PlayerProfileMan const &); /* compiler_generated() */
};
static_assert(sizeof(PlayerProfileMan) == 24, "Invalid PlayerProfileMan size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __PLAYERPROFILEMAN_H__
#endif
