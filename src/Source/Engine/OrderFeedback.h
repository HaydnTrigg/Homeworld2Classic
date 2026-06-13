#if 0
#ifndef __ORDERFEEDBACK_H__
#define __ORDERFEEDBACK_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct OrderFeedbackValue
{
    bool showFeedback; // 0x0
    float pulseSize; // 0x4
    float pulseHertz; // 0x8
    vector4 pulseColour; // 0xC
    vector4 headColour; // 0x1C
    vector4 tailColour; // 0x2C
    _inline OrderFeedbackValue(); /* compiler_generated() */
};
static_assert(sizeof(OrderFeedbackValue) == 60, "Invalid OrderFeedbackValue size");

struct OrderFeedbackInfo
{
    _inline OrderFeedbackInfo(OrderFeedbackInfo const &); /* compiler_generated() */
    OrderFeedbackInfo(unsigned __int32, Squadron const *, SobID const &);
    OrderFeedbackInfo(unsigned __int32, Squadron const *, vector3 const &);
    OrderFeedbackInfo(Command const *);
    OrderFeedbackInfo();
    unsigned __int32 m_command; // 0x0
    Squadron const *m_squadron; // 0x4
    DynamicPoint m_target; // 0x8
    _inline ~OrderFeedbackInfo(); /* compiler_generated() */
    _inline OrderFeedbackInfo &operator=(OrderFeedbackInfo const &); /* compiler_generated() */
};
static_assert(sizeof(OrderFeedbackInfo) == 196, "Invalid OrderFeedbackInfo size");

class OrderFeedbackManager
{
public:
    static bool Initialize();
    static bool Finalize();
    static OrderFeedbackManager *i();
    void registerRecentlyOrderedShips(Selection const &);
    void render(Camera const *, float);
    _inline unsigned __int32 getFadeValue() const;
    void setFadeValue(unsigned __int32);
    unsigned __int32 getMinFadeValue() const;
    unsigned __int32 getMaxFadeValue() const;
    OrderFeedbackManager(OrderFeedbackManager const &); /* compiler_generated() */
private:
    OrderFeedbackManager();
    ~OrderFeedbackManager();
    void makeOrientationVectors(vector3 const *, vector3 &, vector3 &, vector3 &);
    void displayCommand(Camera const *, OrderFeedbackInfo const &, float, float, float);
    void drawFeedback(Squadron const *, vector3 const &, vector3 const &, matrix3 const &, Camera const *, float, float, float, OrderFeedbackInfo const &, bool);
    void displayRallyPoint(ShipHold const *);
    float getFeedbackFadeTime() const;
    float getFeedbackFullTime() const;
    static OrderFeedbackManager *m_pInstance;
    std::list<std::pair<SquadronList,float>,std::allocator<std::pair<SquadronList,float> > > m_recentlyOrderedSquadrons; // 0x0
    unsigned __int32 m_fadeValue; // 0x8
public:
    OrderFeedbackManager &operator=(OrderFeedbackManager const &); /* compiler_generated() */
};
static_assert(sizeof(OrderFeedbackManager) == 12, "Invalid OrderFeedbackManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern unsigned __int32 _sub_61261E(OrderFeedbackManager const *const);
_inline unsigned __int32 OrderFeedbackManager::getFadeValue() const // 0x61261E
{
    mangled_assert("?getFadeValue@OrderFeedbackManager@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_61261E(this);
    return __result;
}

/* ---------- private code */

#endif // __ORDERFEEDBACK_H__
#endif
