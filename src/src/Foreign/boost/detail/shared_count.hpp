#ifndef __SHARED_COUNT_H__
#define __SHARED_COUNT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::bad_weak_ptr :
    public std::exception
{
public:
    virtual _inline char const *what() const override;
    _inline bad_weak_ptr(boost::bad_weak_ptr const &); /* compiler_generated() */
    _inline bad_weak_ptr(); /* compiler_generated() */
    virtual _inline ~bad_weak_ptr() override; /* compiler_generated() */
    boost::bad_weak_ptr &operator=(boost::bad_weak_ptr const &); /* compiler_generated() */
};
static_assert(sizeof(boost::bad_weak_ptr) == 12, "Invalid boost::bad_weak_ptr size");

class boost::detail::sp_counted_base
{
public:
    typedef boost::detail::lightweight_mutex mutex_type;
private:
    sp_counted_base(boost::detail::sp_counted_base const &);
public:
    _inline sp_counted_base();
    virtual _inline ~sp_counted_base();
    virtual void dispose() = 0;
    virtual _inline void destruct();
    virtual void *get_deleter(type_info const &) = 0;
    _inline void add_ref();
    _inline void release();
    void weak_add_ref();
    _inline void weak_release();
    long use_count() const;
private:
    boost::detail::sp_counted_base &operator=(boost::detail::sp_counted_base const &);
    long use_count_; // 0x4
    long weak_count_; // 0x8
    boost::detail::lightweight_mutex mtx_; // 0xC
};
static_assert(sizeof(boost::detail::sp_counted_base) == 16, "Invalid boost::detail::sp_counted_base size");

class boost::detail::sp_counted_base_impl<Archive *,boost::checked_deleter<Archive> > :
    public boost::detail::sp_counted_base
{
private:
    Archive *ptr; // 0x10
    boost::checked_deleter<Archive> del; // 0x14
public:
    _inline sp_counted_base_impl<Archive *,boost::checked_deleter<Archive> >(Archive *, boost::checked_deleter<Archive>);
private:
    sp_counted_base_impl<Archive *,boost::checked_deleter<Archive> >(boost::detail::sp_counted_base_impl<Archive *,boost::checked_deleter<Archive> > const &);
    boost::detail::sp_counted_base_impl<Archive *,boost::checked_deleter<Archive> > &operator=(boost::detail::sp_counted_base_impl<Archive *,boost::checked_deleter<Archive> > const &);
    typedef boost::detail::sp_counted_base_impl<Archive *,boost::checked_deleter<Archive> > this_type;
public:
    virtual _inline void dispose() override;
    virtual _inline void *get_deleter(type_info const &) override;
    virtual _inline ~sp_counted_base_impl<Archive *,boost::checked_deleter<Archive> >() override; /* compiler_generated() */
};
static_assert(sizeof(boost::detail::sp_counted_base_impl<Archive *,boost::checked_deleter<Archive> >) == 24, "Invalid boost::detail::sp_counted_base_impl<Archive *,boost::checked_deleter<Archive> > size");

class boost::detail::sp_counted_base_impl<FilePath::Source *,boost::checked_deleter<FilePath::Source> > :
    public boost::detail::sp_counted_base
{
private:
    FilePath::Source *ptr; // 0x10
    boost::checked_deleter<FilePath::Source> del; // 0x14
public:
    _inline sp_counted_base_impl<FilePath::Source *,boost::checked_deleter<FilePath::Source> >(FilePath::Source *, boost::checked_deleter<FilePath::Source>);
private:
    sp_counted_base_impl<FilePath::Source *,boost::checked_deleter<FilePath::Source> >(boost::detail::sp_counted_base_impl<FilePath::Source *,boost::checked_deleter<FilePath::Source> > const &);
    boost::detail::sp_counted_base_impl<FilePath::Source *,boost::checked_deleter<FilePath::Source> > &operator=(boost::detail::sp_counted_base_impl<FilePath::Source *,boost::checked_deleter<FilePath::Source> > const &);
    typedef boost::detail::sp_counted_base_impl<FilePath::Source *,boost::checked_deleter<FilePath::Source> > this_type;
public:
    virtual _inline void dispose() override;
    virtual _inline void *get_deleter(type_info const &) override;
    virtual _inline ~sp_counted_base_impl<FilePath::Source *,boost::checked_deleter<FilePath::Source> >() override; /* compiler_generated() */
};
static_assert(sizeof(boost::detail::sp_counted_base_impl<FilePath::Source *,boost::checked_deleter<FilePath::Source> >) == 24, "Invalid boost::detail::sp_counted_base_impl<FilePath::Source *,boost::checked_deleter<FilePath::Source> > size");

class boost::detail::shared_count
{
private:
    boost::detail::sp_counted_base *pi_; // 0x0
public:
    shared_count(boost::detail::weak_count const &);
    _inline shared_count(boost::detail::shared_count const &);
    _inline shared_count();
    _inline ~shared_count();
    _inline boost::detail::shared_count &operator=(boost::detail::shared_count const &);
    _inline void swap(boost::detail::shared_count &);
    long use_count() const;
    bool unique() const;
    void *get_deleter(type_info const &) const;
};
static_assert(sizeof(boost::detail::shared_count) == 4, "Invalid boost::detail::shared_count size");

class boost::detail::weak_count
{
private:
    boost::detail::sp_counted_base *pi_; // 0x0
public:
    weak_count(boost::detail::weak_count const &);
    weak_count(boost::detail::shared_count const &);
    weak_count();
    ~weak_count();
    boost::detail::weak_count &operator=(boost::detail::weak_count const &);
    boost::detail::weak_count &operator=(boost::detail::shared_count const &);
    void swap(boost::detail::weak_count &);
    long use_count() const;
};
static_assert(sizeof(boost::detail::weak_count) == 4, "Invalid boost::detail::weak_count size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline char const *boost::bad_weak_ptr::what() const // 0x10005E46
{
    mangled_assert("?what@bad_weak_ptr@boost@@UBEPBDXZ");
    todo("implement");
}

_inline boost::detail::sp_counted_base::sp_counted_base() // 0x10004F93
{
    mangled_assert("??0sp_counted_base@detail@boost@@QAE@XZ");
    todo("implement");
}

_inline boost::detail::sp_counted_base::~sp_counted_base() // 0x1000505B
{
    mangled_assert("??1sp_counted_base@detail@boost@@UAE@XZ");
    todo("implement");
}

_inline void boost::detail::sp_counted_base::destruct() // 0x10005B12
{
    mangled_assert("?destruct@sp_counted_base@detail@boost@@UAEXXZ");
    todo("implement");
}

_inline void boost::detail::sp_counted_base::add_ref() // 0x10005952
{
    mangled_assert("?add_ref@sp_counted_base@detail@boost@@QAEXXZ");
    todo("implement");
}

_inline void boost::detail::sp_counted_base::release() // 0x10005D05
{
    mangled_assert("?release@sp_counted_base@detail@boost@@QAEXXZ");
    todo("implement");
}

_inline void boost::detail::sp_counted_base::weak_release() // 0x10005E12
{
    mangled_assert("?weak_release@sp_counted_base@detail@boost@@QAEXXZ");
    todo("implement");
}

_inline boost::detail::sp_counted_base_impl<FilePath::Source *,boost::checked_deleter<FilePath::Source> >::sp_counted_base_impl<FilePath::Source *,boost::checked_deleter<FilePath::Source> >(FilePath::Source *, boost::checked_deleter<FilePath::Source>) // 0x1000C29D
{
    mangled_assert("??0?$sp_counted_base_impl@PAVSource@FilePath@@U?$checked_deleter@VSource@FilePath@@@boost@@@detail@boost@@QAE@PAVSource@FilePath@@U?$checked_deleter@VSource@FilePath@@@2@@Z");
    todo("implement");
}

_inline boost::detail::sp_counted_base_impl<Archive *,boost::checked_deleter<Archive> >::sp_counted_base_impl<Archive *,boost::checked_deleter<Archive> >(Archive *, boost::checked_deleter<Archive>) // 0x10004E3C
{
    mangled_assert("??0?$sp_counted_base_impl@PAVArchive@@U?$checked_deleter@VArchive@@@boost@@@detail@boost@@QAE@PAVArchive@@U?$checked_deleter@VArchive@@@2@@Z");
    todo("implement");
}

_inline void boost::detail::sp_counted_base_impl<FilePath::Source *,boost::checked_deleter<FilePath::Source> >::dispose() // 0x1000DF9F
{
    mangled_assert("?dispose@?$sp_counted_base_impl@PAVSource@FilePath@@U?$checked_deleter@VSource@FilePath@@@boost@@@detail@boost@@UAEXXZ");
    todo("implement");
}

_inline void boost::detail::sp_counted_base_impl<Archive *,boost::checked_deleter<Archive> >::dispose() // 0x10005B1D
{
    mangled_assert("?dispose@?$sp_counted_base_impl@PAVArchive@@U?$checked_deleter@VArchive@@@boost@@@detail@boost@@UAEXXZ");
    todo("implement");
}

_inline void *boost::detail::sp_counted_base_impl<FilePath::Source *,boost::checked_deleter<FilePath::Source> >::get_deleter(type_info const &) // 0x1000E0A4
{
    mangled_assert("?get_deleter@?$sp_counted_base_impl@PAVSource@FilePath@@U?$checked_deleter@VSource@FilePath@@@boost@@@detail@boost@@UAEPAXABVtype_info@@@Z");
    todo("implement");
}

_inline void *boost::detail::sp_counted_base_impl<Archive *,boost::checked_deleter<Archive> >::get_deleter(type_info const &) // 0x10005BBE
{
    mangled_assert("?get_deleter@?$sp_counted_base_impl@PAVArchive@@U?$checked_deleter@VArchive@@@boost@@@detail@boost@@UAEPAXABVtype_info@@@Z");
    todo("implement");
}

_inline boost::detail::shared_count::shared_count() // 0x10004F8D
{
    mangled_assert("??0shared_count@detail@boost@@QAE@XZ");
    todo("implement");
}

_inline boost::detail::shared_count::shared_count<FilePath::Source *,boost::checked_deleter<FilePath::Source> >(FilePath::Source *, boost::checked_deleter<FilePath::Source>) // 0x1000A4AD
{
    mangled_assert("??$?0PAVSource@FilePath@@U?$checked_deleter@VSource@FilePath@@@boost@@@shared_count@detail@boost@@QAE@PAVSource@FilePath@@U?$checked_deleter@VSource@FilePath@@@2@@Z");
    todo("implement");
}

_inline boost::detail::shared_count::shared_count<Archive *,boost::checked_deleter<Archive> >(Archive *, boost::checked_deleter<Archive>) // 0x100045F9
{
    mangled_assert("??$?0PAVArchive@@U?$checked_deleter@VArchive@@@boost@@@shared_count@detail@boost@@QAE@PAVArchive@@U?$checked_deleter@VArchive@@@2@@Z");
    todo("implement");
}

_inline boost::detail::shared_count::~shared_count() // 0x10005050
{
    mangled_assert("??1shared_count@detail@boost@@QAE@XZ");
    todo("implement");
}

_inline boost::detail::shared_count::shared_count(boost::detail::shared_count const &) // 0x10004F73
{
    mangled_assert("??0shared_count@detail@boost@@QAE@ABV012@@Z");
    todo("implement");
}

_inline boost::detail::shared_count &boost::detail::shared_count::operator=(boost::detail::shared_count const &) // 0x100050F2
{
    mangled_assert("??4shared_count@detail@boost@@QAEAAV012@ABV012@@Z");
    todo("implement");
}

_inline void boost::detail::shared_count::swap(boost::detail::shared_count &) // 0x1000E76B
{
    mangled_assert("?swap@shared_count@detail@boost@@QAEXAAV123@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __SHARED_COUNT_H__
/* combined */
#ifndef __SHARED_COUNT_H__
#define __SHARED_COUNT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::bad_weak_ptr :
    public std::exception
{
public:
    virtual char const *what() const override;
    bad_weak_ptr(boost::bad_weak_ptr const &); /* compiler_generated() */
    bad_weak_ptr(); /* compiler_generated() */
    virtual ~bad_weak_ptr() override; /* compiler_generated() */
    boost::bad_weak_ptr &operator=(boost::bad_weak_ptr const &); /* compiler_generated() */
};
static_assert(sizeof(boost::bad_weak_ptr) == 12, "Invalid boost::bad_weak_ptr size");

class boost::detail::sp_counted_base
{
public:
    typedef boost::detail::lightweight_mutex mutex_type;
private:
    sp_counted_base(boost::detail::sp_counted_base const &);
public:
    sp_counted_base();
    virtual ~sp_counted_base();
    virtual void dispose() = 0;
    virtual void destruct();
    virtual void *get_deleter(type_info const &) = 0;
    void add_ref();
    void release();
    void weak_add_ref();
    void weak_release();
    long use_count() const;
private:
    boost::detail::sp_counted_base &operator=(boost::detail::sp_counted_base const &);
    long use_count_; // 0x4
    long weak_count_; // 0x8
    boost::detail::lightweight_mutex mtx_; // 0xC
};
static_assert(sizeof(boost::detail::sp_counted_base) == 16, "Invalid boost::detail::sp_counted_base size");

class boost::detail::shared_count
{
private:
    boost::detail::sp_counted_base *pi_; // 0x0
public:
    shared_count(boost::detail::weak_count const &);
    shared_count(boost::detail::shared_count const &);
    shared_count();
    ~shared_count();
    boost::detail::shared_count &operator=(boost::detail::shared_count const &);
    void swap(boost::detail::shared_count &);
    long use_count() const;
    bool unique() const;
    void *get_deleter(type_info const &) const;
};
static_assert(sizeof(boost::detail::shared_count) == 4, "Invalid boost::detail::shared_count size");

class boost::detail::weak_count
{
private:
    boost::detail::sp_counted_base *pi_; // 0x0
public:
    weak_count(boost::detail::weak_count const &);
    weak_count(boost::detail::shared_count const &);
    weak_count();
    ~weak_count();
    boost::detail::weak_count &operator=(boost::detail::weak_count const &);
    boost::detail::weak_count &operator=(boost::detail::shared_count const &);
    void swap(boost::detail::weak_count &);
    long use_count() const;
};
static_assert(sizeof(boost::detail::weak_count) == 4, "Invalid boost::detail::weak_count size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SHARED_COUNT_H__
/* combined */
#ifndef __SHARED_COUNT_H__
#define __SHARED_COUNT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::bad_weak_ptr :
    public std::exception
{
public:
    virtual _inline char const *what() const override;
    _inline bad_weak_ptr(boost::bad_weak_ptr const &); /* compiler_generated() */
    _inline bad_weak_ptr(); /* compiler_generated() */
    virtual _inline ~bad_weak_ptr() override; /* compiler_generated() */
    boost::bad_weak_ptr &operator=(boost::bad_weak_ptr const &); /* compiler_generated() */
};
static_assert(sizeof(boost::bad_weak_ptr) == 12, "Invalid boost::bad_weak_ptr size");

class boost::detail::sp_counted_base
{
public:
    typedef boost::detail::lightweight_mutex mutex_type;
private:
    sp_counted_base(boost::detail::sp_counted_base const &);
public:
    _inline sp_counted_base();
    virtual _inline ~sp_counted_base();
    virtual void dispose() = 0;
    virtual _inline void destruct();
    virtual void *get_deleter(type_info const &) = 0;
    _inline void add_ref();
    _inline void release();
    void weak_add_ref();
    _inline void weak_release();
    _inline long use_count() const;
private:
    boost::detail::sp_counted_base &operator=(boost::detail::sp_counted_base const &);
    long use_count_; // 0x4
    long weak_count_; // 0x8
    boost::detail::lightweight_mutex mtx_; // 0xC
};
static_assert(sizeof(boost::detail::sp_counted_base) == 16, "Invalid boost::detail::sp_counted_base size");

class boost::detail::sp_counted_base_impl<FrameOrders *,boost::checked_deleter<FrameOrders> > :
    public boost::detail::sp_counted_base
{
private:
    FrameOrders *ptr; // 0x10
    boost::checked_deleter<FrameOrders> del; // 0x14
public:
    _inline sp_counted_base_impl<FrameOrders *,boost::checked_deleter<FrameOrders> >(FrameOrders *, boost::checked_deleter<FrameOrders>);
private:
    sp_counted_base_impl<FrameOrders *,boost::checked_deleter<FrameOrders> >(boost::detail::sp_counted_base_impl<FrameOrders *,boost::checked_deleter<FrameOrders> > const &);
    boost::detail::sp_counted_base_impl<FrameOrders *,boost::checked_deleter<FrameOrders> > &operator=(boost::detail::sp_counted_base_impl<FrameOrders *,boost::checked_deleter<FrameOrders> > const &);
    typedef boost::detail::sp_counted_base_impl<FrameOrders *,boost::checked_deleter<FrameOrders> > this_type;
public:
    virtual _inline void dispose() override;
    virtual _inline void *get_deleter(type_info const &) override;
    virtual _inline ~sp_counted_base_impl<FrameOrders *,boost::checked_deleter<FrameOrders> >() override; /* compiler_generated() */
};
static_assert(sizeof(boost::detail::sp_counted_base_impl<FrameOrders *,boost::checked_deleter<FrameOrders> >) == 24, "Invalid boost::detail::sp_counted_base_impl<FrameOrders *,boost::checked_deleter<FrameOrders> > size");

class boost::detail::sp_counted_base_impl<SobIDShared *,boost::checked_deleter<SobIDShared> > :
    public boost::detail::sp_counted_base
{
private:
    SobIDShared *ptr; // 0x10
    boost::checked_deleter<SobIDShared> del; // 0x14
public:
    _inline sp_counted_base_impl<SobIDShared *,boost::checked_deleter<SobIDShared> >(SobIDShared *, boost::checked_deleter<SobIDShared>);
private:
    sp_counted_base_impl<SobIDShared *,boost::checked_deleter<SobIDShared> >(boost::detail::sp_counted_base_impl<SobIDShared *,boost::checked_deleter<SobIDShared> > const &);
    boost::detail::sp_counted_base_impl<SobIDShared *,boost::checked_deleter<SobIDShared> > &operator=(boost::detail::sp_counted_base_impl<SobIDShared *,boost::checked_deleter<SobIDShared> > const &);
    typedef boost::detail::sp_counted_base_impl<SobIDShared *,boost::checked_deleter<SobIDShared> > this_type;
public:
    virtual _inline void dispose() override;
    virtual _inline void *get_deleter(type_info const &) override;
    virtual _inline ~sp_counted_base_impl<SobIDShared *,boost::checked_deleter<SobIDShared> >() override; /* compiler_generated() */
};
static_assert(sizeof(boost::detail::sp_counted_base_impl<SobIDShared *,boost::checked_deleter<SobIDShared> >) == 24, "Invalid boost::detail::sp_counted_base_impl<SobIDShared *,boost::checked_deleter<SobIDShared> > size");

class boost::detail::sp_counted_base_impl<SobStatic::Model *,boost::checked_deleter<SobStatic::Model> > :
    public boost::detail::sp_counted_base
{
private:
    SobStatic::Model *ptr; // 0x10
    boost::checked_deleter<SobStatic::Model> del; // 0x14
public:
    _inline sp_counted_base_impl<SobStatic::Model *,boost::checked_deleter<SobStatic::Model> >(SobStatic::Model *, boost::checked_deleter<SobStatic::Model>);
private:
    sp_counted_base_impl<SobStatic::Model *,boost::checked_deleter<SobStatic::Model> >(boost::detail::sp_counted_base_impl<SobStatic::Model *,boost::checked_deleter<SobStatic::Model> > const &);
    boost::detail::sp_counted_base_impl<SobStatic::Model *,boost::checked_deleter<SobStatic::Model> > &operator=(boost::detail::sp_counted_base_impl<SobStatic::Model *,boost::checked_deleter<SobStatic::Model> > const &);
    typedef boost::detail::sp_counted_base_impl<SobStatic::Model *,boost::checked_deleter<SobStatic::Model> > this_type;
public:
    virtual _inline void dispose() override;
    virtual _inline void *get_deleter(type_info const &) override;
    virtual _inline ~sp_counted_base_impl<SobStatic::Model *,boost::checked_deleter<SobStatic::Model> >() override; /* compiler_generated() */
};
static_assert(sizeof(boost::detail::sp_counted_base_impl<SobStatic::Model *,boost::checked_deleter<SobStatic::Model> >) == 24, "Invalid boost::detail::sp_counted_base_impl<SobStatic::Model *,boost::checked_deleter<SobStatic::Model> > size");

class boost::detail::sp_counted_base_impl<SobWithMeshStatic::Model *,boost::checked_deleter<SobWithMeshStatic::Model> > :
    public boost::detail::sp_counted_base
{
private:
    SobWithMeshStatic::Model *ptr; // 0x10
    boost::checked_deleter<SobWithMeshStatic::Model> del; // 0x14
public:
    _inline sp_counted_base_impl<SobWithMeshStatic::Model *,boost::checked_deleter<SobWithMeshStatic::Model> >(SobWithMeshStatic::Model *, boost::checked_deleter<SobWithMeshStatic::Model>);
private:
    sp_counted_base_impl<SobWithMeshStatic::Model *,boost::checked_deleter<SobWithMeshStatic::Model> >(boost::detail::sp_counted_base_impl<SobWithMeshStatic::Model *,boost::checked_deleter<SobWithMeshStatic::Model> > const &);
    boost::detail::sp_counted_base_impl<SobWithMeshStatic::Model *,boost::checked_deleter<SobWithMeshStatic::Model> > &operator=(boost::detail::sp_counted_base_impl<SobWithMeshStatic::Model *,boost::checked_deleter<SobWithMeshStatic::Model> > const &);
    typedef boost::detail::sp_counted_base_impl<SobWithMeshStatic::Model *,boost::checked_deleter<SobWithMeshStatic::Model> > this_type;
public:
    virtual _inline void dispose() override;
    virtual _inline void *get_deleter(type_info const &) override;
    virtual _inline ~sp_counted_base_impl<SobWithMeshStatic::Model *,boost::checked_deleter<SobWithMeshStatic::Model> >() override; /* compiler_generated() */
};
static_assert(sizeof(boost::detail::sp_counted_base_impl<SobWithMeshStatic::Model *,boost::checked_deleter<SobWithMeshStatic::Model> >) == 24, "Invalid boost::detail::sp_counted_base_impl<SobWithMeshStatic::Model *,boost::checked_deleter<SobWithMeshStatic::Model> > size");

class boost::detail::sp_counted_base_impl<BgLightAnim::Data *,boost::checked_deleter<BgLightAnim::Data> > :
    public boost::detail::sp_counted_base
{
private:
    BgLightAnim::Data *ptr; // 0x10
    boost::checked_deleter<BgLightAnim::Data> del; // 0x14
public:
    _inline sp_counted_base_impl<BgLightAnim::Data *,boost::checked_deleter<BgLightAnim::Data> >(BgLightAnim::Data *, boost::checked_deleter<BgLightAnim::Data>);
private:
    sp_counted_base_impl<BgLightAnim::Data *,boost::checked_deleter<BgLightAnim::Data> >(boost::detail::sp_counted_base_impl<BgLightAnim::Data *,boost::checked_deleter<BgLightAnim::Data> > const &);
    boost::detail::sp_counted_base_impl<BgLightAnim::Data *,boost::checked_deleter<BgLightAnim::Data> > &operator=(boost::detail::sp_counted_base_impl<BgLightAnim::Data *,boost::checked_deleter<BgLightAnim::Data> > const &);
    typedef boost::detail::sp_counted_base_impl<BgLightAnim::Data *,boost::checked_deleter<BgLightAnim::Data> > this_type;
public:
    virtual _inline void dispose() override;
    virtual _inline void *get_deleter(type_info const &) override;
    virtual _inline ~sp_counted_base_impl<BgLightAnim::Data *,boost::checked_deleter<BgLightAnim::Data> >() override; /* compiler_generated() */
};
static_assert(sizeof(boost::detail::sp_counted_base_impl<BgLightAnim::Data *,boost::checked_deleter<BgLightAnim::Data> >) == 24, "Invalid boost::detail::sp_counted_base_impl<BgLightAnim::Data *,boost::checked_deleter<BgLightAnim::Data> > size");

class boost::detail::sp_counted_base_impl<StarList *,boost::checked_deleter<StarList> > :
    public boost::detail::sp_counted_base
{
private:
    StarList *ptr; // 0x10
    boost::checked_deleter<StarList> del; // 0x14
public:
    _inline sp_counted_base_impl<StarList *,boost::checked_deleter<StarList> >(StarList *, boost::checked_deleter<StarList>);
private:
    sp_counted_base_impl<StarList *,boost::checked_deleter<StarList> >(boost::detail::sp_counted_base_impl<StarList *,boost::checked_deleter<StarList> > const &);
    boost::detail::sp_counted_base_impl<StarList *,boost::checked_deleter<StarList> > &operator=(boost::detail::sp_counted_base_impl<StarList *,boost::checked_deleter<StarList> > const &);
    typedef boost::detail::sp_counted_base_impl<StarList *,boost::checked_deleter<StarList> > this_type;
public:
    virtual _inline void dispose() override;
    virtual _inline void *get_deleter(type_info const &) override;
    virtual _inline ~sp_counted_base_impl<StarList *,boost::checked_deleter<StarList> >() override; /* compiler_generated() */
};
static_assert(sizeof(boost::detail::sp_counted_base_impl<StarList *,boost::checked_deleter<StarList> >) == 24, "Invalid boost::detail::sp_counted_base_impl<StarList *,boost::checked_deleter<StarList> > size");

class boost::detail::sp_counted_base_impl<BasicMesh *,boost::checked_deleter<BasicMesh> > :
    public boost::detail::sp_counted_base
{
private:
    BasicMesh *ptr; // 0x10
    boost::checked_deleter<BasicMesh> del; // 0x14
public:
    _inline sp_counted_base_impl<BasicMesh *,boost::checked_deleter<BasicMesh> >(BasicMesh *, boost::checked_deleter<BasicMesh>);
private:
    sp_counted_base_impl<BasicMesh *,boost::checked_deleter<BasicMesh> >(boost::detail::sp_counted_base_impl<BasicMesh *,boost::checked_deleter<BasicMesh> > const &);
    boost::detail::sp_counted_base_impl<BasicMesh *,boost::checked_deleter<BasicMesh> > &operator=(boost::detail::sp_counted_base_impl<BasicMesh *,boost::checked_deleter<BasicMesh> > const &);
    typedef boost::detail::sp_counted_base_impl<BasicMesh *,boost::checked_deleter<BasicMesh> > this_type;
public:
    virtual _inline void dispose() override;
    virtual _inline void *get_deleter(type_info const &) override;
    virtual _inline ~sp_counted_base_impl<BasicMesh *,boost::checked_deleter<BasicMesh> >() override; /* compiler_generated() */
};
static_assert(sizeof(boost::detail::sp_counted_base_impl<BasicMesh *,boost::checked_deleter<BasicMesh> >) == 24, "Invalid boost::detail::sp_counted_base_impl<BasicMesh *,boost::checked_deleter<BasicMesh> > size");

class boost::detail::sp_counted_base_impl<UI::Graphic *,boost::checked_deleter<UI::Graphic> > :
    public boost::detail::sp_counted_base
{
private:
    UI::Graphic *ptr; // 0x10
    boost::checked_deleter<UI::Graphic> del; // 0x14
public:
    _inline sp_counted_base_impl<UI::Graphic *,boost::checked_deleter<UI::Graphic> >(UI::Graphic *, boost::checked_deleter<UI::Graphic>);
private:
    sp_counted_base_impl<UI::Graphic *,boost::checked_deleter<UI::Graphic> >(boost::detail::sp_counted_base_impl<UI::Graphic *,boost::checked_deleter<UI::Graphic> > const &);
    boost::detail::sp_counted_base_impl<UI::Graphic *,boost::checked_deleter<UI::Graphic> > &operator=(boost::detail::sp_counted_base_impl<UI::Graphic *,boost::checked_deleter<UI::Graphic> > const &);
    typedef boost::detail::sp_counted_base_impl<UI::Graphic *,boost::checked_deleter<UI::Graphic> > this_type;
public:
    virtual _inline void dispose() override;
    virtual _inline void *get_deleter(type_info const &) override;
    virtual _inline ~sp_counted_base_impl<UI::Graphic *,boost::checked_deleter<UI::Graphic> >() override; /* compiler_generated() */
};
static_assert(sizeof(boost::detail::sp_counted_base_impl<UI::Graphic *,boost::checked_deleter<UI::Graphic> >) == 24, "Invalid boost::detail::sp_counted_base_impl<UI::Graphic *,boost::checked_deleter<UI::Graphic> > size");

class boost::detail::sp_counted_base_impl<DestinationFormation::Bucket *,boost::checked_deleter<DestinationFormation::Bucket> > :
    public boost::detail::sp_counted_base
{
private:
    DestinationFormation::Bucket *ptr; // 0x10
    boost::checked_deleter<DestinationFormation::Bucket> del; // 0x14
public:
    _inline sp_counted_base_impl<DestinationFormation::Bucket *,boost::checked_deleter<DestinationFormation::Bucket> >(DestinationFormation::Bucket *, boost::checked_deleter<DestinationFormation::Bucket>);
private:
    sp_counted_base_impl<DestinationFormation::Bucket *,boost::checked_deleter<DestinationFormation::Bucket> >(boost::detail::sp_counted_base_impl<DestinationFormation::Bucket *,boost::checked_deleter<DestinationFormation::Bucket> > const &);
    boost::detail::sp_counted_base_impl<DestinationFormation::Bucket *,boost::checked_deleter<DestinationFormation::Bucket> > &operator=(boost::detail::sp_counted_base_impl<DestinationFormation::Bucket *,boost::checked_deleter<DestinationFormation::Bucket> > const &);
    typedef boost::detail::sp_counted_base_impl<DestinationFormation::Bucket *,boost::checked_deleter<DestinationFormation::Bucket> > this_type;
public:
    virtual _inline void dispose() override;
    virtual _inline void *get_deleter(type_info const &) override;
    virtual _inline ~sp_counted_base_impl<DestinationFormation::Bucket *,boost::checked_deleter<DestinationFormation::Bucket> >() override; /* compiler_generated() */
};
static_assert(sizeof(boost::detail::sp_counted_base_impl<DestinationFormation::Bucket *,boost::checked_deleter<DestinationFormation::Bucket> >) == 24, "Invalid boost::detail::sp_counted_base_impl<DestinationFormation::Bucket *,boost::checked_deleter<DestinationFormation::Bucket> > size");

class boost::detail::sp_counted_base_impl<DestinationFormation::Wall *,boost::checked_deleter<DestinationFormation::Wall> > :
    public boost::detail::sp_counted_base
{
private:
    DestinationFormation::Wall *ptr; // 0x10
    boost::checked_deleter<DestinationFormation::Wall> del; // 0x14
public:
    _inline sp_counted_base_impl<DestinationFormation::Wall *,boost::checked_deleter<DestinationFormation::Wall> >(DestinationFormation::Wall *, boost::checked_deleter<DestinationFormation::Wall>);
private:
    sp_counted_base_impl<DestinationFormation::Wall *,boost::checked_deleter<DestinationFormation::Wall> >(boost::detail::sp_counted_base_impl<DestinationFormation::Wall *,boost::checked_deleter<DestinationFormation::Wall> > const &);
    boost::detail::sp_counted_base_impl<DestinationFormation::Wall *,boost::checked_deleter<DestinationFormation::Wall> > &operator=(boost::detail::sp_counted_base_impl<DestinationFormation::Wall *,boost::checked_deleter<DestinationFormation::Wall> > const &);
    typedef boost::detail::sp_counted_base_impl<DestinationFormation::Wall *,boost::checked_deleter<DestinationFormation::Wall> > this_type;
public:
    virtual _inline void dispose() override;
    virtual _inline void *get_deleter(type_info const &) override;
    virtual _inline ~sp_counted_base_impl<DestinationFormation::Wall *,boost::checked_deleter<DestinationFormation::Wall> >() override; /* compiler_generated() */
};
static_assert(sizeof(boost::detail::sp_counted_base_impl<DestinationFormation::Wall *,boost::checked_deleter<DestinationFormation::Wall> >) == 24, "Invalid boost::detail::sp_counted_base_impl<DestinationFormation::Wall *,boost::checked_deleter<DestinationFormation::Wall> > size");

class boost::detail::sp_counted_base_impl<DestinationFormation::Row *,boost::checked_deleter<DestinationFormation::Row> > :
    public boost::detail::sp_counted_base
{
private:
    DestinationFormation::Row *ptr; // 0x10
    boost::checked_deleter<DestinationFormation::Row> del; // 0x14
public:
    _inline sp_counted_base_impl<DestinationFormation::Row *,boost::checked_deleter<DestinationFormation::Row> >(DestinationFormation::Row *, boost::checked_deleter<DestinationFormation::Row>);
private:
    sp_counted_base_impl<DestinationFormation::Row *,boost::checked_deleter<DestinationFormation::Row> >(boost::detail::sp_counted_base_impl<DestinationFormation::Row *,boost::checked_deleter<DestinationFormation::Row> > const &);
    boost::detail::sp_counted_base_impl<DestinationFormation::Row *,boost::checked_deleter<DestinationFormation::Row> > &operator=(boost::detail::sp_counted_base_impl<DestinationFormation::Row *,boost::checked_deleter<DestinationFormation::Row> > const &);
    typedef boost::detail::sp_counted_base_impl<DestinationFormation::Row *,boost::checked_deleter<DestinationFormation::Row> > this_type;
public:
    virtual _inline void dispose() override;
    virtual _inline void *get_deleter(type_info const &) override;
    virtual _inline ~sp_counted_base_impl<DestinationFormation::Row *,boost::checked_deleter<DestinationFormation::Row> >() override; /* compiler_generated() */
};
static_assert(sizeof(boost::detail::sp_counted_base_impl<DestinationFormation::Row *,boost::checked_deleter<DestinationFormation::Row> >) == 24, "Invalid boost::detail::sp_counted_base_impl<DestinationFormation::Row *,boost::checked_deleter<DestinationFormation::Row> > size");

class boost::detail::sp_counted_base_impl<FXManager::Dynamics *,boost::checked_deleter<FXManager::Dynamics> > :
    public boost::detail::sp_counted_base
{
private:
    FXManager::Dynamics *ptr; // 0x10
    boost::checked_deleter<FXManager::Dynamics> del; // 0x14
public:
    _inline sp_counted_base_impl<FXManager::Dynamics *,boost::checked_deleter<FXManager::Dynamics> >(FXManager::Dynamics *, boost::checked_deleter<FXManager::Dynamics>);
private:
    sp_counted_base_impl<FXManager::Dynamics *,boost::checked_deleter<FXManager::Dynamics> >(boost::detail::sp_counted_base_impl<FXManager::Dynamics *,boost::checked_deleter<FXManager::Dynamics> > const &);
    boost::detail::sp_counted_base_impl<FXManager::Dynamics *,boost::checked_deleter<FXManager::Dynamics> > &operator=(boost::detail::sp_counted_base_impl<FXManager::Dynamics *,boost::checked_deleter<FXManager::Dynamics> > const &);
    typedef boost::detail::sp_counted_base_impl<FXManager::Dynamics *,boost::checked_deleter<FXManager::Dynamics> > this_type;
public:
    virtual _inline void dispose() override;
    virtual _inline void *get_deleter(type_info const &) override;
    virtual _inline ~sp_counted_base_impl<FXManager::Dynamics *,boost::checked_deleter<FXManager::Dynamics> >() override; /* compiler_generated() */
};
static_assert(sizeof(boost::detail::sp_counted_base_impl<FXManager::Dynamics *,boost::checked_deleter<FXManager::Dynamics> >) == 24, "Invalid boost::detail::sp_counted_base_impl<FXManager::Dynamics *,boost::checked_deleter<FXManager::Dynamics> > size");

class boost::detail::sp_counted_base_impl<FXManager::Type *,boost::checked_deleter<FXManager::Type> > :
    public boost::detail::sp_counted_base
{
private:
    FXManager::Type *ptr; // 0x10
    boost::checked_deleter<FXManager::Type> del; // 0x14
public:
    _inline sp_counted_base_impl<FXManager::Type *,boost::checked_deleter<FXManager::Type> >(FXManager::Type *, boost::checked_deleter<FXManager::Type>);
private:
    sp_counted_base_impl<FXManager::Type *,boost::checked_deleter<FXManager::Type> >(boost::detail::sp_counted_base_impl<FXManager::Type *,boost::checked_deleter<FXManager::Type> > const &);
    boost::detail::sp_counted_base_impl<FXManager::Type *,boost::checked_deleter<FXManager::Type> > &operator=(boost::detail::sp_counted_base_impl<FXManager::Type *,boost::checked_deleter<FXManager::Type> > const &);
    typedef boost::detail::sp_counted_base_impl<FXManager::Type *,boost::checked_deleter<FXManager::Type> > this_type;
public:
    virtual _inline void dispose() override;
    virtual _inline void *get_deleter(type_info const &) override;
    virtual _inline ~sp_counted_base_impl<FXManager::Type *,boost::checked_deleter<FXManager::Type> >() override; /* compiler_generated() */
};
static_assert(sizeof(boost::detail::sp_counted_base_impl<FXManager::Type *,boost::checked_deleter<FXManager::Type> >) == 24, "Invalid boost::detail::sp_counted_base_impl<FXManager::Type *,boost::checked_deleter<FXManager::Type> > size");

class boost::detail::shared_count
{
private:
    boost::detail::sp_counted_base *pi_; // 0x0
public:
    shared_count(boost::detail::weak_count const &);
    _inline shared_count(boost::detail::shared_count const &);
    _inline shared_count();
    _inline ~shared_count();
    _inline boost::detail::shared_count &operator=(boost::detail::shared_count const &);
    _inline void swap(boost::detail::shared_count &);
    _inline long use_count() const;
    bool unique() const;
    void *get_deleter(type_info const &) const;
};
static_assert(sizeof(boost::detail::shared_count) == 4, "Invalid boost::detail::shared_count size");

class boost::detail::weak_count
{
private:
    boost::detail::sp_counted_base *pi_; // 0x0
public:
    weak_count(boost::detail::weak_count const &);
    weak_count(boost::detail::shared_count const &);
    weak_count();
    ~weak_count();
    boost::detail::weak_count &operator=(boost::detail::weak_count const &);
    boost::detail::weak_count &operator=(boost::detail::shared_count const &);
    void swap(boost::detail::weak_count &);
    long use_count() const;
};
static_assert(sizeof(boost::detail::weak_count) == 4, "Invalid boost::detail::weak_count size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline char const *boost::bad_weak_ptr::what() const // 0x4648E9
{
    mangled_assert("?what@bad_weak_ptr@boost@@UBEPBDXZ");
    todo("implement");
}

_inline boost::detail::sp_counted_base::sp_counted_base() // 0x4609F3
{
    mangled_assert("??0sp_counted_base@detail@boost@@QAE@XZ");
    todo("implement");
}

_inline boost::detail::sp_counted_base::~sp_counted_base() // 0x460CD0
{
    mangled_assert("??1sp_counted_base@detail@boost@@UAE@XZ");
    todo("implement");
}

_inline void boost::detail::sp_counted_base::destruct() // 0x46322D
{
    mangled_assert("?destruct@sp_counted_base@detail@boost@@UAEXXZ");
    todo("implement");
}

_inline void boost::detail::sp_counted_base::add_ref() // 0x462E53
{
    mangled_assert("?add_ref@sp_counted_base@detail@boost@@QAEXXZ");
    todo("implement");
}

_inline void boost::detail::sp_counted_base::release() // 0x453FD6
{
    mangled_assert("?release@sp_counted_base@detail@boost@@QAEXXZ");
    todo("implement");
}

_inline void boost::detail::sp_counted_base::weak_release() // 0x45402C
{
    mangled_assert("?weak_release@sp_counted_base@detail@boost@@QAEXXZ");
    todo("implement");
}

_inline long boost::detail::sp_counted_base::use_count() const // 0x6810F3
{
    mangled_assert("?use_count@sp_counted_base@detail@boost@@QBEJXZ");
    todo("implement");
}

_inline boost::detail::sp_counted_base_impl<BasicMesh *,boost::checked_deleter<BasicMesh> >::sp_counted_base_impl<BasicMesh *,boost::checked_deleter<BasicMesh> >(BasicMesh *, boost::checked_deleter<BasicMesh>) // 0x5E5724
{
    mangled_assert("??0?$sp_counted_base_impl@PAVBasicMesh@@U?$checked_deleter@VBasicMesh@@@boost@@@detail@boost@@QAE@PAVBasicMesh@@U?$checked_deleter@VBasicMesh@@@2@@Z");
    todo("implement");
}

_inline boost::detail::sp_counted_base_impl<StarList *,boost::checked_deleter<StarList> >::sp_counted_base_impl<StarList *,boost::checked_deleter<StarList> >(StarList *, boost::checked_deleter<StarList>) // 0x5E5743
{
    mangled_assert("??0?$sp_counted_base_impl@PAVStarList@@U?$checked_deleter@VStarList@@@boost@@@detail@boost@@QAE@PAVStarList@@U?$checked_deleter@VStarList@@@2@@Z");
    todo("implement");
}

_inline boost::detail::sp_counted_base_impl<BgLightAnim::Data *,boost::checked_deleter<BgLightAnim::Data> >::sp_counted_base_impl<BgLightAnim::Data *,boost::checked_deleter<BgLightAnim::Data> >(BgLightAnim::Data *, boost::checked_deleter<BgLightAnim::Data>) // 0x5E47FF
{
    mangled_assert("??0?$sp_counted_base_impl@PAVData@BgLightAnim@@U?$checked_deleter@VData@BgLightAnim@@@boost@@@detail@boost@@QAE@PAVData@BgLightAnim@@U?$checked_deleter@VData@BgLightAnim@@@2@@Z");
    todo("implement");
}

_inline boost::detail::sp_counted_base_impl<SobWithMeshStatic::Model *,boost::checked_deleter<SobWithMeshStatic::Model> >::sp_counted_base_impl<SobWithMeshStatic::Model *,boost::checked_deleter<SobWithMeshStatic::Model> >(SobWithMeshStatic::Model *, boost::checked_deleter<SobWithMeshStatic::Model>) // 0x481288
{
    mangled_assert("??0?$sp_counted_base_impl@PAVModel@SobWithMeshStatic@@U?$checked_deleter@VModel@SobWithMeshStatic@@@boost@@@detail@boost@@QAE@PAVModel@SobWithMeshStatic@@U?$checked_deleter@VModel@SobWithMeshStatic@@@2@@Z");
    todo("implement");
}

_inline boost::detail::sp_counted_base_impl<SobStatic::Model *,boost::checked_deleter<SobStatic::Model> >::sp_counted_base_impl<SobStatic::Model *,boost::checked_deleter<SobStatic::Model> >(SobStatic::Model *, boost::checked_deleter<SobStatic::Model>) // 0x47BD4C
{
    mangled_assert("??0?$sp_counted_base_impl@PAVModel@SobStatic@@U?$checked_deleter@VModel@SobStatic@@@boost@@@detail@boost@@QAE@PAVModel@SobStatic@@U?$checked_deleter@VModel@SobStatic@@@2@@Z");
    todo("implement");
}

_inline boost::detail::sp_counted_base_impl<SobIDShared *,boost::checked_deleter<SobIDShared> >::sp_counted_base_impl<SobIDShared *,boost::checked_deleter<SobIDShared> >(SobIDShared *, boost::checked_deleter<SobIDShared>) // 0x47A012
{
    mangled_assert("??0?$sp_counted_base_impl@PAVSobIDShared@@U?$checked_deleter@VSobIDShared@@@boost@@@detail@boost@@QAE@PAVSobIDShared@@U?$checked_deleter@VSobIDShared@@@2@@Z");
    todo("implement");
}

_inline boost::detail::sp_counted_base_impl<FrameOrders *,boost::checked_deleter<FrameOrders> >::sp_counted_base_impl<FrameOrders *,boost::checked_deleter<FrameOrders> >(FrameOrders *, boost::checked_deleter<FrameOrders>) // 0x4605C2
{
    mangled_assert("??0?$sp_counted_base_impl@PAVFrameOrders@@U?$checked_deleter@VFrameOrders@@@boost@@@detail@boost@@QAE@PAVFrameOrders@@U?$checked_deleter@VFrameOrders@@@2@@Z");
    todo("implement");
}

_inline boost::detail::sp_counted_base_impl<UI::Graphic *,boost::checked_deleter<UI::Graphic> >::sp_counted_base_impl<UI::Graphic *,boost::checked_deleter<UI::Graphic> >(UI::Graphic *, boost::checked_deleter<UI::Graphic>) // 0x669714
{
    mangled_assert("??0?$sp_counted_base_impl@PAVGraphic@UI@@U?$checked_deleter@VGraphic@UI@@@boost@@@detail@boost@@QAE@PAVGraphic@UI@@U?$checked_deleter@VGraphic@UI@@@2@@Z");
    todo("implement");
}

_inline boost::detail::sp_counted_base_impl<DestinationFormation::Bucket *,boost::checked_deleter<DestinationFormation::Bucket> >::sp_counted_base_impl<DestinationFormation::Bucket *,boost::checked_deleter<DestinationFormation::Bucket> >(DestinationFormation::Bucket *, boost::checked_deleter<DestinationFormation::Bucket>) // 0x6B74B6
{
    mangled_assert("??0?$sp_counted_base_impl@PAUBucket@DestinationFormation@@U?$checked_deleter@UBucket@DestinationFormation@@@boost@@@detail@boost@@QAE@PAUBucket@DestinationFormation@@U?$checked_deleter@UBucket@DestinationFormation@@@2@@Z");
    todo("implement");
}

_inline boost::detail::sp_counted_base_impl<DestinationFormation::Row *,boost::checked_deleter<DestinationFormation::Row> >::sp_counted_base_impl<DestinationFormation::Row *,boost::checked_deleter<DestinationFormation::Row> >(DestinationFormation::Row *, boost::checked_deleter<DestinationFormation::Row>) // 0x6B74D5
{
    mangled_assert("??0?$sp_counted_base_impl@PAURow@DestinationFormation@@U?$checked_deleter@URow@DestinationFormation@@@boost@@@detail@boost@@QAE@PAURow@DestinationFormation@@U?$checked_deleter@URow@DestinationFormation@@@2@@Z");
    todo("implement");
}

_inline boost::detail::sp_counted_base_impl<DestinationFormation::Wall *,boost::checked_deleter<DestinationFormation::Wall> >::sp_counted_base_impl<DestinationFormation::Wall *,boost::checked_deleter<DestinationFormation::Wall> >(DestinationFormation::Wall *, boost::checked_deleter<DestinationFormation::Wall>) // 0x6B74F4
{
    mangled_assert("??0?$sp_counted_base_impl@PAUWall@DestinationFormation@@U?$checked_deleter@UWall@DestinationFormation@@@boost@@@detail@boost@@QAE@PAUWall@DestinationFormation@@U?$checked_deleter@UWall@DestinationFormation@@@2@@Z");
    todo("implement");
}

_inline boost::detail::sp_counted_base_impl<FXManager::Dynamics *,boost::checked_deleter<FXManager::Dynamics> >::sp_counted_base_impl<FXManager::Dynamics *,boost::checked_deleter<FXManager::Dynamics> >(FXManager::Dynamics *, boost::checked_deleter<FXManager::Dynamics>) // 0x6DBB64
{
    mangled_assert("??0?$sp_counted_base_impl@PAVDynamics@FXManager@@U?$checked_deleter@VDynamics@FXManager@@@boost@@@detail@boost@@QAE@PAVDynamics@FXManager@@U?$checked_deleter@VDynamics@FXManager@@@2@@Z");
    todo("implement");
}

_inline boost::detail::sp_counted_base_impl<FXManager::Type *,boost::checked_deleter<FXManager::Type> >::sp_counted_base_impl<FXManager::Type *,boost::checked_deleter<FXManager::Type> >(FXManager::Type *, boost::checked_deleter<FXManager::Type>) // 0x6DBB83
{
    mangled_assert("??0?$sp_counted_base_impl@PAVType@FXManager@@U?$checked_deleter@VType@FXManager@@@boost@@@detail@boost@@QAE@PAVType@FXManager@@U?$checked_deleter@VType@FXManager@@@2@@Z");
    todo("implement");
}

_inline void boost::detail::sp_counted_base_impl<BasicMesh *,boost::checked_deleter<BasicMesh> >::dispose() // 0x5E6C5E
{
    mangled_assert("?dispose@?$sp_counted_base_impl@PAVBasicMesh@@U?$checked_deleter@VBasicMesh@@@boost@@@detail@boost@@UAEXXZ");
    todo("implement");
}

_inline void boost::detail::sp_counted_base_impl<StarList *,boost::checked_deleter<StarList> >::dispose() // 0x5E6C6C
{
    mangled_assert("?dispose@?$sp_counted_base_impl@PAVStarList@@U?$checked_deleter@VStarList@@@boost@@@detail@boost@@UAEXXZ");
    todo("implement");
}

_inline void boost::detail::sp_counted_base_impl<BgLightAnim::Data *,boost::checked_deleter<BgLightAnim::Data> >::dispose() // 0x5E4BA2
{
    mangled_assert("?dispose@?$sp_counted_base_impl@PAVData@BgLightAnim@@U?$checked_deleter@VData@BgLightAnim@@@boost@@@detail@boost@@UAEXXZ");
    todo("implement");
}

_inline void boost::detail::sp_counted_base_impl<SobWithMeshStatic::Model *,boost::checked_deleter<SobWithMeshStatic::Model> >::dispose() // 0x482949
{
    mangled_assert("?dispose@?$sp_counted_base_impl@PAVModel@SobWithMeshStatic@@U?$checked_deleter@VModel@SobWithMeshStatic@@@boost@@@detail@boost@@UAEXXZ");
    todo("implement");
}

_inline void boost::detail::sp_counted_base_impl<SobStatic::Model *,boost::checked_deleter<SobStatic::Model> >::dispose() // 0x47E972
{
    mangled_assert("?dispose@?$sp_counted_base_impl@PAVModel@SobStatic@@U?$checked_deleter@VModel@SobStatic@@@boost@@@detail@boost@@UAEXXZ");
    todo("implement");
}

_inline void boost::detail::sp_counted_base_impl<SobIDShared *,boost::checked_deleter<SobIDShared> >::dispose() // 0x47A71F
{
    mangled_assert("?dispose@?$sp_counted_base_impl@PAVSobIDShared@@U?$checked_deleter@VSobIDShared@@@boost@@@detail@boost@@UAEXXZ");
    todo("implement");
}

_inline void boost::detail::sp_counted_base_impl<FrameOrders *,boost::checked_deleter<FrameOrders> >::dispose() // 0x463238
{
    mangled_assert("?dispose@?$sp_counted_base_impl@PAVFrameOrders@@U?$checked_deleter@VFrameOrders@@@boost@@@detail@boost@@UAEXXZ");
    todo("implement");
}

_inline void boost::detail::sp_counted_base_impl<UI::Graphic *,boost::checked_deleter<UI::Graphic> >::dispose() // 0x66D90D
{
    mangled_assert("?dispose@?$sp_counted_base_impl@PAVGraphic@UI@@U?$checked_deleter@VGraphic@UI@@@boost@@@detail@boost@@UAEXXZ");
    todo("implement");
}

_inline void boost::detail::sp_counted_base_impl<DestinationFormation::Bucket *,boost::checked_deleter<DestinationFormation::Bucket> >::dispose() // 0x6B89D4
{
    mangled_assert("?dispose@?$sp_counted_base_impl@PAUBucket@DestinationFormation@@U?$checked_deleter@UBucket@DestinationFormation@@@boost@@@detail@boost@@UAEXXZ");
    todo("implement");
}

_inline void boost::detail::sp_counted_base_impl<DestinationFormation::Row *,boost::checked_deleter<DestinationFormation::Row> >::dispose() // 0x6B89DD
{
    mangled_assert("?dispose@?$sp_counted_base_impl@PAURow@DestinationFormation@@U?$checked_deleter@URow@DestinationFormation@@@boost@@@detail@boost@@UAEXXZ");
    todo("implement");
}

_inline void boost::detail::sp_counted_base_impl<DestinationFormation::Wall *,boost::checked_deleter<DestinationFormation::Wall> >::dispose() // 0x6B89EC
{
    mangled_assert("?dispose@?$sp_counted_base_impl@PAUWall@DestinationFormation@@U?$checked_deleter@UWall@DestinationFormation@@@boost@@@detail@boost@@UAEXXZ");
    todo("implement");
}

_inline void boost::detail::sp_counted_base_impl<FXManager::Dynamics *,boost::checked_deleter<FXManager::Dynamics> >::dispose() // 0x6E0707
{
    mangled_assert("?dispose@?$sp_counted_base_impl@PAVDynamics@FXManager@@U?$checked_deleter@VDynamics@FXManager@@@boost@@@detail@boost@@UAEXXZ");
    todo("implement");
}

_inline void boost::detail::sp_counted_base_impl<FXManager::Type *,boost::checked_deleter<FXManager::Type> >::dispose() // 0x6E0715
{
    mangled_assert("?dispose@?$sp_counted_base_impl@PAVType@FXManager@@U?$checked_deleter@VType@FXManager@@@boost@@@detail@boost@@UAEXXZ");
    todo("implement");
}

_inline void *boost::detail::sp_counted_base_impl<BasicMesh *,boost::checked_deleter<BasicMesh> >::get_deleter(type_info const &) // 0x5E6CF2
{
    mangled_assert("?get_deleter@?$sp_counted_base_impl@PAVBasicMesh@@U?$checked_deleter@VBasicMesh@@@boost@@@detail@boost@@UAEPAXABVtype_info@@@Z");
    todo("implement");
}

_inline void *boost::detail::sp_counted_base_impl<StarList *,boost::checked_deleter<StarList> >::get_deleter(type_info const &) // 0x5E6D14
{
    mangled_assert("?get_deleter@?$sp_counted_base_impl@PAVStarList@@U?$checked_deleter@VStarList@@@boost@@@detail@boost@@UAEPAXABVtype_info@@@Z");
    todo("implement");
}

_inline void *boost::detail::sp_counted_base_impl<BgLightAnim::Data *,boost::checked_deleter<BgLightAnim::Data> >::get_deleter(type_info const &) // 0x5E4C7B
{
    mangled_assert("?get_deleter@?$sp_counted_base_impl@PAVData@BgLightAnim@@U?$checked_deleter@VData@BgLightAnim@@@boost@@@detail@boost@@UAEPAXABVtype_info@@@Z");
    todo("implement");
}

_inline void *boost::detail::sp_counted_base_impl<SobWithMeshStatic::Model *,boost::checked_deleter<SobWithMeshStatic::Model> >::get_deleter(type_info const &) // 0x4834C2
{
    mangled_assert("?get_deleter@?$sp_counted_base_impl@PAVModel@SobWithMeshStatic@@U?$checked_deleter@VModel@SobWithMeshStatic@@@boost@@@detail@boost@@UAEPAXABVtype_info@@@Z");
    todo("implement");
}

_inline void *boost::detail::sp_counted_base_impl<SobStatic::Model *,boost::checked_deleter<SobStatic::Model> >::get_deleter(type_info const &) // 0x47EDCA
{
    mangled_assert("?get_deleter@?$sp_counted_base_impl@PAVModel@SobStatic@@U?$checked_deleter@VModel@SobStatic@@@boost@@@detail@boost@@UAEPAXABVtype_info@@@Z");
    todo("implement");
}

_inline void *boost::detail::sp_counted_base_impl<SobIDShared *,boost::checked_deleter<SobIDShared> >::get_deleter(type_info const &) // 0x47AB3B
{
    mangled_assert("?get_deleter@?$sp_counted_base_impl@PAVSobIDShared@@U?$checked_deleter@VSobIDShared@@@boost@@@detail@boost@@UAEPAXABVtype_info@@@Z");
    todo("implement");
}

_inline void *boost::detail::sp_counted_base_impl<FrameOrders *,boost::checked_deleter<FrameOrders> >::get_deleter(type_info const &) // 0x463A1A
{
    mangled_assert("?get_deleter@?$sp_counted_base_impl@PAVFrameOrders@@U?$checked_deleter@VFrameOrders@@@boost@@@detail@boost@@UAEPAXABVtype_info@@@Z");
    todo("implement");
}

_inline void *boost::detail::sp_counted_base_impl<UI::Graphic *,boost::checked_deleter<UI::Graphic> >::get_deleter(type_info const &) // 0x66D9DF
{
    mangled_assert("?get_deleter@?$sp_counted_base_impl@PAVGraphic@UI@@U?$checked_deleter@VGraphic@UI@@@boost@@@detail@boost@@UAEPAXABVtype_info@@@Z");
    todo("implement");
}

_inline void *boost::detail::sp_counted_base_impl<DestinationFormation::Bucket *,boost::checked_deleter<DestinationFormation::Bucket> >::get_deleter(type_info const &) // 0x6B8AB3
{
    mangled_assert("?get_deleter@?$sp_counted_base_impl@PAUBucket@DestinationFormation@@U?$checked_deleter@UBucket@DestinationFormation@@@boost@@@detail@boost@@UAEPAXABVtype_info@@@Z");
    todo("implement");
}

_inline void *boost::detail::sp_counted_base_impl<DestinationFormation::Row *,boost::checked_deleter<DestinationFormation::Row> >::get_deleter(type_info const &) // 0x6B8AD5
{
    mangled_assert("?get_deleter@?$sp_counted_base_impl@PAURow@DestinationFormation@@U?$checked_deleter@URow@DestinationFormation@@@boost@@@detail@boost@@UAEPAXABVtype_info@@@Z");
    todo("implement");
}

_inline void *boost::detail::sp_counted_base_impl<DestinationFormation::Wall *,boost::checked_deleter<DestinationFormation::Wall> >::get_deleter(type_info const &) // 0x6B8AF7
{
    mangled_assert("?get_deleter@?$sp_counted_base_impl@PAUWall@DestinationFormation@@U?$checked_deleter@UWall@DestinationFormation@@@boost@@@detail@boost@@UAEPAXABVtype_info@@@Z");
    todo("implement");
}

_inline void *boost::detail::sp_counted_base_impl<FXManager::Dynamics *,boost::checked_deleter<FXManager::Dynamics> >::get_deleter(type_info const &) // 0x6E0C4B
{
    mangled_assert("?get_deleter@?$sp_counted_base_impl@PAVDynamics@FXManager@@U?$checked_deleter@VDynamics@FXManager@@@boost@@@detail@boost@@UAEPAXABVtype_info@@@Z");
    todo("implement");
}

_inline void *boost::detail::sp_counted_base_impl<FXManager::Type *,boost::checked_deleter<FXManager::Type> >::get_deleter(type_info const &) // 0x6E0C6D
{
    mangled_assert("?get_deleter@?$sp_counted_base_impl@PAVType@FXManager@@U?$checked_deleter@VType@FXManager@@@boost@@@detail@boost@@UAEPAXABVtype_info@@@Z");
    todo("implement");
}

_inline boost::detail::shared_count::shared_count() // 0x4609ED
{
    mangled_assert("??0shared_count@detail@boost@@QAE@XZ");
    todo("implement");
}

_inline boost::detail::shared_count::shared_count<BasicMesh *,boost::checked_deleter<BasicMesh> >(BasicMesh *, boost::checked_deleter<BasicMesh>) // 0x5E4CC0
{
    mangled_assert("??$?0PAVBasicMesh@@U?$checked_deleter@VBasicMesh@@@boost@@@shared_count@detail@boost@@QAE@PAVBasicMesh@@U?$checked_deleter@VBasicMesh@@@2@@Z");
    todo("implement");
}

_inline boost::detail::shared_count::shared_count<StarList *,boost::checked_deleter<StarList> >(StarList *, boost::checked_deleter<StarList>) // 0x5E4D31
{
    mangled_assert("??$?0PAVStarList@@U?$checked_deleter@VStarList@@@boost@@@shared_count@detail@boost@@QAE@PAVStarList@@U?$checked_deleter@VStarList@@@2@@Z");
    todo("implement");
}

_inline boost::detail::shared_count::shared_count<BgLightAnim::Data *,boost::checked_deleter<BgLightAnim::Data> >(BgLightAnim::Data *, boost::checked_deleter<BgLightAnim::Data>) // 0x5E473B
{
    mangled_assert("??$?0PAVData@BgLightAnim@@U?$checked_deleter@VData@BgLightAnim@@@boost@@@shared_count@detail@boost@@QAE@PAVData@BgLightAnim@@U?$checked_deleter@VData@BgLightAnim@@@2@@Z");
    todo("implement");
}

_inline boost::detail::shared_count::shared_count<SobWithMeshStatic::Model *,boost::checked_deleter<SobWithMeshStatic::Model> >(SobWithMeshStatic::Model *, boost::checked_deleter<SobWithMeshStatic::Model>) // 0x47F977
{
    mangled_assert("??$?0PAVModel@SobWithMeshStatic@@U?$checked_deleter@VModel@SobWithMeshStatic@@@boost@@@shared_count@detail@boost@@QAE@PAVModel@SobWithMeshStatic@@U?$checked_deleter@VModel@SobWithMeshStatic@@@2@@Z");
    todo("implement");
}

_inline boost::detail::shared_count::shared_count<SobStatic::Model *,boost::checked_deleter<SobStatic::Model> >(SobStatic::Model *, boost::checked_deleter<SobStatic::Model>) // 0x47AD7A
{
    mangled_assert("??$?0PAVModel@SobStatic@@U?$checked_deleter@VModel@SobStatic@@@boost@@@shared_count@detail@boost@@QAE@PAVModel@SobStatic@@U?$checked_deleter@VModel@SobStatic@@@2@@Z");
    todo("implement");
}

_inline boost::detail::shared_count::shared_count<SobIDShared *,boost::checked_deleter<SobIDShared> >(SobIDShared *, boost::checked_deleter<SobIDShared>) // 0x479892
{
    mangled_assert("??$?0PAVSobIDShared@@U?$checked_deleter@VSobIDShared@@@boost@@@shared_count@detail@boost@@QAE@PAVSobIDShared@@U?$checked_deleter@VSobIDShared@@@2@@Z");
    todo("implement");
}

_inline boost::detail::shared_count::shared_count<FrameOrders *,boost::checked_deleter<FrameOrders> >(FrameOrders *, boost::checked_deleter<FrameOrders>) // 0x45E668
{
    mangled_assert("??$?0PAVFrameOrders@@U?$checked_deleter@VFrameOrders@@@boost@@@shared_count@detail@boost@@QAE@PAVFrameOrders@@U?$checked_deleter@VFrameOrders@@@2@@Z");
    todo("implement");
}

_inline boost::detail::shared_count::shared_count<UI::Graphic *,boost::checked_deleter<UI::Graphic> >(UI::Graphic *, boost::checked_deleter<UI::Graphic>) // 0x6690A4
{
    mangled_assert("??$?0PAVGraphic@UI@@U?$checked_deleter@VGraphic@UI@@@boost@@@shared_count@detail@boost@@QAE@PAVGraphic@UI@@U?$checked_deleter@VGraphic@UI@@@2@@Z");
    todo("implement");
}

_inline boost::detail::shared_count::shared_count<DestinationFormation::Bucket *,boost::checked_deleter<DestinationFormation::Bucket> >(DestinationFormation::Bucket *, boost::checked_deleter<DestinationFormation::Bucket>) // 0x6B6184
{
    mangled_assert("??$?0PAUBucket@DestinationFormation@@U?$checked_deleter@UBucket@DestinationFormation@@@boost@@@shared_count@detail@boost@@QAE@PAUBucket@DestinationFormation@@U?$checked_deleter@UBucket@DestinationFormation@@@2@@Z");
    todo("implement");
}

_inline boost::detail::shared_count::shared_count<DestinationFormation::Row *,boost::checked_deleter<DestinationFormation::Row> >(DestinationFormation::Row *, boost::checked_deleter<DestinationFormation::Row>) // 0x6B61F0
{
    mangled_assert("??$?0PAURow@DestinationFormation@@U?$checked_deleter@URow@DestinationFormation@@@boost@@@shared_count@detail@boost@@QAE@PAURow@DestinationFormation@@U?$checked_deleter@URow@DestinationFormation@@@2@@Z");
    todo("implement");
}

_inline boost::detail::shared_count::shared_count<DestinationFormation::Wall *,boost::checked_deleter<DestinationFormation::Wall> >(DestinationFormation::Wall *, boost::checked_deleter<DestinationFormation::Wall>) // 0x6B6262
{
    mangled_assert("??$?0PAUWall@DestinationFormation@@U?$checked_deleter@UWall@DestinationFormation@@@boost@@@shared_count@detail@boost@@QAE@PAUWall@DestinationFormation@@U?$checked_deleter@UWall@DestinationFormation@@@2@@Z");
    todo("implement");
}

_inline boost::detail::shared_count::shared_count<FXManager::Dynamics *,boost::checked_deleter<FXManager::Dynamics> >(FXManager::Dynamics *, boost::checked_deleter<FXManager::Dynamics>) // 0x6D9284
{
    mangled_assert("??$?0PAVDynamics@FXManager@@U?$checked_deleter@VDynamics@FXManager@@@boost@@@shared_count@detail@boost@@QAE@PAVDynamics@FXManager@@U?$checked_deleter@VDynamics@FXManager@@@2@@Z");
    todo("implement");
}

_inline boost::detail::shared_count::shared_count<FXManager::Type *,boost::checked_deleter<FXManager::Type> >(FXManager::Type *, boost::checked_deleter<FXManager::Type>) // 0x6D92F5
{
    mangled_assert("??$?0PAVType@FXManager@@U?$checked_deleter@VType@FXManager@@@boost@@@shared_count@detail@boost@@QAE@PAVType@FXManager@@U?$checked_deleter@VType@FXManager@@@2@@Z");
    todo("implement");
}

_inline boost::detail::shared_count::~shared_count() // 0x451C0F
{
    mangled_assert("??1shared_count@detail@boost@@QAE@XZ");
    todo("implement");
}

_inline boost::detail::shared_count::shared_count(boost::detail::shared_count const &) // 0x4609D3
{
    mangled_assert("??0shared_count@detail@boost@@QAE@ABV012@@Z");
    todo("implement");
}

_inline boost::detail::shared_count &boost::detail::shared_count::operator=(boost::detail::shared_count const &) // 0x460D2B
{
    mangled_assert("??4shared_count@detail@boost@@QAEAAV012@ABV012@@Z");
    todo("implement");
}

_inline void boost::detail::shared_count::swap(boost::detail::shared_count &) // 0x464605
{
    mangled_assert("?swap@shared_count@detail@boost@@QAEXAAV123@@Z");
    todo("implement");
}

_inline long boost::detail::shared_count::use_count() const // 0x6810E6
{
    mangled_assert("?use_count@shared_count@detail@boost@@QBEJXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __SHARED_COUNT_H__
/* combined */
#ifndef __SHARED_COUNT_H__
#define __SHARED_COUNT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::bad_weak_ptr :
    public std::exception
{
public:
    virtual char const *what() const override;
    bad_weak_ptr(boost::bad_weak_ptr const &); /* compiler_generated() */
    bad_weak_ptr(); /* compiler_generated() */
    virtual ~bad_weak_ptr() override; /* compiler_generated() */
    boost::bad_weak_ptr &operator=(boost::bad_weak_ptr const &); /* compiler_generated() */
};
static_assert(sizeof(boost::bad_weak_ptr) == 12, "Invalid boost::bad_weak_ptr size");

class boost::detail::sp_counted_base
{
public:
    typedef boost::detail::lightweight_mutex mutex_type;
private:
    sp_counted_base(boost::detail::sp_counted_base const &);
public:
    sp_counted_base();
    virtual ~sp_counted_base();
    virtual void dispose() = 0;
    virtual void destruct();
    virtual void *get_deleter(type_info const &) = 0;
    void add_ref();
    void release();
    void weak_add_ref();
    void weak_release();
    long use_count() const;
private:
    boost::detail::sp_counted_base &operator=(boost::detail::sp_counted_base const &);
    long use_count_; // 0x4
    long weak_count_; // 0x8
    boost::detail::lightweight_mutex mtx_; // 0xC
};
static_assert(sizeof(boost::detail::sp_counted_base) == 16, "Invalid boost::detail::sp_counted_base size");

class boost::detail::shared_count
{
private:
    boost::detail::sp_counted_base *pi_; // 0x0
public:
    shared_count(boost::detail::weak_count const &);
    shared_count(boost::detail::shared_count const &);
    shared_count();
    ~shared_count();
    boost::detail::shared_count &operator=(boost::detail::shared_count const &);
    void swap(boost::detail::shared_count &);
    long use_count() const;
    bool unique() const;
    void *get_deleter(type_info const &) const;
};
static_assert(sizeof(boost::detail::shared_count) == 4, "Invalid boost::detail::shared_count size");

class boost::detail::weak_count
{
private:
    boost::detail::sp_counted_base *pi_; // 0x0
public:
    weak_count(boost::detail::weak_count const &);
    weak_count(boost::detail::shared_count const &);
    weak_count();
    ~weak_count();
    boost::detail::weak_count &operator=(boost::detail::weak_count const &);
    boost::detail::weak_count &operator=(boost::detail::shared_count const &);
    void swap(boost::detail::weak_count &);
    long use_count() const;
};
static_assert(sizeof(boost::detail::weak_count) == 4, "Invalid boost::detail::weak_count size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SHARED_COUNT_H__
/* combined */
#ifndef __SHARED_COUNT_H__
#define __SHARED_COUNT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::bad_weak_ptr :
    public std::exception
{
public:
    virtual _inline char const *what() const override;
    _inline bad_weak_ptr(boost::bad_weak_ptr const &); /* compiler_generated() */
    _inline bad_weak_ptr(); /* compiler_generated() */
    virtual _inline ~bad_weak_ptr() override; /* compiler_generated() */
    boost::bad_weak_ptr &operator=(boost::bad_weak_ptr const &); /* compiler_generated() */
};
static_assert(sizeof(boost::bad_weak_ptr) == 12, "Invalid boost::bad_weak_ptr size");

class boost::detail::sp_counted_base
{
public:
    typedef boost::detail::lightweight_mutex mutex_type;
private:
    sp_counted_base(boost::detail::sp_counted_base const &);
public:
    _inline sp_counted_base();
    virtual _inline ~sp_counted_base();
    virtual void dispose() = 0;
    virtual _inline void destruct();
    virtual void *get_deleter(type_info const &) = 0;
    _inline void add_ref();
    _inline void release();
    void weak_add_ref();
    _inline void weak_release();
    long use_count() const;
private:
    boost::detail::sp_counted_base &operator=(boost::detail::sp_counted_base const &);
    long use_count_; // 0x4
    long weak_count_; // 0x8
    boost::detail::lightweight_mutex mtx_; // 0xC
};
static_assert(sizeof(boost::detail::sp_counted_base) == 16, "Invalid boost::detail::sp_counted_base size");

class boost::detail::sp_counted_base_impl<LocalizerImp::Resource *,boost::checked_deleter<LocalizerImp::Resource> > :
    public boost::detail::sp_counted_base
{
private:
    LocalizerImp::Resource *ptr; // 0x10
    boost::checked_deleter<LocalizerImp::Resource> del; // 0x14
public:
    _inline sp_counted_base_impl<LocalizerImp::Resource *,boost::checked_deleter<LocalizerImp::Resource> >(LocalizerImp::Resource *, boost::checked_deleter<LocalizerImp::Resource>);
private:
    sp_counted_base_impl<LocalizerImp::Resource *,boost::checked_deleter<LocalizerImp::Resource> >(boost::detail::sp_counted_base_impl<LocalizerImp::Resource *,boost::checked_deleter<LocalizerImp::Resource> > const &);
    boost::detail::sp_counted_base_impl<LocalizerImp::Resource *,boost::checked_deleter<LocalizerImp::Resource> > &operator=(boost::detail::sp_counted_base_impl<LocalizerImp::Resource *,boost::checked_deleter<LocalizerImp::Resource> > const &);
    typedef boost::detail::sp_counted_base_impl<LocalizerImp::Resource *,boost::checked_deleter<LocalizerImp::Resource> > this_type;
public:
    virtual _inline void dispose() override;
    virtual _inline void *get_deleter(type_info const &) override;
    virtual _inline ~sp_counted_base_impl<LocalizerImp::Resource *,boost::checked_deleter<LocalizerImp::Resource> >() override; /* compiler_generated() */
};
static_assert(sizeof(boost::detail::sp_counted_base_impl<LocalizerImp::Resource *,boost::checked_deleter<LocalizerImp::Resource> >) == 24, "Invalid boost::detail::sp_counted_base_impl<LocalizerImp::Resource *,boost::checked_deleter<LocalizerImp::Resource> > size");

class boost::detail::shared_count
{
private:
    boost::detail::sp_counted_base *pi_; // 0x0
public:
    shared_count(boost::detail::weak_count const &);
    _inline shared_count(boost::detail::shared_count const &);
    _inline shared_count();
    _inline ~shared_count();
    _inline boost::detail::shared_count &operator=(boost::detail::shared_count const &);
    _inline void swap(boost::detail::shared_count &);
    long use_count() const;
    bool unique() const;
    void *get_deleter(type_info const &) const;
};
static_assert(sizeof(boost::detail::shared_count) == 4, "Invalid boost::detail::shared_count size");

class boost::detail::weak_count
{
private:
    boost::detail::sp_counted_base *pi_; // 0x0
public:
    weak_count(boost::detail::weak_count const &);
    weak_count(boost::detail::shared_count const &);
    weak_count();
    ~weak_count();
    boost::detail::weak_count &operator=(boost::detail::weak_count const &);
    boost::detail::weak_count &operator=(boost::detail::shared_count const &);
    void swap(boost::detail::weak_count &);
    long use_count() const;
};
static_assert(sizeof(boost::detail::weak_count) == 4, "Invalid boost::detail::weak_count size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline char const *boost::bad_weak_ptr::what() const // 0x10004A0B
{
    mangled_assert("?what@bad_weak_ptr@boost@@UBEPBDXZ");
    todo("implement");
}

_inline boost::detail::sp_counted_base::sp_counted_base() // 0x1000349F
{
    mangled_assert("??0sp_counted_base@detail@boost@@QAE@XZ");
    todo("implement");
}

_inline boost::detail::sp_counted_base::~sp_counted_base() // 0x1000353E
{
    mangled_assert("??1sp_counted_base@detail@boost@@UAE@XZ");
    todo("implement");
}

_inline void boost::detail::sp_counted_base::destruct() // 0x10004744
{
    mangled_assert("?destruct@sp_counted_base@detail@boost@@UAEXXZ");
    todo("implement");
}

_inline void boost::detail::sp_counted_base::add_ref() // 0x100043C4
{
    mangled_assert("?add_ref@sp_counted_base@detail@boost@@QAEXXZ");
    todo("implement");
}

_inline void boost::detail::sp_counted_base::release() // 0x1000493D
{
    mangled_assert("?release@sp_counted_base@detail@boost@@QAEXXZ");
    todo("implement");
}

_inline void boost::detail::sp_counted_base::weak_release() // 0x100049D7
{
    mangled_assert("?weak_release@sp_counted_base@detail@boost@@QAEXXZ");
    todo("implement");
}

_inline boost::detail::sp_counted_base_impl<LocalizerImp::Resource *,boost::checked_deleter<LocalizerImp::Resource> >::sp_counted_base_impl<LocalizerImp::Resource *,boost::checked_deleter<LocalizerImp::Resource> >(LocalizerImp::Resource *, boost::checked_deleter<LocalizerImp::Resource>) // 0x1000338A
{
    mangled_assert("??0?$sp_counted_base_impl@PAVResource@LocalizerImp@@U?$checked_deleter@VResource@LocalizerImp@@@boost@@@detail@boost@@QAE@PAVResource@LocalizerImp@@U?$checked_deleter@VResource@LocalizerImp@@@2@@Z");
    todo("implement");
}

_inline void boost::detail::sp_counted_base_impl<LocalizerImp::Resource *,boost::checked_deleter<LocalizerImp::Resource> >::dispose() // 0x1000474F
{
    mangled_assert("?dispose@?$sp_counted_base_impl@PAVResource@LocalizerImp@@U?$checked_deleter@VResource@LocalizerImp@@@boost@@@detail@boost@@UAEXXZ");
    todo("implement");
}

_inline void *boost::detail::sp_counted_base_impl<LocalizerImp::Resource *,boost::checked_deleter<LocalizerImp::Resource> >::get_deleter(type_info const &) // 0x100047DD
{
    mangled_assert("?get_deleter@?$sp_counted_base_impl@PAVResource@LocalizerImp@@U?$checked_deleter@VResource@LocalizerImp@@@boost@@@detail@boost@@UAEPAXABVtype_info@@@Z");
    todo("implement");
}

_inline boost::detail::shared_count::shared_count() // 0x10003499
{
    mangled_assert("??0shared_count@detail@boost@@QAE@XZ");
    todo("implement");
}

_inline boost::detail::shared_count::shared_count<LocalizerImp::Resource *,boost::checked_deleter<LocalizerImp::Resource> >(LocalizerImp::Resource *, boost::checked_deleter<LocalizerImp::Resource>) // 0x10002C2F
{
    mangled_assert("??$?0PAVResource@LocalizerImp@@U?$checked_deleter@VResource@LocalizerImp@@@boost@@@shared_count@detail@boost@@QAE@PAVResource@LocalizerImp@@U?$checked_deleter@VResource@LocalizerImp@@@2@@Z");
    todo("implement");
}

_inline boost::detail::shared_count::~shared_count() // 0x10003533
{
    mangled_assert("??1shared_count@detail@boost@@QAE@XZ");
    todo("implement");
}

_inline boost::detail::shared_count::shared_count(boost::detail::shared_count const &) // 0x1000347F
{
    mangled_assert("??0shared_count@detail@boost@@QAE@ABV012@@Z");
    todo("implement");
}

_inline boost::detail::shared_count &boost::detail::shared_count::operator=(boost::detail::shared_count const &) // 0x1000357F
{
    mangled_assert("??4shared_count@detail@boost@@QAEAAV012@ABV012@@Z");
    todo("implement");
}

_inline void boost::detail::shared_count::swap(boost::detail::shared_count &) // 0x100049C6
{
    mangled_assert("?swap@shared_count@detail@boost@@QAEXAAV123@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __SHARED_COUNT_H__
/* combined */
#ifndef __SHARED_COUNT_H__
#define __SHARED_COUNT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::bad_weak_ptr :
    public std::exception
{
public:
    virtual char const *what() const override;
    bad_weak_ptr(boost::bad_weak_ptr const &); /* compiler_generated() */
    bad_weak_ptr(); /* compiler_generated() */
    virtual ~bad_weak_ptr() override; /* compiler_generated() */
    boost::bad_weak_ptr &operator=(boost::bad_weak_ptr const &); /* compiler_generated() */
};
static_assert(sizeof(boost::bad_weak_ptr) == 12, "Invalid boost::bad_weak_ptr size");

class boost::detail::sp_counted_base
{
public:
    typedef boost::detail::lightweight_mutex mutex_type;
private:
    sp_counted_base(boost::detail::sp_counted_base const &);
public:
    sp_counted_base();
    virtual ~sp_counted_base();
    virtual void dispose() = 0;
    virtual void destruct();
    virtual void *get_deleter(type_info const &) = 0;
    void add_ref();
    void release();
    void weak_add_ref();
    void weak_release();
    long use_count() const;
private:
    boost::detail::sp_counted_base &operator=(boost::detail::sp_counted_base const &);
    long use_count_; // 0x4
    long weak_count_; // 0x8
    boost::detail::lightweight_mutex mtx_; // 0xC
};
static_assert(sizeof(boost::detail::sp_counted_base) == 16, "Invalid boost::detail::sp_counted_base size");

class boost::detail::shared_count
{
private:
    boost::detail::sp_counted_base *pi_; // 0x0
public:
    shared_count(boost::detail::weak_count const &);
    shared_count(boost::detail::shared_count const &);
    shared_count();
    ~shared_count();
    boost::detail::shared_count &operator=(boost::detail::shared_count const &);
    void swap(boost::detail::shared_count &);
    long use_count() const;
    bool unique() const;
    void *get_deleter(type_info const &) const;
};
static_assert(sizeof(boost::detail::shared_count) == 4, "Invalid boost::detail::shared_count size");

class boost::detail::weak_count
{
private:
    boost::detail::sp_counted_base *pi_; // 0x0
public:
    weak_count(boost::detail::weak_count const &);
    weak_count(boost::detail::shared_count const &);
    weak_count();
    ~weak_count();
    boost::detail::weak_count &operator=(boost::detail::weak_count const &);
    boost::detail::weak_count &operator=(boost::detail::shared_count const &);
    void swap(boost::detail::weak_count &);
    long use_count() const;
};
static_assert(sizeof(boost::detail::weak_count) == 4, "Invalid boost::detail::weak_count size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SHARED_COUNT_H__
/* combined */
#ifndef __SHARED_COUNT_H__
#define __SHARED_COUNT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::bad_weak_ptr :
    public std::exception
{
public:
    virtual char const *what() const override;
    bad_weak_ptr(boost::bad_weak_ptr const &); /* compiler_generated() */
    bad_weak_ptr(); /* compiler_generated() */
    virtual ~bad_weak_ptr() override; /* compiler_generated() */
    boost::bad_weak_ptr &operator=(boost::bad_weak_ptr const &); /* compiler_generated() */
};
static_assert(sizeof(boost::bad_weak_ptr) == 12, "Invalid boost::bad_weak_ptr size");

class boost::detail::sp_counted_base
{
public:
    typedef boost::detail::lightweight_mutex mutex_type;
private:
    sp_counted_base(boost::detail::sp_counted_base const &);
public:
    sp_counted_base();
    virtual ~sp_counted_base();
    virtual void dispose() = 0;
    virtual void destruct();
    virtual void *get_deleter(type_info const &) = 0;
    void add_ref();
    void release();
    void weak_add_ref();
    void weak_release();
    long use_count() const;
private:
    boost::detail::sp_counted_base &operator=(boost::detail::sp_counted_base const &);
    long use_count_; // 0x4
    long weak_count_; // 0x8
    boost::detail::lightweight_mutex mtx_; // 0xC
};
static_assert(sizeof(boost::detail::sp_counted_base) == 16, "Invalid boost::detail::sp_counted_base size");

class boost::detail::shared_count
{
private:
    boost::detail::sp_counted_base *pi_; // 0x0
public:
    shared_count(boost::detail::weak_count const &);
    shared_count(boost::detail::shared_count const &);
    shared_count();
    ~shared_count();
    boost::detail::shared_count &operator=(boost::detail::shared_count const &);
    void swap(boost::detail::shared_count &);
    long use_count() const;
    bool unique() const;
    void *get_deleter(type_info const &) const;
};
static_assert(sizeof(boost::detail::shared_count) == 4, "Invalid boost::detail::shared_count size");

class boost::detail::weak_count
{
private:
    boost::detail::sp_counted_base *pi_; // 0x0
public:
    weak_count(boost::detail::weak_count const &);
    weak_count(boost::detail::shared_count const &);
    weak_count();
    ~weak_count();
    boost::detail::weak_count &operator=(boost::detail::weak_count const &);
    boost::detail::weak_count &operator=(boost::detail::shared_count const &);
    void swap(boost::detail::weak_count &);
    long use_count() const;
};
static_assert(sizeof(boost::detail::weak_count) == 4, "Invalid boost::detail::weak_count size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SHARED_COUNT_H__
/* combined */
#ifndef __SHARED_COUNT_H__
#define __SHARED_COUNT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::bad_weak_ptr :
    public std::exception
{
public:
    virtual _inline char const *what() const override;
    _inline bad_weak_ptr(boost::bad_weak_ptr const &); /* compiler_generated() */
    _inline bad_weak_ptr(); /* compiler_generated() */
    virtual _inline ~bad_weak_ptr() override; /* compiler_generated() */
    boost::bad_weak_ptr &operator=(boost::bad_weak_ptr const &); /* compiler_generated() */
};
static_assert(sizeof(boost::bad_weak_ptr) == 12, "Invalid boost::bad_weak_ptr size");

class boost::detail::sp_counted_base
{
public:
    typedef boost::detail::lightweight_mutex mutex_type;
private:
    sp_counted_base(boost::detail::sp_counted_base const &);
public:
    _inline sp_counted_base();
    virtual _inline ~sp_counted_base();
    virtual void dispose() = 0;
    virtual _inline void destruct();
    virtual void *get_deleter(type_info const &) = 0;
    _inline void add_ref();
    _inline void release();
    void weak_add_ref();
    _inline void weak_release();
    long use_count() const;
private:
    boost::detail::sp_counted_base &operator=(boost::detail::sp_counted_base const &);
    long use_count_; // 0x4
    long weak_count_; // 0x8
    boost::detail::lightweight_mutex mtx_; // 0xC
};
static_assert(sizeof(boost::detail::sp_counted_base) == 16, "Invalid boost::detail::sp_counted_base size");

class boost::detail::sp_counted_base_impl<StateCommandBlock *,boost::checked_deleter<StateCommandBlock> > :
    public boost::detail::sp_counted_base
{
private:
    StateCommandBlock *ptr; // 0x10
    boost::checked_deleter<StateCommandBlock> del; // 0x14
public:
    _inline sp_counted_base_impl<StateCommandBlock *,boost::checked_deleter<StateCommandBlock> >(StateCommandBlock *, boost::checked_deleter<StateCommandBlock>);
private:
    sp_counted_base_impl<StateCommandBlock *,boost::checked_deleter<StateCommandBlock> >(boost::detail::sp_counted_base_impl<StateCommandBlock *,boost::checked_deleter<StateCommandBlock> > const &);
    boost::detail::sp_counted_base_impl<StateCommandBlock *,boost::checked_deleter<StateCommandBlock> > &operator=(boost::detail::sp_counted_base_impl<StateCommandBlock *,boost::checked_deleter<StateCommandBlock> > const &);
    typedef boost::detail::sp_counted_base_impl<StateCommandBlock *,boost::checked_deleter<StateCommandBlock> > this_type;
public:
    virtual _inline void dispose() override;
    virtual _inline void *get_deleter(type_info const &) override;
    virtual _inline ~sp_counted_base_impl<StateCommandBlock *,boost::checked_deleter<StateCommandBlock> >() override; /* compiler_generated() */
};
static_assert(sizeof(boost::detail::sp_counted_base_impl<StateCommandBlock *,boost::checked_deleter<StateCommandBlock> >) == 24, "Invalid boost::detail::sp_counted_base_impl<StateCommandBlock *,boost::checked_deleter<StateCommandBlock> > size");

class boost::detail::shared_count
{
private:
    boost::detail::sp_counted_base *pi_; // 0x0
public:
    shared_count(boost::detail::weak_count const &);
    _inline shared_count(boost::detail::shared_count const &);
    _inline shared_count();
    _inline ~shared_count();
    _inline boost::detail::shared_count &operator=(boost::detail::shared_count const &);
    _inline void swap(boost::detail::shared_count &);
    long use_count() const;
    bool unique() const;
    void *get_deleter(type_info const &) const;
};
static_assert(sizeof(boost::detail::shared_count) == 4, "Invalid boost::detail::shared_count size");

class boost::detail::weak_count
{
private:
    boost::detail::sp_counted_base *pi_; // 0x0
public:
    weak_count(boost::detail::weak_count const &);
    weak_count(boost::detail::shared_count const &);
    weak_count();
    ~weak_count();
    boost::detail::weak_count &operator=(boost::detail::weak_count const &);
    boost::detail::weak_count &operator=(boost::detail::shared_count const &);
    void swap(boost::detail::weak_count &);
    long use_count() const;
};
static_assert(sizeof(boost::detail::weak_count) == 4, "Invalid boost::detail::weak_count size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline char const *boost::bad_weak_ptr::what() const // 0x1001BEC0
{
    mangled_assert("?what@bad_weak_ptr@boost@@UBEPBDXZ");
    todo("implement");
}

_inline boost::detail::sp_counted_base::sp_counted_base() // 0x100B5900
{
    mangled_assert("??0sp_counted_base@detail@boost@@QAE@XZ");
    todo("implement");
}

_inline boost::detail::sp_counted_base::~sp_counted_base() // 0x100B5CF0
{
    mangled_assert("??1sp_counted_base@detail@boost@@UAE@XZ");
    todo("implement");
}

_inline void boost::detail::sp_counted_base::destruct() // 0x100B7F80
{
    mangled_assert("?destruct@sp_counted_base@detail@boost@@UAEXXZ");
    todo("implement");
}

_inline void boost::detail::sp_counted_base::add_ref() // 0x10015A10
{
    mangled_assert("?add_ref@sp_counted_base@detail@boost@@QAEXXZ");
    todo("implement");
}

_inline void boost::detail::sp_counted_base::release() // 0x1001AAF0
{
    mangled_assert("?release@sp_counted_base@detail@boost@@QAEXXZ");
    todo("implement");
}

_inline void boost::detail::sp_counted_base::weak_release() // 0x1001BE70
{
    mangled_assert("?weak_release@sp_counted_base@detail@boost@@QAEXXZ");
    todo("implement");
}

_inline boost::detail::sp_counted_base_impl<StateCommandBlock *,boost::checked_deleter<StateCommandBlock> >::sp_counted_base_impl<StateCommandBlock *,boost::checked_deleter<StateCommandBlock> >(StateCommandBlock *, boost::checked_deleter<StateCommandBlock>) // 0x100B56C0
{
    mangled_assert("??0?$sp_counted_base_impl@PAVStateCommandBlock@@U?$checked_deleter@VStateCommandBlock@@@boost@@@detail@boost@@QAE@PAVStateCommandBlock@@U?$checked_deleter@VStateCommandBlock@@@2@@Z");
    todo("implement");
}

_inline void boost::detail::sp_counted_base_impl<StateCommandBlock *,boost::checked_deleter<StateCommandBlock> >::dispose() // 0x100B7F90
{
    mangled_assert("?dispose@?$sp_counted_base_impl@PAVStateCommandBlock@@U?$checked_deleter@VStateCommandBlock@@@boost@@@detail@boost@@UAEXXZ");
    todo("implement");
}

_inline void *boost::detail::sp_counted_base_impl<StateCommandBlock *,boost::checked_deleter<StateCommandBlock> >::get_deleter(type_info const &) // 0x100B8690
{
    mangled_assert("?get_deleter@?$sp_counted_base_impl@PAVStateCommandBlock@@U?$checked_deleter@VStateCommandBlock@@@boost@@@detail@boost@@UAEPAXABVtype_info@@@Z");
    todo("implement");
}

_inline boost::detail::shared_count::shared_count() // 0x100B20F0
{
    mangled_assert("??0shared_count@detail@boost@@QAE@XZ");
    todo("implement");
}

_inline boost::detail::shared_count::shared_count<StateCommandBlock *,boost::checked_deleter<StateCommandBlock> >(StateCommandBlock *, boost::checked_deleter<StateCommandBlock>) // 0x100B4370
{
    mangled_assert("??$?0PAVStateCommandBlock@@U?$checked_deleter@VStateCommandBlock@@@boost@@@shared_count@detail@boost@@QAE@PAVStateCommandBlock@@U?$checked_deleter@VStateCommandBlock@@@2@@Z");
    todo("implement");
}

_inline boost::detail::shared_count::~shared_count() // 0x1000E5A0
{
    mangled_assert("??1shared_count@detail@boost@@QAE@XZ");
    todo("implement");
}

_inline boost::detail::shared_count::shared_count(boost::detail::shared_count const &) // 0x1000D870
{
    mangled_assert("??0shared_count@detail@boost@@QAE@ABV012@@Z");
    todo("implement");
}

_inline boost::detail::shared_count &boost::detail::shared_count::operator=(boost::detail::shared_count const &) // 0x10010D20
{
    mangled_assert("??4shared_count@detail@boost@@QAEAAV012@ABV012@@Z");
    todo("implement");
}

_inline void boost::detail::shared_count::swap(boost::detail::shared_count &) // 0x100B4350
{
    mangled_assert("?swap@shared_count@detail@boost@@QAEXAAV123@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __SHARED_COUNT_H__
/* combined */
#ifndef __SHARED_COUNT_H__
#define __SHARED_COUNT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::bad_weak_ptr :
    public std::exception
{
public:
    virtual char const *what() const override;
    bad_weak_ptr(boost::bad_weak_ptr const &); /* compiler_generated() */
    bad_weak_ptr(); /* compiler_generated() */
    virtual ~bad_weak_ptr() override; /* compiler_generated() */
    boost::bad_weak_ptr &operator=(boost::bad_weak_ptr const &); /* compiler_generated() */
};
static_assert(sizeof(boost::bad_weak_ptr) == 12, "Invalid boost::bad_weak_ptr size");

class boost::detail::sp_counted_base
{
public:
    typedef boost::detail::lightweight_mutex mutex_type;
private:
    sp_counted_base(boost::detail::sp_counted_base const &);
public:
    sp_counted_base();
    virtual ~sp_counted_base();
    virtual void dispose() = 0;
    virtual void destruct();
    virtual void *get_deleter(type_info const &) = 0;
    void add_ref();
    void release();
    void weak_add_ref();
    void weak_release();
    long use_count() const;
private:
    boost::detail::sp_counted_base &operator=(boost::detail::sp_counted_base const &);
    long use_count_; // 0x4
    long weak_count_; // 0x8
    boost::detail::lightweight_mutex mtx_; // 0xC
};
static_assert(sizeof(boost::detail::sp_counted_base) == 16, "Invalid boost::detail::sp_counted_base size");

class boost::detail::shared_count
{
private:
    boost::detail::sp_counted_base *pi_; // 0x0
public:
    shared_count(boost::detail::weak_count const &);
    shared_count(boost::detail::shared_count const &);
    shared_count();
    ~shared_count();
    boost::detail::shared_count &operator=(boost::detail::shared_count const &);
    void swap(boost::detail::shared_count &);
    long use_count() const;
    bool unique() const;
    void *get_deleter(type_info const &) const;
};
static_assert(sizeof(boost::detail::shared_count) == 4, "Invalid boost::detail::shared_count size");

class boost::detail::weak_count
{
private:
    boost::detail::sp_counted_base *pi_; // 0x0
public:
    weak_count(boost::detail::weak_count const &);
    weak_count(boost::detail::shared_count const &);
    weak_count();
    ~weak_count();
    boost::detail::weak_count &operator=(boost::detail::weak_count const &);
    boost::detail::weak_count &operator=(boost::detail::shared_count const &);
    void swap(boost::detail::weak_count &);
    long use_count() const;
};
static_assert(sizeof(boost::detail::weak_count) == 4, "Invalid boost::detail::weak_count size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SHARED_COUNT_H__
/* combined */
#ifndef __SHARED_COUNT_H__
#define __SHARED_COUNT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::bad_weak_ptr :
    public std::exception
{
public:
    virtual char const *what() const override;
    bad_weak_ptr(boost::bad_weak_ptr const &); /* compiler_generated() */
    bad_weak_ptr(); /* compiler_generated() */
    virtual ~bad_weak_ptr() override; /* compiler_generated() */
    boost::bad_weak_ptr &operator=(boost::bad_weak_ptr const &); /* compiler_generated() */
};
static_assert(sizeof(boost::bad_weak_ptr) == 12, "Invalid boost::bad_weak_ptr size");

class boost::detail::sp_counted_base
{
public:
    typedef boost::detail::lightweight_mutex mutex_type;
private:
    sp_counted_base(boost::detail::sp_counted_base const &);
public:
    sp_counted_base();
    virtual ~sp_counted_base();
    virtual void dispose() = 0;
    virtual void destruct();
    virtual void *get_deleter(type_info const &) = 0;
    void add_ref();
    void release();
    void weak_add_ref();
    void weak_release();
    long use_count() const;
private:
    boost::detail::sp_counted_base &operator=(boost::detail::sp_counted_base const &);
    long use_count_; // 0x4
    long weak_count_; // 0x8
    boost::detail::lightweight_mutex mtx_; // 0xC
};
static_assert(sizeof(boost::detail::sp_counted_base) == 16, "Invalid boost::detail::sp_counted_base size");

class boost::detail::shared_count
{
private:
    boost::detail::sp_counted_base *pi_; // 0x0
public:
    shared_count(boost::detail::weak_count const &);
    shared_count(boost::detail::shared_count const &);
    shared_count();
    ~shared_count();
    boost::detail::shared_count &operator=(boost::detail::shared_count const &);
    void swap(boost::detail::shared_count &);
    long use_count() const;
    bool unique() const;
    void *get_deleter(type_info const &) const;
};
static_assert(sizeof(boost::detail::shared_count) == 4, "Invalid boost::detail::shared_count size");

class boost::detail::weak_count
{
private:
    boost::detail::sp_counted_base *pi_; // 0x0
public:
    weak_count(boost::detail::weak_count const &);
    weak_count(boost::detail::shared_count const &);
    weak_count();
    ~weak_count();
    boost::detail::weak_count &operator=(boost::detail::weak_count const &);
    boost::detail::weak_count &operator=(boost::detail::shared_count const &);
    void swap(boost::detail::weak_count &);
    long use_count() const;
};
static_assert(sizeof(boost::detail::weak_count) == 4, "Invalid boost::detail::weak_count size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SHARED_COUNT_H__
/* combined */
#ifndef __SHARED_COUNT_H__
#define __SHARED_COUNT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::bad_weak_ptr :
    public std::exception
{
public:
    virtual char const *what() const override;
    bad_weak_ptr(boost::bad_weak_ptr const &); /* compiler_generated() */
    bad_weak_ptr(); /* compiler_generated() */
    virtual ~bad_weak_ptr() override; /* compiler_generated() */
    boost::bad_weak_ptr &operator=(boost::bad_weak_ptr const &); /* compiler_generated() */
};
static_assert(sizeof(boost::bad_weak_ptr) == 12, "Invalid boost::bad_weak_ptr size");

class boost::detail::sp_counted_base
{
public:
    typedef boost::detail::lightweight_mutex mutex_type;
private:
    sp_counted_base(boost::detail::sp_counted_base const &);
public:
    sp_counted_base();
    virtual ~sp_counted_base();
    virtual void dispose() = 0;
    virtual void destruct();
    virtual void *get_deleter(type_info const &) = 0;
    void add_ref();
    void release();
    void weak_add_ref();
    void weak_release();
    long use_count() const;
private:
    boost::detail::sp_counted_base &operator=(boost::detail::sp_counted_base const &);
    long use_count_; // 0x4
    long weak_count_; // 0x8
    boost::detail::lightweight_mutex mtx_; // 0xC
};
static_assert(sizeof(boost::detail::sp_counted_base) == 16, "Invalid boost::detail::sp_counted_base size");

class boost::detail::shared_count
{
private:
    boost::detail::sp_counted_base *pi_; // 0x0
public:
    shared_count(boost::detail::weak_count const &);
    shared_count(boost::detail::shared_count const &);
    shared_count();
    ~shared_count();
    boost::detail::shared_count &operator=(boost::detail::shared_count const &);
    void swap(boost::detail::shared_count &);
    long use_count() const;
    bool unique() const;
    void *get_deleter(type_info const &) const;
};
static_assert(sizeof(boost::detail::shared_count) == 4, "Invalid boost::detail::shared_count size");

class boost::detail::weak_count
{
private:
    boost::detail::sp_counted_base *pi_; // 0x0
public:
    weak_count(boost::detail::weak_count const &);
    weak_count(boost::detail::shared_count const &);
    weak_count();
    ~weak_count();
    boost::detail::weak_count &operator=(boost::detail::weak_count const &);
    boost::detail::weak_count &operator=(boost::detail::shared_count const &);
    void swap(boost::detail::weak_count &);
    long use_count() const;
};
static_assert(sizeof(boost::detail::weak_count) == 4, "Invalid boost::detail::weak_count size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SHARED_COUNT_H__
/* combined */
#ifndef __SHARED_COUNT_H__
#define __SHARED_COUNT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::bad_weak_ptr :
    public std::exception
{
public:
    virtual char const *what() const override;
    bad_weak_ptr(boost::bad_weak_ptr const &); /* compiler_generated() */
    bad_weak_ptr(); /* compiler_generated() */
    virtual ~bad_weak_ptr() override; /* compiler_generated() */
    boost::bad_weak_ptr &operator=(boost::bad_weak_ptr const &); /* compiler_generated() */
};
static_assert(sizeof(boost::bad_weak_ptr) == 12, "Invalid boost::bad_weak_ptr size");

class boost::detail::sp_counted_base
{
public:
    typedef boost::detail::lightweight_mutex mutex_type;
private:
    sp_counted_base(boost::detail::sp_counted_base const &);
public:
    sp_counted_base();
    virtual ~sp_counted_base();
    virtual void dispose() = 0;
    virtual void destruct();
    virtual void *get_deleter(type_info const &) = 0;
    void add_ref();
    void release();
    void weak_add_ref();
    void weak_release();
    long use_count() const;
private:
    boost::detail::sp_counted_base &operator=(boost::detail::sp_counted_base const &);
    long use_count_; // 0x4
    long weak_count_; // 0x8
    boost::detail::lightweight_mutex mtx_; // 0xC
};
static_assert(sizeof(boost::detail::sp_counted_base) == 16, "Invalid boost::detail::sp_counted_base size");

class boost::detail::shared_count
{
private:
    boost::detail::sp_counted_base *pi_; // 0x0
public:
    shared_count(boost::detail::weak_count const &);
    shared_count(boost::detail::shared_count const &);
    shared_count();
    ~shared_count();
    boost::detail::shared_count &operator=(boost::detail::shared_count const &);
    void swap(boost::detail::shared_count &);
    long use_count() const;
    bool unique() const;
    void *get_deleter(type_info const &) const;
};
static_assert(sizeof(boost::detail::shared_count) == 4, "Invalid boost::detail::shared_count size");

class boost::detail::weak_count
{
private:
    boost::detail::sp_counted_base *pi_; // 0x0
public:
    weak_count(boost::detail::weak_count const &);
    weak_count(boost::detail::shared_count const &);
    weak_count();
    ~weak_count();
    boost::detail::weak_count &operator=(boost::detail::weak_count const &);
    boost::detail::weak_count &operator=(boost::detail::shared_count const &);
    void swap(boost::detail::weak_count &);
    long use_count() const;
};
static_assert(sizeof(boost::detail::weak_count) == 4, "Invalid boost::detail::weak_count size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SHARED_COUNT_H__
