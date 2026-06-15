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

_inline CounterValue::CounterValue() // 0x524468
{
    mangled_assert("??0CounterValue@@QAE@XZ");
    todo("implement");
}

_inline void CounterValue::clear() // 0x5275C2
{
    mangled_assert("?clear@CounterValue@@QAEXXZ");
    todo("implement");
}

_inline __int32 CounterValue::TotalValue() const // 0x5258F2
{
    mangled_assert("?TotalValue@CounterValue@@QBEHXZ");
    todo("implement");
}

_inline __int32 CounterValue::TotalValue(CounterValue const &) const // 0x52588E
{
    mangled_assert("?TotalValue@CounterValue@@QBEHABV1@@Z");
    todo("implement");
}

_inline __int32 CounterValue::BothWaysTotalValue(CounterValue const &) const // 0x53068D
{
    mangled_assert("?BothWaysTotalValue@CounterValue@@QBEHABV1@@Z");
    todo("implement");
}

_inline CounterValue &CounterValue::operator+=(CounterValue const &) // 0x52FF1C
{
    mangled_assert("??YCounterValue@@QAEAAV0@ABV0@@Z");
    todo("implement");
}

_inline CounterValue &CounterValue::operator*=(float) // 0x53BFF9
{
    mangled_assert("??XCounterValue@@QAEAAV0@M@Z");
    todo("implement");
}

void CalcSquadronListValue<std::vector<Squadron *,std::allocator<Squadron *> > >(std::vector<Squadron *,std::allocator<Squadron *> > const &squadList, CounterValue &outVal) // 0x525A67
{
    mangled_assert("??$CalcSquadronListValue@V?$vector@PAVSquadron@@V?$allocator@PAVSquadron@@@std@@@std@@@@YGXABV?$vector@PAVSquadron@@V?$allocator@PAVSquadron@@@std@@@std@@AAVCounterValue@@@Z");
    todo("implement");
}

void CalcSquadronListValue<SquadronList>(SquadronList const &squadList, CounterValue &outVal) // 0x524443
{
    mangled_assert("??$CalcSquadronListValue@VSquadronList@@@@YGXABVSquadronList@@AAVCounterValue@@@Z");
    todo("implement");
}

void CalcSelectionListValue<Selection>(Selection const &shipList, CounterValue &outVal) // 0x524401
{
    mangled_assert("??$CalcSelectionListValue@VSelection@@@@YGXABVSelection@@AAVCounterValue@@@Z");
    todo("implement");
}

void CounterValueSubSet<std::vector<Squadron *,std::allocator<Squadron *> > >(std::vector<Squadron *,std::allocator<Squadron *> > const &testGroup, SquadronList const &excludeList, CounterValue &outVal) // 0x52DF38
{
    mangled_assert("??$CounterValueSubSet@V?$vector@PAVSquadron@@V?$allocator@PAVSquadron@@@std@@@std@@@@YGXABV?$vector@PAVSquadron@@V?$allocator@PAVSquadron@@@std@@@std@@ABVSquadronList@@AAVCounterValue@@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __SHIPQUERY_H__
#endif
