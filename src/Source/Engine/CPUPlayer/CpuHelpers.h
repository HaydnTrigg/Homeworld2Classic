#if 0
#ifndef __CPUHELPERS_H__
#define __CPUHELPERS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern __int32 CpuHelper::GetResourceScore<std::vector<Squadron *,std::allocator<Squadron *> > >(std::vector<Squadron *,std::allocator<Squadron *> > const &sqList, CpuClassifier &classifier);
extern __int32 CpuHelper::GetResourceScore<SquadronList>(SquadronList const &sqList, CpuClassifier &classifier);

/* ---------- globals */

/* ---------- public code */

_extern __int32 _sub_52EC77(std::vector<Squadron *,std::allocator<Squadron *> > const &, CpuClassifier &);
__int32 CpuHelper::GetResourceScore<std::vector<Squadron *,std::allocator<Squadron *> > >(std::vector<Squadron *,std::allocator<Squadron *> > const &sqList, CpuClassifier &classifier) // 0x52EC77
{
    mangled_assert("??$GetResourceScore@V?$vector@PAVSquadron@@V?$allocator@PAVSquadron@@@std@@@std@@@CpuHelper@@YGHABV?$vector@PAVSquadron@@V?$allocator@PAVSquadron@@@std@@@std@@AAVCpuClassifier@@@Z");
    todo("implement");
    __int32 __result = _sub_52EC77(sqList, classifier);
    return __result;
}

_extern __int32 _sub_52DFCE(SquadronList const &, CpuClassifier &);
__int32 CpuHelper::GetResourceScore<SquadronList>(SquadronList const &sqList, CpuClassifier &classifier) // 0x52DFCE
{
    mangled_assert("??$GetResourceScore@VSquadronList@@@CpuHelper@@YGHABVSquadronList@@AAVCpuClassifier@@@Z");
    todo("implement");
    __int32 __result = _sub_52DFCE(sqList, classifier);
    return __result;
}

/* ---------- private code */

#endif // __CPUHELPERS_H__
#endif
