#if 0
#ifndef __SOBGROUP_H__
#define __SOBGROUP_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SOBGroup :
    public SaveObject
{
public:
    static Squadron *FindSquadronByName(char const *squadronName);
    _inline char const *getName() const;
    vector3 const getPosition() const;
    void getOrientation(matrix3 &) const;
    _inline __int32 getPlayerSaveIndex() const;
    __int32 getPlayerIndex() const;
    void addSquadronToSOBGroup(Squadron *);
    void addSquadronToSOBGroup(char const *);
    Squadron *getSquadronFromSOBGroup(__int32);
    void removeSquadronFromSOBGroup(char const *);
    _inline void setRemoveSwitchOwner(bool);
    void removeSwitchOwnerSquadron(Squadron *);
    bool findSquadron(Squadron *);
    void push_back_no_find(SOBGroup *);
    void push_back(SOBGroup *);
    _inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > begin() const;
    _inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > begin();
    _inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > end() const;
    _inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > end();
    _inline Squadron *front();
    _inline Squadron const *front() const;
    _inline unsigned __int32 size() const;
    _inline bool empty() const;
    _inline void clear() const;
    _inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > erase(std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > >);
    _inline SquadronList &getSquadronList();
    SOBGroup(SOBGroup const &); /* compiler_generated() */
private:
    SOBGroup(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SquadronList &, unsigned __int32);
    SOBGroup(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
public:
    SOBGroup(SaveGameData *);
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
private:
    virtual ~SOBGroup() override;
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0xC
    SquadronList m_squadronsOwned; // 0x24
    SquadronList &m_squadrons; // 0x44
    __int32 m_playerSaveIndex; // 0x48
    bool m_removeSwitchOwnerSquadron; // 0x4C
};
static_assert(sizeof(SOBGroup) == 80, "Invalid SOBGroup size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern char const *_sub_63ACC2(SOBGroup const *const);
_inline char const *SOBGroup::getName() const // 0x63ACC2
{
    mangled_assert("?getName@SOBGroup@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_63ACC2(this);
    return __result;
}

_extern __int32 _sub_63ACCE(SOBGroup const *const);
_inline __int32 SOBGroup::getPlayerSaveIndex() const // 0x63ACCE
{
    mangled_assert("?getPlayerSaveIndex@SOBGroup@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_63ACCE(this);
    return __result;
}

_extern void _sub_723BF6(SOBGroup *const, bool);
_inline void SOBGroup::setRemoveSwitchOwner(bool) // 0x723BF6
{
    mangled_assert("?setRemoveSwitchOwner@SOBGroup@@QAEX_N@Z");
    todo("implement");
    _sub_723BF6(this, arg);
}

_extern std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > _sub_63925D(SOBGroup *const);
_inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > SOBGroup::begin() // 0x63925D
{
    mangled_assert("?begin@SOBGroup@@QAE?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PAVSquadron@@@std@@@std@@@std@@XZ");
    todo("implement");
    std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > __result = _sub_63925D(this);
    return __result;
}

_extern std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > _sub_63926C(SOBGroup *const);
_inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > SOBGroup::end() // 0x63926C
{
    mangled_assert("?end@SOBGroup@@QAE?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PAVSquadron@@@std@@@std@@@std@@XZ");
    todo("implement");
    std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > __result = _sub_63926C(this);
    return __result;
}

_extern std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > _sub_4C1EDE(SOBGroup const *const);
_inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > SOBGroup::begin() const // 0x4C1EDE
{
    mangled_assert("?begin@SOBGroup@@QBE?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PAVSquadron@@@std@@@std@@@std@@XZ");
    todo("implement");
    std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > __result = _sub_4C1EDE(this);
    return __result;
}

_extern std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > _sub_4C1EED(SOBGroup const *const);
_inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > SOBGroup::end() const // 0x4C1EED
{
    mangled_assert("?end@SOBGroup@@QBE?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PAVSquadron@@@std@@@std@@@std@@XZ");
    todo("implement");
    std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > __result = _sub_4C1EED(this);
    return __result;
}

_extern Squadron const *_sub_639299(SOBGroup const *const);
_inline Squadron const *SOBGroup::front() const // 0x639299
{
    mangled_assert("?front@SOBGroup@@QBEPBVSquadron@@XZ");
    todo("implement");
    Squadron const * __result = _sub_639299(this);
    return __result;
}

_extern Squadron *_sub_7165E0(SOBGroup *const);
_inline Squadron *SOBGroup::front() // 0x7165E0
{
    mangled_assert("?front@SOBGroup@@QAEPAVSquadron@@XZ");
    todo("implement");
    Squadron * __result = _sub_7165E0(this);
    return __result;
}

_extern unsigned __int32 _sub_639509(SOBGroup const *const);
_inline unsigned __int32 SOBGroup::size() const // 0x639509
{
    mangled_assert("?size@SOBGroup@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_639509(this);
    return __result;
}

_extern bool _sub_7133C6(SOBGroup const *const);
_inline bool SOBGroup::empty() const // 0x7133C6
{
    mangled_assert("?empty@SOBGroup@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_7133C6(this);
    return __result;
}

_extern void _sub_7133BE(SOBGroup const *const);
_inline void SOBGroup::clear() const // 0x7133BE
{
    mangled_assert("?clear@SOBGroup@@QBEXXZ");
    todo("implement");
    _sub_7133BE(this);
}

_extern std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > _sub_7238CD(SOBGroup *const, std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > >);
_inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > SOBGroup::erase(std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > >) // 0x7238CD
{
    mangled_assert("?erase@SOBGroup@@QAE?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PAVSquadron@@@std@@@std@@@std@@V23@@Z");
    todo("implement");
    std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > __result = _sub_7238CD(this, arg);
    return __result;
}

_extern SquadronList &_sub_5447C6(SOBGroup *const);
_inline SquadronList &SOBGroup::getSquadronList() // 0x5447C6
{
    mangled_assert("?getSquadronList@SOBGroup@@QAEAAVSquadronList@@XZ");
    todo("implement");
    SquadronList & __result = _sub_5447C6(this);
    return __result;
}

_extern bool _sub_6393C5(SOBGroup *const);
_inline bool SOBGroup::isDeterministic() // 0x6393C5
{
    mangled_assert("?isDeterministic@SOBGroup@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_6393C5(this);
    return __result;
}

_extern char const *_sub_639503(SOBGroup *const);
_inline char const *SOBGroup::saveToken() // 0x639503
{
    mangled_assert("?saveToken@SOBGroup@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_639503(this);
    return __result;
}

/* ---------- private code */

#endif // __SOBGROUP_H__
#endif
