#if 0
#ifndef __VISIBILITY_H__
#define __VISIBILITY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum VisibilityLevel
{
    VisNone = 0,
    VisSecondary,
    VisFull,
};

/* ---------- definitions */

class Visibility :
    public Saveable
{
public:
    Visibility(Visibility const &); /* compiler_generated() */
    Visibility(SaveGameData *);
    Visibility();
    virtual ~Visibility() override;
    _inline void SetSobOwner(SobID const &);
    void cloakByPlayer(unsigned __int32, float);
    void detectByPlayer(unsigned __int32, float);
    void visualSpot(unsigned __int32);
    void primarySensorsSpot(unsigned __int32);
    void secondarySensorsSpot(unsigned __int32);
    void clearCloaking();
    void clearVisibilityAndDetectionBy(unsigned __int32);
    void clearAll();
    bool isCloaked() const;
    bool isCloakDetected(unsigned __int32) const;
    _inline VisibilityLevel getVisibility(unsigned __int32) const;
    void finaliseVisibilityForThisUpdate();
private:
    std::vector<float,std::allocator<float> > m_cloakLevel; // 0x4
    std::vector<float,std::allocator<float> > m_detectionLevel; // 0x10
    std::vector<enum VisibilityLevel,std::allocator<enum VisibilityLevel> > m_visiblity; // 0x1C
    SobID m_managedSobID; // 0x28
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    static void saveReal32Vector(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void loadReal32Vector(void *objectPtr, SaveGameData *saveGameData);
    static void saveVisVector(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void loadVisVector(void *objectPtr, SaveGameData *saveGameData);
    static void *operator new(unsigned __int32 size);
    static void operator delete(void *p, unsigned __int32 size);
    Visibility &operator=(Visibility const &); /* compiler_generated() */
};
static_assert(sizeof(Visibility) == 52, "Invalid Visibility size");

class Visibility :
    public Saveable
{
public:
    Visibility(Visibility const &); /* compiler_generated() */
    Visibility(SaveGameData *);
    Visibility();
    virtual ~Visibility() override;
    _inline void SetSobOwner(SobID const &);
    void cloakByPlayer(unsigned __int32, float);
    void detectByPlayer(unsigned __int32, float);
    void visualSpot(unsigned __int32);
    void primarySensorsSpot(unsigned __int32);
    void secondarySensorsSpot(unsigned __int32);
    void clearCloaking();
    void clearVisibilityAndDetectionBy(unsigned __int32);
    void clearAll();
    bool isCloaked() const;
    bool isCloakDetected(unsigned __int32) const;
    _inline VisibilityLevel getVisibility(unsigned __int32) const;
    void finaliseVisibilityForThisUpdate();
private:
    std::vector<float,std::allocator<float> > m_cloakLevel; // 0x4
    std::vector<float,std::allocator<float> > m_detectionLevel; // 0x10
    std::vector<enum VisibilityLevel,std::allocator<enum VisibilityLevel> > m_visiblity; // 0x1C
    SobID m_managedSobID; // 0x28
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    static void saveReal32Vector(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void loadReal32Vector(void *objectPtr, SaveGameData *saveGameData);
    static void saveVisVector(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void loadVisVector(void *objectPtr, SaveGameData *saveGameData);
    static void *operator new(unsigned __int32 size);
    static void operator delete(void *p, unsigned __int32 size);
    Visibility &operator=(Visibility const &); /* compiler_generated() */
};
static_assert(sizeof(Visibility) == 52, "Invalid Visibility size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void Visibility::SetSobOwner(SobID const &) // 0x477D04
{
    mangled_assert("?SetSobOwner@Visibility@@QAEXABVSobID@@@Z");
    todo("implement");
}

_inline VisibilityLevel Visibility::getVisibility(unsigned __int32) const // 0x4436CE
{
    mangled_assert("?getVisibility@Visibility@@QBE?AW4VisibilityLevel@@I@Z");
    todo("implement");
}

_inline bool Visibility::isDeterministic() // 0x484229
{
    mangled_assert("?isDeterministic@Visibility@@UAE_NXZ");
    todo("implement");
}

_inline char const *Visibility::saveToken() // 0x48442D
{
    mangled_assert("?saveToken@Visibility@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __VISIBILITY_H__
#endif
