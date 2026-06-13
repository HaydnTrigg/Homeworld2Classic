#if 0
#ifndef __ORDERS_BASE_H__
#define __ORDERS_BASE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Order
{
public:
    virtual _inline ~Order();
    _inline OrderType GetType() const;
    _inline unsigned __int32 GetPlayer() const;
    virtual void Execute() const = 0;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const;
    Order(Order const &); /* compiler_generated() */
protected:
    Order(std::basic_istream<char,std::char_traits<char> > &);
    _inline Order(OrderType, unsigned __int32);
    unsigned char m_type; // 0x4
    unsigned char m_player; // 0x5
private:
    unsigned char m_bonusBits; // 0x6
    enum BonusBit
    {
        BB_SPLIT_STRIKE_GROUPS = 32, // 0x0020 ' '
        BB_MOVE_ATTACK = 16, // 0x0010
        BB_BUILD_FLAG = 16, // 0x0010
        BB_WAYPOINT_FORWARD = 16, // 0x0010
        BB_LAUNCH_SHIP_HOLD = 16, // 0x0010
        BB_HYPERSPACE_OFFMAP = 16, // 0x0010
        BB_CLOAK = 16, // 0x0010
        BB_DEFENSEFIELD = 16, // 0x0010
        BB_WAYPOINT_LOOP = 8, // 0x0008
    };
protected:
    _inline bool GetBonusBit(Order::BonusBit) const;
    _inline void SetBonusBit(Order::BonusBit, bool) const;
public:
    Order &operator=(Order const &); /* compiler_generated() */
};
static_assert(sizeof(Order) == 8, "Invalid Order size");

class Order
{
public:
    virtual _inline ~Order();
    _inline OrderType GetType() const;
    _inline unsigned __int32 GetPlayer() const;
    virtual void Execute() const = 0;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const;
    Order(Order const &); /* compiler_generated() */
protected:
    Order(std::basic_istream<char,std::char_traits<char> > &);
    _inline Order(OrderType, unsigned __int32);
    unsigned char m_type; // 0x4
    unsigned char m_player; // 0x5
private:
    unsigned char m_bonusBits; // 0x6
    enum BonusBit
    {
        BB_SPLIT_STRIKE_GROUPS = 32, // 0x0020 ' '
        BB_MOVE_ATTACK = 16, // 0x0010
        BB_BUILD_FLAG = 16, // 0x0010
        BB_WAYPOINT_FORWARD = 16, // 0x0010
        BB_LAUNCH_SHIP_HOLD = 16, // 0x0010
        BB_HYPERSPACE_OFFMAP = 16, // 0x0010
        BB_CLOAK = 16, // 0x0010
        BB_DEFENSEFIELD = 16, // 0x0010
        BB_WAYPOINT_LOOP = 8, // 0x0008
    };
protected:
    _inline bool GetBonusBit(Order::BonusBit) const;
    _inline void SetBonusBit(Order::BonusBit, bool) const;
public:
    Order &operator=(Order const &); /* compiler_generated() */
};
static_assert(sizeof(Order) == 8, "Invalid Order size");

class ResearchOrderBase :
    public Order
{
public:
    typedef Order SuperClass;
    _inline unsigned __int32 GetResearch() const;
    ResearchOrderBase(ResearchOrderBase const &); /* compiler_generated() */
protected:
    ResearchOrderBase(std::basic_istream<char,std::char_traits<char> > &);
    _inline ResearchOrderBase(OrderType, unsigned __int32, unsigned __int32);
    virtual void Execute() const = 0;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
    unsigned __int32 m_researchId; // 0x8
public:
    virtual _inline ~ResearchOrderBase() override; /* compiler_generated() */
    ResearchOrderBase &operator=(ResearchOrderBase const &); /* compiler_generated() */
};
static_assert(sizeof(ResearchOrderBase) == 12, "Invalid ResearchOrderBase size");

class SquadronListOrderBase :
    public Order
{
public:
    typedef Order SuperClass;
    _inline void SetSplitStrikeGroups(bool);
    _inline SquadronList const &GetSquadronList() const;
    SquadronListOrderBase(SquadronListOrderBase const &); /* compiler_generated() */
protected:
    SquadronListOrderBase(std::basic_istream<char,std::char_traits<char> > &);
    _inline SquadronListOrderBase(OrderType, unsigned __int32, SquadronList const &);
    virtual void Execute() const = 0;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
    SquadronList m_squadronList; // 0x8
    bool m_setSplitStrikeGroups; // 0x28
public:
    virtual _inline ~SquadronListOrderBase() override; /* compiler_generated() */
    SquadronListOrderBase &operator=(SquadronListOrderBase const &); /* compiler_generated() */
};
static_assert(sizeof(SquadronListOrderBase) == 44, "Invalid SquadronListOrderBase size");

class SelectionOrderBase :
    public Order
{
public:
    typedef Order SuperClass;
    SelectionOrderBase(SelectionOrderBase const &); /* compiler_generated() */
protected:
    SelectionOrderBase(std::basic_istream<char,std::char_traits<char> > &);
    _inline SelectionOrderBase(OrderType, unsigned __int32, Selection const &);
    virtual void Execute() const = 0;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
    Selection m_selection; // 0x8
public:
    virtual _inline ~SelectionOrderBase() override; /* compiler_generated() */
    SelectionOrderBase &operator=(SelectionOrderBase const &); /* compiler_generated() */
};
static_assert(sizeof(SelectionOrderBase) == 60, "Invalid SelectionOrderBase size");

class SobOrderBase :
    public Order
{
public:
    typedef Order SuperClass;
    SobOrderBase(SobOrderBase const &); /* compiler_generated() */
protected:
    SobOrderBase(std::basic_istream<char,std::char_traits<char> > &);
    _inline SobOrderBase(OrderType, unsigned __int32, SobID const &);
    virtual void Execute() const = 0;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
    SobID m_sobID; // 0x8
public:
    virtual _inline ~SobOrderBase() override; /* compiler_generated() */
    SobOrderBase &operator=(SobOrderBase const &); /* compiler_generated() */
};
static_assert(sizeof(SobOrderBase) == 20, "Invalid SobOrderBase size");

class SquadronList2SobBase :
    public SquadronListOrderBase
{
public:
    typedef SquadronListOrderBase SuperClass;
    _inline SobID const &GetTarget() const;
    SquadronList2SobBase(SquadronList2SobBase const &); /* compiler_generated() */
protected:
    SquadronList2SobBase(std::basic_istream<char,std::char_traits<char> > &);
    _inline SquadronList2SobBase(OrderType, unsigned __int32, SquadronList const &, SobID const &);
    virtual void Execute() const = 0;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
    SobID m_target; // 0x2C
public:
    virtual _inline ~SquadronList2SobBase() override; /* compiler_generated() */
    SquadronList2SobBase &operator=(SquadronList2SobBase const &); /* compiler_generated() */
};
static_assert(sizeof(SquadronList2SobBase) == 56, "Invalid SquadronList2SobBase size");

class Selection2SobBase :
    public SelectionOrderBase
{
public:
    typedef SelectionOrderBase SuperClass;
    Selection2SobBase(Selection2SobBase const &); /* compiler_generated() */
protected:
    Selection2SobBase(std::basic_istream<char,std::char_traits<char> > &);
    Selection2SobBase(OrderType, unsigned __int32, Selection const &, SobID const &);
    virtual void Execute() const = 0;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
    SobID m_target; // 0x3C
public:
    virtual _inline ~Selection2SobBase() override; /* compiler_generated() */
    Selection2SobBase &operator=(Selection2SobBase const &); /* compiler_generated() */
};
static_assert(sizeof(Selection2SobBase) == 72, "Invalid Selection2SobBase size");

class SquadronList2SelectionBase :
    public SquadronListOrderBase
{
public:
    typedef SquadronListOrderBase SuperClass;
    _inline Selection const &GetTargets() const;
    SquadronList2SelectionBase(SquadronList2SelectionBase const &); /* compiler_generated() */
protected:
    SquadronList2SelectionBase(std::basic_istream<char,std::char_traits<char> > &);
    _inline SquadronList2SelectionBase(OrderType, unsigned __int32, SquadronList const &, Selection const &);
    virtual void Execute() const = 0;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
    Selection m_targets; // 0x2C
public:
    virtual _inline ~SquadronList2SelectionBase() override; /* compiler_generated() */
    SquadronList2SelectionBase &operator=(SquadronList2SelectionBase const &); /* compiler_generated() */
};
static_assert(sizeof(SquadronList2SelectionBase) == 96, "Invalid SquadronList2SelectionBase size");

class Selection2SelectionBase :
    public SelectionOrderBase
{
public:
    typedef SelectionOrderBase SuperClass;
    Selection2SelectionBase(Selection2SelectionBase const &); /* compiler_generated() */
protected:
    Selection2SelectionBase(std::basic_istream<char,std::char_traits<char> > &);
    Selection2SelectionBase(OrderType, unsigned __int32, Selection const &, Selection const &);
    virtual void Execute() const = 0;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
    Selection m_targets; // 0x3C
public:
    virtual _inline ~Selection2SelectionBase() override; /* compiler_generated() */
    Selection2SelectionBase &operator=(Selection2SelectionBase const &); /* compiler_generated() */
};
static_assert(sizeof(Selection2SelectionBase) == 112, "Invalid Selection2SelectionBase size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_5290D9(Order *const);
_inline Order::~Order() // 0x5290D9
{
    mangled_assert("??1Order@@UAE@XZ");
    todo("implement");
    _sub_5290D9(this);
}

_extern OrderType _sub_461828(Order const *const);
_inline OrderType Order::GetType() const // 0x461828
{
    mangled_assert("?GetType@Order@@QBE?AW4OrderType@@XZ");
    todo("implement");
    OrderType __result = _sub_461828(this);
    return __result;
}

_extern unsigned __int32 _sub_4F9491(Order const *const);
_inline unsigned __int32 Order::GetPlayer() const // 0x4F9491
{
    mangled_assert("?GetPlayer@Order@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_4F9491(this);
    return __result;
}

_extern _sub_528F51(Order *const, OrderType, unsigned __int32);
_inline Order::Order(OrderType, unsigned __int32) // 0x528F51
{
    mangled_assert("??0Order@@IAE@W4OrderType@@I@Z");
    todo("implement");
    _sub_528F51(this, arg, arg);
}

_extern bool _sub_694DCD(Order const *const, Order::BonusBit);
_inline bool Order::GetBonusBit(Order::BonusBit) const // 0x694DCD
{
    mangled_assert("?GetBonusBit@Order@@IBE_NW4BonusBit@1@@Z");
    todo("implement");
    bool __result = _sub_694DCD(this, arg);
    return __result;
}

_extern void _sub_6955E7(Order const *const, Order::BonusBit, bool);
_inline void Order::SetBonusBit(Order::BonusBit, bool) const // 0x6955E7
{
    mangled_assert("?SetBonusBit@Order@@IBEXW4BonusBit@1@_N@Z");
    todo("implement");
    _sub_6955E7(this, arg, arg);
}

_extern unsigned __int32 _sub_638041(ResearchOrderBase const *const);
_inline unsigned __int32 ResearchOrderBase::GetResearch() const // 0x638041
{
    mangled_assert("?GetResearch@ResearchOrderBase@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_638041(this);
    return __result;
}

_extern _sub_537846(ResearchOrderBase *const, OrderType, unsigned __int32, unsigned __int32);
_inline ResearchOrderBase::ResearchOrderBase(OrderType, unsigned __int32, unsigned __int32) // 0x537846
{
    mangled_assert("??0ResearchOrderBase@@IAE@W4OrderType@@II@Z");
    todo("implement");
    _sub_537846(this, arg, arg, arg);
}

_extern void _sub_6955FF(SquadronListOrderBase *const, bool);
_inline void SquadronListOrderBase::SetSplitStrikeGroups(bool) // 0x6955FF
{
    mangled_assert("?SetSplitStrikeGroups@SquadronListOrderBase@@QAEX_N@Z");
    todo("implement");
    _sub_6955FF(this, arg);
}

_extern SquadronList const &_sub_5C0A4D(SquadronListOrderBase const *const);
_inline SquadronList const &SquadronListOrderBase::GetSquadronList() const // 0x5C0A4D
{
    mangled_assert("?GetSquadronList@SquadronListOrderBase@@QBEABVSquadronList@@XZ");
    todo("implement");
    SquadronList const & __result = _sub_5C0A4D(this);
    return __result;
}

_extern _sub_691365(SquadronListOrderBase *const, OrderType, unsigned __int32, SquadronList const &);
_inline SquadronListOrderBase::SquadronListOrderBase(OrderType, unsigned __int32, SquadronList const &) // 0x691365
{
    mangled_assert("??0SquadronListOrderBase@@IAE@W4OrderType@@IABVSquadronList@@@Z");
    todo("implement");
    _sub_691365(this, arg, arg, arg);
}

_extern _sub_690F87(SelectionOrderBase *const, OrderType, unsigned __int32, Selection const &);
_inline SelectionOrderBase::SelectionOrderBase(OrderType, unsigned __int32, Selection const &) // 0x690F87
{
    mangled_assert("??0SelectionOrderBase@@IAE@W4OrderType@@IABVSelection@@@Z");
    todo("implement");
    _sub_690F87(this, arg, arg, arg);
}

_extern _sub_528F6E(SobOrderBase *const, OrderType, unsigned __int32, SobID const &);
_inline SobOrderBase::SobOrderBase(OrderType, unsigned __int32, SobID const &) // 0x528F6E
{
    mangled_assert("??0SobOrderBase@@IAE@W4OrderType@@IABVSobID@@@Z");
    todo("implement");
    _sub_528F6E(this, arg, arg, arg);
}

_extern SobID const &_sub_5C0A51(SquadronList2SobBase const *const);
_inline SobID const &SquadronList2SobBase::GetTarget() const // 0x5C0A51
{
    mangled_assert("?GetTarget@SquadronList2SobBase@@QBEABVSobID@@XZ");
    todo("implement");
    SobID const & __result = _sub_5C0A51(this);
    return __result;
}

_extern _sub_6912C1(SquadronList2SobBase *const, OrderType, unsigned __int32, SquadronList const &, SobID const &);
_inline SquadronList2SobBase::SquadronList2SobBase(OrderType, unsigned __int32, SquadronList const &, SobID const &) // 0x6912C1
{
    mangled_assert("??0SquadronList2SobBase@@IAE@W4OrderType@@IABVSquadronList@@ABVSobID@@@Z");
    todo("implement");
    _sub_6912C1(this, arg, arg, arg, arg);
}

_extern Selection const &_sub_5C0A55(SquadronList2SelectionBase const *const);
_inline Selection const &SquadronList2SelectionBase::GetTargets() const // 0x5C0A55
{
    mangled_assert("?GetTargets@SquadronList2SelectionBase@@QBEABVSelection@@XZ");
    todo("implement");
    Selection const & __result = _sub_5C0A55(this);
    return __result;
}

_extern _sub_69122D(SquadronList2SelectionBase *const, OrderType, unsigned __int32, SquadronList const &, Selection const &);
_inline SquadronList2SelectionBase::SquadronList2SelectionBase(OrderType, unsigned __int32, SquadronList const &, Selection const &) // 0x69122D
{
    mangled_assert("??0SquadronList2SelectionBase@@IAE@W4OrderType@@IABVSquadronList@@ABVSelection@@@Z");
    todo("implement");
    _sub_69122D(this, arg, arg, arg, arg);
}

/* ---------- private code */

#endif // __ORDERS_BASE_H__
#endif
