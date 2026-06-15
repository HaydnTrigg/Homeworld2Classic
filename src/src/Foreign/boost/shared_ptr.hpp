#ifndef __SHARED_PTR_H__
#define __SHARED_PTR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct boost::detail::static_cast_tag
{
};
static_assert(sizeof(boost::detail::static_cast_tag) == 1, "Invalid boost::detail::static_cast_tag size");

struct boost::detail::dynamic_cast_tag
{
};
static_assert(sizeof(boost::detail::dynamic_cast_tag) == 1, "Invalid boost::detail::dynamic_cast_tag size");

struct boost::detail::polymorphic_cast_tag
{
};
static_assert(sizeof(boost::detail::polymorphic_cast_tag) == 1, "Invalid boost::detail::polymorphic_cast_tag size");

struct boost::detail::shared_ptr_traits<void>
{
    typedef void reference;
};
static_assert(sizeof(boost::detail::shared_ptr_traits<void>) == 1, "Invalid boost::detail::shared_ptr_traits<void> size");

struct boost::detail::shared_ptr_traits<void const >
{
    typedef void reference;
};
static_assert(sizeof(boost::detail::shared_ptr_traits<void const >) == 1, "Invalid boost::detail::shared_ptr_traits<void const > size");

class boost::shared_ptr<Archive>
{
public:
    typedef boost::shared_ptr<Archive> this_type;
    typedef Archive element_type;
    typedef Archive value_type;
    typedef Archive *pointer;
    typedef Archive &reference;
    _inline shared_ptr<Archive>(boost::shared_ptr<Archive> const &); /* compiler_generated() */
    _inline shared_ptr<Archive>();
    _inline boost::shared_ptr<Archive> &operator=(boost::shared_ptr<Archive> const &); /* compiler_generated() */
    void reset();
    _inline Archive &operator*() const;
    Archive *operator->() const;
    _inline Archive *get() const;
    typedef Archive **unspecified_bool_type() const;
    Archive **operator class Archive *(__thiscall boost::shared_ptr<class Archive>::* )(void) const() const() const;
    bool operator!() const;
    bool unique() const;
    long use_count() const;
    void swap(boost::shared_ptr<Archive> &);
    void *_internal_get_deleter(type_info const &) const;
private:
    Archive *px; // 0x0
    boost::detail::shared_count pn; // 0x4
public:
    _inline ~shared_ptr<Archive>(); /* compiler_generated() */
};
static_assert(sizeof(boost::shared_ptr<Archive>) == 8, "Invalid boost::shared_ptr<Archive> size");

class boost::shared_ptr<FilePath::Source>
{
public:
    typedef boost::shared_ptr<FilePath::Source> this_type;
    class element_type;
    class value_type;
    typedef FilePath::Source *pointer;
    typedef FilePath::Source &reference;
    _inline shared_ptr<FilePath::Source>(boost::shared_ptr<FilePath::Source> const &); /* compiler_generated() */
    _inline shared_ptr<FilePath::Source>();
    _inline boost::shared_ptr<FilePath::Source> &operator=(boost::shared_ptr<FilePath::Source> const &); /* compiler_generated() */
    void reset();
    FilePath::Source &operator*() const;
    _inline FilePath::Source *operator->() const;
    FilePath::Source *get() const;
    typedef FilePath::Source **unspecified_bool_type() const;
    FilePath::Source **operator class FilePath::Source *(__thiscall boost::shared_ptr<class FilePath::Source>::* )(void) const() const() const;
    bool operator!() const;
    bool unique() const;
    long use_count() const;
    _inline void swap(boost::shared_ptr<FilePath::Source> &);
    void *_internal_get_deleter(type_info const &) const;
private:
    FilePath::Source *px; // 0x0
    boost::detail::shared_count pn; // 0x4
public:
    _inline ~shared_ptr<FilePath::Source>(); /* compiler_generated() */
};
static_assert(sizeof(boost::shared_ptr<FilePath::Source>) == 8, "Invalid boost::shared_ptr<FilePath::Source> size");

/* ---------- prototypes */

extern _inline void boost::detail::sp_enable_shared_from_this(void const *, void const *, boost::detail::shared_count const &);

/* ---------- globals */

/* ---------- public code */

_inline void boost::detail::sp_enable_shared_from_this(void const *, void const *, boost::detail::shared_count const &) // 0x10005E0F
{
    mangled_assert("?sp_enable_shared_from_this@detail@boost@@YGXPBX0ABVshared_count@12@@Z");
    todo("implement");
}

_inline boost::shared_ptr<FilePath::Source>::shared_ptr<FilePath::Source>() // 0x1000C293
{
    mangled_assert("??0?$shared_ptr@VSource@FilePath@@@boost@@QAE@XZ");
    todo("implement");
}

_inline boost::shared_ptr<Archive>::shared_ptr<Archive>() // 0x10004DFB
{
    mangled_assert("??0?$shared_ptr@VArchive@@@boost@@QAE@XZ");
    todo("implement");
}

_inline boost::shared_ptr<FilePath::Source>::shared_ptr<FilePath::Source><FilePath::Source>(FilePath::Source *) // 0x1000A581
{
    mangled_assert("??$?0VSource@FilePath@@@?$shared_ptr@VSource@FilePath@@@boost@@QAE@PAVSource@FilePath@@@Z");
    todo("implement");
}

_inline boost::shared_ptr<Archive>::shared_ptr<Archive><Archive>(Archive *) // 0x10004665
{
    mangled_assert("??$?0VArchive@@@?$shared_ptr@VArchive@@@boost@@QAE@PAVArchive@@@Z");
    todo("implement");
}

_inline void boost::shared_ptr<FilePath::Source>::reset<FilePath::Source>(FilePath::Source *) // 0x1000BF25
{
    mangled_assert("??$reset@VSource@FilePath@@@?$shared_ptr@VSource@FilePath@@@boost@@QAEXPAVSource@FilePath@@@Z");
    todo("implement");
}

_inline Archive &boost::shared_ptr<Archive>::operator*() const // 0x1000514D
{
    mangled_assert("??D?$shared_ptr@VArchive@@@boost@@QBEAAVArchive@@XZ");
    todo("implement");
}

_inline FilePath::Source *boost::shared_ptr<FilePath::Source>::operator->() const // 0x1000C7A6
{
    mangled_assert("??C?$shared_ptr@VSource@FilePath@@@boost@@QBEPAVSource@FilePath@@XZ");
    todo("implement");
}

_inline Archive *boost::shared_ptr<Archive>::get() const // 0x10005BBB
{
    mangled_assert("?get@?$shared_ptr@VArchive@@@boost@@QBEPAVArchive@@XZ");
    todo("implement");
}

_inline void boost::shared_ptr<FilePath::Source>::swap(boost::shared_ptr<FilePath::Source> &) // 0x1000E74E
{
    mangled_assert("?swap@?$shared_ptr@VSource@FilePath@@@boost@@QAEXAAV12@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __SHARED_PTR_H__
/* combined */
#ifndef __SHARED_PTR_H__
#define __SHARED_PTR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct boost::detail::static_cast_tag
{
};
static_assert(sizeof(boost::detail::static_cast_tag) == 1, "Invalid boost::detail::static_cast_tag size");

struct boost::detail::dynamic_cast_tag
{
};
static_assert(sizeof(boost::detail::dynamic_cast_tag) == 1, "Invalid boost::detail::dynamic_cast_tag size");

struct boost::detail::polymorphic_cast_tag
{
};
static_assert(sizeof(boost::detail::polymorphic_cast_tag) == 1, "Invalid boost::detail::polymorphic_cast_tag size");

struct boost::detail::shared_ptr_traits<void>
{
    typedef void reference;
};
static_assert(sizeof(boost::detail::shared_ptr_traits<void>) == 1, "Invalid boost::detail::shared_ptr_traits<void> size");

struct boost::detail::shared_ptr_traits<void const >
{
    typedef void reference;
};
static_assert(sizeof(boost::detail::shared_ptr_traits<void const >) == 1, "Invalid boost::detail::shared_ptr_traits<void const > size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SHARED_PTR_H__
/* combined */
#ifndef __SHARED_PTR_H__
#define __SHARED_PTR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct boost::detail::static_cast_tag
{
};
static_assert(sizeof(boost::detail::static_cast_tag) == 1, "Invalid boost::detail::static_cast_tag size");

struct boost::detail::dynamic_cast_tag
{
};
static_assert(sizeof(boost::detail::dynamic_cast_tag) == 1, "Invalid boost::detail::dynamic_cast_tag size");

struct boost::detail::polymorphic_cast_tag
{
};
static_assert(sizeof(boost::detail::polymorphic_cast_tag) == 1, "Invalid boost::detail::polymorphic_cast_tag size");

struct boost::detail::shared_ptr_traits<SobStatic::Model>
{
    typedef SobStatic::Model &reference;
};
static_assert(sizeof(boost::detail::shared_ptr_traits<SobStatic::Model>) == 1, "Invalid boost::detail::shared_ptr_traits<SobStatic::Model> size");

struct boost::detail::shared_ptr_traits<SobWithMeshStatic::Model>
{
    typedef SobWithMeshStatic::Model &reference;
};
static_assert(sizeof(boost::detail::shared_ptr_traits<SobWithMeshStatic::Model>) == 1, "Invalid boost::detail::shared_ptr_traits<SobWithMeshStatic::Model> size");

struct boost::detail::shared_ptr_traits<SobIDShared>
{
    typedef SobIDShared &reference;
};
static_assert(sizeof(boost::detail::shared_ptr_traits<SobIDShared>) == 1, "Invalid boost::detail::shared_ptr_traits<SobIDShared> size");

struct boost::detail::shared_ptr_traits<void>
{
    typedef void reference;
};
static_assert(sizeof(boost::detail::shared_ptr_traits<void>) == 1, "Invalid boost::detail::shared_ptr_traits<void> size");

struct boost::detail::shared_ptr_traits<void const >
{
    typedef void reference;
};
static_assert(sizeof(boost::detail::shared_ptr_traits<void const >) == 1, "Invalid boost::detail::shared_ptr_traits<void const > size");

class boost::shared_ptr<SobStatic::Model>
{
public:
    typedef boost::shared_ptr<SobStatic::Model> this_type;
    class element_type;
    class value_type;
    typedef SobStatic::Model *pointer;
    typedef SobStatic::Model &reference;
    _inline shared_ptr<SobStatic::Model>(boost::shared_ptr<SobStatic::Model> const &); /* compiler_generated() */
    _inline shared_ptr<SobStatic::Model>();
    _inline boost::shared_ptr<SobStatic::Model> &operator=(boost::shared_ptr<SobStatic::Model> const &); /* compiler_generated() */
    void reset();
    SobStatic::Model &operator*() const;
    _inline SobStatic::Model *operator->() const;
    _inline SobStatic::Model *get() const;
    typedef SobStatic::Model **unspecified_bool_type() const;
    SobStatic::Model **operator class SobStatic::Model *(__thiscall boost::shared_ptr<class SobStatic::Model>::* )(void) const() const() const;
    bool operator!() const;
    bool unique() const;
    long use_count() const;
    _inline void swap(boost::shared_ptr<SobStatic::Model> &);
    void *_internal_get_deleter(type_info const &) const;
private:
    SobStatic::Model *px; // 0x0
    boost::detail::shared_count pn; // 0x4
public:
    _inline ~shared_ptr<SobStatic::Model>(); /* compiler_generated() */
};
static_assert(sizeof(boost::shared_ptr<SobStatic::Model>) == 8, "Invalid boost::shared_ptr<SobStatic::Model> size");

class boost::shared_ptr<SobWithMeshStatic::Model>
{
public:
    typedef boost::shared_ptr<SobWithMeshStatic::Model> this_type;
    class element_type;
    class value_type;
    typedef SobWithMeshStatic::Model *pointer;
    typedef SobWithMeshStatic::Model &reference;
    _inline shared_ptr<SobWithMeshStatic::Model>(boost::shared_ptr<SobWithMeshStatic::Model> const &); /* compiler_generated() */
    _inline shared_ptr<SobWithMeshStatic::Model>();
    _inline boost::shared_ptr<SobWithMeshStatic::Model> &operator=(boost::shared_ptr<SobWithMeshStatic::Model> const &); /* compiler_generated() */
    void reset();
    SobWithMeshStatic::Model &operator*() const;
    _inline SobWithMeshStatic::Model *operator->() const;
    SobWithMeshStatic::Model *get() const;
    typedef SobWithMeshStatic::Model **unspecified_bool_type() const;
    SobWithMeshStatic::Model **operator class SobWithMeshStatic::Model *(__thiscall boost::shared_ptr<class SobWithMeshStatic::Model>::* )(void) const() const() const;
    bool operator!() const;
    bool unique() const;
    long use_count() const;
    _inline void swap(boost::shared_ptr<SobWithMeshStatic::Model> &);
    void *_internal_get_deleter(type_info const &) const;
private:
    SobWithMeshStatic::Model *px; // 0x0
    boost::detail::shared_count pn; // 0x4
public:
    _inline ~shared_ptr<SobWithMeshStatic::Model>(); /* compiler_generated() */
};
static_assert(sizeof(boost::shared_ptr<SobWithMeshStatic::Model>) == 8, "Invalid boost::shared_ptr<SobWithMeshStatic::Model> size");

class boost::shared_ptr<SobIDShared>
{
public:
    typedef boost::shared_ptr<SobIDShared> this_type;
    typedef SobIDShared element_type;
    typedef SobIDShared value_type;
    typedef SobIDShared *pointer;
    typedef SobIDShared &reference;
    _inline shared_ptr<SobIDShared>(boost::shared_ptr<SobIDShared> const &); /* compiler_generated() */
    _inline shared_ptr<SobIDShared>();
    _inline boost::shared_ptr<SobIDShared> &operator=(boost::shared_ptr<SobIDShared> const &); /* compiler_generated() */
    _inline void reset();
    SobIDShared &operator*() const;
    _inline SobIDShared *operator->() const;
    SobIDShared *get() const;
    typedef SobIDShared **unspecified_bool_type() const;
    SobIDShared **operator class SobIDShared *(__thiscall boost::shared_ptr<class SobIDShared>::* )(void) const() const() const;
    bool operator!() const;
    bool unique() const;
    long use_count() const;
    _inline void swap(boost::shared_ptr<SobIDShared> &);
    void *_internal_get_deleter(type_info const &) const;
private:
    SobIDShared *px; // 0x0
    boost::detail::shared_count pn; // 0x4
public:
    _inline ~shared_ptr<SobIDShared>(); /* compiler_generated() */
};
static_assert(sizeof(boost::shared_ptr<SobIDShared>) == 8, "Invalid boost::shared_ptr<SobIDShared> size");

class boost::shared_ptr<UI::Graphic>
{
public:
    typedef boost::shared_ptr<UI::Graphic> this_type;
    typedef UI::Graphic element_type;
    typedef UI::Graphic value_type;
    typedef UI::Graphic *pointer;
    typedef UI::Graphic &reference;
    _inline shared_ptr<UI::Graphic>(boost::shared_ptr<UI::Graphic> const &); /* compiler_generated() */
    _inline shared_ptr<UI::Graphic>();
    _inline boost::shared_ptr<UI::Graphic> &operator=(boost::shared_ptr<UI::Graphic> const &); /* compiler_generated() */
    _inline void reset();
    UI::Graphic &operator*() const;
    _inline UI::Graphic *operator->() const;
    _inline UI::Graphic *get() const;
    typedef UI::Graphic **unspecified_bool_type() const;
    UI::Graphic **operator class UI::Graphic *(__thiscall boost::shared_ptr<class UI::Graphic>::* )(void) const() const() const;
    bool operator!() const;
    bool unique() const;
    _inline long use_count() const;
    _inline void swap(boost::shared_ptr<UI::Graphic> &);
    void *_internal_get_deleter(type_info const &) const;
private:
    UI::Graphic *px; // 0x0
    boost::detail::shared_count pn; // 0x4
public:
    _inline ~shared_ptr<UI::Graphic>(); /* compiler_generated() */
};
static_assert(sizeof(boost::shared_ptr<UI::Graphic>) == 8, "Invalid boost::shared_ptr<UI::Graphic> size");

class boost::shared_ptr<FrameOrders>
{
public:
    typedef boost::shared_ptr<FrameOrders> this_type;
    typedef FrameOrders element_type;
    typedef FrameOrders value_type;
    typedef FrameOrders *pointer;
    typedef FrameOrders &reference;
    _inline shared_ptr<FrameOrders>(boost::shared_ptr<FrameOrders> const &); /* compiler_generated() */
    _inline shared_ptr<FrameOrders>();
    _inline boost::shared_ptr<FrameOrders> &operator=(boost::shared_ptr<FrameOrders> const &); /* compiler_generated() */
    _inline void reset();
    FrameOrders &operator*() const;
    _inline FrameOrders *operator->() const;
    _inline FrameOrders *get() const;
    typedef FrameOrders **unspecified_bool_type() const;
    FrameOrders **operator class FrameOrders *(__thiscall boost::shared_ptr<class FrameOrders>::* )(void) const() const() const;
    bool operator!() const;
    bool unique() const;
    long use_count() const;
    _inline void swap(boost::shared_ptr<FrameOrders> &);
    void *_internal_get_deleter(type_info const &) const;
private:
    FrameOrders *px; // 0x0
    boost::detail::shared_count pn; // 0x4
public:
    _inline ~shared_ptr<FrameOrders>(); /* compiler_generated() */
};
static_assert(sizeof(boost::shared_ptr<FrameOrders>) == 8, "Invalid boost::shared_ptr<FrameOrders> size");

class boost::shared_ptr<BgLightAnim::Data>
{
public:
    typedef boost::shared_ptr<BgLightAnim::Data> this_type;
    class element_type;
    class value_type;
    typedef BgLightAnim::Data *pointer;
    typedef BgLightAnim::Data &reference;
    shared_ptr<BgLightAnim::Data>(boost::shared_ptr<BgLightAnim::Data> const &); /* compiler_generated() */
    shared_ptr<BgLightAnim::Data>();
    boost::shared_ptr<BgLightAnim::Data> &operator=(boost::shared_ptr<BgLightAnim::Data> const &); /* compiler_generated() */
    void reset();
    BgLightAnim::Data &operator*() const;
    _inline BgLightAnim::Data *operator->() const;
    BgLightAnim::Data *get() const;
    typedef BgLightAnim::Data **unspecified_bool_type() const;
    BgLightAnim::Data **operator class BgLightAnim::Data *(__thiscall boost::shared_ptr<class BgLightAnim::Data>::* )(void) const() const() const;
    bool operator!() const;
    bool unique() const;
    long use_count() const;
    void swap(boost::shared_ptr<BgLightAnim::Data> &);
    void *_internal_get_deleter(type_info const &) const;
private:
    BgLightAnim::Data *px; // 0x0
    boost::detail::shared_count pn; // 0x4
public:
    _inline ~shared_ptr<BgLightAnim::Data>(); /* compiler_generated() */
};
static_assert(sizeof(boost::shared_ptr<BgLightAnim::Data>) == 8, "Invalid boost::shared_ptr<BgLightAnim::Data> size");

class boost::shared_ptr<BasicMesh>
{
public:
    typedef boost::shared_ptr<BasicMesh> this_type;
    typedef BasicMesh element_type;
    typedef BasicMesh value_type;
    typedef BasicMesh *pointer;
    typedef BasicMesh &reference;
    _inline shared_ptr<BasicMesh>(boost::shared_ptr<BasicMesh> const &); /* compiler_generated() */
    _inline shared_ptr<BasicMesh>();
    boost::shared_ptr<BasicMesh> &operator=(boost::shared_ptr<BasicMesh> const &); /* compiler_generated() */
    void reset();
    BasicMesh &operator*() const;
    BasicMesh *operator->() const;
    _inline BasicMesh *get() const;
    typedef BasicMesh **unspecified_bool_type() const;
    BasicMesh **operator class BasicMesh *(__thiscall boost::shared_ptr<class BasicMesh>::* )(void) const() const() const;
    bool operator!() const;
    bool unique() const;
    long use_count() const;
    _inline void swap(boost::shared_ptr<BasicMesh> &);
    void *_internal_get_deleter(type_info const &) const;
private:
    BasicMesh *px; // 0x0
    boost::detail::shared_count pn; // 0x4
public:
    _inline ~shared_ptr<BasicMesh>(); /* compiler_generated() */
};
static_assert(sizeof(boost::shared_ptr<BasicMesh>) == 8, "Invalid boost::shared_ptr<BasicMesh> size");

class boost::shared_ptr<StarList>
{
public:
    typedef boost::shared_ptr<StarList> this_type;
    typedef StarList element_type;
    typedef StarList value_type;
    typedef StarList *pointer;
    typedef StarList &reference;
    _inline shared_ptr<StarList>(boost::shared_ptr<StarList> const &); /* compiler_generated() */
    _inline shared_ptr<StarList>();
    boost::shared_ptr<StarList> &operator=(boost::shared_ptr<StarList> const &); /* compiler_generated() */
    void reset();
    StarList &operator*() const;
    StarList *operator->() const;
    _inline StarList *get() const;
    typedef StarList **unspecified_bool_type() const;
    StarList **operator class StarList *(__thiscall boost::shared_ptr<class StarList>::* )(void) const() const() const;
    bool operator!() const;
    bool unique() const;
    long use_count() const;
    _inline void swap(boost::shared_ptr<StarList> &);
    void *_internal_get_deleter(type_info const &) const;
private:
    StarList *px; // 0x0
    boost::detail::shared_count pn; // 0x4
public:
    _inline ~shared_ptr<StarList>(); /* compiler_generated() */
};
static_assert(sizeof(boost::shared_ptr<StarList>) == 8, "Invalid boost::shared_ptr<StarList> size");

class boost::shared_ptr<StateCommandBlock>
{
public:
    typedef boost::shared_ptr<StateCommandBlock> this_type;
    typedef StateCommandBlock element_type;
    typedef StateCommandBlock value_type;
    typedef StateCommandBlock *pointer;
    typedef StateCommandBlock &reference;
    shared_ptr<StateCommandBlock>(boost::shared_ptr<StateCommandBlock> const &); /* compiler_generated() */
    shared_ptr<StateCommandBlock>();
    _inline boost::shared_ptr<StateCommandBlock> &operator=(boost::shared_ptr<StateCommandBlock> const &); /* compiler_generated() */
    void reset();
    StateCommandBlock &operator*() const;
    _inline StateCommandBlock *operator->() const;
    StateCommandBlock *get() const;
    typedef StateCommandBlock **unspecified_bool_type() const;
    StateCommandBlock **operator class StateCommandBlock *(__thiscall boost::shared_ptr<class StateCommandBlock>::* )(void) const() const() const;
    bool operator!() const;
    bool unique() const;
    long use_count() const;
    void swap(boost::shared_ptr<StateCommandBlock> &);
    void *_internal_get_deleter(type_info const &) const;
private:
    StateCommandBlock *px; // 0x0
    boost::detail::shared_count pn; // 0x4
public:
    _inline ~shared_ptr<StateCommandBlock>(); /* compiler_generated() */
};
static_assert(sizeof(boost::shared_ptr<StateCommandBlock>) == 8, "Invalid boost::shared_ptr<StateCommandBlock> size");

class boost::shared_ptr<DestinationFormation::Bucket>
{
public:
    typedef boost::shared_ptr<DestinationFormation::Bucket> this_type;
    typedef DestinationFormation::Bucket element_type;
    typedef DestinationFormation::Bucket value_type;
    typedef DestinationFormation::Bucket *pointer;
    typedef DestinationFormation::Bucket &reference;
    _inline shared_ptr<DestinationFormation::Bucket>(boost::shared_ptr<DestinationFormation::Bucket> const &); /* compiler_generated() */
    shared_ptr<DestinationFormation::Bucket>();
    _inline boost::shared_ptr<DestinationFormation::Bucket> &operator=(boost::shared_ptr<DestinationFormation::Bucket> const &); /* compiler_generated() */
    void reset();
    DestinationFormation::Bucket &operator*() const;
    _inline DestinationFormation::Bucket *operator->() const;
    DestinationFormation::Bucket *get() const;
    typedef DestinationFormation::Bucket **unspecified_bool_type() const;
    DestinationFormation::Bucket **operator struct DestinationFormation::Bucket *(__thiscall boost::shared_ptr<struct DestinationFormation::Bucket>::* )(void) const() const() const;
    bool operator!() const;
    bool unique() const;
    long use_count() const;
    _inline void swap(boost::shared_ptr<DestinationFormation::Bucket> &);
    void *_internal_get_deleter(type_info const &) const;
private:
    DestinationFormation::Bucket *px; // 0x0
    boost::detail::shared_count pn; // 0x4
public:
    _inline ~shared_ptr<DestinationFormation::Bucket>(); /* compiler_generated() */
};
static_assert(sizeof(boost::shared_ptr<DestinationFormation::Bucket>) == 8, "Invalid boost::shared_ptr<DestinationFormation::Bucket> size");

class boost::shared_ptr<DestinationFormation::Row>
{
public:
    typedef boost::shared_ptr<DestinationFormation::Row> this_type;
    typedef DestinationFormation::Row element_type;
    typedef DestinationFormation::Row value_type;
    typedef DestinationFormation::Row *pointer;
    typedef DestinationFormation::Row &reference;
    _inline shared_ptr<DestinationFormation::Row>(boost::shared_ptr<DestinationFormation::Row> const &); /* compiler_generated() */
    shared_ptr<DestinationFormation::Row>();
    boost::shared_ptr<DestinationFormation::Row> &operator=(boost::shared_ptr<DestinationFormation::Row> const &); /* compiler_generated() */
    void reset();
    DestinationFormation::Row &operator*() const;
    _inline DestinationFormation::Row *operator->() const;
    DestinationFormation::Row *get() const;
    typedef DestinationFormation::Row **unspecified_bool_type() const;
    DestinationFormation::Row **operator struct DestinationFormation::Row *(__thiscall boost::shared_ptr<struct DestinationFormation::Row>::* )(void) const() const() const;
    bool operator!() const;
    bool unique() const;
    long use_count() const;
    void swap(boost::shared_ptr<DestinationFormation::Row> &);
    void *_internal_get_deleter(type_info const &) const;
private:
    DestinationFormation::Row *px; // 0x0
    boost::detail::shared_count pn; // 0x4
public:
    _inline ~shared_ptr<DestinationFormation::Row>(); /* compiler_generated() */
};
static_assert(sizeof(boost::shared_ptr<DestinationFormation::Row>) == 8, "Invalid boost::shared_ptr<DestinationFormation::Row> size");

class boost::shared_ptr<DestinationFormation::Wall>
{
public:
    typedef boost::shared_ptr<DestinationFormation::Wall> this_type;
    typedef DestinationFormation::Wall element_type;
    typedef DestinationFormation::Wall value_type;
    typedef DestinationFormation::Wall *pointer;
    typedef DestinationFormation::Wall &reference;
    _inline shared_ptr<DestinationFormation::Wall>(boost::shared_ptr<DestinationFormation::Wall> const &); /* compiler_generated() */
    shared_ptr<DestinationFormation::Wall>();
    boost::shared_ptr<DestinationFormation::Wall> &operator=(boost::shared_ptr<DestinationFormation::Wall> const &); /* compiler_generated() */
    void reset();
    DestinationFormation::Wall &operator*() const;
    _inline DestinationFormation::Wall *operator->() const;
    DestinationFormation::Wall *get() const;
    typedef DestinationFormation::Wall **unspecified_bool_type() const;
    DestinationFormation::Wall **operator struct DestinationFormation::Wall *(__thiscall boost::shared_ptr<struct DestinationFormation::Wall>::* )(void) const() const() const;
    bool operator!() const;
    bool unique() const;
    long use_count() const;
    void swap(boost::shared_ptr<DestinationFormation::Wall> &);
    void *_internal_get_deleter(type_info const &) const;
private:
    DestinationFormation::Wall *px; // 0x0
    boost::detail::shared_count pn; // 0x4
public:
    _inline ~shared_ptr<DestinationFormation::Wall>(); /* compiler_generated() */
};
static_assert(sizeof(boost::shared_ptr<DestinationFormation::Wall>) == 8, "Invalid boost::shared_ptr<DestinationFormation::Wall> size");

class boost::shared_ptr<FXManager::Type>
{
public:
    typedef boost::shared_ptr<FXManager::Type> this_type;
    class element_type;
    class value_type;
    typedef FXManager::Type *pointer;
    typedef FXManager::Type &reference;
    _inline shared_ptr<FXManager::Type>(boost::shared_ptr<FXManager::Type> const &); /* compiler_generated() */
    shared_ptr<FXManager::Type>();
    boost::shared_ptr<FXManager::Type> &operator=(boost::shared_ptr<FXManager::Type> const &); /* compiler_generated() */
    void reset();
    FXManager::Type &operator*() const;
    _inline FXManager::Type *operator->() const;
    _inline FXManager::Type *get() const;
    typedef FXManager::Type **unspecified_bool_type() const;
    FXManager::Type **operator class FXManager::Type *(__thiscall boost::shared_ptr<class FXManager::Type>::* )(void) const() const() const;
    bool operator!() const;
    bool unique() const;
    long use_count() const;
    void swap(boost::shared_ptr<FXManager::Type> &);
    void *_internal_get_deleter(type_info const &) const;
private:
    FXManager::Type *px; // 0x0
    boost::detail::shared_count pn; // 0x4
public:
    _inline ~shared_ptr<FXManager::Type>(); /* compiler_generated() */
};
static_assert(sizeof(boost::shared_ptr<FXManager::Type>) == 8, "Invalid boost::shared_ptr<FXManager::Type> size");

class boost::shared_ptr<FXManager::Dynamics>
{
public:
    typedef boost::shared_ptr<FXManager::Dynamics> this_type;
    class element_type;
    class value_type;
    typedef FXManager::Dynamics *pointer;
    typedef FXManager::Dynamics &reference;
    _inline shared_ptr<FXManager::Dynamics>(boost::shared_ptr<FXManager::Dynamics> const &); /* compiler_generated() */
    _inline shared_ptr<FXManager::Dynamics>();
    _inline boost::shared_ptr<FXManager::Dynamics> &operator=(boost::shared_ptr<FXManager::Dynamics> const &); /* compiler_generated() */
    void reset();
    FXManager::Dynamics &operator*() const;
    FXManager::Dynamics *operator->() const;
    _inline FXManager::Dynamics *get() const;
    typedef FXManager::Dynamics **unspecified_bool_type() const;
    FXManager::Dynamics **operator class FXManager::Dynamics *(__thiscall boost::shared_ptr<class FXManager::Dynamics>::* )(void) const() const() const;
    bool operator!() const;
    bool unique() const;
    long use_count() const;
    void swap(boost::shared_ptr<FXManager::Dynamics> &);
    void *_internal_get_deleter(type_info const &) const;
private:
    FXManager::Dynamics *px; // 0x0
    boost::detail::shared_count pn; // 0x4
public:
    _inline ~shared_ptr<FXManager::Dynamics>(); /* compiler_generated() */
};
static_assert(sizeof(boost::shared_ptr<FXManager::Dynamics>) == 8, "Invalid boost::shared_ptr<FXManager::Dynamics> size");

/* ---------- prototypes */

extern _inline void boost::detail::sp_enable_shared_from_this(void const *, void const *, boost::detail::shared_count const &);
extern _inline void boost::swap<DestinationFormation::Bucket>(boost::shared_ptr<DestinationFormation::Bucket> &a, boost::shared_ptr<DestinationFormation::Bucket> &b);

/* ---------- globals */

/* ---------- public code */

_inline void boost::detail::sp_enable_shared_from_this(void const *, void const *, boost::detail::shared_count const &) // 0x464406
{
    mangled_assert("?sp_enable_shared_from_this@detail@boost@@YGXPBX0ABVshared_count@12@@Z");
    todo("implement");
}

_inline boost::shared_ptr<BasicMesh>::shared_ptr<BasicMesh>() // 0x5E56F0
{
    mangled_assert("??0?$shared_ptr@VBasicMesh@@@boost@@QAE@XZ");
    todo("implement");
}

_inline boost::shared_ptr<StarList>::shared_ptr<StarList>() // 0x5E571A
{
    mangled_assert("??0?$shared_ptr@VStarList@@@boost@@QAE@XZ");
    todo("implement");
}

_inline boost::shared_ptr<UI::Graphic>::shared_ptr<UI::Graphic>() // 0x586A82
{
    mangled_assert("??0?$shared_ptr@VGraphic@UI@@@boost@@QAE@XZ");
    todo("implement");
}

_inline boost::shared_ptr<SobWithMeshStatic::Model>::shared_ptr<SobWithMeshStatic::Model>() // 0x48127E
{
    mangled_assert("??0?$shared_ptr@VModel@SobWithMeshStatic@@@boost@@QAE@XZ");
    todo("implement");
}

_inline boost::shared_ptr<SobStatic::Model>::shared_ptr<SobStatic::Model>() // 0x47BD42
{
    mangled_assert("??0?$shared_ptr@VModel@SobStatic@@@boost@@QAE@XZ");
    todo("implement");
}

_inline boost::shared_ptr<SobIDShared>::shared_ptr<SobIDShared>() // 0x47A008
{
    mangled_assert("??0?$shared_ptr@VSobIDShared@@@boost@@QAE@XZ");
    todo("implement");
}

_inline boost::shared_ptr<FrameOrders>::shared_ptr<FrameOrders>() // 0x4605B8
{
    mangled_assert("??0?$shared_ptr@VFrameOrders@@@boost@@QAE@XZ");
    todo("implement");
}

_inline boost::shared_ptr<FXManager::Dynamics>::shared_ptr<FXManager::Dynamics>() // 0x6DBB3A
{
    mangled_assert("??0?$shared_ptr@VDynamics@FXManager@@@boost@@QAE@XZ");
    todo("implement");
}

_inline boost::shared_ptr<BasicMesh>::shared_ptr<BasicMesh><BasicMesh>(BasicMesh *) // 0x5E4D9D
{
    mangled_assert("??$?0VBasicMesh@@@?$shared_ptr@VBasicMesh@@@boost@@QAE@PAVBasicMesh@@@Z");
    todo("implement");
}

_inline boost::shared_ptr<StarList>::shared_ptr<StarList><StarList>(StarList *) // 0x5E4DBF
{
    mangled_assert("??$?0VStarList@@@?$shared_ptr@VStarList@@@boost@@QAE@PAVStarList@@@Z");
    todo("implement");
}

_inline boost::shared_ptr<BgLightAnim::Data>::shared_ptr<BgLightAnim::Data><BgLightAnim::Data>(BgLightAnim::Data *) // 0x5E47A8
{
    mangled_assert("??$?0VData@BgLightAnim@@@?$shared_ptr@VData@BgLightAnim@@@boost@@QAE@PAVData@BgLightAnim@@@Z");
    todo("implement");
}

_inline boost::shared_ptr<SobWithMeshStatic::Model>::shared_ptr<SobWithMeshStatic::Model><SobWithMeshStatic::Model>(SobWithMeshStatic::Model *) // 0x47FBD3
{
    mangled_assert("??$?0VModel@SobWithMeshStatic@@@?$shared_ptr@VModel@SobWithMeshStatic@@@boost@@QAE@PAVModel@SobWithMeshStatic@@@Z");
    todo("implement");
}

_inline boost::shared_ptr<SobStatic::Model>::shared_ptr<SobStatic::Model><SobStatic::Model>(SobStatic::Model *) // 0x47AE4F
{
    mangled_assert("??$?0VModel@SobStatic@@@?$shared_ptr@VModel@SobStatic@@@boost@@QAE@PAVModel@SobStatic@@@Z");
    todo("implement");
}

_inline boost::shared_ptr<SobIDShared>::shared_ptr<SobIDShared><SobIDShared>(SobIDShared *) // 0x47993C
{
    mangled_assert("??$?0VSobIDShared@@@?$shared_ptr@VSobIDShared@@@boost@@QAE@PAVSobIDShared@@@Z");
    todo("implement");
}

_inline boost::shared_ptr<FrameOrders>::shared_ptr<FrameOrders><FrameOrders>(FrameOrders *) // 0x45E76C
{
    mangled_assert("??$?0VFrameOrders@@@?$shared_ptr@VFrameOrders@@@boost@@QAE@PAVFrameOrders@@@Z");
    todo("implement");
}

_inline boost::shared_ptr<UI::Graphic>::shared_ptr<UI::Graphic><UI::Graphic>(UI::Graphic *) // 0x669115
{
    mangled_assert("??$?0VGraphic@UI@@@?$shared_ptr@VGraphic@UI@@@boost@@QAE@PAVGraphic@UI@@@Z");
    todo("implement");
}

_inline boost::shared_ptr<DestinationFormation::Bucket>::shared_ptr<DestinationFormation::Bucket><DestinationFormation::Bucket>(DestinationFormation::Bucket *) // 0x6B62E7
{
    mangled_assert("??$?0UBucket@DestinationFormation@@@?$shared_ptr@UBucket@DestinationFormation@@@boost@@QAE@PAUBucket@DestinationFormation@@@Z");
    todo("implement");
}

_inline boost::shared_ptr<DestinationFormation::Row>::shared_ptr<DestinationFormation::Row><DestinationFormation::Row>(DestinationFormation::Row *) // 0x6B6309
{
    mangled_assert("??$?0URow@DestinationFormation@@@?$shared_ptr@URow@DestinationFormation@@@boost@@QAE@PAURow@DestinationFormation@@@Z");
    todo("implement");
}

_inline boost::shared_ptr<DestinationFormation::Wall>::shared_ptr<DestinationFormation::Wall><DestinationFormation::Wall>(DestinationFormation::Wall *) // 0x6B632B
{
    mangled_assert("??$?0UWall@DestinationFormation@@@?$shared_ptr@UWall@DestinationFormation@@@boost@@QAE@PAUWall@DestinationFormation@@@Z");
    todo("implement");
}

_inline boost::shared_ptr<FXManager::Dynamics>::shared_ptr<FXManager::Dynamics><FXManager::Dynamics>(FXManager::Dynamics *) // 0x6D94CF
{
    mangled_assert("??$?0VDynamics@FXManager@@@?$shared_ptr@VDynamics@FXManager@@@boost@@QAE@PAVDynamics@FXManager@@@Z");
    todo("implement");
}

_inline boost::shared_ptr<FXManager::Type>::shared_ptr<FXManager::Type><FXManager::Type>(FXManager::Type *) // 0x6D94F1
{
    mangled_assert("??$?0VType@FXManager@@@?$shared_ptr@VType@FXManager@@@boost@@QAE@PAVType@FXManager@@@Z");
    todo("implement");
}

_inline void boost::shared_ptr<UI::Graphic>::reset() // 0x59C376
{
    mangled_assert("?reset@?$shared_ptr@VGraphic@UI@@@boost@@QAEXXZ");
    todo("implement");
}

_inline void boost::shared_ptr<SobIDShared>::reset() // 0x4859C3
{
    mangled_assert("?reset@?$shared_ptr@VSobIDShared@@@boost@@QAEXXZ");
    todo("implement");
}

_inline void boost::shared_ptr<FrameOrders>::reset() // 0x463FDF
{
    mangled_assert("?reset@?$shared_ptr@VFrameOrders@@@boost@@QAEXXZ");
    todo("implement");
}

_inline void boost::shared_ptr<BasicMesh>::reset<BasicMesh>(BasicMesh *) // 0x5E5595
{
    mangled_assert("??$reset@VBasicMesh@@@?$shared_ptr@VBasicMesh@@@boost@@QAEXPAVBasicMesh@@@Z");
    todo("implement");
}

_inline void boost::shared_ptr<StarList>::reset<StarList>(StarList *) // 0x5E55CF
{
    mangled_assert("??$reset@VStarList@@@?$shared_ptr@VStarList@@@boost@@QAEXPAVStarList@@@Z");
    todo("implement");
}

_inline void boost::shared_ptr<SobWithMeshStatic::Model>::reset<SobWithMeshStatic::Model>(SobWithMeshStatic::Model *) // 0x480EFB
{
    mangled_assert("??$reset@VModel@SobWithMeshStatic@@@?$shared_ptr@VModel@SobWithMeshStatic@@@boost@@QAEXPAVModel@SobWithMeshStatic@@@Z");
    todo("implement");
}

_inline void boost::shared_ptr<SobStatic::Model>::reset<SobStatic::Model>(SobStatic::Model *) // 0x47B9C6
{
    mangled_assert("??$reset@VModel@SobStatic@@@?$shared_ptr@VModel@SobStatic@@@boost@@QAEXPAVModel@SobStatic@@@Z");
    todo("implement");
}

_inline void boost::shared_ptr<SobIDShared>::reset<SobIDShared>(SobIDShared *) // 0x479EE8
{
    mangled_assert("??$reset@VSobIDShared@@@?$shared_ptr@VSobIDShared@@@boost@@QAEXPAVSobIDShared@@@Z");
    todo("implement");
}

_inline void boost::shared_ptr<FrameOrders>::reset<FrameOrders>(FrameOrders *) // 0x45FCB2
{
    mangled_assert("??$reset@VFrameOrders@@@?$shared_ptr@VFrameOrders@@@boost@@QAEXPAVFrameOrders@@@Z");
    todo("implement");
}

_inline void boost::shared_ptr<UI::Graphic>::reset<UI::Graphic>(UI::Graphic *) // 0x66950C
{
    mangled_assert("??$reset@VGraphic@UI@@@?$shared_ptr@VGraphic@UI@@@boost@@QAEXPAVGraphic@UI@@@Z");
    todo("implement");
}

_inline StateCommandBlock *boost::shared_ptr<StateCommandBlock>::operator->() const // 0x640B86
{
    mangled_assert("??C?$shared_ptr@VStateCommandBlock@@@boost@@QBEPAVStateCommandBlock@@XZ");
    todo("implement");
}

_inline BgLightAnim::Data *boost::shared_ptr<BgLightAnim::Data>::operator->() const // 0x5E48FD
{
    mangled_assert("??C?$shared_ptr@VData@BgLightAnim@@@boost@@QBEPAVData@BgLightAnim@@XZ");
    todo("implement");
}

_inline UI::Graphic *boost::shared_ptr<UI::Graphic>::operator->() const // 0x574004
{
    mangled_assert("??C?$shared_ptr@VGraphic@UI@@@boost@@QBEPAVGraphic@UI@@XZ");
    todo("implement");
}

_inline SobIDShared *boost::shared_ptr<SobIDShared>::operator->() const // 0x47A1E5
{
    mangled_assert("??C?$shared_ptr@VSobIDShared@@@boost@@QBEPAVSobIDShared@@XZ");
    todo("implement");
}

_inline FrameOrders *boost::shared_ptr<FrameOrders>::operator->() const // 0x460F8C
{
    mangled_assert("??C?$shared_ptr@VFrameOrders@@@boost@@QBEPAVFrameOrders@@XZ");
    todo("implement");
}

_inline SobStatic::Model *boost::shared_ptr<SobStatic::Model>::operator->() const // 0x4485D1
{
    mangled_assert("??C?$shared_ptr@VModel@SobStatic@@@boost@@QBEPAVModel@SobStatic@@XZ");
    todo("implement");
}

_inline SobWithMeshStatic::Model *boost::shared_ptr<SobWithMeshStatic::Model>::operator->() const // 0x43FCA2
{
    mangled_assert("??C?$shared_ptr@VModel@SobWithMeshStatic@@@boost@@QBEPAVModel@SobWithMeshStatic@@XZ");
    todo("implement");
}

_inline DestinationFormation::Bucket *boost::shared_ptr<DestinationFormation::Bucket>::operator->() const // 0x6B76A4
{
    mangled_assert("??C?$shared_ptr@UBucket@DestinationFormation@@@boost@@QBEPAUBucket@DestinationFormation@@XZ");
    todo("implement");
}

_inline DestinationFormation::Row *boost::shared_ptr<DestinationFormation::Row>::operator->() const // 0x6B76A7
{
    mangled_assert("??C?$shared_ptr@URow@DestinationFormation@@@boost@@QBEPAURow@DestinationFormation@@XZ");
    todo("implement");
}

_inline DestinationFormation::Wall *boost::shared_ptr<DestinationFormation::Wall>::operator->() const // 0x6B76AA
{
    mangled_assert("??C?$shared_ptr@UWall@DestinationFormation@@@boost@@QBEPAUWall@DestinationFormation@@XZ");
    todo("implement");
}

_inline FXManager::Type *boost::shared_ptr<FXManager::Type>::operator->() const // 0x6DC5A8
{
    mangled_assert("??C?$shared_ptr@VType@FXManager@@@boost@@QBEPAVType@FXManager@@XZ");
    todo("implement");
}

_inline BasicMesh *boost::shared_ptr<BasicMesh>::get() const // 0x5E6CA3
{
    mangled_assert("?get@?$shared_ptr@VBasicMesh@@@boost@@QBEPAVBasicMesh@@XZ");
    todo("implement");
}

_inline StarList *boost::shared_ptr<StarList>::get() const // 0x5E6CA6
{
    mangled_assert("?get@?$shared_ptr@VStarList@@@boost@@QBEPAVStarList@@XZ");
    todo("implement");
}

_inline UI::Graphic *boost::shared_ptr<UI::Graphic>::get() const // 0x575A75
{
    mangled_assert("?get@?$shared_ptr@VGraphic@UI@@@boost@@QBEPAVGraphic@UI@@XZ");
    todo("implement");
}

_inline SobStatic::Model *boost::shared_ptr<SobStatic::Model>::get() const // 0x47891A
{
    mangled_assert("?get@?$shared_ptr@VModel@SobStatic@@@boost@@QBEPAVModel@SobStatic@@XZ");
    todo("implement");
}

_inline FrameOrders *boost::shared_ptr<FrameOrders>::get() const // 0x463A05
{
    mangled_assert("?get@?$shared_ptr@VFrameOrders@@@boost@@QBEPAVFrameOrders@@XZ");
    todo("implement");
}

_inline FXManager::Dynamics *boost::shared_ptr<FXManager::Dynamics>::get() const // 0x6E0C45
{
    mangled_assert("?get@?$shared_ptr@VDynamics@FXManager@@@boost@@QBEPAVDynamics@FXManager@@XZ");
    todo("implement");
}

_inline FXManager::Type *boost::shared_ptr<FXManager::Type>::get() const // 0x6E0C48
{
    mangled_assert("?get@?$shared_ptr@VType@FXManager@@@boost@@QBEPAVType@FXManager@@XZ");
    todo("implement");
}

_inline UI::Graphic **boost::shared_ptr<UI::Graphic>::operator UI::Graphic * (__thiscall boost::shared_ptr<UI::Graphic>::*)(void)const () const() const // 0x575172
{
    mangled_assert("??B?$shared_ptr@VGraphic@UI@@@boost@@QBEP801@BEPAVGraphic@UI@@XZXZ");
    todo("implement");
}

_inline long boost::shared_ptr<UI::Graphic>::use_count() const // 0x6810D8
{
    mangled_assert("?use_count@?$shared_ptr@VGraphic@UI@@@boost@@QBEJXZ");
    todo("implement");
}

_inline void boost::shared_ptr<BasicMesh>::swap(boost::shared_ptr<BasicMesh> &) // 0x5E79AD
{
    mangled_assert("?swap@?$shared_ptr@VBasicMesh@@@boost@@QAEXAAV12@@Z");
    todo("implement");
}

_inline void boost::shared_ptr<StarList>::swap(boost::shared_ptr<StarList> &) // 0x5E79CA
{
    mangled_assert("?swap@?$shared_ptr@VStarList@@@boost@@QAEXAAV12@@Z");
    todo("implement");
}

_inline void boost::shared_ptr<UI::Graphic>::swap(boost::shared_ptr<UI::Graphic> &) // 0x59C390
{
    mangled_assert("?swap@?$shared_ptr@VGraphic@UI@@@boost@@QAEXAAV12@@Z");
    todo("implement");
}

_inline void boost::shared_ptr<SobWithMeshStatic::Model>::swap(boost::shared_ptr<SobWithMeshStatic::Model> &) // 0x48360F
{
    mangled_assert("?swap@?$shared_ptr@VModel@SobWithMeshStatic@@@boost@@QAEXAAV12@@Z");
    todo("implement");
}

_inline void boost::shared_ptr<SobStatic::Model>::swap(boost::shared_ptr<SobStatic::Model> &) // 0x47F902
{
    mangled_assert("?swap@?$shared_ptr@VModel@SobStatic@@@boost@@QAEXAAV12@@Z");
    todo("implement");
}

_inline void boost::shared_ptr<SobIDShared>::swap(boost::shared_ptr<SobIDShared> &) // 0x47AB9A
{
    mangled_assert("?swap@?$shared_ptr@VSobIDShared@@@boost@@QAEXAAV12@@Z");
    todo("implement");
}

_inline void boost::shared_ptr<FrameOrders>::swap(boost::shared_ptr<FrameOrders> &) // 0x4645E8
{
    mangled_assert("?swap@?$shared_ptr@VFrameOrders@@@boost@@QAEXAAV12@@Z");
    todo("implement");
}

_inline void boost::shared_ptr<DestinationFormation::Bucket>::swap(boost::shared_ptr<DestinationFormation::Bucket> &) // 0x6B8D04
{
    mangled_assert("?swap@?$shared_ptr@UBucket@DestinationFormation@@@boost@@QAEXAAV12@@Z");
    todo("implement");
}

_inline void boost::swap<DestinationFormation::Bucket>(boost::shared_ptr<DestinationFormation::Bucket> &a, boost::shared_ptr<DestinationFormation::Bucket> &b) // 0x6B733D
{
    mangled_assert("??$swap@UBucket@DestinationFormation@@@boost@@YGXAAV?$shared_ptr@UBucket@DestinationFormation@@@0@0@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __SHARED_PTR_H__
/* combined */
#ifndef __SHARED_PTR_H__
#define __SHARED_PTR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct boost::detail::static_cast_tag
{
};
static_assert(sizeof(boost::detail::static_cast_tag) == 1, "Invalid boost::detail::static_cast_tag size");

struct boost::detail::dynamic_cast_tag
{
};
static_assert(sizeof(boost::detail::dynamic_cast_tag) == 1, "Invalid boost::detail::dynamic_cast_tag size");

struct boost::detail::polymorphic_cast_tag
{
};
static_assert(sizeof(boost::detail::polymorphic_cast_tag) == 1, "Invalid boost::detail::polymorphic_cast_tag size");

struct boost::detail::shared_ptr_traits<void>
{
    typedef void reference;
};
static_assert(sizeof(boost::detail::shared_ptr_traits<void>) == 1, "Invalid boost::detail::shared_ptr_traits<void> size");

struct boost::detail::shared_ptr_traits<void const >
{
    typedef void reference;
};
static_assert(sizeof(boost::detail::shared_ptr_traits<void const >) == 1, "Invalid boost::detail::shared_ptr_traits<void const > size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SHARED_PTR_H__
/* combined */
#ifndef __SHARED_PTR_H__
#define __SHARED_PTR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct boost::detail::static_cast_tag
{
};
static_assert(sizeof(boost::detail::static_cast_tag) == 1, "Invalid boost::detail::static_cast_tag size");

struct boost::detail::dynamic_cast_tag
{
};
static_assert(sizeof(boost::detail::dynamic_cast_tag) == 1, "Invalid boost::detail::dynamic_cast_tag size");

struct boost::detail::polymorphic_cast_tag
{
};
static_assert(sizeof(boost::detail::polymorphic_cast_tag) == 1, "Invalid boost::detail::polymorphic_cast_tag size");

struct boost::detail::shared_ptr_traits<void>
{
    typedef void reference;
};
static_assert(sizeof(boost::detail::shared_ptr_traits<void>) == 1, "Invalid boost::detail::shared_ptr_traits<void> size");

struct boost::detail::shared_ptr_traits<void const >
{
    typedef void reference;
};
static_assert(sizeof(boost::detail::shared_ptr_traits<void const >) == 1, "Invalid boost::detail::shared_ptr_traits<void const > size");

class boost::shared_ptr<LocalizerImp::Resource>
{
public:
    typedef boost::shared_ptr<LocalizerImp::Resource> this_type;
    class element_type;
    class value_type;
    typedef LocalizerImp::Resource *pointer;
    typedef LocalizerImp::Resource &reference;
    _inline shared_ptr<LocalizerImp::Resource>(boost::shared_ptr<LocalizerImp::Resource> const &); /* compiler_generated() */
    _inline shared_ptr<LocalizerImp::Resource>();
    _inline boost::shared_ptr<LocalizerImp::Resource> &operator=(boost::shared_ptr<LocalizerImp::Resource> const &); /* compiler_generated() */
    void reset();
    LocalizerImp::Resource &operator*() const;
    _inline LocalizerImp::Resource *operator->() const;
    _inline LocalizerImp::Resource *get() const;
    typedef LocalizerImp::Resource **unspecified_bool_type() const;
    LocalizerImp::Resource **operator class LocalizerImp::Resource *(__thiscall boost::shared_ptr<class LocalizerImp::Resource>::* )(void) const() const() const;
    bool operator!() const;
    bool unique() const;
    long use_count() const;
    _inline void swap(boost::shared_ptr<LocalizerImp::Resource> &);
    void *_internal_get_deleter(type_info const &) const;
private:
    LocalizerImp::Resource *px; // 0x0
    boost::detail::shared_count pn; // 0x4
public:
    _inline ~shared_ptr<LocalizerImp::Resource>(); /* compiler_generated() */
};
static_assert(sizeof(boost::shared_ptr<LocalizerImp::Resource>) == 8, "Invalid boost::shared_ptr<LocalizerImp::Resource> size");

/* ---------- prototypes */

extern _inline void boost::detail::sp_enable_shared_from_this(void const *, void const *, boost::detail::shared_count const &);

/* ---------- globals */

/* ---------- public code */

_inline void boost::detail::sp_enable_shared_from_this(void const *, void const *, boost::detail::shared_count const &) // 0x100049A6
{
    mangled_assert("?sp_enable_shared_from_this@detail@boost@@YGXPBX0ABVshared_count@12@@Z");
    todo("implement");
}

_inline boost::shared_ptr<LocalizerImp::Resource>::shared_ptr<LocalizerImp::Resource>() // 0x10003380
{
    mangled_assert("??0?$shared_ptr@VResource@LocalizerImp@@@boost@@QAE@XZ");
    todo("implement");
}

_inline boost::shared_ptr<LocalizerImp::Resource>::shared_ptr<LocalizerImp::Resource><LocalizerImp::Resource>(LocalizerImp::Resource *) // 0x10002CA0
{
    mangled_assert("??$?0VResource@LocalizerImp@@@?$shared_ptr@VResource@LocalizerImp@@@boost@@QAE@PAVResource@LocalizerImp@@@Z");
    todo("implement");
}

_inline void boost::shared_ptr<LocalizerImp::Resource>::reset<LocalizerImp::Resource>(LocalizerImp::Resource *) // 0x100031D3
{
    mangled_assert("??$reset@VResource@LocalizerImp@@@?$shared_ptr@VResource@LocalizerImp@@@boost@@QAEXPAVResource@LocalizerImp@@@Z");
    todo("implement");
}

_inline LocalizerImp::Resource *boost::shared_ptr<LocalizerImp::Resource>::operator->() const // 0x1000360A
{
    mangled_assert("??C?$shared_ptr@VResource@LocalizerImp@@@boost@@QBEPAVResource@LocalizerImp@@XZ");
    todo("implement");
}

_inline LocalizerImp::Resource *boost::shared_ptr<LocalizerImp::Resource>::get() const // 0x100047D7
{
    mangled_assert("?get@?$shared_ptr@VResource@LocalizerImp@@@boost@@QBEPAVResource@LocalizerImp@@XZ");
    todo("implement");
}

_inline void boost::shared_ptr<LocalizerImp::Resource>::swap(boost::shared_ptr<LocalizerImp::Resource> &) // 0x100049A9
{
    mangled_assert("?swap@?$shared_ptr@VResource@LocalizerImp@@@boost@@QAEXAAV12@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __SHARED_PTR_H__
/* combined */
#ifndef __SHARED_PTR_H__
#define __SHARED_PTR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct boost::detail::static_cast_tag
{
};
static_assert(sizeof(boost::detail::static_cast_tag) == 1, "Invalid boost::detail::static_cast_tag size");

struct boost::detail::dynamic_cast_tag
{
};
static_assert(sizeof(boost::detail::dynamic_cast_tag) == 1, "Invalid boost::detail::dynamic_cast_tag size");

struct boost::detail::polymorphic_cast_tag
{
};
static_assert(sizeof(boost::detail::polymorphic_cast_tag) == 1, "Invalid boost::detail::polymorphic_cast_tag size");

struct boost::detail::shared_ptr_traits<void>
{
    typedef void reference;
};
static_assert(sizeof(boost::detail::shared_ptr_traits<void>) == 1, "Invalid boost::detail::shared_ptr_traits<void> size");

struct boost::detail::shared_ptr_traits<void const >
{
    typedef void reference;
};
static_assert(sizeof(boost::detail::shared_ptr_traits<void const >) == 1, "Invalid boost::detail::shared_ptr_traits<void const > size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SHARED_PTR_H__
/* combined */
#ifndef __SHARED_PTR_H__
#define __SHARED_PTR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct boost::detail::static_cast_tag
{
};
static_assert(sizeof(boost::detail::static_cast_tag) == 1, "Invalid boost::detail::static_cast_tag size");

struct boost::detail::dynamic_cast_tag
{
};
static_assert(sizeof(boost::detail::dynamic_cast_tag) == 1, "Invalid boost::detail::dynamic_cast_tag size");

struct boost::detail::polymorphic_cast_tag
{
};
static_assert(sizeof(boost::detail::polymorphic_cast_tag) == 1, "Invalid boost::detail::polymorphic_cast_tag size");

struct boost::detail::shared_ptr_traits<void>
{
    typedef void reference;
};
static_assert(sizeof(boost::detail::shared_ptr_traits<void>) == 1, "Invalid boost::detail::shared_ptr_traits<void> size");

struct boost::detail::shared_ptr_traits<void const >
{
    typedef void reference;
};
static_assert(sizeof(boost::detail::shared_ptr_traits<void const >) == 1, "Invalid boost::detail::shared_ptr_traits<void const > size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SHARED_PTR_H__
/* combined */
#ifndef __SHARED_PTR_H__
#define __SHARED_PTR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::shared_ptr<StateCommandBlock>
{
public:
    typedef boost::shared_ptr<StateCommandBlock> this_type;
    typedef StateCommandBlock element_type;
    typedef StateCommandBlock value_type;
    typedef StateCommandBlock *pointer;
    typedef StateCommandBlock &reference;
    _inline shared_ptr<StateCommandBlock>(boost::shared_ptr<StateCommandBlock> const &); /* compiler_generated() */
    _inline shared_ptr<StateCommandBlock>();
    _inline boost::shared_ptr<StateCommandBlock> &operator=(boost::shared_ptr<StateCommandBlock> const &); /* compiler_generated() */
    _inline void reset();
    StateCommandBlock &operator*() const;
    _inline StateCommandBlock *operator->() const;
    _inline StateCommandBlock *get() const;
    typedef StateCommandBlock **unspecified_bool_type() const;
    StateCommandBlock **operator class StateCommandBlock *(__thiscall boost::shared_ptr<class StateCommandBlock>::* )(void) const() const() const;
    bool operator!() const;
    bool unique() const;
    long use_count() const;
    _inline void swap(boost::shared_ptr<StateCommandBlock> &);
    void *_internal_get_deleter(type_info const &) const;
private:
    StateCommandBlock *px; // 0x0
    boost::detail::shared_count pn; // 0x4
public:
    _inline ~shared_ptr<StateCommandBlock>(); /* compiler_generated() */
};
static_assert(sizeof(boost::shared_ptr<StateCommandBlock>) == 8, "Invalid boost::shared_ptr<StateCommandBlock> size");

/* ---------- prototypes */

extern _inline void boost::detail::sp_enable_shared_from_this(void const *, void const *, boost::detail::shared_count const &);

/* ---------- globals */

/* ---------- public code */

_inline void boost::detail::sp_enable_shared_from_this(void const *, void const *, boost::detail::shared_count const &) // 0x100B8E70
{
    mangled_assert("?sp_enable_shared_from_this@detail@boost@@YGXPBX0ABVshared_count@12@@Z");
    todo("implement");
}

_inline boost::shared_ptr<StateCommandBlock>::shared_ptr<StateCommandBlock>() // 0x100B17B0
{
    mangled_assert("??0?$shared_ptr@VStateCommandBlock@@@boost@@QAE@XZ");
    todo("implement");
}

_inline boost::shared_ptr<StateCommandBlock>::shared_ptr<StateCommandBlock><StateCommandBlock>(StateCommandBlock *) // 0x100B4540
{
    mangled_assert("??$?0VStateCommandBlock@@@?$shared_ptr@VStateCommandBlock@@@boost@@QAE@PAVStateCommandBlock@@@Z");
    todo("implement");
}

_inline void boost::shared_ptr<StateCommandBlock>::reset() // 0x100B3FF0
{
    mangled_assert("?reset@?$shared_ptr@VStateCommandBlock@@@boost@@QAEXXZ");
    todo("implement");
}

_inline void boost::shared_ptr<StateCommandBlock>::reset<StateCommandBlock>(StateCommandBlock *) // 0x100BFB00
{
    mangled_assert("??$reset@VStateCommandBlock@@@?$shared_ptr@VStateCommandBlock@@@boost@@QAEXPAVStateCommandBlock@@@Z");
    todo("implement");
}

_inline StateCommandBlock *boost::shared_ptr<StateCommandBlock>::operator->() const // 0x10011230
{
    mangled_assert("??C?$shared_ptr@VStateCommandBlock@@@boost@@QBEPAVStateCommandBlock@@XZ");
    todo("implement");
}

_inline StateCommandBlock *boost::shared_ptr<StateCommandBlock>::get() const // 0x100190F0
{
    mangled_assert("?get@?$shared_ptr@VStateCommandBlock@@@boost@@QBEPAVStateCommandBlock@@XZ");
    todo("implement");
}

_inline void boost::shared_ptr<StateCommandBlock>::swap(boost::shared_ptr<StateCommandBlock> &) // 0x100B4330
{
    mangled_assert("?swap@?$shared_ptr@VStateCommandBlock@@@boost@@QAEXAAV12@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __SHARED_PTR_H__
/* combined */
#ifndef __SHARED_PTR_H__
#define __SHARED_PTR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct boost::detail::static_cast_tag
{
};
static_assert(sizeof(boost::detail::static_cast_tag) == 1, "Invalid boost::detail::static_cast_tag size");

struct boost::detail::dynamic_cast_tag
{
};
static_assert(sizeof(boost::detail::dynamic_cast_tag) == 1, "Invalid boost::detail::dynamic_cast_tag size");

struct boost::detail::polymorphic_cast_tag
{
};
static_assert(sizeof(boost::detail::polymorphic_cast_tag) == 1, "Invalid boost::detail::polymorphic_cast_tag size");

struct boost::detail::shared_ptr_traits<void>
{
    typedef void reference;
};
static_assert(sizeof(boost::detail::shared_ptr_traits<void>) == 1, "Invalid boost::detail::shared_ptr_traits<void> size");

struct boost::detail::shared_ptr_traits<void const >
{
    typedef void reference;
};
static_assert(sizeof(boost::detail::shared_ptr_traits<void const >) == 1, "Invalid boost::detail::shared_ptr_traits<void const > size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SHARED_PTR_H__
/* combined */
#ifndef __SHARED_PTR_H__
#define __SHARED_PTR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct boost::detail::static_cast_tag
{
};
static_assert(sizeof(boost::detail::static_cast_tag) == 1, "Invalid boost::detail::static_cast_tag size");

struct boost::detail::dynamic_cast_tag
{
};
static_assert(sizeof(boost::detail::dynamic_cast_tag) == 1, "Invalid boost::detail::dynamic_cast_tag size");

struct boost::detail::polymorphic_cast_tag
{
};
static_assert(sizeof(boost::detail::polymorphic_cast_tag) == 1, "Invalid boost::detail::polymorphic_cast_tag size");

struct boost::detail::shared_ptr_traits<void>
{
    typedef void reference;
};
static_assert(sizeof(boost::detail::shared_ptr_traits<void>) == 1, "Invalid boost::detail::shared_ptr_traits<void> size");

struct boost::detail::shared_ptr_traits<void const >
{
    typedef void reference;
};
static_assert(sizeof(boost::detail::shared_ptr_traits<void const >) == 1, "Invalid boost::detail::shared_ptr_traits<void const > size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SHARED_PTR_H__
/* combined */
#ifndef __SHARED_PTR_H__
#define __SHARED_PTR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct boost::detail::static_cast_tag
{
};
static_assert(sizeof(boost::detail::static_cast_tag) == 1, "Invalid boost::detail::static_cast_tag size");

struct boost::detail::dynamic_cast_tag
{
};
static_assert(sizeof(boost::detail::dynamic_cast_tag) == 1, "Invalid boost::detail::dynamic_cast_tag size");

struct boost::detail::polymorphic_cast_tag
{
};
static_assert(sizeof(boost::detail::polymorphic_cast_tag) == 1, "Invalid boost::detail::polymorphic_cast_tag size");

struct boost::detail::shared_ptr_traits<void>
{
    typedef void reference;
};
static_assert(sizeof(boost::detail::shared_ptr_traits<void>) == 1, "Invalid boost::detail::shared_ptr_traits<void> size");

struct boost::detail::shared_ptr_traits<void const >
{
    typedef void reference;
};
static_assert(sizeof(boost::detail::shared_ptr_traits<void const >) == 1, "Invalid boost::detail::shared_ptr_traits<void const > size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SHARED_PTR_H__
/* combined */
#ifndef __SHARED_PTR_H__
#define __SHARED_PTR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct boost::detail::static_cast_tag
{
};
static_assert(sizeof(boost::detail::static_cast_tag) == 1, "Invalid boost::detail::static_cast_tag size");

struct boost::detail::dynamic_cast_tag
{
};
static_assert(sizeof(boost::detail::dynamic_cast_tag) == 1, "Invalid boost::detail::dynamic_cast_tag size");

struct boost::detail::polymorphic_cast_tag
{
};
static_assert(sizeof(boost::detail::polymorphic_cast_tag) == 1, "Invalid boost::detail::polymorphic_cast_tag size");

struct boost::detail::shared_ptr_traits<void>
{
    typedef void reference;
};
static_assert(sizeof(boost::detail::shared_ptr_traits<void>) == 1, "Invalid boost::detail::shared_ptr_traits<void> size");

struct boost::detail::shared_ptr_traits<void const >
{
    typedef void reference;
};
static_assert(sizeof(boost::detail::shared_ptr_traits<void const >) == 1, "Invalid boost::detail::shared_ptr_traits<void const > size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SHARED_PTR_H__
