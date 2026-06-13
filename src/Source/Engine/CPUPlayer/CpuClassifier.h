#if 0
#ifndef __CPUCLASSIFIER_H__
#define __CPUCLASSIFIER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CpuClassifier
{
public:
    enum SquadType
    {
        eMotherShip = 0, // 0x0000
        eCollector = 1, // 0x0001
        eRefinery = 2, // 0x0002
        eBuilder = 3, // 0x0003
        eScout = 4, // 0x0004
        eDropOff = 5, // 0x0005
        eFighter = 6, // 0x0006
        eFrigate = 7, // 0x0007
        eCorvette = 8, // 0x0008
        eCapital = 9, // 0x0009
        eAntiFighter = 10, // 0x000A
        eAntiCorvette = 11, // 0x000B
        eAntiFrigate = 12, // 0x000C
        ePlatform = 13, // 0x000D
        eNonThreat = 14, // 0x000E
        eSalvageDropOff = 15, // 0x000F
        eHyperspaceGate = 16, // 0x0010
        eCapture = 17, // 0x0011
        eShield = 18, // 0x0012
        eSubSystemAttackers = 19, // 0x0013
        eNonCriticalSubSys = 20, // 0x0014
        eGoodRepairAttackers = 21, // 0x0015
        eMaxCount = 22, // 0x0016
        eMaxUserCount = 32, // 0x0020 ' '
    };
    CpuClassifier(CpuClassifier const &); /* compiler_generated() */
    CpuClassifier(Player &, LuaConfig &, SimProxy &);
    _inline ~CpuClassifier();
    void BindToLua(LuaConfig &);
    void DebugStats(unsigned __int32, float);
    bool isOfClass(unsigned __int32, unsigned __int32) const;
    unsigned __int32 classSize(unsigned __int32) const;
    unsigned __int32 classAt(unsigned __int32, unsigned __int32) const;
    unsigned __int32 numActiveOfClass(unsigned __int32, unsigned __int32) const;
    unsigned __int32 numQueueOfClass(unsigned __int32) const;
    static unsigned __int32 s_hgn_battlecruiser_id;
    static unsigned __int32 s_vgr_battlecruiser_id;
    static unsigned __int32 s_hyperspace_id;
    typedef std::vector<unsigned int,std::allocator<unsigned int> > IDList;
    struct Class
    {
        std::vector<unsigned int,std::allocator<unsigned int> > m_list; // 0x0
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0xC
        _inline Class(CpuClassifier::Class const &); /* compiler_generated() */
        _inline Class(); /* compiler_generated() */
        _inline ~Class(); /* compiler_generated() */
        _inline CpuClassifier::Class &operator=(CpuClassifier::Class const &); /* compiler_generated() */
    };
    static_assert(sizeof(Class) == 36, "Invalid Class size");
    typedef std::vector<CpuClassifier::Class,std::allocator<CpuClassifier::Class> > ClassList;
private:
    std::vector<CpuClassifier::Class,std::allocator<CpuClassifier::Class> > m_classList; // 0x0
    std::vector<LuaBinding::Obj,std::allocator<LuaBinding::Obj> > m_exported; // 0xC
    Player &m_player; // 0x18
    SimProxy &m_proxy; // 0x1C
    void AddToClass(unsigned __int32, unsigned __int32);
    void AddClassName(unsigned __int32, char const *);
};
static_assert(sizeof(CpuClassifier) == 32, "Invalid CpuClassifier size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_5416D5(CpuClassifier *const);
_inline CpuClassifier::~CpuClassifier() // 0x5416D5
{
    mangled_assert("??1CpuClassifier@@QAE@XZ");
    todo("implement");
    _sub_5416D5(this);
}

/* ---------- private code */

#endif // __CPUCLASSIFIER_H__
#endif
