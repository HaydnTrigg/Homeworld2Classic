#if 0
#ifndef __REACTIVEFLEET_H__
#define __REACTIVEFLEET_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ReactiveFleet
{
public:
    static bool initialise();
    static bool shutdown();
    static ReactiveFleet *instance();
    void addReactiveFleetSlot(char const *, __int32, bool, vector3, float, float, float, char const *);
    void addReactiveFleetResourceSlot(char const *, vector3, float, float, float);
    void loadReactiveFleet();
    _inline float getReactiveFleetSizeInRU() const;
    _inline float getReactiveFleetExtraRU() const;
    _inline float getActualPlayerFleetSizeInRU() const;
    _inline float getActualPlayerFleetExtraRU() const;
    float m_multiplierForExtraShips; // 0x0
    float m_multiplierForExtraRU; // 0x4
private:
    std::vector<ReactiveFleetSlot *,std::allocator<ReactiveFleetSlot *> > m_slots; // 0x8
    std::vector<ReactiveFleetResourceSlot *,std::allocator<ReactiveFleetResourceSlot *> > m_resourceSlots; // 0x14
    float m_reactiveFleetSizeInRU; // 0x20
    float m_reactiveFleetExtraRU; // 0x24
    float m_actualPlayerFleetSizeInRU; // 0x28
    float m_actualPlayerFleetExtraRU; // 0x2C
public:
    ReactiveFleet(ReactiveFleet const &); /* compiler_generated() */
private:
    ReactiveFleet();
    ~ReactiveFleet();
    bool scoreReferenceFleet(Score &);
    void scorePlayersFleet(unsigned __int32, Score &);
    void scoreSquadron(Squadron *, Score &);
    void createSquadronForPlayer(Player *, ShipStatic *, ReactiveFleetSlot *);
    void createSquadronsForPlayer(Player *, Score const &, Score const &, Score const &);
    void raiseResourcesForPlayer(float);
    static ReactiveFleet *s_instance;
public:
    ReactiveFleet &operator=(ReactiveFleet const &); /* compiler_generated() */
};
static_assert(sizeof(ReactiveFleet) == 48, "Invalid ReactiveFleet size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern float _sub_7165FD(ReactiveFleet const *const);
_inline float ReactiveFleet::getReactiveFleetSizeInRU() const // 0x7165FD
{
    mangled_assert("?getReactiveFleetSizeInRU@ReactiveFleet@@QBEMXZ");
    todo("implement");
    float __result = _sub_7165FD(this);
    return __result;
}

_extern float _sub_7165F9(ReactiveFleet const *const);
_inline float ReactiveFleet::getReactiveFleetExtraRU() const // 0x7165F9
{
    mangled_assert("?getReactiveFleetExtraRU@ReactiveFleet@@QBEMXZ");
    todo("implement");
    float __result = _sub_7165F9(this);
    return __result;
}

_extern float _sub_7165F5(ReactiveFleet const *const);
_inline float ReactiveFleet::getActualPlayerFleetSizeInRU() const // 0x7165F5
{
    mangled_assert("?getActualPlayerFleetSizeInRU@ReactiveFleet@@QBEMXZ");
    todo("implement");
    float __result = _sub_7165F5(this);
    return __result;
}

_extern float _sub_7165F1(ReactiveFleet const *const);
_inline float ReactiveFleet::getActualPlayerFleetExtraRU() const // 0x7165F1
{
    mangled_assert("?getActualPlayerFleetExtraRU@ReactiveFleet@@QBEMXZ");
    todo("implement");
    float __result = _sub_7165F1(this);
    return __result;
}

/* ---------- private code */

#endif // __REACTIVEFLEET_H__
#endif
