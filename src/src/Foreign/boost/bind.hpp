#ifndef __BIND_H__
#define __BIND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::_bi::value<wchar_t const *>
{
public:
    _inline value<wchar_t const *>(wchar_t const *const &);
    _inline wchar_t const *const &get() const;
    wchar_t const *&get();
private:
    wchar_t const *t_; // 0x0
};
static_assert(sizeof(boost::_bi::value<wchar_t const *>) == 4, "Invalid boost::_bi::value<wchar_t const *> size");

class boost::_bi::value<char const *>
{
public:
    _inline value<char const *>(char const *const &);
    _inline char const *const &get() const;
    char const *&get();
private:
    char const *t_; // 0x0
};
static_assert(sizeof(boost::_bi::value<char const *>) == 4, "Invalid boost::_bi::value<char const *> size");

class boost::_bi::value<unsigned int *>
{
public:
    _inline value<unsigned int *>(unsigned __int32 *const &);
    _inline unsigned __int32 *const &get() const;
    unsigned __int32 *&get();
private:
    unsigned __int32 *t_; // 0x0
};
static_assert(sizeof(boost::_bi::value<unsigned int *>) == 4, "Invalid boost::_bi::value<unsigned int *> size");

class boost::_bi::value<wchar_t * *>
{
public:
    _inline value<wchar_t * *>(wchar_t **const &);
    _inline wchar_t **const &get() const;
    wchar_t **&get();
private:
    wchar_t **t_; // 0x0
};
static_assert(sizeof(boost::_bi::value<wchar_t * *>) == 4, "Invalid boost::_bi::value<wchar_t * *> size");

class boost::_bi::value<LocalizerResourceUCS::Line *>
{
public:
    _inline value<LocalizerResourceUCS::Line *>(LocalizerResourceUCS::Line *const &);
    _inline LocalizerResourceUCS::Line *const &get() const;
    LocalizerResourceUCS::Line *&get();
private:
    LocalizerResourceUCS::Line *t_; // 0x0
};
static_assert(sizeof(boost::_bi::value<LocalizerResourceUCS::Line *>) == 4, "Invalid boost::_bi::value<LocalizerResourceUCS::Line *> size");

class boost::_bi::type<bool>
{
};
static_assert(sizeof(boost::_bi::type<bool>) == 1, "Invalid boost::_bi::type<bool> size");

class boost::_bi::list0
{
public:
    list0();
};
static_assert(sizeof(boost::_bi::list0) == 1, "Invalid boost::_bi::list0 size");

class boost::_bi::list1<wchar_t &>
{
public:
    _inline list1<wchar_t &>(wchar_t &);
    wchar_t &operator[](boost::arg<1> (*)()) const;
    _inline wchar_t &operator[](boost::arg<1>) const;
private:
    wchar_t &a1_; // 0x0
};
static_assert(sizeof(boost::_bi::list1<wchar_t &>) == 4, "Invalid boost::_bi::list1<wchar_t &> size");

class boost::_bi::list1<LocalizerImp::ResEntry &>
{
public:
    _inline list1<LocalizerImp::ResEntry &>(LocalizerImp::ResEntry &);
    LocalizerImp::ResEntry &operator[](boost::arg<1> (*)()) const;
    _inline LocalizerImp::ResEntry &operator[](boost::arg<1>) const;
private:
    LocalizerImp::ResEntry &a1_; // 0x0
};
static_assert(sizeof(boost::_bi::list1<LocalizerImp::ResEntry &>) == 4, "Invalid boost::_bi::list1<LocalizerImp::ResEntry &> size");

class boost::_bi::list2<boost::arg<1>,boost::_bi::value<wchar_t const *> >
{
public:
    _inline list2<boost::arg<1>,boost::_bi::value<wchar_t const *> >(boost::arg<1>, boost::_bi::value<wchar_t const *>);
    boost::_bi::value<wchar_t const *> operator[](boost::arg<2> (*)()) const;
    boost::arg<1> operator[](boost::arg<1> (*)()) const;
    boost::_bi::value<wchar_t const *> operator[](boost::arg<2>) const;
    boost::arg<1> operator[](boost::arg<1>) const;
private:
    boost::arg<1> a1_; // 0x0
    boost::_bi::value<wchar_t const *> a2_; // 0x4
};
static_assert(sizeof(boost::_bi::list2<boost::arg<1>,boost::_bi::value<wchar_t const *> >) == 8, "Invalid boost::_bi::list2<boost::arg<1>,boost::_bi::value<wchar_t const *> > size");

class boost::_bi::list2<boost::arg<1>,boost::_bi::value<char const *> >
{
public:
    _inline list2<boost::arg<1>,boost::_bi::value<char const *> >(boost::arg<1>, boost::_bi::value<char const *>);
    boost::_bi::value<char const *> operator[](boost::arg<2> (*)()) const;
    boost::arg<1> operator[](boost::arg<1> (*)()) const;
    boost::_bi::value<char const *> operator[](boost::arg<2>) const;
    boost::arg<1> operator[](boost::arg<1>) const;
private:
    boost::arg<1> a1_; // 0x0
    boost::_bi::value<char const *> a2_; // 0x4
};
static_assert(sizeof(boost::_bi::list2<boost::arg<1>,boost::_bi::value<char const *> >) == 8, "Invalid boost::_bi::list2<boost::arg<1>,boost::_bi::value<char const *> > size");

class boost::_bi::list4<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &>
{
public:
    _inline list4<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &>(wchar_t const *&, wchar_t const *&, wchar_t const *&, wchar_t const *&);
    wchar_t const *&operator[](boost::arg<4> (*)()) const;
    wchar_t const *&operator[](boost::arg<3> (*)()) const;
    wchar_t const *&operator[](boost::arg<2> (*)()) const;
    wchar_t const *&operator[](boost::arg<1> (*)()) const;
    _inline wchar_t const *&operator[](boost::arg<4>) const;
    _inline wchar_t const *&operator[](boost::arg<3>) const;
    _inline wchar_t const *&operator[](boost::arg<2>) const;
    _inline wchar_t const *&operator[](boost::arg<1>) const;
private:
    wchar_t const *&a1_; // 0x0
    wchar_t const *&a2_; // 0x4
    wchar_t const *&a3_; // 0x8
    wchar_t const *&a4_; // 0xC
};
static_assert(sizeof(boost::_bi::list4<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &>) == 16, "Invalid boost::_bi::list4<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &> size");

class boost::_bi::list6<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<unsigned int *>,boost::_bi::value<unsigned int *> >
{
public:
    _inline list6<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<unsigned int *>,boost::_bi::value<unsigned int *> >(boost::arg<1>, boost::arg<2>, boost::arg<3>, boost::arg<4>, boost::_bi::value<unsigned int *>, boost::_bi::value<unsigned int *>);
    boost::_bi::value<unsigned int *> operator[](boost::arg<6> (*)()) const;
    boost::_bi::value<unsigned int *> operator[](boost::arg<5> (*)()) const;
    boost::arg<4> operator[](boost::arg<4> (*)()) const;
    boost::arg<3> operator[](boost::arg<3> (*)()) const;
    boost::arg<2> operator[](boost::arg<2> (*)()) const;
    boost::arg<1> operator[](boost::arg<1> (*)()) const;
    boost::_bi::value<unsigned int *> operator[](boost::arg<6>) const;
    boost::_bi::value<unsigned int *> operator[](boost::arg<5>) const;
    boost::arg<4> operator[](boost::arg<4>) const;
    boost::arg<3> operator[](boost::arg<3>) const;
    boost::arg<2> operator[](boost::arg<2>) const;
    boost::arg<1> operator[](boost::arg<1>) const;
private:
    boost::arg<1> a1_; // 0x0
    boost::arg<2> a2_; // 0x1
    boost::arg<3> a3_; // 0x2
    boost::arg<4> a4_; // 0x3
    boost::_bi::value<unsigned int *> a5_; // 0x4
    boost::_bi::value<unsigned int *> a6_; // 0x8
};
static_assert(sizeof(boost::_bi::list6<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<unsigned int *>,boost::_bi::value<unsigned int *> >) == 12, "Invalid boost::_bi::list6<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<unsigned int *>,boost::_bi::value<unsigned int *> > size");

class boost::_bi::list7<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<LocalizerResourceUCS::Line *>,boost::_bi::value<unsigned int *>,boost::_bi::value<wchar_t * *> >
{
public:
    _inline list7<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<LocalizerResourceUCS::Line *>,boost::_bi::value<unsigned int *>,boost::_bi::value<wchar_t * *> >(boost::arg<1>, boost::arg<2>, boost::arg<3>, boost::arg<4>, boost::_bi::value<LocalizerResourceUCS::Line *>, boost::_bi::value<unsigned int *>, boost::_bi::value<wchar_t * *>);
    boost::_bi::value<wchar_t * *> operator[](boost::arg<7> (*)()) const;
    boost::_bi::value<unsigned int *> operator[](boost::arg<6> (*)()) const;
    boost::_bi::value<LocalizerResourceUCS::Line *> operator[](boost::arg<5> (*)()) const;
    boost::arg<4> operator[](boost::arg<4> (*)()) const;
    boost::arg<3> operator[](boost::arg<3> (*)()) const;
    boost::arg<2> operator[](boost::arg<2> (*)()) const;
    boost::arg<1> operator[](boost::arg<1> (*)()) const;
    boost::_bi::value<wchar_t * *> operator[](boost::arg<7>) const;
    boost::_bi::value<unsigned int *> operator[](boost::arg<6>) const;
    boost::_bi::value<LocalizerResourceUCS::Line *> operator[](boost::arg<5>) const;
    boost::arg<4> operator[](boost::arg<4>) const;
    boost::arg<3> operator[](boost::arg<3>) const;
    boost::arg<2> operator[](boost::arg<2>) const;
    boost::arg<1> operator[](boost::arg<1>) const;
private:
    boost::arg<1> a1_; // 0x0
    boost::arg<2> a2_; // 0x1
    boost::arg<3> a3_; // 0x2
    boost::arg<4> a4_; // 0x3
    boost::_bi::value<LocalizerResourceUCS::Line *> a5_; // 0x4
    boost::_bi::value<unsigned int *> a6_; // 0x8
    boost::_bi::value<wchar_t * *> a7_; // 0xC
};
static_assert(sizeof(boost::_bi::list7<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<LocalizerResourceUCS::Line *>,boost::_bi::value<unsigned int *>,boost::_bi::value<wchar_t * *> >) == 16, "Invalid boost::_bi::list7<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<LocalizerResourceUCS::Line *>,boost::_bi::value<unsigned int *>,boost::_bi::value<wchar_t * *> > size");

class boost::_bi::bind_t<bool,bool (__stdcall*)(wchar_t,wchar_t const *),boost::_bi::list2<boost::arg<1>,boost::_bi::value<wchar_t const *> > >
{
public:
    bind_t<bool,bool (__stdcall*)(wchar_t,wchar_t const *),boost::_bi::list2<boost::arg<1>,boost::_bi::value<wchar_t const *> > >(bool (*)(wchar_t, wchar_t const *), boost::_bi::list2<boost::arg<1>,boost::_bi::value<wchar_t const *> > const &);
    typedef bool result_type;
    bool operator()() const;
    bool operator()();
private:
    bool (*f_)(wchar_t, wchar_t const *); // 0x0
    boost::_bi::list2<boost::arg<1>,boost::_bi::value<wchar_t const *> > l_; // 0x4
};
static_assert(sizeof(boost::_bi::bind_t<bool,bool (__stdcall*)(wchar_t,wchar_t const *),boost::_bi::list2<boost::arg<1>,boost::_bi::value<wchar_t const *> > >) == 12, "Invalid boost::_bi::bind_t<bool,bool (__stdcall*)(wchar_t,wchar_t const *),boost::_bi::list2<boost::arg<1>,boost::_bi::value<wchar_t const *> > > size");

class boost::_bi::bind_t<bool,bool (__stdcall*)(LocalizerImp::ResEntry const &,char const *),boost::_bi::list2<boost::arg<1>,boost::_bi::value<char const *> > >
{
public:
    bind_t<bool,bool (__stdcall*)(LocalizerImp::ResEntry const &,char const *),boost::_bi::list2<boost::arg<1>,boost::_bi::value<char const *> > >(bool (*)(LocalizerImp::ResEntry const &, char const *), boost::_bi::list2<boost::arg<1>,boost::_bi::value<char const *> > const &);
    typedef bool result_type;
    bool operator()() const;
    bool operator()();
private:
    bool (*f_)(LocalizerImp::ResEntry const &, char const *); // 0x0
    boost::_bi::list2<boost::arg<1>,boost::_bi::value<char const *> > l_; // 0x4
};
static_assert(sizeof(boost::_bi::bind_t<bool,bool (__stdcall*)(LocalizerImp::ResEntry const &,char const *),boost::_bi::list2<boost::arg<1>,boost::_bi::value<char const *> > >) == 12, "Invalid boost::_bi::bind_t<bool,bool (__stdcall*)(LocalizerImp::ResEntry const &,char const *),boost::_bi::list2<boost::arg<1>,boost::_bi::value<char const *> > > size");

class boost::_bi::bind_t<bool,bool (__stdcall*)(wchar_t const *,wchar_t const *,wchar_t const *,wchar_t const *,unsigned int *,unsigned int *),boost::_bi::list6<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<unsigned int *>,boost::_bi::value<unsigned int *> > >
{
public:
    bind_t<bool,bool (__stdcall*)(wchar_t const *,wchar_t const *,wchar_t const *,wchar_t const *,unsigned int *,unsigned int *),boost::_bi::list6<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<unsigned int *>,boost::_bi::value<unsig(bool (*)(wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *, unsigned __int32 *, unsigned __int32 *), boost::_bi::list6<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<unsigned int *>,boost::_bi::value<unsigned int *> > const &);
    typedef bool result_type;
    bool operator()() const;
    bool operator()();
private:
    bool (*f_)(wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *, unsigned __int32 *, unsigned __int32 *); // 0x0
    boost::_bi::list6<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<unsigned int *>,boost::_bi::value<unsigned int *> > l_; // 0x4
};
static_assert(sizeof(boost::_bi::bind_t<bool,bool (__stdcall*)(wchar_t const *,wchar_t const *,wchar_t const *,wchar_t const *,unsigned int *,unsigned int *),boost::_bi::list6<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<unsigned int *>,boost::_bi::value<unsigned int *> > >) == 16, "Invalid boost::_bi::bind_t<bool,bool (__stdcall*)(wchar_t const *,wchar_t const *,wchar_t const *,wchar_t const *,unsigned int *,unsigned int *),boost::_bi::list6<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<unsigned int *>,boost::_bi::value<unsigned int *> > > size");

class boost::_bi::bind_t<bool,bool (__stdcall*)(wchar_t const *,wchar_t const *,wchar_t const *,wchar_t const *,LocalizerResourceUCS::Line *,unsigned int *,wchar_t * *),boost::_bi::list7<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<LocalizerResourceUCS::Line *>,boost::_bi::value<unsigned int *>,boost::_bi::value<wchar_t * *> > >
{
public:
    bind_t<bool,bool (__stdcall*)(wchar_t const *,wchar_t const *,wchar_t const *,wchar_t const *,LocalizerResourceUCS::Line *,unsigned int *,wchar_t * *),boost::_bi::list7<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<LocalizerReso(bool (*)(wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *, LocalizerResourceUCS::Line *, unsigned __int32 *, wchar_t **), boost::_bi::list7<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<LocalizerResourceUCS::Line *>,boost::_bi::value<unsigned int *>,boost::_bi::value<wchar_t * *> > const &);
    typedef bool result_type;
    bool operator()() const;
    bool operator()();
private:
    bool (*f_)(wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *, LocalizerResourceUCS::Line *, unsigned __int32 *, wchar_t **); // 0x0
    boost::_bi::list7<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<LocalizerResourceUCS::Line *>,boost::_bi::value<unsigned int *>,boost::_bi::value<wchar_t * *> > l_; // 0x4
};
static_assert(sizeof(boost::_bi::bind_t<bool,bool (__stdcall*)(wchar_t const *,wchar_t const *,wchar_t const *,wchar_t const *,LocalizerResourceUCS::Line *,unsigned int *,wchar_t * *),boost::_bi::list7<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<LocalizerResourceUCS::Line *>,boost::_bi::value<unsigned int *>,boost::_bi::value<wchar_t * *> > >) == 20, "Invalid boost::_bi::bind_t<bool,bool (__stdcall*)(wchar_t const *,wchar_t const *,wchar_t const *,wchar_t const *,LocalizerResourceUCS::Line *,unsigned int *,wchar_t * *),boost::_bi::list7<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<LocalizerResourceUCS::Line *>,boost::_bi::value<unsigned int *>,boost::_bi::value<wchar_t * *> > > size");

/* ---------- prototypes */

extern _inline bool (*&boost::_bi::unwrap<bool (__stdcall*)(wchar_t const *,wchar_t const *,wchar_t const *,wchar_t const *,unsigned int *,unsigned int *)>(bool (*&f)(wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *, unsigned __int32 *, unsigned __int32 *), long))(wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *, unsigned __int32 *, unsigned __int32 *);
extern _inline bool (*&boost::_bi::unwrap<bool (__stdcall*)(wchar_t const *,wchar_t const *,wchar_t const *,wchar_t const *,LocalizerResourceUCS::Line *,unsigned int *,wchar_t * *)>(bool (*&f)(wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *, LocalizerResourceUCS::Line *, unsigned __int32 *, wchar_t **), long))(wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *, LocalizerResourceUCS::Line *, unsigned __int32 *, wchar_t **);
extern _inline bool (*&boost::_bi::unwrap<bool (__stdcall*)(LocalizerImp::ResEntry const &,char const *)>(bool (*&f)(LocalizerImp::ResEntry const &, char const *), long))(LocalizerImp::ResEntry const &, char const *);
extern _inline bool (*&boost::_bi::unwrap<bool (__stdcall*)(wchar_t,wchar_t const *)>(bool (*&f)(wchar_t, wchar_t const *), long))(wchar_t, wchar_t const *);

/* ---------- globals */

/* ---------- public code */

_inline boost::_bi::value<unsigned int *>::value<unsigned int *>(unsigned __int32 *const &) // 0x10008243
{
    mangled_assert("??0?$value@PAI@_bi@boost@@QAE@ABQAI@Z");
    todo("implement");
}

_inline boost::_bi::value<wchar_t * *>::value<wchar_t * *>(wchar_t **const &) // 0x10008250
{
    mangled_assert("??0?$value@PAPA_W@_bi@boost@@QAE@ABQAPA_W@Z");
    todo("implement");
}

_inline boost::_bi::value<LocalizerResourceUCS::Line *>::value<LocalizerResourceUCS::Line *>(LocalizerResourceUCS::Line *const &) // 0x1000825D
{
    mangled_assert("??0?$value@PAULine@LocalizerResourceUCS@@@_bi@boost@@QAE@ABQAULine@LocalizerResourceUCS@@@Z");
    todo("implement");
}

_inline boost::_bi::value<char const *>::value<char const *>(char const *const &) // 0x100033A9
{
    mangled_assert("??0?$value@PBD@_bi@boost@@QAE@ABQBD@Z");
    todo("implement");
}

_inline boost::_bi::value<wchar_t const *>::value<wchar_t const *>(wchar_t const *const &) // 0x10001425
{
    mangled_assert("??0?$value@PB_W@_bi@boost@@QAE@ABQB_W@Z");
    todo("implement");
}

_inline unsigned __int32 *const &boost::_bi::value<unsigned int *>::get() const // 0x100088FA
{
    mangled_assert("?get@?$value@PAI@_bi@boost@@QBEABQAIXZ");
    todo("implement");
}

_inline wchar_t **const &boost::_bi::value<wchar_t * *>::get() const // 0x100088FD
{
    mangled_assert("?get@?$value@PAPA_W@_bi@boost@@QBEABQAPA_WXZ");
    todo("implement");
}

_inline LocalizerResourceUCS::Line *const &boost::_bi::value<LocalizerResourceUCS::Line *>::get() const // 0x10008900
{
    mangled_assert("?get@?$value@PAULine@LocalizerResourceUCS@@@_bi@boost@@QBEABQAULine@LocalizerResourceUCS@@XZ");
    todo("implement");
}

_inline char const *const &boost::_bi::value<char const *>::get() const // 0x100047DA
{
    mangled_assert("?get@?$value@PBD@_bi@boost@@QBEABQBDXZ");
    todo("implement");
}

_inline wchar_t const *const &boost::_bi::value<wchar_t const *>::get() const // 0x10002B72
{
    mangled_assert("?get@?$value@PB_W@_bi@boost@@QBEABQB_WXZ");
    todo("implement");
}

_inline bool (*&boost::_bi::unwrap<bool (__stdcall*)(wchar_t const *,wchar_t const *,wchar_t const *,wchar_t const *,unsigned int *,unsigned int *)>(bool (*&f)(wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *, unsigned __int32 *, unsigned __int32 *), long))(wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *, unsigned __int32 *, unsigned __int32 *) // 0x1000817A
{
    mangled_assert("??$unwrap@P6G_NPB_W000PAI1@Z@_bi@boost@@YGAAP6G_NPB_W000PAI1@ZAAP6G_N000011@ZJ@Z");
    todo("implement");
}

_inline bool (*&boost::_bi::unwrap<bool (__stdcall*)(wchar_t const *,wchar_t const *,wchar_t const *,wchar_t const *,LocalizerResourceUCS::Line *,unsigned int *,wchar_t * *)>(bool (*&f)(wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *, LocalizerResourceUCS::Line *, unsigned __int32 *, wchar_t **), long))(wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *, LocalizerResourceUCS::Line *, unsigned __int32 *, wchar_t **) // 0x10008181
{
    mangled_assert("??$unwrap@P6G_NPB_W000PAULine@LocalizerResourceUCS@@PAIPAPA_W@Z@_bi@boost@@YGAAP6G_NPB_W000PAULine@LocalizerResourceUCS@@PAIPAPA_W@ZAAP6G_N0000123@ZJ@Z");
    todo("implement");
}

_inline bool (*&boost::_bi::unwrap<bool (__stdcall*)(LocalizerImp::ResEntry const &,char const *)>(bool (*&f)(LocalizerImp::ResEntry const &, char const *), long))(LocalizerImp::ResEntry const &, char const *) // 0x1000324A
{
    mangled_assert("??$unwrap@P6G_NABVResEntry@LocalizerImp@@PBD@Z@_bi@boost@@YGAAP6G_NABVResEntry@LocalizerImp@@PBD@ZAAP6G_N01@ZJ@Z");
    todo("implement");
}

_inline bool (*&boost::_bi::unwrap<bool (__stdcall*)(wchar_t,wchar_t const *)>(bool (*&f)(wchar_t, wchar_t const *), long))(wchar_t, wchar_t const *) // 0x1000132E
{
    mangled_assert("??$unwrap@P6G_N_WPB_W@Z@_bi@boost@@YGAAP6G_N_WPB_W@ZAAP6G_N01@ZJ@Z");
    todo("implement");
}

_inline boost::_bi::list1<LocalizerImp::ResEntry &>::list1<LocalizerImp::ResEntry &>(LocalizerImp::ResEntry &) // 0x10003349
{
    mangled_assert("??0?$list1@AAVResEntry@LocalizerImp@@@_bi@boost@@QAE@AAVResEntry@LocalizerImp@@@Z");
    todo("implement");
}

_inline boost::_bi::list1<wchar_t &>::list1<wchar_t &>(wchar_t &) // 0x10001403
{
    mangled_assert("??0?$list1@AA_W@_bi@boost@@QAE@AA_W@Z");
    todo("implement");
}

_inline LocalizerImp::ResEntry &boost::_bi::list1<LocalizerImp::ResEntry &>::operator[](boost::arg<1>) const // 0x100035E8
{
    mangled_assert("??A?$list1@AAVResEntry@LocalizerImp@@@_bi@boost@@QBEAAVResEntry@LocalizerImp@@V?$arg@$00@2@@Z");
    todo("implement");
}

_inline wchar_t &boost::_bi::list1<wchar_t &>::operator[](boost::arg<1>) const // 0x100014B7
{
    mangled_assert("??A?$list1@AA_W@_bi@boost@@QBEAA_WV?$arg@$00@2@@Z");
    todo("implement");
}

_inline char const *const &boost::_bi::list1<LocalizerImp::ResEntry &>::operator[]<char const *>(boost::_bi::value<char const *> const &) const // 0x10002CC2
{
    mangled_assert("??$?APBD@?$list1@AAVResEntry@LocalizerImp@@@_bi@boost@@QBEABQBDABV?$value@PBD@12@@Z");
    todo("implement");
}

_inline wchar_t const *const &boost::_bi::list1<wchar_t &>::operator[]<wchar_t const *>(boost::_bi::value<wchar_t const *> const &) const // 0x10001000
{
    mangled_assert("??$?APB_W@?$list1@AA_W@_bi@boost@@QBEABQB_WABV?$value@PB_W@12@@Z");
    todo("implement");
}

_inline boost::_bi::list2<boost::arg<1>,boost::_bi::value<char const *> >::list2<boost::arg<1>,boost::_bi::value<char const *> >(boost::arg<1>, boost::_bi::value<char const *>) // 0x10003354
{
    mangled_assert("??0?$list2@V?$arg@$00@boost@@V?$value@PBD@_bi@2@@_bi@boost@@QAE@V?$arg@$00@2@V?$value@PBD@12@@Z");
    todo("implement");
}

_inline boost::_bi::list2<boost::arg<1>,boost::_bi::value<wchar_t const *> >::list2<boost::arg<1>,boost::_bi::value<wchar_t const *> >(boost::arg<1>, boost::_bi::value<wchar_t const *>) // 0x1000140E
{
    mangled_assert("??0?$list2@V?$arg@$00@boost@@V?$value@PB_W@_bi@2@@_bi@boost@@QAE@V?$arg@$00@2@V?$value@PB_W@12@@Z");
    todo("implement");
}

_inline bool boost::_bi::list2<boost::arg<1>,boost::_bi::value<char const *> >::operator()<bool,bool (__stdcall*)(LocalizerImp::ResEntry const &,char const *),boost::_bi::list1<LocalizerImp::ResEntry &> >(boost::_bi::type<bool>, bool (*)(LocalizerImp::ResEntry const &, char const *), boost::_bi::list1<LocalizerImp::ResEntry &> &) const // 0x10002CD7
{
    mangled_assert("??$?R_NP6G_NABVResEntry@LocalizerImp@@PBD@ZV?$list1@AAVResEntry@LocalizerImp@@@_bi@boost@@@?$list2@V?$arg@$00@boost@@V?$value@PBD@_bi@2@@_bi@boost@@QBE_NV?$type@_N@12@P6G_NABVResEntry@LocalizerImp@@PBD@ZAAV?$list1@AAVResEntry@LocalizerImp@@@12@@Z");
    todo("implement");
}

_inline bool boost::_bi::list2<boost::arg<1>,boost::_bi::value<wchar_t const *> >::operator()<bool,bool (__stdcall*)(wchar_t,wchar_t const *),boost::_bi::list1<wchar_t &> >(boost::_bi::type<bool>, bool (*)(wchar_t, wchar_t const *), boost::_bi::list1<wchar_t &> &) const // 0x10001007
{
    mangled_assert("??$?R_NP6G_N_WPB_W@ZV?$list1@AA_W@_bi@boost@@@?$list2@V?$arg@$00@boost@@V?$value@PB_W@_bi@2@@_bi@boost@@QBE_NV?$type@_N@12@P6G_N_WPB_W@ZAAV?$list1@AA_W@12@@Z");
    todo("implement");
}

_inline boost::_bi::list4<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &>::list4<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &>(wchar_t const *&, wchar_t const *&, wchar_t const *&, wchar_t const *&) // 0x100081EB
{
    mangled_assert("??0?$list4@AAPB_WAAPB_WAAPB_WAAPB_W@_bi@boost@@QAE@AAPB_W000@Z");
    todo("implement");
}

_inline wchar_t const *&boost::_bi::list4<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &>::operator[](boost::arg<1>) const // 0x10008399
{
    mangled_assert("??A?$list4@AAPB_WAAPB_WAAPB_WAAPB_W@_bi@boost@@QBEAAPB_WV?$arg@$00@2@@Z");
    todo("implement");
}

_inline wchar_t const *&boost::_bi::list4<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &>::operator[](boost::arg<2>) const // 0x1000839E
{
    mangled_assert("??A?$list4@AAPB_WAAPB_WAAPB_WAAPB_W@_bi@boost@@QBEAAPB_WV?$arg@$01@2@@Z");
    todo("implement");
}

_inline wchar_t const *&boost::_bi::list4<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &>::operator[](boost::arg<3>) const // 0x100083A4
{
    mangled_assert("??A?$list4@AAPB_WAAPB_WAAPB_WAAPB_W@_bi@boost@@QBEAAPB_WV?$arg@$02@2@@Z");
    todo("implement");
}

_inline wchar_t const *&boost::_bi::list4<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &>::operator[](boost::arg<4>) const // 0x100083AA
{
    mangled_assert("??A?$list4@AAPB_WAAPB_WAAPB_WAAPB_W@_bi@boost@@QBEAAPB_WV?$arg@$03@2@@Z");
    todo("implement");
}

_inline unsigned __int32 *const &boost::_bi::list4<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &>::operator[]<unsigned int *>(boost::_bi::value<unsigned int *> const &) const // 0x100076D7
{
    mangled_assert("??$?APAI@?$list4@AAPB_WAAPB_WAAPB_WAAPB_W@_bi@boost@@QBEABQAIABV?$value@PAI@12@@Z");
    todo("implement");
}

_inline wchar_t **const &boost::_bi::list4<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &>::operator[]<wchar_t * *>(boost::_bi::value<wchar_t * *> const &) const // 0x100076DE
{
    mangled_assert("??$?APAPA_W@?$list4@AAPB_WAAPB_WAAPB_WAAPB_W@_bi@boost@@QBEABQAPA_WABV?$value@PAPA_W@12@@Z");
    todo("implement");
}

_inline LocalizerResourceUCS::Line *const &boost::_bi::list4<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &>::operator[]<LocalizerResourceUCS::Line *>(boost::_bi::value<LocalizerResourceUCS::Line *> const &) const // 0x100076E5
{
    mangled_assert("??$?APAULine@LocalizerResourceUCS@@@?$list4@AAPB_WAAPB_WAAPB_WAAPB_W@_bi@boost@@QBEABQAULine@LocalizerResourceUCS@@ABV?$value@PAULine@LocalizerResourceUCS@@@12@@Z");
    todo("implement");
}

_inline boost::_bi::list6<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<unsigned int *>,boost::_bi::value<unsigned int *> >::list6<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<unsigned int *>,boost::_bi::value<unsigned int *> >(boost::arg<1>, boost::arg<2>, boost::arg<3>, boost::arg<4>, boost::_bi::value<unsigned int *>, boost::_bi::value<unsigned int *>) // 0x1000820B
{
    mangled_assert("??0?$list6@V?$arg@$00@boost@@V?$arg@$01@2@V?$arg@$02@2@V?$arg@$03@2@V?$value@PAI@_bi@2@V672@@_bi@boost@@QAE@V?$arg@$00@2@V?$arg@$01@2@V?$arg@$02@2@V?$arg@$03@2@V?$value@PAI@12@4@Z");
    todo("implement");
}

_inline bool boost::_bi::list6<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<unsigned int *>,boost::_bi::value<unsigned int *> >::operator()<bool,bool (__stdcall*)(wchar_t const *,wchar_t const *,wchar_t const *,wchar_t const *,unsigned int *,unsigned int *),boost::_bi::list4<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &> >(boost::_bi::type<bool>, bool (*)(wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *, unsigned __int32 *, unsigned __int32 *), boost::_bi::list4<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &> &) const // 0x10007748
{
    mangled_assert("??$?R_NP6G_NPB_W000PAI1@ZV?$list4@AAPB_WAAPB_WAAPB_WAAPB_W@_bi@boost@@@?$list6@V?$arg@$00@boost@@V?$arg@$01@2@V?$arg@$02@2@V?$arg@$03@2@V?$value@PAI@_bi@2@V672@@_bi@boost@@QBE_NV?$type@_N@12@P6G_NPB_W111PAI2@ZAAV?$list4@AAPB_WAAPB_WAAPB_WAAPB_W@12@@Z");
    todo("implement");
}

_inline boost::_bi::list7<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<LocalizerResourceUCS::Line *>,boost::_bi::value<unsigned int *>,boost::_bi::value<wchar_t * *> >::list7<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<LocalizerResourceUCS::Line *>,boost::_bi::value<unsigned int *>,boost::_bi::value<wchar_t * *> >(boost::arg<1>, boost::arg<2>, boost::arg<3>, boost::arg<4>, boost::_bi::value<LocalizerResourceUCS::Line *>, boost::_bi::value<unsigned int *>, boost::_bi::value<wchar_t * *>) // 0x1000821E
{
    mangled_assert("??0?$list7@V?$arg@$00@boost@@V?$arg@$01@2@V?$arg@$02@2@V?$arg@$03@2@V?$value@PAULine@LocalizerResourceUCS@@@_bi@2@V?$value@PAI@72@V?$value@PAPA_W@72@@_bi@boost@@QAE@V?$arg@$00@2@V?$arg@$01@2@V?$arg@$02@2@V?$arg@$03@2@V?$value@PAULine@LocalizerResourceUCS@@@12@V?$value@PAI@12@V?$value@PAPA_W@12@@Z");
    todo("implement");
}

_inline bool boost::_bi::list7<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<LocalizerResourceUCS::Line *>,boost::_bi::value<unsigned int *>,boost::_bi::value<wchar_t * *> >::operator()<bool,bool (__stdcall*)(wchar_t const *,wchar_t const *,wchar_t const *,wchar_t const *,LocalizerResourceUCS::Line *,unsigned int *,wchar_t * *),boost::_bi::list4<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &> >(boost::_bi::type<bool>, bool (*)(wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *, LocalizerResourceUCS::Line *, unsigned __int32 *, wchar_t **), boost::_bi::list4<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &> &) const // 0x10007770
{
    mangled_assert("??$?R_NP6G_NPB_W000PAULine@LocalizerResourceUCS@@PAIPAPA_W@ZV?$list4@AAPB_WAAPB_WAAPB_WAAPB_W@_bi@boost@@@?$list7@V?$arg@$00@boost@@V?$arg@$01@2@V?$arg@$02@2@V?$arg@$03@2@V?$value@PAULine@LocalizerResourceUCS@@@_bi@2@V?$value@PAI@72@V?$value@PAPA_W@72@@_bi@boost@@QBE_NV?$type@_N@12@P6G_NPB_W111PAULine@LocalizerResourceUCS@@PAIPAPA_W@ZAAV?$list4@AAPB_WAAPB_WAAPB_WAAPB_W@12@@Z");
    todo("implement");
}

_inline boost::_bi::bind_t<bool,bool (__stdcall*)(wchar_t const *,wchar_t const *,wchar_t const *,wchar_t const *,unsigned int *,unsigned int *),boost::_bi::list6<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<unsigned int *>,boost::_bi::value<unsigned int *> > >::bind_t<bool,bool (__stdcall*)(wchar_t const *,wchar_t const *,wchar_t const *,wchar_t const *,unsigned int *,unsigned int *),boost::_bi::list6<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<unsigned int *>,boost::_bi::value<unsigned int *> > >(bool (*)(wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *, unsigned __int32 *, unsigned __int32 *), boost::_bi::list6<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<unsigned int *>,boost::_bi::value<unsigned int *> > const &) // 0x100081B8
{
    mangled_assert("??0?$bind_t@_NP6G_NPB_W000PAI1@ZV?$list6@V?$arg@$00@boost@@V?$arg@$01@2@V?$arg@$02@2@V?$arg@$03@2@V?$value@PAI@_bi@2@V672@@_bi@boost@@@_bi@boost@@QAE@P6G_NPB_W000PAI1@ZABV?$list6@V?$arg@$00@boost@@V?$arg@$01@2@V?$arg@$02@2@V?$arg@$03@2@V?$value@PAI@_bi@2@V672@@12@@Z");
    todo("implement");
}

_inline boost::_bi::bind_t<bool,bool (__stdcall*)(wchar_t const *,wchar_t const *,wchar_t const *,wchar_t const *,LocalizerResourceUCS::Line *,unsigned int *,wchar_t * *),boost::_bi::list7<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<LocalizerResourceUCS::Line *>,boost::_bi::value<unsigned int *>,boost::_bi::value<wchar_t * *> > >::bind_t<bool,bool (__stdcall*)(wchar_t const *,wchar_t const *,wchar_t const *,wchar_t const *,LocalizerResourceUCS::Line *,unsigned int *,wchar_t * *),boost::_bi::list7<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<LocalizerResourceUCS::Line *>,boost::_bi::value<unsigned int *>,boost::_bi::value<wchar_t * *> > >(bool (*)(wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *, LocalizerResourceUCS::Line *, unsigned __int32 *, wchar_t **), boost::_bi::list7<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<LocalizerResourceUCS::Line *>,boost::_bi::value<unsigned int *>,boost::_bi::value<wchar_t * *> > const &) // 0x100081D1
{
    mangled_assert("??0?$bind_t@_NP6G_NPB_W000PAULine@LocalizerResourceUCS@@PAIPAPA_W@ZV?$list7@V?$arg@$00@boost@@V?$arg@$01@2@V?$arg@$02@2@V?$arg@$03@2@V?$value@PAULine@LocalizerResourceUCS@@@_bi@2@V?$value@PAI@72@V?$value@PAPA_W@72@@_bi@boost@@@_bi@boost@@QAE@P6G_NPB_W000PAULine@LocalizerResourceUCS@@PAIPAPA_W@ZABV?$list7@V?$arg@$00@boost@@V?$arg@$01@2@V?$arg@$02@2@V?$arg@$03@2@V?$value@PAULine@LocalizerResourceUCS@@@_bi@2@V?$value@PAI@72@V?$value@PAPA_W@72@@12@@Z");
    todo("implement");
}

_inline boost::_bi::bind_t<bool,bool (__stdcall*)(LocalizerImp::ResEntry const &,char const *),boost::_bi::list2<boost::arg<1>,boost::_bi::value<char const *> > >::bind_t<bool,bool (__stdcall*)(LocalizerImp::ResEntry const &,char const *),boost::_bi::list2<boost::arg<1>,boost::_bi::value<char const *> > >(bool (*)(LocalizerImp::ResEntry const &, char const *), boost::_bi::list2<boost::arg<1>,boost::_bi::value<char const *> > const &) // 0x1000332F
{
    mangled_assert("??0?$bind_t@_NP6G_NABVResEntry@LocalizerImp@@PBD@ZV?$list2@V?$arg@$00@boost@@V?$value@PBD@_bi@2@@_bi@boost@@@_bi@boost@@QAE@P6G_NABVResEntry@LocalizerImp@@PBD@ZABV?$list2@V?$arg@$00@boost@@V?$value@PBD@_bi@2@@12@@Z");
    todo("implement");
}

_inline boost::_bi::bind_t<bool,bool (__stdcall*)(wchar_t,wchar_t const *),boost::_bi::list2<boost::arg<1>,boost::_bi::value<wchar_t const *> > >::bind_t<bool,bool (__stdcall*)(wchar_t,wchar_t const *),boost::_bi::list2<boost::arg<1>,boost::_bi::value<wchar_t const *> > >(bool (*)(wchar_t, wchar_t const *), boost::_bi::list2<boost::arg<1>,boost::_bi::value<wchar_t const *> > const &) // 0x100013E9
{
    mangled_assert("??0?$bind_t@_NP6G_N_WPB_W@ZV?$list2@V?$arg@$00@boost@@V?$value@PB_W@_bi@2@@_bi@boost@@@_bi@boost@@QAE@P6G_N_WPB_W@ZABV?$list2@V?$arg@$00@boost@@V?$value@PB_W@_bi@2@@12@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __BIND_H__
