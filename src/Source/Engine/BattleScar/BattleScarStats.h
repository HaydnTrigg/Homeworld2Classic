#if 0
#ifndef __BATTLESCARSTATS_H__
#define __BATTLESCARSTATS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class BattleScarStats
{
public:
    BattleScarStats(BattleScarStats const &); /* compiler_generated() */
    BattleScarStats();
    ~BattleScarStats();
    void setup(float, __int32);
    void reset();
    void addScar(BattleScarManager::Handle &);
    void rmvScar(BattleScarManager::Handle &);
    void modifyScar(float, __int32, float, __int32);
    float getDamage() const;
    __int32 getTriCount() const;
    float getTriEquivDamage(__int32) const;
    float getTriEquivDamage() const;
    bool getMinDamage(float &) const;
    void findMinDamageBegin();
    void findMinDamageSample(float);
    void findMinDamageEnd();
    void recordScarTime(BattleScarManager::Type const *, float);
    float getLastScarTime(BattleScarManager::Type const *) const;
    void save(SaveGameData *) const;
    void restore(SaveGameData *);
    class Data;
private:
    boost::scoped_ptr<BattleScarStats::Data> m_pimpl; // 0x0
public:
    BattleScarStats &operator=(BattleScarStats const &); /* compiler_generated() */
};
static_assert(sizeof(BattleScarStats) == 4, "Invalid BattleScarStats size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __BATTLESCARSTATS_H__
#endif
