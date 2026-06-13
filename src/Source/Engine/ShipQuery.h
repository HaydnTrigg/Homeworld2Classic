#if 0
#ifndef __SHIPQUERY_H__
#define __SHIPQUERY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CounterValue
{
public:
    _inline CounterValue();
    _inline void clear();
    _inline __int32 TotalValue(CounterValue const &) const;
    _inline __int32 TotalValue() const;
    _inline __int32 BothWaysTotalValue(CounterValue const &) const;
    void Correct(CounterValue const &);
    _inline CounterValue &operator+=(CounterValue const &);
    CounterValue &operator-=(CounterValue const &);
    _inline CounterValue &operator*=(float);
    __int32 m_fighterValue; // 0x0
    __int32 m_corvetteValue; // 0x4
    __int32 m_frigateValue; // 0x8
    __int32 m_neutralValue; // 0xC
    __int32 m_antiFighterValue; // 0x10
    __int32 m_antiCorvetteValue; // 0x14
    __int32 m_antiFrigateValue; // 0x18
};
static_assert(sizeof(CounterValue) == 28, "Invalid CounterValue size");

/* ---------- prototypes */

extern void CalcSquadronListValue<std::vector<Squadron *,std::allocator<Squadron *> > >(std::vector<Squadron *,std::allocator<Squadron *> > const &squadList, CounterValue &outVal);
extern void CalcSquadronListValue<SquadronList>(SquadronList const &squadList, CounterValue &outVal);
extern void CalcSelectionListValue<Selection>(Selection const &shipList, CounterValue &outVal);
extern void CounterValueSubSet<std::vector<Squadron *,std::allocator<Squadron *> > >(std::vector<Squadron *,std::allocator<Squadron *> > const &testGroup, SquadronList const &excludeList, CounterValue &outVal);

/* ---------- globals */

/* ---------- public code */

_extern _sub_524468(CounterValue *const);
_inline CounterValue::CounterValue() // 0x524468
{
    mangled_assert("??0CounterValue@@QAE@XZ");
    todo("implement");
    _sub_524468(this);
}

_extern void _sub_5275C2(CounterValue *const);
_inline void CounterValue::clear() // 0x5275C2
{
    mangled_assert("?clear@CounterValue@@QAEXXZ");
    todo("implement");
    _sub_5275C2(this);
}

_extern __int32 _sub_5258F2(CounterValue const *const);
_inline __int32 CounterValue::TotalValue() const // 0x5258F2
{
    mangled_assert("?TotalValue@CounterValue@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_5258F2(this);
    return __result;
}

_extern __int32 _sub_52588E(CounterValue const *const, CounterValue const &);
_inline __int32 CounterValue::TotalValue(CounterValue const &) const // 0x52588E
{
    mangled_assert("?TotalValue@CounterValue@@QBEHABV1@@Z");
    todo("implement");
    __int32 __result = _sub_52588E(this, arg);
    return __result;
}

_extern __int32 _sub_53068D(CounterValue const *const, CounterValue const &);
_inline __int32 CounterValue::BothWaysTotalValue(CounterValue const &) const // 0x53068D
{
    mangled_assert("?BothWaysTotalValue@CounterValue@@QBEHABV1@@Z");
    todo("implement");
    __int32 __result = _sub_53068D(this, arg);
    return __result;
}

_extern CounterValue &_sub_52FF1C(CounterValue *const, CounterValue const &);
_inline CounterValue &CounterValue::operator+=(CounterValue const &) // 0x52FF1C
{
    mangled_assert("??YCounterValue@@QAEAAV0@ABV0@@Z");
    todo("implement");
    CounterValue & __result = _sub_52FF1C(this, arg);
    return __result;
}

_extern CounterValue &_sub_53BFF9(CounterValue *const, float);
_inline CounterValue &CounterValue::operator*=(float) // 0x53BFF9
{
    mangled_assert("??XCounterValue@@QAEAAV0@M@Z");
    todo("implement");
    CounterValue & __result = _sub_53BFF9(this, arg);
    return __result;
}

_extern void _sub_525A67(std::vector<Squadron *,std::allocator<Squadron *> > const &, CounterValue &);
void CalcSquadronListValue<std::vector<Squadron *,std::allocator<Squadron *> > >(std::vector<Squadron *,std::allocator<Squadron *> > const &squadList, CounterValue &outVal) // 0x525A67
{
    mangled_assert("??$CalcSquadronListValue@V?$vector@PAVSquadron@@V?$allocator@PAVSquadron@@@std@@@std@@@@YGXABV?$vector@PAVSquadron@@V?$allocator@PAVSquadron@@@std@@@std@@AAVCounterValue@@@Z");
    todo("implement");
    _sub_525A67(squadList, outVal);
}

_extern void _sub_524443(SquadronList const &, CounterValue &);
void CalcSquadronListValue<SquadronList>(SquadronList const &squadList, CounterValue &outVal) // 0x524443
{
    mangled_assert("??$CalcSquadronListValue@VSquadronList@@@@YGXABVSquadronList@@AAVCounterValue@@@Z");
    todo("implement");
    _sub_524443(squadList, outVal);
}

_extern void _sub_524401(Selection const &, CounterValue &);
void CalcSelectionListValue<Selection>(Selection const &shipList, CounterValue &outVal) // 0x524401
{
    mangled_assert("??$CalcSelectionListValue@VSelection@@@@YGXABVSelection@@AAVCounterValue@@@Z");
    todo("implement");
    _sub_524401(shipList, outVal);
}

_extern void _sub_52DF38(std::vector<Squadron *,std::allocator<Squadron *> > const &, SquadronList const &, CounterValue &);
void CounterValueSubSet<std::vector<Squadron *,std::allocator<Squadron *> > >(std::vector<Squadron *,std::allocator<Squadron *> > const &testGroup, SquadronList const &excludeList, CounterValue &outVal) // 0x52DF38
{
    mangled_assert("??$CounterValueSubSet@V?$vector@PAVSquadron@@V?$allocator@PAVSquadron@@@std@@@std@@@@YGXABV?$vector@PAVSquadron@@V?$allocator@PAVSquadron@@@std@@@std@@ABVSquadronList@@AAVCounterValue@@@Z");
    todo("implement");
    _sub_52DF38(testGroup, excludeList, outVal);
}

/* ---------- private code */

#endif // __SHIPQUERY_H__
#endif
