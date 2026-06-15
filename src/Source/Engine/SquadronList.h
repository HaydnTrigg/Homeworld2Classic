#if 0
#ifndef __SQUADRONLIST_H__
#define __SQUADRONLIST_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SquadronList :
    public Saveable
{
public:
    enum SL_Flags
    {
        SL_Temp = 0,
    };
    class Observer
    {
    public:
        virtual void Notify_Insertion(Squadron *) = 0;
        virtual void Notify_Removal(Squadron *) = 0;
        Observer(SquadronList::Observer const &); /* compiler_generated() */
        _inline Observer(); /* compiler_generated() */
        SquadronList::Observer &operator=(SquadronList::Observer const &); /* compiler_generated() */
    };
    static_assert(sizeof(Observer) == 4, "Invalid Observer size");
    void Register_Observer(SquadronList::Observer *);
    void Remove_Observer(SquadronList::Observer *);
    typedef std::vector<Squadron *,std::allocator<Squadron *> > SquadList;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > iterator;
    typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > const_iterator;
    typedef std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > > reverse_iterator;
    typedef std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > > const_reverse_iterator;
    SquadronList(SquadronList const &);
    SquadronList(std::list<Squadron *,std::allocator<Squadron *> > const &);
    SquadronList(SquadronList::SL_Flags);
    SquadronList();
    virtual ~SquadronList() override;
    SquadronList &operator=(SquadronList const &);
    _inline Squadron const *front() const;
    _inline Squadron *front();
    _inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > begin() const;
    _inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > begin();
    _inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > end() const;
    _inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > end();
    std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > > rbegin() const;
    _inline std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > > rbegin();
    std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > > rend() const;
    _inline std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > > rend();
    void convert(Selection const &);
    void push_back(Squadron *);
    void push_back_no_find(Squadron *);
    std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > erase(std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > >, std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > >);
    std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > erase(std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > >);
    void clear();
    bool remove(Squadron const *);
    _inline unsigned __int32 size() const;
    _inline bool empty() const;
    _inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > find(Squadron *) const;
    Squadron *getSquadronAtIndex(__int32);
    void append(SquadronList const &);
    void getAveragePositionDtrm(vector3 &) const;
    void getAveragePositionVis(vector3 &) const;
private:
    std::vector<Squadron *,std::allocator<Squadron *> > m_list; // 0x4
    std::bitset<32> m_flags; // 0x10
    std::vector<SquadronList::Observer *,std::allocator<SquadronList::Observer *> > m_observers; // 0x14
    typedef std::vector<SquadronList::Observer *,std::allocator<SquadronList::Observer *> > ObserverSet;
    void HandleInsertion(Squadron *);
    void HandleRemoval(Squadron *);
    void NotifyInsertion(Squadron *);
    void NotifyRemoval(Squadron *);
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
};
static_assert(sizeof(SquadronList) == 32, "Invalid SquadronList size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline Squadron *SquadronList::front() // 0x508026
{
    mangled_assert("?front@SquadronList@@QAEPAVSquadron@@XZ");
    todo("implement");
}

_inline Squadron const *SquadronList::front() const // 0x525A3E
{
    mangled_assert("?front@SquadronList@@QBEPBVSquadron@@XZ");
    todo("implement");
}

_inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > SquadronList::begin() // 0x45107B
{
    mangled_assert("?begin@SquadronList@@QAE?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PAVSquadron@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > SquadronList::begin() const // 0x456009
{
    mangled_assert("?begin@SquadronList@@QBE?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PAVSquadron@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > SquadronList::end() // 0x451409
{
    mangled_assert("?end@SquadronList@@QAE?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PAVSquadron@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > SquadronList::end() const // 0x456607
{
    mangled_assert("?end@SquadronList@@QBE?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PAVSquadron@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > > SquadronList::rbegin() // 0x4AF759
{
    mangled_assert("?rbegin@SquadronList@@QAE?AV?$reverse_iterator@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PAVSquadron@@@std@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > > SquadronList::rend() // 0x4AF87A
{
    mangled_assert("?rend@SquadronList@@QAE?AV?$reverse_iterator@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PAVSquadron@@@std@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline unsigned __int32 SquadronList::size() const // 0x50843A
{
    mangled_assert("?size@SquadronList@@QBEIXZ");
    todo("implement");
}

_inline bool SquadronList::empty() const // 0x450682
{
    mangled_assert("?empty@SquadronList@@QBE_NXZ");
    todo("implement");
}

_inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > SquadronList::find(Squadron *) const // 0x61596D
{
    mangled_assert("?find@SquadronList@@QBE?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PAVSquadron@@@std@@@std@@@std@@PAVSquadron@@@Z");
    todo("implement");
}

_inline bool SquadronList::isDeterministic() // 0x4BC68C
{
    mangled_assert("?isDeterministic@SquadronList@@UAE_NXZ");
    todo("implement");
}

_inline char const *SquadronList::saveToken() // 0x4BC8BF
{
    mangled_assert("?saveToken@SquadronList@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __SQUADRONLIST_H__
#endif
