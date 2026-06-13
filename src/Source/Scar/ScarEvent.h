#if 0
#ifndef __SCAREVENT_H__
#define __SCAREVENT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ScarEvent
{
public:
    ScarEvent(ScarEvent const &); /* compiler_generated() */
    ScarEvent();
    ~ScarEvent();
    void Load(LuaConfig *, char const *);
    _inline char const *GetName() const;
    bool Update(LuaConfig &);
    void Play();
    void Reset();
    void Stop();
    bool IsDone() const;
    class EventBlock
    {
    public:
        EventBlock(ScarEvent::EventBlock const &); /* compiler_generated() */
        EventBlock();
        ~EventBlock();
        void Load(LuaConfig *, char const *);
        void Update(LuaConfig &);
        bool IsDone(LuaConfig &);
        _inline void Reset();
        struct EventEntry
        {
            std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_onExecute; // 0x0
            std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_onExit; // 0x18
            EventEntry(ScarEvent::EventBlock::EventEntry const &); /* compiler_generated() */
            _inline EventEntry(); /* compiler_generated() */
            _inline ~EventEntry(); /* compiler_generated() */
            ScarEvent::EventBlock::EventEntry &operator=(ScarEvent::EventBlock::EventEntry const &); /* compiler_generated() */
        };
        static_assert(sizeof(EventEntry) == 48, "Invalid EventEntry size");
        typedef std::vector<ScarEvent::EventBlock::EventEntry *,std::allocator<ScarEvent::EventBlock::EventEntry *> > EventEntryList;
    private:
        std::vector<ScarEvent::EventBlock::EventEntry *,std::allocator<ScarEvent::EventBlock::EventEntry *> > m_eventEntryList; // 0x0
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0xC
        bool m_bHasBeenRun; // 0x24
    public:
        ScarEvent::EventBlock &operator=(ScarEvent::EventBlock const &); /* compiler_generated() */
    };
    static_assert(sizeof(EventBlock) == 40, "Invalid EventBlock size");
    typedef std::vector<ScarEvent::EventBlock *,std::allocator<ScarEvent::EventBlock *> > EventBlockList;
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x0
    std::vector<ScarEvent::EventBlock *,std::allocator<ScarEvent::EventBlock *> > m_blockList; // 0x18
    std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ScarEvent::EventBlock *> > > m_currentBlock; // 0x24
public:
    ScarEvent &operator=(ScarEvent const &); /* compiler_generated() */
};
static_assert(sizeof(ScarEvent) == 40, "Invalid ScarEvent size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern char const *_sub_7288EA(ScarEvent const *const);
_inline char const *ScarEvent::GetName() const // 0x7288EA
{
    mangled_assert("?GetName@ScarEvent@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_7288EA(this);
    return __result;
}

_extern void _sub_72D711(ScarEvent::EventBlock *const);
_inline void ScarEvent::EventBlock::Reset() // 0x72D711
{
    mangled_assert("?Reset@EventBlock@ScarEvent@@QAEXXZ");
    todo("implement");
    _sub_72D711(this);
}

/* ---------- private code */

#endif // __SCAREVENT_H__
#endif
