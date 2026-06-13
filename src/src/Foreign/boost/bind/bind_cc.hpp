#ifndef __BIND_CC_H__
#define __BIND_CC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern boost::_bi::bind_t<bool,bool (__stdcall*)(LocalizerImp::ResEntry const &,char const *),boost::_bi::list2<boost::arg<1>,boost::_bi::value<char const *> > > boost::bind<bool,LocalizerImp::ResEntry const &,char const *,boost::arg<1>,char const *>(bool (*f)(LocalizerImp::ResEntry const &, char const *), boost::arg<1> a1, char const *a2);
extern boost::_bi::bind_t<bool,bool (__stdcall*)(wchar_t,wchar_t const *),boost::_bi::list2<boost::arg<1>,boost::_bi::value<wchar_t const *> > > boost::bind<bool,wchar_t,wchar_t const *,boost::arg<1>,wchar_t const *>(bool (*f)(wchar_t, wchar_t const *), boost::arg<1> a1, wchar_t const *a2);
extern boost::_bi::bind_t<bool,bool (__stdcall*)(wchar_t const *,wchar_t const *,wchar_t const *,wchar_t const *,unsigned int *,unsigned int *),boost::_bi::list6<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<unsigned int *>,boost::_bi::value<unsigned int *> > > boost::bind<bool,wchar_t const *,wchar_t const *,wchar_t const *,wchar_t const *,unsigned int *,unsigned int *,boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,unsigned int *,unsigned int *>(bool (*f)(wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *, unsigned __int32 *, unsigned __int32 *), boost::arg<1> a1, boost::arg<2> a2, boost::arg<3> a3, boost::arg<4> a4, unsigned __int32 *a5, unsigned __int32 *a6);
extern boost::_bi::bind_t<bool,bool (__stdcall*)(wchar_t const *,wchar_t const *,wchar_t const *,wchar_t const *,LocalizerResourceUCS::Line *,unsigned int *,wchar_t * *),boost::_bi::list7<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<LocalizerResourceUCS::Line *>,boost::_bi::value<unsigned int *>,boost::_bi::value<wchar_t * *> > > boost::bind<bool,wchar_t const *,wchar_t const *,wchar_t const *,wchar_t const *,LocalizerResourceUCS::Line *,unsigned int *,wchar_t * *,boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,LocalizerResourceUCS::Line *,unsigned int *,wchar_t * *>(bool (*f)(wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *, LocalizerResourceUCS::Line *, unsigned __int32 *, wchar_t **), boost::arg<1> a1, boost::arg<2> a2, boost::arg<3> a3, boost::arg<4> a4, LocalizerResourceUCS::Line *a5, unsigned __int32 *a6, wchar_t **a7);

/* ---------- globals */

/* ---------- public code */

_extern boost::_bi::bind_t<bool,bool (__stdcall*)(LocalizerImp::ResEntry const &,char const *),boost::_bi::list2<boost::arg<1>,boost::_bi::value<char const *> > > _sub_10002F2F(bool (*)(LocalizerImp::ResEntry const &, char const *), boost::arg<1>, char const *);
boost::_bi::bind_t<bool,bool (__stdcall*)(LocalizerImp::ResEntry const &,char const *),boost::_bi::list2<boost::arg<1>,boost::_bi::value<char const *> > > boost::bind<bool,LocalizerImp::ResEntry const &,char const *,boost::arg<1>,char const *>(bool (*f)(LocalizerImp::ResEntry const &, char const *), boost::arg<1> a1, char const *a2) // 0x10002F2F
{
    mangled_assert("??$bind@_NABVResEntry@LocalizerImp@@PBDV?$arg@$00@boost@@PBD@boost@@YG?AV?$bind_t@_NP6G_NABVResEntry@LocalizerImp@@PBD@ZV?$list2@V?$arg@$00@boost@@V?$value@PBD@_bi@2@@_bi@boost@@@_bi@0@P6G_NABVResEntry@LocalizerImp@@PBD@ZV?$arg@$00@0@1@Z");
    todo("implement");
    boost::_bi::bind_t<bool,bool (__stdcall*)(LocalizerImp::ResEntry const &,char const *),boost::_bi::list2<boost::arg<1>,boost::_bi::value<char const *> > > __result = _sub_10002F2F(f, a1, a2);
    return __result;
}

_extern boost::_bi::bind_t<bool,bool (__stdcall*)(wchar_t,wchar_t const *),boost::_bi::list2<boost::arg<1>,boost::_bi::value<wchar_t const *> > > _sub_100011C5(bool (*)(wchar_t, wchar_t const *), boost::arg<1>, wchar_t const *);
boost::_bi::bind_t<bool,bool (__stdcall*)(wchar_t,wchar_t const *),boost::_bi::list2<boost::arg<1>,boost::_bi::value<wchar_t const *> > > boost::bind<bool,wchar_t,wchar_t const *,boost::arg<1>,wchar_t const *>(bool (*f)(wchar_t, wchar_t const *), boost::arg<1> a1, wchar_t const *a2) // 0x100011C5
{
    mangled_assert("??$bind@_N_WPB_WV?$arg@$00@boost@@PB_W@boost@@YG?AV?$bind_t@_NP6G_N_WPB_W@ZV?$list2@V?$arg@$00@boost@@V?$value@PB_W@_bi@2@@_bi@boost@@@_bi@0@P6G_N_WPB_W@ZV?$arg@$00@0@1@Z");
    todo("implement");
    boost::_bi::bind_t<bool,bool (__stdcall*)(wchar_t,wchar_t const *),boost::_bi::list2<boost::arg<1>,boost::_bi::value<wchar_t const *> > > __result = _sub_100011C5(f, a1, a2);
    return __result;
}

_extern boost::_bi::bind_t<bool,bool (__stdcall*)(wchar_t const *,wchar_t const *,wchar_t const *,wchar_t const *,unsigned int *,unsigned int *),boost::_bi::list6<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<unsigned int *>,boost::_bi::value<unsigned int *> > > _sub_1000800F(bool (*)(wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *, unsigned __int32 *, unsigned __int32 *), boost::arg<1>, boost::arg<2>, boost::arg<3>, boost::arg<4>, unsigned __int32 *, unsigned __int32 *);
boost::_bi::bind_t<bool,bool (__stdcall*)(wchar_t const *,wchar_t const *,wchar_t const *,wchar_t const *,unsigned int *,unsigned int *),boost::_bi::list6<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<unsigned int *>,boost::_bi::value<unsigned int *> > > boost::bind<bool,wchar_t const *,wchar_t const *,wchar_t const *,wchar_t const *,unsigned int *,unsigned int *,boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,unsigned int *,unsigned int *>(bool (*f)(wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *, unsigned __int32 *, unsigned __int32 *), boost::arg<1> a1, boost::arg<2> a2, boost::arg<3> a3, boost::arg<4> a4, unsigned __int32 *a5, unsigned __int32 *a6) // 0x1000800F
{
    mangled_assert("??$bind@_NPB_WPB_WPB_WPB_WPAIPAIV?$arg@$00@boost@@V?$arg@$01@2@V?$arg@$02@2@V?$arg@$03@2@PAIPAI@boost@@YG?AV?$bind_t@_NP6G_NPB_W000PAI1@ZV?$list6@V?$arg@$00@boost@@V?$arg@$01@2@V?$arg@$02@2@V?$arg@$03@2@V?$value@PAI@_bi@2@V672@@_bi@boost@@@_bi@0@P6G_NPB_W000PAI1@ZV?$arg@$00@0@V?$arg@$01@0@V?$arg@$02@0@V?$arg@$03@0@11@Z");
    todo("implement");
    boost::_bi::bind_t<bool,bool (__stdcall*)(wchar_t const *,wchar_t const *,wchar_t const *,wchar_t const *,unsigned int *,unsigned int *),boost::_bi::list6<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<unsigned int *>,boost::_bi::value<unsigned int *> > > __result = _sub_1000800F(f, a1, a2, a3, a4, a5, a6);
    return __result;
}

_extern boost::_bi::bind_t<bool,bool (__stdcall*)(wchar_t const *,wchar_t const *,wchar_t const *,wchar_t const *,LocalizerResourceUCS::Line *,unsigned int *,wchar_t * *),boost::_bi::list7<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<LocalizerResourceUCS::Line *>,boost::_bi::value<unsigned int *>,boost::_bi::value<wchar_t * *> > > _sub_1000803A(bool (*)(wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *, LocalizerResourceUCS::Line *, unsigned __int32 *, wchar_t **), boost::arg<1>, boost::arg<2>, boost::arg<3>, boost::arg<4>, LocalizerResourceUCS::Line *, unsigned __int32 *, wchar_t **);
boost::_bi::bind_t<bool,bool (__stdcall*)(wchar_t const *,wchar_t const *,wchar_t const *,wchar_t const *,LocalizerResourceUCS::Line *,unsigned int *,wchar_t * *),boost::_bi::list7<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<LocalizerResourceUCS::Line *>,boost::_bi::value<unsigned int *>,boost::_bi::value<wchar_t * *> > > boost::bind<bool,wchar_t const *,wchar_t const *,wchar_t const *,wchar_t const *,LocalizerResourceUCS::Line *,unsigned int *,wchar_t * *,boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,LocalizerResourceUCS::Line *,unsigned int *,wchar_t * *>(bool (*f)(wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *, LocalizerResourceUCS::Line *, unsigned __int32 *, wchar_t **), boost::arg<1> a1, boost::arg<2> a2, boost::arg<3> a3, boost::arg<4> a4, LocalizerResourceUCS::Line *a5, unsigned __int32 *a6, wchar_t **a7) // 0x1000803A
{
    mangled_assert("??$bind@_NPB_WPB_WPB_WPB_WPAULine@LocalizerResourceUCS@@PAIPAPA_WV?$arg@$00@boost@@V?$arg@$01@4@V?$arg@$02@4@V?$arg@$03@4@PAU12@PAIPAPA_W@boost@@YG?AV?$bind_t@_NP6G_NPB_W000PAULine@LocalizerResourceUCS@@PAIPAPA_W@ZV?$list7@V?$arg@$00@boost@@V?$arg@$01@2@V?$arg@$02@2@V?$arg@$03@2@V?$value@PAULine@LocalizerResourceUCS@@@_bi@2@V?$value@PAI@72@V?$value@PAPA_W@72@@_bi@boost@@@_bi@0@P6G_NPB_W000PAULine@LocalizerResourceUCS@@PAIPAPA_W@ZV?$arg@$00@0@V?$arg@$01@0@V?$arg@$02@0@V?$arg@$03@0@123@Z");
    todo("implement");
    boost::_bi::bind_t<bool,bool (__stdcall*)(wchar_t const *,wchar_t const *,wchar_t const *,wchar_t const *,LocalizerResourceUCS::Line *,unsigned int *,wchar_t * *),boost::_bi::list7<boost::arg<1>,boost::arg<2>,boost::arg<3>,boost::arg<4>,boost::_bi::value<LocalizerResourceUCS::Line *>,boost::_bi::value<unsigned int *>,boost::_bi::value<wchar_t * *> > > __result = _sub_1000803A(f, a1, a2, a3, a4, a5, a6, a7);
    return __result;
}

/* ---------- private code */

#endif // __BIND_CC_H__
