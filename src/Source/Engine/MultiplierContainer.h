#if 0
#ifndef __MULTIPLIERCONTAINER_H__
#define __MULTIPLIERCONTAINER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MultiplierContainer :
    public Saveable
{
public:
    MultiplierContainer(MultiplierContainer const &); /* compiler_generated() */
    MultiplierContainer();
    virtual ~MultiplierContainer() override;
    _inline float getMultiplier(MultiplierType) const;
    _inline float getPermanentMultiplierOnly(MultiplierType) const;
    _inline void setMultiplier(MultiplierType, float);
    _inline void modifyMultiplier(MultiplierType, float);
    void addTemporaryMultiplier(MultiplierType, float);
    void cleanTemporaryMultipliers();
    struct MultiplierInfo
    {
        float m_value; // 0x0
        float m_temporaryValue; // 0x4
    };
    static_assert(sizeof(MultiplierInfo) == 8, "Invalid MultiplierInfo size");
protected:
    MultiplierContainer::MultiplierInfo m_multipliers[29]; // 0x4
private:
    std::_List_iterator<std::_List_val<std::_List_simple_types<MultiplierContainer *> > > m_iteratorInStaticList; // 0xEC
public:
    static void cleanAllTemporaryMultipliers();
    typedef std::list<MultiplierContainer *,std::allocator<MultiplierContainer *> > MultiplierContainerList;
    typedef std::_List_iterator<std::_List_val<std::_List_simple_types<MultiplierContainer *> > > MultiplierContainerListIterator;
private:
    static std::list<MultiplierContainer *,std::allocator<MultiplierContainer *> > m_multiplierContainerList;
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    MultiplierContainer &operator=(MultiplierContainer const &); /* compiler_generated() */
};
static_assert(sizeof(MultiplierContainer) == 240, "Invalid MultiplierContainer size");

class MultiplierContainer :
    public Saveable
{
public:
    MultiplierContainer(MultiplierContainer const &); /* compiler_generated() */
    MultiplierContainer();
    virtual ~MultiplierContainer() override;
    _inline float getMultiplier(MultiplierType) const;
    _inline float getPermanentMultiplierOnly(MultiplierType) const;
    _inline void setMultiplier(MultiplierType, float);
    _inline void modifyMultiplier(MultiplierType, float);
    void addTemporaryMultiplier(MultiplierType, float);
    void cleanTemporaryMultipliers();
    struct MultiplierInfo
    {
        float m_value; // 0x0
        float m_temporaryValue; // 0x4
    };
    static_assert(sizeof(MultiplierInfo) == 8, "Invalid MultiplierInfo size");
protected:
    MultiplierContainer::MultiplierInfo m_multipliers[29]; // 0x4
private:
    std::_List_iterator<std::_List_val<std::_List_simple_types<MultiplierContainer *> > > m_iteratorInStaticList; // 0xEC
public:
    static void cleanAllTemporaryMultipliers();
    typedef std::list<MultiplierContainer *,std::allocator<MultiplierContainer *> > MultiplierContainerList;
    typedef std::_List_iterator<std::_List_val<std::_List_simple_types<MultiplierContainer *> > > MultiplierContainerListIterator;
private:
    static std::list<MultiplierContainer *,std::allocator<MultiplierContainer *> > m_multiplierContainerList;
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    MultiplierContainer &operator=(MultiplierContainer const &); /* compiler_generated() */
};
static_assert(sizeof(MultiplierContainer) == 240, "Invalid MultiplierContainer size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline float MultiplierContainer::getMultiplier(MultiplierType) const // 0x48466A
{
    mangled_assert("?getMultiplier@MultiplierContainer@@QBEMW4MultiplierType@@@Z");
    todo("implement");
}

_inline float MultiplierContainer::getPermanentMultiplierOnly(MultiplierType) const // 0x59C32E
{
    mangled_assert("?getPermanentMultiplierOnly@MultiplierContainer@@QBEMW4MultiplierType@@@Z");
    todo("implement");
}

_inline void MultiplierContainer::setMultiplier(MultiplierType, float) // 0x4BB330
{
    mangled_assert("?setMultiplier@MultiplierContainer@@QAEXW4MultiplierType@@M@Z");
    todo("implement");
}

_inline void MultiplierContainer::modifyMultiplier(MultiplierType, float) // 0x4B9BA6
{
    mangled_assert("?modifyMultiplier@MultiplierContainer@@QAEXW4MultiplierType@@M@Z");
    todo("implement");
}

_inline bool MultiplierContainer::isDeterministic() // 0x4F2096
{
    mangled_assert("?isDeterministic@MultiplierContainer@@UAE_NXZ");
    todo("implement");
}

_inline char const *MultiplierContainer::saveToken() // 0x4F2135
{
    mangled_assert("?saveToken@MultiplierContainer@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __MULTIPLIERCONTAINER_H__
#endif
