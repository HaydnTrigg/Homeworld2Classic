#if 0
#ifndef __CPUBLOBS_H__
#define __CPUBLOBS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CpuBlob
{
public:
    typedef std::vector<Squadron *,std::allocator<Squadron *> > SquadList;
    _inline float GetRadius() const;
    _inline vector3 const &GetCenter() const;
    float GetRadiusMult() const;
    _inline std::vector<Squadron *,std::allocator<Squadron *> > const &GetSquadList() const;
    _inline std::vector<Squadron *,std::allocator<Squadron *> > const &GetEnemyList() const;
    vector3 const &GetDestPos() const;
    void Analyze();
    void EnemyAnalyze();
    void AddSquadrons(Player *, bool);
    void Clear();
    _inline void SetCenter(vector3 const &);
    _inline void SetRadius(float);
    bool m_beingAttacked; // 0x0
    __int32 m_friendlyCost; // 0x4
    __int32 m_enemyCost; // 0x8
    CounterValue m_friendlyValue; // 0xC
    CounterValue m_enemyValue; // 0x28
private:
    std::vector<Squadron *,std::allocator<Squadron *> > m_squadList; // 0x44
    std::vector<Squadron *,std::allocator<Squadron *> > m_enemyList; // 0x50
    vector3 m_center; // 0x5C
    float m_radius; // 0x68
    vector3 m_destPos; // 0x6C
public:
    CpuBlob(CpuBlob const &);
    CpuBlob(Squadron *, float);
    CpuBlob(vector3 const &, float);
    CpuBlob(Squadron *);
    _inline ~CpuBlob();
private:
    void Combine(CpuBlob &);
    void AddEnemySquad(Squadron *);
    void AddFriendlySquad(Squadron *);
public:
    CpuBlob &operator=(CpuBlob const &); /* compiler_generated() */
};
static_assert(sizeof(CpuBlob) == 120, "Invalid CpuBlob size");

class CpuBlobManager
{
public:
    CpuBlobManager(CpuBlobManager const &); /* compiler_generated() */
    CpuBlobManager(CpuCommon &);
    ~CpuBlobManager();
    void Update();
    _inline unsigned __int32 GetBlobCount() const;
    _inline CpuBlob const &GetBlobAt(unsigned __int32) const;
    _inline unsigned __int32 GetEnemyBlobCount() const;
    _inline CpuBlob const &GetEnemyBlobAt(unsigned __int32) const;
    CpuBlob *FindBlob(Squadron const *);
    void PointInBlob(vector3 const &, std::vector<CpuBlob *,std::allocator<CpuBlob *> > &);
    void FindBlobs(SquadronList const &, std::vector<CpuBlob *,std::allocator<CpuBlob *> > &);
    void GetEnemyInBlobs(SquadronList const &, SquadronList &);
    void GetShipsInBlobs(SquadronList const &, SquadronList &, SquadronList &);
    void Debug();
    void DebugStats(float);
    typedef std::vector<SquadronList const *,std::allocator<SquadronList const *> > SQListArray;
private:
    void CreateBlobs(std::vector<SquadronList const *,std::allocator<SquadronList const *> > const &);
    void CreateEnemyBlobs(std::vector<SquadronList const *,std::allocator<SquadronList const *> > const &);
    void AddEnemiesToBlobs();
    void AnalyzeBlobs();
    typedef std::vector<CpuBlob,std::allocator<CpuBlob> > CpuBlobList;
    std::vector<CpuBlob,std::allocator<CpuBlob> > m_blobs; // 0x0
    std::vector<CpuBlob,std::allocator<CpuBlob> > m_enemyblobs; // 0xC
    CpuCommon &m_common; // 0x18
    bool m_underAttack; // 0x1C
    unsigned __int32 m_totalNumEnemies; // 0x20
    float m_fighterValue; // 0x24
    float m_corvetteValue; // 0x28
    float m_frigateValue; // 0x2C
    float m_antiFighterValue; // 0x30
    float m_antiCorvetteValue; // 0x34
    float m_antiFrigateValue; // 0x38
};
static_assert(sizeof(CpuBlobManager) == 60, "Invalid CpuBlobManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern float _sub_526ED8(CpuBlob const *const);
_inline float CpuBlob::GetRadius() const // 0x526ED8
{
    mangled_assert("?GetRadius@CpuBlob@@QBEMXZ");
    todo("implement");
    float __result = _sub_526ED8(this);
    return __result;
}

_extern vector3 const &_sub_526E4F(CpuBlob const *const);
_inline vector3 const &CpuBlob::GetCenter() const // 0x526E4F
{
    mangled_assert("?GetCenter@CpuBlob@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_526E4F(this);
    return __result;
}

_extern std::vector<Squadron *,std::allocator<Squadron *> > const &_sub_526F88(CpuBlob const *const);
_inline std::vector<Squadron *,std::allocator<Squadron *> > const &CpuBlob::GetSquadList() const // 0x526F88
{
    mangled_assert("?GetSquadList@CpuBlob@@QBEABV?$vector@PAVSquadron@@V?$allocator@PAVSquadron@@@std@@@std@@XZ");
    todo("implement");
    std::vector<Squadron *,std::allocator<Squadron *> > const & __result = _sub_526F88(this);
    return __result;
}

_extern std::vector<Squadron *,std::allocator<Squadron *> > const &_sub_526ED4(CpuBlob const *const);
_inline std::vector<Squadron *,std::allocator<Squadron *> > const &CpuBlob::GetEnemyList() const // 0x526ED4
{
    mangled_assert("?GetEnemyList@CpuBlob@@QBEABV?$vector@PAVSquadron@@V?$allocator@PAVSquadron@@@std@@@std@@XZ");
    todo("implement");
    std::vector<Squadron *,std::allocator<Squadron *> > const & __result = _sub_526ED4(this);
    return __result;
}

_extern void _sub_54078B(CpuBlob *const, vector3 const &);
_inline void CpuBlob::SetCenter(vector3 const &) // 0x54078B
{
    mangled_assert("?SetCenter@CpuBlob@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_54078B(this, arg);
}

_extern void _sub_54079C(CpuBlob *const, float);
_inline void CpuBlob::SetRadius(float) // 0x54079C
{
    mangled_assert("?SetRadius@CpuBlob@@QAEXM@Z");
    todo("implement");
    _sub_54079C(this, arg);
}

_extern void _sub_5262BB(CpuBlob *const);
_inline CpuBlob::~CpuBlob() // 0x5262BB
{
    mangled_assert("??1CpuBlob@@QAE@XZ");
    todo("implement");
    _sub_5262BB(this);
}

_extern unsigned __int32 _sub_531994(CpuBlobManager const *const);
_inline unsigned __int32 CpuBlobManager::GetBlobCount() const // 0x531994
{
    mangled_assert("?GetBlobCount@CpuBlobManager@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_531994(this);
    return __result;
}

_extern CpuBlob const &_sub_531988(CpuBlobManager const *const, unsigned __int32);
_inline CpuBlob const &CpuBlobManager::GetBlobAt(unsigned __int32) const // 0x531988
{
    mangled_assert("?GetBlobAt@CpuBlobManager@@QBEABVCpuBlob@@I@Z");
    todo("implement");
    CpuBlob const & __result = _sub_531988(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_5319F6(CpuBlobManager const *const);
_inline unsigned __int32 CpuBlobManager::GetEnemyBlobCount() const // 0x5319F6
{
    mangled_assert("?GetEnemyBlobCount@CpuBlobManager@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_5319F6(this);
    return __result;
}

_extern CpuBlob const &_sub_5319E9(CpuBlobManager const *const, unsigned __int32);
_inline CpuBlob const &CpuBlobManager::GetEnemyBlobAt(unsigned __int32) const // 0x5319E9
{
    mangled_assert("?GetEnemyBlobAt@CpuBlobManager@@QBEABVCpuBlob@@I@Z");
    todo("implement");
    CpuBlob const & __result = _sub_5319E9(this, arg);
    return __result;
}

/* ---------- private code */

#endif // __CPUBLOBS_H__
#endif
