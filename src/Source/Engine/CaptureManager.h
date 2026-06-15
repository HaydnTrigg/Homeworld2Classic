#if 0
#ifndef __CAPTUREMANAGER_H__
#define __CAPTUREMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CaptureManager :
    public LatchPointManager
{
public:
    CaptureManager(CaptureManager const &); /* compiler_generated() */
    CaptureManager(SaveGameData *);
    CaptureManager(Ship *);
    virtual ~CaptureManager() override;
    virtual void update(float) override;
    _inline float captureProgress() const;
    void applyCaptureSlowDown();
    _inline bool disabled() const;
    enum CaptureActivationState
    {
        ForcedOff = 0,
        Normal,
        ForcedOn,
    };
    _inline CaptureManager::CaptureActivationState getActivationState() const;
    _inline void setActivationState(CaptureManager::CaptureActivationState);
    _inline void setCaptureAlwaysDisables(bool);
protected:
    virtual LatchPointManagerStatic *getStaticData() override;
private:
    void setSquadronOwner(Player const *);
    float m_captureProgess; // 0x5C
    CaptureManager::CaptureActivationState m_activationState; // 0x60
    float m_disabledTime; // 0x64
    bool m_captureAlwaysDisables; // 0x68
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    CaptureManager &operator=(CaptureManager const &); /* compiler_generated() */
};
static_assert(sizeof(CaptureManager) == 108, "Invalid CaptureManager size");

class CaptureStatic :
    public LatchPointManagerStatic
{
public:
    CaptureStatic(CaptureStatic const &); /* compiler_generated() */
    CaptureStatic(float, float);
    _inline ~CaptureStatic();
    _inline float getBaseCaptureAmount() const;
protected:
    virtual _inline char const *getPointBaseName() const override;
    float m_baseCaptureAmount; // 0x10
    float m_captureSlowDown; // 0x14
public:
    CaptureStatic &operator=(CaptureStatic const &); /* compiler_generated() */
};
static_assert(sizeof(CaptureStatic) == 24, "Invalid CaptureStatic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline float CaptureManager::captureProgress() const // 0x48B392
{
    mangled_assert("?captureProgress@CaptureManager@@QBEMXZ");
    todo("implement");
}

_inline bool CaptureManager::disabled() const // 0x535688
{
    mangled_assert("?disabled@CaptureManager@@QBE_NXZ");
    todo("implement");
}

_inline CaptureManager::CaptureActivationState CaptureManager::getActivationState() const // 0x53569A
{
    mangled_assert("?getActivationState@CaptureManager@@QBE?AW4CaptureActivationState@1@XZ");
    todo("implement");
}

_inline void CaptureManager::setActivationState(CaptureManager::CaptureActivationState) // 0x48475F
{
    mangled_assert("?setActivationState@CaptureManager@@QAEXW4CaptureActivationState@1@@Z");
    todo("implement");
}

_inline void CaptureManager::setCaptureAlwaysDisables(bool) // 0x723BDF
{
    mangled_assert("?setCaptureAlwaysDisables@CaptureManager@@QAEX_N@Z");
    todo("implement");
}

_inline bool CaptureManager::isDeterministic() // 0x4846BD
{
    mangled_assert("?isDeterministic@CaptureManager@@UAE_NXZ");
    todo("implement");
}

_inline char const *CaptureManager::saveToken() // 0x484759
{
    mangled_assert("?saveToken@CaptureManager@@UAEPBDXZ");
    todo("implement");
}

_inline CaptureStatic::~CaptureStatic() // 0x496FB9
{
    mangled_assert("??1CaptureStatic@@QAE@XZ");
    todo("implement");
}

_inline float CaptureStatic::getBaseCaptureAmount() const // 0x48465A
{
    mangled_assert("?getBaseCaptureAmount@CaptureStatic@@QBEMXZ");
    todo("implement");
}

_inline char const *CaptureStatic::getPointBaseName() const // 0x484696
{
    mangled_assert("?getPointBaseName@CaptureStatic@@MBEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __CAPTUREMANAGER_H__
#endif
