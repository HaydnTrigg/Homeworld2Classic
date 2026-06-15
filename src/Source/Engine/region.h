#if 0
#ifndef __REGION_H__
#define __REGION_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct KeySeq
{
    unsigned char nKeys; // 0x0
    unsigned char keys[4]; // 0x1
    KeyEvent onEvent; // 0x8
    __int32 procID; // 0xC
    __int32 procData; // 0x10
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > procLuaStr; // 0x14
    _inline KeySeq(KeySeq const &); /* compiler_generated() */
    _inline KeySeq(); /* compiler_generated() */
    _inline ~KeySeq(); /* compiler_generated() */
    KeySeq &operator=(KeySeq const &); /* compiler_generated() */
};
static_assert(sizeof(KeySeq) == 44, "Invalid KeySeq size");

struct RegionKeyEvent
{
    __int32 keyID; // 0x0
    KeyEvent keyEvent; // 0x4
};
static_assert(sizeof(RegionKeyEvent) == 8, "Invalid RegionKeyEvent size");

class region
{
public:
    region(region const &); /* compiler_generated() */
    _inline region();
    _inline ~region();
    PrimRectangle rect; // 0x0
    void (*drawFunction)(region *); // 0x10
    unsigned __int32 (*processFunction)(region *, __int32, __int32, __int32, __int32); // 0x14
    void (*processLuaFunction)(region *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &); // 0x18
    region *parent; // 0x1C
    region *child; // 0x20
    region *previous; // 0x24
    region *next; // 0x28
    unsigned __int32 flags; // 0x2C
    unsigned __int32 status; // 0x30
    std::vector<KeySeq,std::allocator<KeySeq> > m_accSeqs; // 0x34
    std::vector<RegionKeyEvent,std::allocator<RegionKeyEvent> > m_keyEvents; // 0x40
    __int32 userID; // 0x4C
    unsigned __int32 validationKey; // 0x50
    unsigned __int32 lastframedrawn; // 0x54
    bool isHandlingKeys; // 0x58
    void *pFeComponent; // 0x5C
    __int32 dataIndex; // 0x60
    region &operator=(region const &); /* compiler_generated() */
};
static_assert(sizeof(region) == 100, "Invalid region size");

struct regrenderevent
{
    void (*function)(region *); // 0x0
    region *reg; // 0x4
};
static_assert(sizeof(regrenderevent) == 8, "Invalid regrenderevent size");

class RegUpdateTask :
    public Task
{
public:
    RegUpdateTask(RegUpdateTask const &); /* compiler_generated() */
private:
    RegUpdateTask();
public:
    _inline RegUpdateTask(region *);
    void eventFunction();
    virtual __int32 taskFunction(float) override;
    virtual _inline ~RegUpdateTask() override;
private:
    region *baseRegion; // 0x30
public:
    RegUpdateTask &operator=(RegUpdateTask const &); /* compiler_generated() */
};
static_assert(sizeof(RegUpdateTask) == 52, "Invalid RegUpdateTask size");

class RegDrawTask :
    public Task
{
public:
    RegDrawTask(RegDrawTask const &); /* compiler_generated() */
    RegDrawTask(__int32);
    virtual __int32 taskFunction(float) override;
    virtual ~RegDrawTask() override;
    void functionAdd(void (*)(region *), region *);
    void functionAddPossibly(region *);
    void functionsDraw();
    void functionsDebugDraw();
    void deleteReferencesTo(region *);
    void updateReferencesTo(region *);
    _inline bool isDrawEnabled() const;
    _inline void enableDraw(bool);
private:
    regrenderevent *renderEvent; // 0x30
    __int32 eventIndex; // 0x34
    __int32 numberEvents; // 0x38
    bool m_bDraw; // 0x3C
public:
    RegDrawTask &operator=(RegDrawTask const &); /* compiler_generated() */
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(RegDrawTask) == 64, "Invalid RegDrawTask size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline region::region() // 0x464FF1
{
    mangled_assert("??0region@@QAE@XZ");
    todo("implement");
}

_inline region::~region() // 0x465044
{
    mangled_assert("??1region@@QAE@XZ");
    todo("implement");
}

_inline RegUpdateTask::RegUpdateTask(region *) // 0x464FD6
{
    mangled_assert("??0RegUpdateTask@@QAE@PAVregion@@@Z");
    todo("implement");
}

_inline RegUpdateTask::~RegUpdateTask() // 0x465039
{
    mangled_assert("??1RegUpdateTask@@UAE@XZ");
    todo("implement");
}

_inline bool RegDrawTask::isDrawEnabled() const // 0x45097D
{
    mangled_assert("?isDrawEnabled@RegDrawTask@@QBE_NXZ");
    todo("implement");
}

_inline void RegDrawTask::enableDraw(bool) // 0x45068E
{
    mangled_assert("?enableDraw@RegDrawTask@@QAEX_N@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __REGION_H__
#endif
