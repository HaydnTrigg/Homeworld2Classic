#if 0
#ifndef __DEPENDENCYDATA_H__
#define __DEPENDENCYDATA_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class DependencyData :
    public SaveObject
{
public:
    DependencyData(DependencyData const &); /* compiler_generated() */
    DependencyData(SaveGameData *);
    DependencyData();
    virtual ~DependencyData() = 0;
    virtual bool allDependenciesMet(Ship *) const;
    _inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getName() const;
    static bool s_dependenciesAlwaysTrue;
protected:
    void SetDependencies(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_Name; // 0xC
    Player *m_pPlayer; // 0x24
private:
    Term *m_pResearchDependency; // 0x28
    Term *m_pShipSubSystemDependency; // 0x2C
    Term *m_pFleetSubSystemDependency; // 0x30
public:
    void defaultSettings();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    DependencyData &operator=(DependencyData const &); /* compiler_generated() */
};
static_assert(sizeof(DependencyData) == 52, "Invalid DependencyData size");

class Term :
    public SaveObject
{
public:
    enum JoinType
    {
        andtype = 0,
        ortype,
    };
    enum TestType
    {
        None = 0,
        Research,
        SubSystem,
    };
    Term(Term const &); /* compiler_generated() */
    Term(SaveGameData *);
    Term(Term::TestType, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
    Term();
    virtual ~Term() override;
    bool Test(Player *, Ship *) const;
    void AddTerm(Term *);
    void AddJoin(Term::JoinType);
    _inline void SetNegated(bool);
private:
    std::list<Term *,std::allocator<Term *> > m_SubTerms; // 0xC
    Term::JoinType m_JoinType; // 0x14
    Term::TestType m_Type; // 0x18
    unsigned __int32 m_ValueID; // 0x1C
    bool m_bNegated; // 0x20
public:
    void defaultSettings();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    Term &operator=(Term const &); /* compiler_generated() */
};
static_assert(sizeof(Term) == 36, "Invalid Term size");

class ByNameSearch
{
public:
    ByNameSearch(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    bool operator()(DependencyData *);
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &m_ResearchNameRef; // 0x0
};
static_assert(sizeof(ByNameSearch) == 4, "Invalid ByNameSearch size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &DependencyData::getName() const // 0x500ECB
{
    mangled_assert("?getName@DependencyData@@QBEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    todo("implement");
}

_inline bool DependencyData::isDeterministic() // 0x4ECEC3
{
    mangled_assert("?isDeterministic@DependencyData@@UAE_NXZ");
    todo("implement");
}

_inline char const *DependencyData::saveToken() // 0x4ED01E
{
    mangled_assert("?saveToken@DependencyData@@UAEPBDXZ");
    todo("implement");
}

_inline void Term::SetNegated(bool) // 0x4ECAE8
{
    mangled_assert("?SetNegated@Term@@QAEX_N@Z");
    todo("implement");
}

_inline bool Term::isDeterministic() // 0x4ECEC6
{
    mangled_assert("?isDeterministic@Term@@UAE_NXZ");
    todo("implement");
}

_inline char const *Term::saveToken() // 0x4ED024
{
    mangled_assert("?saveToken@Term@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __DEPENDENCYDATA_H__
#endif
