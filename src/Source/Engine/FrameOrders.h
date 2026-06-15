#if 0
#ifndef __FRAMEORDERS_H__
#define __FRAMEORDERS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FrameOrders :
    private boost::noncopyable
{
public:
    typedef std::vector<Order *,std::allocator<Order *> > OrderContainer;
    FrameOrders(FrameOrders const &); /* compiler_generated() */
private:
    FrameOrders(unsigned short, std::vector<Order *,std::allocator<Order *> > &);
public:
    FrameOrders(unsigned __int32);
    ~FrameOrders();
    static std::auto_ptr<FrameOrders> Extract(std::basic_istream<char,std::char_traits<char> > &in);
    void AddOrder(std::auto_ptr<Order>);
    void Execute() const;
    _inline unsigned __int32 GetChecksum() const;
    void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const;
    typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Order *> > > const_iterator;
    _inline unsigned __int32 size() const;
    bool empty() const;
    _inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Order *> > > begin() const;
    _inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Order *> > > end() const;
    void swap(FrameOrders &);
private:
    unsigned short m_checksum; // 0x0
    std::vector<Order *,std::allocator<Order *> > m_orders; // 0x4
public:
    FrameOrders &operator=(FrameOrders const &); /* compiler_generated() */
};
static_assert(sizeof(FrameOrders) == 16, "Invalid FrameOrders size");

/* ---------- prototypes */

extern _inline void std::swap(FrameOrders &A, FrameOrders &B);

/* ---------- globals */

/* ---------- public code */

_inline unsigned __int32 FrameOrders::GetChecksum() const // 0x46176C
{
    mangled_assert("?GetChecksum@FrameOrders@@QBEIXZ");
    todo("implement");
}

_inline unsigned __int32 FrameOrders::size() const // 0x4643FC
{
    mangled_assert("?size@FrameOrders@@QBEIXZ");
    todo("implement");
}

_inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Order *> > > FrameOrders::begin() const // 0x46308C
{
    mangled_assert("?begin@FrameOrders@@QBE?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PAVOrder@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Order *> > > FrameOrders::end() const // 0x4632DE
{
    mangled_assert("?end@FrameOrders@@QBE?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PAVOrder@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline void std::swap(FrameOrders &A, FrameOrders &B) // 0x5BC578
{
    mangled_assert("?swap@std@@YGXAAVFrameOrders@@0@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __FRAMEORDERS_H__
#endif
