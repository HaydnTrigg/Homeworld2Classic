#if 0
#ifndef __SALVAGE_H__
#define __SALVAGE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Salvage :
    public Resource
{
public:
    typedef Resource SuperClass;
    Salvage(Salvage &); /* compiler_generated() */
    Salvage(SaveGameData *);
    Salvage(char const *, bool);
    virtual ~Salvage() override;
    virtual void RemoveFromSimulation() override;
    virtual _inline bool isLatchingResource() const override;
    virtual _inline bool isHaulingResource() const override;
    virtual bool latchShip(Ship *) override;
    virtual bool update(float) override;
    _inline SalvageStatic const *getStatic() const;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
protected:
    void RemoveAllSimData();
public:
    Salvage &operator=(Salvage &); /* compiler_generated() */
};
static_assert(sizeof(Salvage) == 724, "Invalid Salvage size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool Salvage::isLatchingResource() const // 0x4B19C0
{
    mangled_assert("?isLatchingResource@Salvage@@UBE_NXZ");
    todo("implement");
}

_inline bool Salvage::isHaulingResource() const // 0x4B19BD
{
    mangled_assert("?isHaulingResource@Salvage@@UBE_NXZ");
    todo("implement");
}

_inline SalvageStatic const *Salvage::getStatic() const // 0x4B19B3
{
    mangled_assert("?getStatic@Salvage@@QBEPBVSalvageStatic@@XZ");
    todo("implement");
}

_inline bool Salvage::isDeterministic() // 0x4B19BA
{
    mangled_assert("?isDeterministic@Salvage@@UAE_NXZ");
    todo("implement");
}

_inline char const *Salvage::saveToken() // 0x4B1ACB
{
    mangled_assert("?saveToken@Salvage@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __SALVAGE_H__
#endif
