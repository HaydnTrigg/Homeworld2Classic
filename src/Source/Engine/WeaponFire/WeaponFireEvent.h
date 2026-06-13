#if 0
#ifndef __WEAPONFIREEVENT_H__
#define __WEAPONFIREEVENT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class WeaponFireEvent :
    public SaveObject
{
public:
    WeaponFireEvent(WeaponFireEvent const &); /* compiler_generated() */
    WeaponFireEvent(SaveGameData *);
    WeaponFireEvent(SobID const &, SobID const &, char const *);
    _inline unsigned __int32 GetSobFiringID() const;
    _inline unsigned __int32 GetSobBeingShotID() const;
    _inline char const *GetWeaponName() const;
    _inline void SetComplete(bool);
    _inline bool IsComplete() const;
private:
    SobID m_sobFiring; // 0xC
    SobID m_sobBeingShot; // 0x18
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_weaponName; // 0x24
    bool m_eventTriggered; // 0x3C
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    virtual _inline ~WeaponFireEvent() override; /* compiler_generated() */
    WeaponFireEvent &operator=(WeaponFireEvent const &); /* compiler_generated() */
};
static_assert(sizeof(WeaponFireEvent) == 64, "Invalid WeaponFireEvent size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern unsigned __int32 _sub_64D570(WeaponFireEvent const *const);
_inline unsigned __int32 WeaponFireEvent::GetSobFiringID() const // 0x64D570
{
    mangled_assert("?GetSobFiringID@WeaponFireEvent@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_64D570(this);
    return __result;
}

_extern unsigned __int32 _sub_64D568(WeaponFireEvent const *const);
_inline unsigned __int32 WeaponFireEvent::GetSobBeingShotID() const // 0x64D568
{
    mangled_assert("?GetSobBeingShotID@WeaponFireEvent@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_64D568(this);
    return __result;
}

_extern char const *_sub_64D57C(WeaponFireEvent const *const);
_inline char const *WeaponFireEvent::GetWeaponName() const // 0x64D57C
{
    mangled_assert("?GetWeaponName@WeaponFireEvent@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_64D57C(this);
    return __result;
}

_extern void _sub_4A9CAA(WeaponFireEvent *const, bool);
_inline void WeaponFireEvent::SetComplete(bool) // 0x4A9CAA
{
    mangled_assert("?SetComplete@WeaponFireEvent@@QAEX_N@Z");
    todo("implement");
    _sub_4A9CAA(this, arg);
}

_extern bool _sub_718C1D(WeaponFireEvent const *const);
_inline bool WeaponFireEvent::IsComplete() const // 0x718C1D
{
    mangled_assert("?IsComplete@WeaponFireEvent@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_718C1D(this);
    return __result;
}

_extern bool _sub_4AB0DC(WeaponFireEvent *const);
_inline bool WeaponFireEvent::isDeterministic() // 0x4AB0DC
{
    mangled_assert("?isDeterministic@WeaponFireEvent@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_4AB0DC(this);
    return __result;
}

_extern char const *_sub_4AB153(WeaponFireEvent *const);
_inline char const *WeaponFireEvent::saveToken() // 0x4AB153
{
    mangled_assert("?saveToken@WeaponFireEvent@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_4AB153(this);
    return __result;
}

/* ---------- private code */

#endif // __WEAPONFIREEVENT_H__
#endif
