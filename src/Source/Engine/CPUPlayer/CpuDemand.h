#if 0
#ifndef __CPUDEMAND_H__
#define __CPUDEMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class DemandSys
{
public:
    DemandSys(DemandSys const &); /* compiler_generated() */
    _inline DemandSys();
    typedef std::pair<unsigned int,float> DemandEntry;
    typedef std::map<unsigned int,float,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,float> > > DemandMap;
    enum
    {
        InvalidItem = 0,
    };
    float m_demandRange; // 0x0
private:
    std::map<unsigned int,float,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,float> > > m_demandMap; // 0x4
public:
    _inline void clear();
    _inline void set(unsigned __int32, float);
    void add(unsigned __int32, float);
    float get(unsigned __int32);
    _inline std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,float> > > > begin() const;
    _inline std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,float> > > > end() const;
    _inline ~DemandSys(); /* compiler_generated() */
    DemandSys &operator=(DemandSys const &); /* compiler_generated() */
};
static_assert(sizeof(DemandSys) == 12, "Invalid DemandSys size");

struct SortDemandPair
{
    bool operator()(std::pair<unsigned int,float> const &, std::pair<unsigned int,float> const &) const;
};
static_assert(sizeof(SortDemandPair) == 1, "Invalid SortDemandPair size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline DemandSys::DemandSys() // 0x528F32
{
    mangled_assert("??0DemandSys@@QAE@XZ");
    todo("implement");
}

_inline void DemandSys::clear() // 0x52C0B4
{
    mangled_assert("?clear@DemandSys@@QAEXXZ");
    todo("implement");
}

_inline void DemandSys::set(unsigned __int32, float) // 0x52C219
{
    mangled_assert("?set@DemandSys@@QAEXIM@Z");
    todo("implement");
}

_inline std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,float> > > > DemandSys::begin() const // 0x52C09D
{
    mangled_assert("?begin@DemandSys@@QBE?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIM@std@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,float> > > > DemandSys::end() const // 0x52C115
{
    mangled_assert("?end@DemandSys@@QBE?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIM@std@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline bool SortDemandPair::operator()(std::pair<unsigned int,float> const &, std::pair<unsigned int,float> const &) const // 0x529394
{
    mangled_assert("??RSortDemandPair@@QBE_NABU?$pair@IM@std@@0@Z");
    todo("implement");
}

unsigned __int32 DemandSys::findhighest<ResearchFilter>(ResearchFilter &, float &) // 0x5373C0
{
    mangled_assert("??$findhighest@VResearchFilter@@@DemandSys@@QAEIAAVResearchFilter@@AAM@Z");
    todo("implement");
}

unsigned __int32 DemandSys::findhighest<BuildFilter>(BuildFilter &, float &) // 0x528613
{
    mangled_assert("??$findhighest@VBuildFilter@@@DemandSys@@QAEIAAVBuildFilter@@AAM@Z");
    todo("implement");
}

unsigned __int32 DemandSys::findhighest<BuildSSFilter>(BuildSSFilter &, float &) // 0x52874D
{
    mangled_assert("??$findhighest@VBuildSSFilter@@@DemandSys@@QAEIAAVBuildSSFilter@@AAM@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __CPUDEMAND_H__
#endif
