#if 0
#ifndef __SELECTION_H__
#define __SELECTION_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum SelectionFlag
{
    SF_ORDERED = 0,
    SF_TEMP_SELECTION,
    SF_CONTAINS_ZOMBIE,
};

enum SelectionFlagMask
{
    SEL_ORDERED = (1 << 0),
    SEL_TEMP_SELECTION = (1 << 1),
    SEL_CONTAINS_ZOMBIE = (1 << 2),
};

/* ---------- definitions */

class Selection :
    public Saveable
{
public:
    class Observer
    {
    public:
        virtual void Notify_Insertion(Sob *) = 0;
        virtual void Notify_Removal(Sob *) = 0;
        Observer(Selection::Observer const &); /* compiler_generated() */
        _inline Observer(); /* compiler_generated() */
        Selection::Observer &operator=(Selection::Observer const &); /* compiler_generated() */
    };
    static_assert(sizeof(Observer) == 4, "Invalid Observer size");
    typedef std::vector<Selection::Observer *,std::allocator<Selection::Observer *> > ObserverSet;
    typedef std::smallvector<Sob *,4,std::allocator<Sob *> > SobList;
    typedef Sob **iterator;
    typedef Sob *const *const_iterator;
    typedef std::smallvectorRevIter<Sob *,4,std::allocator<Sob *> > reverse_iterator;
    typedef std::smallvectorRevIter<Sob *,4,std::allocator<Sob *> > const const_reverse_iterator;
    class IsSobInside
    {
    public:
        _inline IsSobInside(Volume const *);
        bool operator()(Sob const *) const;
    private:
        Volume const *m_volume; // 0x0
    };
    static_assert(sizeof(IsSobInside) == 4, "Invalid IsSobInside size");
    void Register_Observer(Selection::Observer *);
    void Remove_Observer(Selection::Observer *);
    Selection(SelectionFlagMask, Selection const &);
    Selection(Selection const &);
    Selection(SelectionFlagMask);
    Selection();
    virtual ~Selection() override;
    Selection &operator=(Selection const &);
    _inline Sob const *front() const;
    _inline Sob *front();
    _inline Sob *const *begin() const;
    _inline Sob **begin();
    _inline Sob *const *end() const;
    _inline Sob **end();
    std::smallvectorRevIter<Sob *,4,std::allocator<Sob *> > const rbegin() const;
    std::smallvectorRevIter<Sob *,4,std::allocator<Sob *> > rbegin();
    std::smallvectorRevIter<Sob *,4,std::allocator<Sob *> > const rend() const;
    std::smallvectorRevIter<Sob *,4,std::allocator<Sob *> > rend();
    void push_back(Sob *);
    void push_back_no_find(Sob *);
    _inline Sob **erase(Sob **, Sob **);
    Sob **erase(Sob **);
    _inline void clear();
    bool remove(Sob const *);
    void insert(Sob **, Sob *);
    _inline unsigned __int32 size() const;
    void reserve(unsigned __int32);
    _inline bool empty() const;
    _inline Sob *const *find(Sob const *) const;
    bool issubset(Selection const &) const;
    _inline Sob *operator[](__int32) const;
    Sob *operator[](__int32);
    void convert(SquadronList const &);
    static bool saveStatics(SaveGameData *saveGameData, SaveType saveType);
    static bool restoreStatics(SaveGameData *saveGameData);
    static SaveData const m_saveData[0];
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    virtual _inline char const *saveToken() override;
    void ClearFlag(SelectionFlag);
    _inline bool GetFlag(SelectionFlag) const;
    void SetFlag(SelectionFlag);
    unsigned __int32 countElements(bool (*)(Sob const *)) const;
    unsigned __int32 countElements(Sob *) const;
    bool equalContents(Selection const &) const;
    void append(Selection const &);
    void append_no_find(Selection const &);
    void truncate(Selection const &);
    bool contains(Selection const &) const;
    bool containsAnyOfMe(Selection const &) const;
    bool containsType(SobType) const;
    bool containsOnlyType(SobType) const;
    bool areAnyElements(bool (*)(Sob const *)) const;
    bool areAnyElementsParam(bool (*)(Sob const *, void *), void *) const;
    bool areAllElements(bool (*)(Sob const *)) const;
    bool areAllElementsParam(bool (*)(Sob const *, void *), void *) const;
    void makeElements(bool (*)(Sob const *));
    void makeElementsParam(bool (*)(Sob const *, void *), void *);
    void getElements(bool (*)(Sob const *), Selection &) const;
    void getElementsParam(bool (*)(Sob const *, void *), void *, Selection &) const;
    bool areAnyElementsNot(bool (*)(Sob const *)) const;
    bool areAnyElementsNotParam(bool (*)(Sob const *, void *), void *) const;
    bool areAllElementsNot(bool (*)(Sob const *)) const;
    bool areAllElementsNotParam(bool (*)(Sob const *, void *), void *) const;
    void makeElementsNot(bool (*)(Sob const *));
    void makeElementsNotParam(bool (*)(Sob const *, void *), void *);
    void getElementsNot(bool (*)(Sob const *), Selection &) const;
    void getElementsNotParam(bool (*)(Sob const *, void *), void *, Selection &) const;
    unsigned __int32 countElementsParam(bool (*)(Sob const *, void *), void *) const;
    class MinElementCompare
    {
    public:
        virtual bool Compare(Sob const &, Sob const &) const = 0;
        MinElementCompare(Selection::MinElementCompare const &); /* compiler_generated() */
        _inline MinElementCompare(); /* compiler_generated() */
        Selection::MinElementCompare &operator=(Selection::MinElementCompare const &); /* compiler_generated() */
    };
    static_assert(sizeof(MinElementCompare) == 4, "Invalid MinElementCompare size");
    Sob *minElement(Selection::MinElementCompare const &) const;
    class FirstElementCompare
    {
    public:
        virtual bool Compare(Sob const &) const = 0;
        FirstElementCompare(Selection::FirstElementCompare const &); /* compiler_generated() */
        FirstElementCompare(); /* compiler_generated() */
        Selection::FirstElementCompare &operator=(Selection::FirstElementCompare const &); /* compiler_generated() */
    };
    static_assert(sizeof(FirstElementCompare) == 4, "Invalid FirstElementCompare size");
    Sob *find_if(Selection::FirstElementCompare const &) const;
    float getExtents(vector3 *, vector3 *, vector3 *) const;
    float getInterpolatedExtents(vector3 *, vector3 *, vector3 *) const;
    void getAveragePosition(vector3 *) const;
private:
    std::smallvector<Sob *,4,std::allocator<Sob *> > m_list; // 0x4
    std::bitset<32> m_flags; // 0x24
    std::vector<Selection::Observer *,std::allocator<Selection::Observer *> > m_observers; // 0x28
    void HandleInsertion(Sob *);
    void HandleRemoval(Sob *);
    void NotifyInsertion(Sob *);
    void NotifyRemoval(Sob *);
};
static_assert(sizeof(Selection) == 52, "Invalid Selection size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline Selection::IsSobInside::IsSobInside(Volume const *) // 0x71058B
{
    mangled_assert("??0IsSobInside@Selection@@QAE@PBVVolume@@@Z");
    todo("implement");
}

_inline Sob *Selection::front() // 0x4514A3
{
    mangled_assert("?front@Selection@@QAEPAVSob@@XZ");
    todo("implement");
}

_inline Sob const *Selection::front() const // 0x456AA7
{
    mangled_assert("?front@Selection@@QBEPBVSob@@XZ");
    todo("implement");
}

_inline Sob **Selection::begin() // 0x456005
{
    mangled_assert("?begin@Selection@@QAEPAPAVSob@@XZ");
    todo("implement");
}

_inline Sob *const *Selection::begin() const // 0x440CDA
{
    mangled_assert("?begin@Selection@@QBEPBQAVSob@@XZ");
    todo("implement");
}

_inline Sob **Selection::end() // 0x453F87
{
    mangled_assert("?end@Selection@@QAEPAPAVSob@@XZ");
    todo("implement");
}

_inline Sob *const *Selection::end() const // 0x441AA7
{
    mangled_assert("?end@Selection@@QBEPBQAVSob@@XZ");
    todo("implement");
}

_inline Sob **Selection::erase(Sob **, Sob **) // 0x458DC5
{
    mangled_assert("?erase@Selection@@QAEPAPAVSob@@PAPAV2@0@Z");
    todo("implement");
}

_inline void Selection::clear() // 0x458A07
{
    mangled_assert("?clear@Selection@@QAEXXZ");
    todo("implement");
}

_inline unsigned __int32 Selection::size() const // 0x449FCD
{
    mangled_assert("?size@Selection@@QBEIXZ");
    todo("implement");
}

_inline bool Selection::empty() const // 0x441A4B
{
    mangled_assert("?empty@Selection@@QBE_NXZ");
    todo("implement");
}

_inline Sob *const *Selection::find(Sob const *) const // 0x453F91
{
    mangled_assert("?find@Selection@@QBEPBQAVSob@@PBV2@@Z");
    todo("implement");
}

_inline Sob *Selection::operator[](__int32) // 0x451C36
{
    mangled_assert("??ASelection@@QAEPAVSob@@H@Z");
    todo("implement");
}

_inline Sob *Selection::operator[](__int32) const // 0x4485C4
{
    mangled_assert("??ASelection@@QBEPAVSob@@H@Z");
    todo("implement");
}

_inline bool Selection::isDeterministic() // 0x62F6BB
{
    mangled_assert("?isDeterministic@Selection@@UAE_NXZ");
    todo("implement");
}

_inline char const *Selection::saveToken() // 0x62FA4C
{
    mangled_assert("?saveToken@Selection@@UAEPBDXZ");
    todo("implement");
}

_inline bool Selection::GetFlag(SelectionFlag) const // 0x62E917
{
    mangled_assert("?GetFlag@Selection@@QBE_NW4SelectionFlag@@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __SELECTION_H__
#endif
