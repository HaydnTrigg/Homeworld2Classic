#ifndef __CHECKED_DELETE_H__
#define __CHECKED_DELETE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct boost::checked_deleter<Archive>
{
    typedef void result_type;
    typedef Archive *argument_type;
    void operator()(Archive *) const;
};
static_assert(sizeof(boost::checked_deleter<Archive>) == 1, "Invalid boost::checked_deleter<Archive> size");

struct boost::checked_deleter<FilePath::Source>
{
    typedef void result_type;
    typedef FilePath::Source *argument_type;
    void operator()(FilePath::Source *) const;
};
static_assert(sizeof(boost::checked_deleter<FilePath::Source>) == 1, "Invalid boost::checked_deleter<FilePath::Source> size");

/* ---------- prototypes */

extern _inline void boost::checked_delete<FilePath::Source>(FilePath::Source *x);
extern _inline void boost::checked_delete<ByteStream>(ByteStream *x);
extern _inline void boost::checked_delete<Archive>(Archive *x);

/* ---------- globals */

/* ---------- public code */

_extern void _sub_1000B935(FilePath::Source *);
_inline void boost::checked_delete<FilePath::Source>(FilePath::Source *x) // 0x1000B935
{
    mangled_assert("??$checked_delete@VSource@FilePath@@@boost@@YGXPAVSource@FilePath@@@Z");
    todo("implement");
    _sub_1000B935(x);
}

_extern void _sub_10007875(ByteStream *);
_inline void boost::checked_delete<ByteStream>(ByteStream *x) // 0x10007875
{
    mangled_assert("??$checked_delete@VByteStream@@@boost@@YGXPAVByteStream@@@Z");
    todo("implement");
    _sub_10007875(x);
}

_extern void _sub_10004A9B(Archive *);
_inline void boost::checked_delete<Archive>(Archive *x) // 0x10004A9B
{
    mangled_assert("??$checked_delete@VArchive@@@boost@@YGXPAVArchive@@@Z");
    todo("implement");
    _sub_10004A9B(x);
}

_extern void _sub_1000C8FA(boost::checked_deleter<FilePath::Source> const *const, FilePath::Source *);
_inline void boost::checked_deleter<FilePath::Source>::operator()(FilePath::Source *) const // 0x1000C8FA
{
    mangled_assert("??R?$checked_deleter@VSource@FilePath@@@boost@@QBEXPAVSource@FilePath@@@Z");
    todo("implement");
    _sub_1000C8FA(this, arg);
}

_extern void _sub_10005168(boost::checked_deleter<Archive> const *const, Archive *);
_inline void boost::checked_deleter<Archive>::operator()(Archive *) const // 0x10005168
{
    mangled_assert("??R?$checked_deleter@VArchive@@@boost@@QBEXPAVArchive@@@Z");
    todo("implement");
    _sub_10005168(this, arg);
}

/* ---------- private code */

#endif // __CHECKED_DELETE_H__
/* combined */
#ifndef __CHECKED_DELETE_H__
#define __CHECKED_DELETE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CHECKED_DELETE_H__
/* combined */
#ifndef __CHECKED_DELETE_H__
#define __CHECKED_DELETE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CHECKED_DELETE_H__
/* combined */
#ifndef __CHECKED_DELETE_H__
#define __CHECKED_DELETE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct boost::checked_deleter<FrameOrders>
{
    typedef void result_type;
    typedef FrameOrders *argument_type;
    void operator()(FrameOrders *) const;
};
static_assert(sizeof(boost::checked_deleter<FrameOrders>) == 1, "Invalid boost::checked_deleter<FrameOrders> size");

struct boost::checked_deleter<SobIDShared>
{
    typedef void result_type;
    typedef SobIDShared *argument_type;
    void operator()(SobIDShared *) const;
};
static_assert(sizeof(boost::checked_deleter<SobIDShared>) == 1, "Invalid boost::checked_deleter<SobIDShared> size");

struct boost::checked_deleter<SobStatic::Model>
{
    typedef void result_type;
    typedef SobStatic::Model *argument_type;
    void operator()(SobStatic::Model *) const;
};
static_assert(sizeof(boost::checked_deleter<SobStatic::Model>) == 1, "Invalid boost::checked_deleter<SobStatic::Model> size");

struct boost::checked_deleter<SobWithMeshStatic::Model>
{
    typedef void result_type;
    typedef SobWithMeshStatic::Model *argument_type;
    void operator()(SobWithMeshStatic::Model *) const;
};
static_assert(sizeof(boost::checked_deleter<SobWithMeshStatic::Model>) == 1, "Invalid boost::checked_deleter<SobWithMeshStatic::Model> size");

struct boost::checked_deleter<BgLightAnim::Data>
{
    typedef void result_type;
    typedef BgLightAnim::Data *argument_type;
    void operator()(BgLightAnim::Data *) const;
};
static_assert(sizeof(boost::checked_deleter<BgLightAnim::Data>) == 1, "Invalid boost::checked_deleter<BgLightAnim::Data> size");

struct boost::checked_deleter<StarList>
{
    typedef void result_type;
    typedef StarList *argument_type;
    void operator()(StarList *) const;
};
static_assert(sizeof(boost::checked_deleter<StarList>) == 1, "Invalid boost::checked_deleter<StarList> size");

struct boost::checked_deleter<BasicMesh>
{
    typedef void result_type;
    typedef BasicMesh *argument_type;
    void operator()(BasicMesh *) const;
};
static_assert(sizeof(boost::checked_deleter<BasicMesh>) == 1, "Invalid boost::checked_deleter<BasicMesh> size");

struct boost::checked_deleter<UI::Graphic>
{
    typedef void result_type;
    typedef UI::Graphic *argument_type;
    void operator()(UI::Graphic *) const;
};
static_assert(sizeof(boost::checked_deleter<UI::Graphic>) == 1, "Invalid boost::checked_deleter<UI::Graphic> size");

struct boost::checked_deleter<DestinationFormation::Bucket>
{
    typedef void result_type;
    typedef DestinationFormation::Bucket *argument_type;
    void operator()(DestinationFormation::Bucket *) const;
};
static_assert(sizeof(boost::checked_deleter<DestinationFormation::Bucket>) == 1, "Invalid boost::checked_deleter<DestinationFormation::Bucket> size");

struct boost::checked_deleter<DestinationFormation::Wall>
{
    typedef void result_type;
    typedef DestinationFormation::Wall *argument_type;
    void operator()(DestinationFormation::Wall *) const;
};
static_assert(sizeof(boost::checked_deleter<DestinationFormation::Wall>) == 1, "Invalid boost::checked_deleter<DestinationFormation::Wall> size");

struct boost::checked_deleter<DestinationFormation::Row>
{
    typedef void result_type;
    typedef DestinationFormation::Row *argument_type;
    void operator()(DestinationFormation::Row *) const;
};
static_assert(sizeof(boost::checked_deleter<DestinationFormation::Row>) == 1, "Invalid boost::checked_deleter<DestinationFormation::Row> size");

struct boost::checked_deleter<FXManager::Dynamics>
{
    typedef void result_type;
    typedef FXManager::Dynamics *argument_type;
    void operator()(FXManager::Dynamics *) const;
};
static_assert(sizeof(boost::checked_deleter<FXManager::Dynamics>) == 1, "Invalid boost::checked_deleter<FXManager::Dynamics> size");

struct boost::checked_deleter<FXManager::Type>
{
    typedef void result_type;
    typedef FXManager::Type *argument_type;
    void operator()(FXManager::Type *) const;
};
static_assert(sizeof(boost::checked_deleter<FXManager::Type>) == 1, "Invalid boost::checked_deleter<FXManager::Type> size");

/* ---------- prototypes */

extern _inline void boost::checked_delete<UniverseInterp::Data>(UniverseInterp::Data *x);
extern _inline void boost::checked_delete<Timer>(Timer *x);
extern _inline void boost::checked_delete<StarList::Data>(StarList::Data *x);
extern _inline void boost::checked_delete<SimProxy::Data>(SimProxy::Data *x);
extern _inline void boost::checked_delete<SensorsManager::Data>(SensorsManager::Data *x);
extern _inline void boost::checked_delete<GameEventSys::Data>(GameEventSys::Data *x);
extern _inline void boost::checked_delete<Campaign::Data>(Campaign::Data *x);
extern _inline void boost::checked_delete<BasicMesh>(BasicMesh *x);
extern _inline void boost::checked_delete<Background::Data>(Background::Data *x);
extern _inline void boost::checked_delete<StarList>(StarList *x);
extern _inline void boost::checked_delete<BgLightAnim::Data>(BgLightAnim::Data *x);
extern _inline void boost::checked_delete<VertexPool::Data>(VertexPool::Data *x);
extern _inline void boost::checked_delete<DecalRefMeshRegistry::Data>(DecalRefMeshRegistry::Data *x);
extern _inline void boost::checked_delete<AABBGrid<unsigned short,std::allocator<unsigned short> > >(AABBGrid<unsigned short,std::allocator<unsigned short> > *x);
extern _inline void boost::checked_delete<DecalRefMesh::Data>(DecalRefMesh::Data *x);
extern _inline void boost::checked_delete<DecalManager::Data>(DecalManager::Data *x);
extern _inline void boost::checked_delete<UI::UnitCapInfoPopupData>(UI::UnitCapInfoPopupData *x);
extern _inline void boost::checked_delete<UI::SubtitleScreen::Data>(UI::SubtitleScreen::Data *x);
extern _inline void boost::checked_delete<UI::Statistics::StatsImpl>(UI::Statistics::StatsImpl *x);
extern _inline void boost::checked_delete<UI::SaveLoadDialogData>(UI::SaveLoadDialogData *x);
extern _inline void boost::checked_delete<UI::PointerData>(UI::PointerData *x);
extern _inline void boost::checked_delete<UI::PlayMoviesScreenData>(UI::PlayMoviesScreenData *x);
extern _inline void boost::checked_delete<UI::MovieSpeech>(UI::MovieSpeech *x);
extern _inline void boost::checked_delete<UI::MovieTimer>(UI::MovieTimer *x);
extern _inline void boost::checked_delete<UI::Data>(UI::Data *x);
extern _inline void boost::checked_delete<UI::GameOverScreenData>(UI::GameOverScreenData *x);
extern _inline void boost::checked_delete<UI::GameMenuData>(UI::GameMenuData *x);
extern _inline void boost::checked_delete<UI::EventsScreenData>(UI::EventsScreenData *x);
extern _inline void boost::checked_delete<UI::ErrorMessageData>(UI::ErrorMessageData *x);
extern _inline void boost::checked_delete<UI::ControlsFrameData>(UI::ControlsFrameData *x);
extern _inline void boost::checked_delete<BattleScarTrail::Renderer>(BattleScarTrail::Renderer *x);
extern _inline void boost::checked_delete<BattleScarStats::Data>(BattleScarStats::Data *x);
extern _inline void boost::checked_delete<BattleScarPoint::Renderer>(BattleScarPoint::Renderer *x);
extern _inline void boost::checked_delete<BattleScarManager::Data>(BattleScarManager::Data *x);
extern _inline void boost::checked_delete<DecalManager>(DecalManager *x);
extern _inline void boost::checked_delete<HW2CpuPlayer::Data>(HW2CpuPlayer::Data *x);
extern _inline void boost::checked_delete<CpuFleetCommand::Data>(CpuFleetCommand::Data *x);
extern _inline void boost::checked_delete<RenderModelScars>(RenderModelScars *x);
extern _inline void boost::checked_delete<RenderModelScars::Data>(RenderModelScars::Data *x);
extern _inline void boost::checked_delete<StatLoggingInternal>(StatLoggingInternal *x);
extern _inline void boost::checked_delete<PlayerProfile>(PlayerProfile *x);
extern _inline void boost::checked_delete<PlayerProfileGameOptionsData>(PlayerProfileGameOptionsData *x);
extern _inline void boost::checked_delete<LuaSimProxyLib>(LuaSimProxyLib *x);
extern _inline void boost::checked_delete<SimProxy>(SimProxy *x);
extern _inline void boost::checked_delete<ConfigFile>(ConfigFile *x);
extern _inline void boost::checked_delete<AppObj::Data>(AppObj::Data *x);
extern _inline void boost::checked_delete<Lobby>(Lobby *x);
extern _inline void boost::checked_delete<StatMonitor>(StatMonitor *x);
extern _inline void boost::checked_delete<CameraCommand::FocusDistance>(CameraCommand::FocusDistance *x);
extern _inline void boost::checked_delete<SobWithMeshStatic::LoadingEnv>(SobWithMeshStatic::LoadingEnv *x);
extern _inline void boost::checked_delete<ShipHold::Data>(ShipHold::Data *x);
extern _inline void boost::checked_delete<ShipStatic::LoadingEnv>(ShipStatic::LoadingEnv *x);
extern _inline void boost::checked_delete<StaticModelRegistry::Data>(StaticModelRegistry::Data *x);
extern _inline void boost::checked_delete<SobWithMeshStatic::Model>(SobWithMeshStatic::Model *x);
extern _inline void boost::checked_delete<SobStatic::LoadingEnv>(SobStatic::LoadingEnv *x);
extern _inline void boost::checked_delete<SobStatic::Model>(SobStatic::Model *x);
extern _inline void boost::checked_delete<SobIDShared>(SobIDShared *x);
extern _inline void boost::checked_delete<InGameDisconnect>(InGameDisconnect *x);
extern _inline void boost::checked_delete<Subtitle::Data>(Subtitle::Data *x);
extern _inline void boost::checked_delete<FrameOrders>(FrameOrders *x);
extern _inline void boost::checked_delete<UI::Graphic>(UI::Graphic *x);
extern _inline void boost::checked_delete<UIDirectRenderer>(UIDirectRenderer *x);
extern _inline void boost::checked_delete<UI::SharedGraphicFactory::Data>(UI::SharedGraphicFactory::Data *x);
extern _inline void boost::checked_delete<UI::UISoundManager::Data>(UI::UISoundManager::Data *x);
extern _inline void boost::checked_delete<DestinationFormation::Bucket>(DestinationFormation::Bucket *x);
extern _inline void boost::checked_delete<DestinationFormation::Row>(DestinationFormation::Row *x);
extern _inline void boost::checked_delete<DestinationFormation::Wall>(DestinationFormation::Wall *x);
extern _inline void boost::checked_delete<SoundParamManager::Data>(SoundParamManager::Data *x);
extern _inline void boost::checked_delete<SoundEntityList::Memory>(SoundEntityList::Memory *x);
extern _inline void boost::checked_delete<FXBeam::Renderer>(FXBeam::Renderer *x);
extern _inline void boost::checked_delete<FXCollisionSurf>(FXCollisionSurf *x);
extern _inline void boost::checked_delete<FXHyperspace::Renderer>(FXHyperspace::Renderer *x);
extern _inline void boost::checked_delete<FXManager::Data>(FXManager::Data *x);
extern _inline void boost::checked_delete<FXManager::Dynamics>(FXManager::Dynamics *x);
extern _inline void boost::checked_delete<FXManager::Type>(FXManager::Type *x);
extern _inline void boost::checked_delete<FXRing::Renderer>(FXRing::Renderer *x);
extern _inline void boost::checked_delete<FXTrail::Renderer>(FXTrail::Renderer *x);
extern _inline void boost::checked_delete<LuaRuleSystem::Data>(LuaRuleSystem::Data *x);
extern _inline void boost::checked_array_delete<FatVertex>(FatVertex *x);
extern _inline void boost::checked_array_delete<unsigned int>(unsigned __int32 *x);
extern _inline void boost::checked_array_delete<vector4>(vector4 *x);

/* ---------- globals */

/* ---------- public code */

_extern void _sub_6518D4(UniverseInterp::Data *);
_inline void boost::checked_delete<UniverseInterp::Data>(UniverseInterp::Data *x) // 0x6518D4
{
    mangled_assert("??$checked_delete@VData@UniverseInterp@@@boost@@YGXPAVData@UniverseInterp@@@Z");
    todo("implement");
    _sub_6518D4(x);
}

_extern void _sub_64BCA9(Timer *);
_inline void boost::checked_delete<Timer>(Timer *x) // 0x64BCA9
{
    mangled_assert("??$checked_delete@VTimer@@@boost@@YGXPAVTimer@@@Z");
    todo("implement");
    _sub_64BCA9(x);
}

_extern void _sub_640864(StarList::Data *);
_inline void boost::checked_delete<StarList::Data>(StarList::Data *x) // 0x640864
{
    mangled_assert("??$checked_delete@VData@StarList@@@boost@@YGXPAVData@StarList@@@Z");
    todo("implement");
    _sub_640864(x);
}

_extern void _sub_637B80(SimProxy::Data *);
_inline void boost::checked_delete<SimProxy::Data>(SimProxy::Data *x) // 0x637B80
{
    mangled_assert("??$checked_delete@VData@SimProxy@@@boost@@YGXPAVData@SimProxy@@@Z");
    todo("implement");
    _sub_637B80(x);
}

_extern void _sub_6363C6(SensorsManager::Data *);
_inline void boost::checked_delete<SensorsManager::Data>(SensorsManager::Data *x) // 0x6363C6
{
    mangled_assert("??$checked_delete@VData@SensorsManager@@@boost@@YGXPAVData@SensorsManager@@@Z");
    todo("implement");
    _sub_6363C6(x);
}

_extern void _sub_5EF46D(GameEventSys::Data *);
_inline void boost::checked_delete<GameEventSys::Data>(GameEventSys::Data *x) // 0x5EF46D
{
    mangled_assert("??$checked_delete@VData@GameEventSys@@@boost@@YGXPAVData@GameEventSys@@@Z");
    todo("implement");
    _sub_5EF46D(x);
}

_extern void _sub_5E7B5D(Campaign::Data *);
_inline void boost::checked_delete<Campaign::Data>(Campaign::Data *x) // 0x5E7B5D
{
    mangled_assert("??$checked_delete@VData@Campaign@@@boost@@YGXPAVData@Campaign@@@Z");
    todo("implement");
    _sub_5E7B5D(x);
}

_extern void _sub_5E50FE(BasicMesh *);
_inline void boost::checked_delete<BasicMesh>(BasicMesh *x) // 0x5E50FE
{
    mangled_assert("??$checked_delete@VBasicMesh@@@boost@@YGXPAVBasicMesh@@@Z");
    todo("implement");
    _sub_5E50FE(x);
}

_extern void _sub_5E510F(Background::Data *);
_inline void boost::checked_delete<Background::Data>(Background::Data *x) // 0x5E510F
{
    mangled_assert("??$checked_delete@VData@Background@@@boost@@YGXPAVData@Background@@@Z");
    todo("implement");
    _sub_5E510F(x);
}

_extern void _sub_5E512C(StarList *);
_inline void boost::checked_delete<StarList>(StarList *x) // 0x5E512C
{
    mangled_assert("??$checked_delete@VStarList@@@boost@@YGXPAVStarList@@@Z");
    todo("implement");
    _sub_5E512C(x);
}

_extern void _sub_5E47CA(BgLightAnim::Data *);
_inline void boost::checked_delete<BgLightAnim::Data>(BgLightAnim::Data *x) // 0x5E47CA
{
    mangled_assert("??$checked_delete@VData@BgLightAnim@@@boost@@YGXPAVData@BgLightAnim@@@Z");
    todo("implement");
    _sub_5E47CA(x);
}

_extern void _sub_5C47CB(VertexPool::Data *);
_inline void boost::checked_delete<VertexPool::Data>(VertexPool::Data *x) // 0x5C47CB
{
    mangled_assert("??$checked_delete@VData@VertexPool@@@boost@@YGXPAVData@VertexPool@@@Z");
    todo("implement");
    _sub_5C47CB(x);
}

_extern void _sub_5C3AFB(DecalRefMeshRegistry::Data *);
_inline void boost::checked_delete<DecalRefMeshRegistry::Data>(DecalRefMeshRegistry::Data *x) // 0x5C3AFB
{
    mangled_assert("??$checked_delete@VData@DecalRefMeshRegistry@@@boost@@YGXPAVData@DecalRefMeshRegistry@@@Z");
    todo("implement");
    _sub_5C3AFB(x);
}

_extern void _sub_5C222C(AABBGrid<unsigned short,std::allocator<unsigned short> > *);
_inline void boost::checked_delete<AABBGrid<unsigned short,std::allocator<unsigned short> > >(AABBGrid<unsigned short,std::allocator<unsigned short> > *x) // 0x5C222C
{
    mangled_assert("??$checked_delete@V?$AABBGrid@GV?$allocator@G@std@@@@@boost@@YGXPAV?$AABBGrid@GV?$allocator@G@std@@@@@Z");
    todo("implement");
    _sub_5C222C(x);
}

_extern void _sub_5C2249(DecalRefMesh::Data *);
_inline void boost::checked_delete<DecalRefMesh::Data>(DecalRefMesh::Data *x) // 0x5C2249
{
    mangled_assert("??$checked_delete@VData@DecalRefMesh@@@boost@@YGXPAVData@DecalRefMesh@@@Z");
    todo("implement");
    _sub_5C2249(x);
}

_extern void _sub_5C1370(DecalManager::Data *);
_inline void boost::checked_delete<DecalManager::Data>(DecalManager::Data *x) // 0x5C1370
{
    mangled_assert("??$checked_delete@VData@DecalManager@@@boost@@YGXPAVData@DecalManager@@@Z");
    todo("implement");
    _sub_5C1370(x);
}

_extern void _sub_5AE270(UI::UnitCapInfoPopupData *);
_inline void boost::checked_delete<UI::UnitCapInfoPopupData>(UI::UnitCapInfoPopupData *x) // 0x5AE270
{
    mangled_assert("??$checked_delete@UUnitCapInfoPopupData@UI@@@boost@@YGXPAUUnitCapInfoPopupData@UI@@@Z");
    todo("implement");
    _sub_5AE270(x);
}

_extern void _sub_5AD3C2(UI::SubtitleScreen::Data *);
_inline void boost::checked_delete<UI::SubtitleScreen::Data>(UI::SubtitleScreen::Data *x) // 0x5AD3C2
{
    mangled_assert("??$checked_delete@VData@SubtitleScreen@UI@@@boost@@YGXPAVData@SubtitleScreen@UI@@@Z");
    todo("implement");
    _sub_5AD3C2(x);
}

_extern void _sub_5A9B5A(UI::Statistics::StatsImpl *);
_inline void boost::checked_delete<UI::Statistics::StatsImpl>(UI::Statistics::StatsImpl *x) // 0x5A9B5A
{
    mangled_assert("??$checked_delete@VStatsImpl@Statistics@UI@@@boost@@YGXPAVStatsImpl@Statistics@UI@@@Z");
    todo("implement");
    _sub_5A9B5A(x);
}

_extern void _sub_5A6A1D(UI::SaveLoadDialogData *);
_inline void boost::checked_delete<UI::SaveLoadDialogData>(UI::SaveLoadDialogData *x) // 0x5A6A1D
{
    mangled_assert("??$checked_delete@USaveLoadDialogData@UI@@@boost@@YGXPAUSaveLoadDialogData@UI@@@Z");
    todo("implement");
    _sub_5A6A1D(x);
}

_extern void _sub_5A427E(UI::PointerData *);
_inline void boost::checked_delete<UI::PointerData>(UI::PointerData *x) // 0x5A427E
{
    mangled_assert("??$checked_delete@VPointerData@UI@@@boost@@YGXPAVPointerData@UI@@@Z");
    todo("implement");
    _sub_5A427E(x);
}

_extern void _sub_5A3D21(UI::PlayMoviesScreenData *);
_inline void boost::checked_delete<UI::PlayMoviesScreenData>(UI::PlayMoviesScreenData *x) // 0x5A3D21
{
    mangled_assert("??$checked_delete@UPlayMoviesScreenData@UI@@@boost@@YGXPAUPlayMoviesScreenData@UI@@@Z");
    todo("implement");
    _sub_5A3D21(x);
}

_extern void _sub_5905F4(UI::MovieSpeech *);
_inline void boost::checked_delete<UI::MovieSpeech>(UI::MovieSpeech *x) // 0x5905F4
{
    mangled_assert("??$checked_delete@VMovieSpeech@UI@@@boost@@YGXPAVMovieSpeech@UI@@@Z");
    todo("implement");
    _sub_5905F4(x);
}

_extern void _sub_590611(UI::MovieTimer *);
_inline void boost::checked_delete<UI::MovieTimer>(UI::MovieTimer *x) // 0x590611
{
    mangled_assert("??$checked_delete@VMovieTimer@UI@@@boost@@YGXPAVMovieTimer@UI@@@Z");
    todo("implement");
    _sub_590611(x);
}

_extern void _sub_58BBB2(UI::Data *);
_inline void boost::checked_delete<UI::Data>(UI::Data *x) // 0x58BBB2
{
    mangled_assert("??$checked_delete@UData@UI@@@boost@@YGXPAUData@UI@@@Z");
    todo("implement");
    _sub_58BBB2(x);
}

_extern void _sub_586093(UI::GameOverScreenData *);
_inline void boost::checked_delete<UI::GameOverScreenData>(UI::GameOverScreenData *x) // 0x586093
{
    mangled_assert("??$checked_delete@UGameOverScreenData@UI@@@boost@@YGXPAUGameOverScreenData@UI@@@Z");
    todo("implement");
    _sub_586093(x);
}

_extern void _sub_585A6B(UI::GameMenuData *);
_inline void boost::checked_delete<UI::GameMenuData>(UI::GameMenuData *x) // 0x585A6B
{
    mangled_assert("??$checked_delete@UGameMenuData@UI@@@boost@@YGXPAUGameMenuData@UI@@@Z");
    todo("implement");
    _sub_585A6B(x);
}

_extern void _sub_576F96(UI::EventsScreenData *);
_inline void boost::checked_delete<UI::EventsScreenData>(UI::EventsScreenData *x) // 0x576F96
{
    mangled_assert("??$checked_delete@VEventsScreenData@UI@@@boost@@YGXPAVEventsScreenData@UI@@@Z");
    todo("implement");
    _sub_576F96(x);
}

_extern void _sub_575BAE(UI::ErrorMessageData *);
_inline void boost::checked_delete<UI::ErrorMessageData>(UI::ErrorMessageData *x) // 0x575BAE
{
    mangled_assert("??$checked_delete@UErrorMessageData@UI@@@boost@@YGXPAUErrorMessageData@UI@@@Z");
    todo("implement");
    _sub_575BAE(x);
}

_extern void _sub_571E50(UI::ControlsFrameData *);
_inline void boost::checked_delete<UI::ControlsFrameData>(UI::ControlsFrameData *x) // 0x571E50
{
    mangled_assert("??$checked_delete@VControlsFrameData@UI@@@boost@@YGXPAVControlsFrameData@UI@@@Z");
    todo("implement");
    _sub_571E50(x);
}

_extern void _sub_5622D7(BattleScarTrail::Renderer *);
_inline void boost::checked_delete<BattleScarTrail::Renderer>(BattleScarTrail::Renderer *x) // 0x5622D7
{
    mangled_assert("??$checked_delete@VRenderer@BattleScarTrail@@@boost@@YGXPAVRenderer@BattleScarTrail@@@Z");
    todo("implement");
    _sub_5622D7(x);
}

_extern void _sub_560D68(BattleScarStats::Data *);
_inline void boost::checked_delete<BattleScarStats::Data>(BattleScarStats::Data *x) // 0x560D68
{
    mangled_assert("??$checked_delete@VData@BattleScarStats@@@boost@@YGXPAVData@BattleScarStats@@@Z");
    todo("implement");
    _sub_560D68(x);
}

_extern void _sub_55D43F(BattleScarPoint::Renderer *);
_inline void boost::checked_delete<BattleScarPoint::Renderer>(BattleScarPoint::Renderer *x) // 0x55D43F
{
    mangled_assert("??$checked_delete@VRenderer@BattleScarPoint@@@boost@@YGXPAVRenderer@BattleScarPoint@@@Z");
    todo("implement");
    _sub_55D43F(x);
}

_extern void _sub_5596F0(BattleScarManager::Data *);
_inline void boost::checked_delete<BattleScarManager::Data>(BattleScarManager::Data *x) // 0x5596F0
{
    mangled_assert("??$checked_delete@VData@BattleScarManager@@@boost@@YGXPAVData@BattleScarManager@@@Z");
    todo("implement");
    _sub_5596F0(x);
}

_extern void _sub_55970D(DecalManager *);
_inline void boost::checked_delete<DecalManager>(DecalManager *x) // 0x55970D
{
    mangled_assert("??$checked_delete@VDecalManager@@@boost@@YGXPAVDecalManager@@@Z");
    todo("implement");
    _sub_55970D(x);
}

_extern void _sub_541216(HW2CpuPlayer::Data *);
_inline void boost::checked_delete<HW2CpuPlayer::Data>(HW2CpuPlayer::Data *x) // 0x541216
{
    mangled_assert("??$checked_delete@VData@HW2CpuPlayer@@@boost@@YGXPAVData@HW2CpuPlayer@@@Z");
    todo("implement");
    _sub_541216(x);
}

_extern void _sub_52F087(CpuFleetCommand::Data *);
_inline void boost::checked_delete<CpuFleetCommand::Data>(CpuFleetCommand::Data *x) // 0x52F087
{
    mangled_assert("??$checked_delete@VData@CpuFleetCommand@@@boost@@YGXPAVData@CpuFleetCommand@@@Z");
    todo("implement");
    _sub_52F087(x);
}

_extern void _sub_5226A0(RenderModelScars *);
_inline void boost::checked_delete<RenderModelScars>(RenderModelScars *x) // 0x5226A0
{
    mangled_assert("??$checked_delete@VRenderModelScars@@@boost@@YGXPAVRenderModelScars@@@Z");
    todo("implement");
    _sub_5226A0(x);
}

_extern void _sub_5204F8(RenderModelScars::Data *);
_inline void boost::checked_delete<RenderModelScars::Data>(RenderModelScars::Data *x) // 0x5204F8
{
    mangled_assert("??$checked_delete@VData@RenderModelScars@@@boost@@YGXPAVData@RenderModelScars@@@Z");
    todo("implement");
    _sub_5204F8(x);
}

_extern void _sub_50D4AE(StatLoggingInternal *);
_inline void boost::checked_delete<StatLoggingInternal>(StatLoggingInternal *x) // 0x50D4AE
{
    mangled_assert("??$checked_delete@VStatLoggingInternal@@@boost@@YGXPAVStatLoggingInternal@@@Z");
    todo("implement");
    _sub_50D4AE(x);
}

_extern void _sub_5040F6(PlayerProfile *);
_inline void boost::checked_delete<PlayerProfile>(PlayerProfile *x) // 0x5040F6
{
    mangled_assert("??$checked_delete@VPlayerProfile@@@boost@@YGXPAVPlayerProfile@@@Z");
    todo("implement");
    _sub_5040F6(x);
}

_extern void _sub_502EBD(PlayerProfileGameOptionsData *);
_inline void boost::checked_delete<PlayerProfileGameOptionsData>(PlayerProfileGameOptionsData *x) // 0x502EBD
{
    mangled_assert("??$checked_delete@UPlayerProfileGameOptionsData@@@boost@@YGXPAUPlayerProfileGameOptionsData@@@Z");
    todo("implement");
    _sub_502EBD(x);
}

_extern void _sub_4F8073(LuaSimProxyLib *);
_inline void boost::checked_delete<LuaSimProxyLib>(LuaSimProxyLib *x) // 0x4F8073
{
    mangled_assert("??$checked_delete@VLuaSimProxyLib@@@boost@@YGXPAVLuaSimProxyLib@@@Z");
    todo("implement");
    _sub_4F8073(x);
}

_extern void _sub_4F8090(SimProxy *);
_inline void boost::checked_delete<SimProxy>(SimProxy *x) // 0x4F8090
{
    mangled_assert("??$checked_delete@VSimProxy@@@boost@@YGXPAVSimProxy@@@Z");
    todo("implement");
    _sub_4F8090(x);
}

_extern void _sub_4F623F(ConfigFile *);
_inline void boost::checked_delete<ConfigFile>(ConfigFile *x) // 0x4F623F
{
    mangled_assert("??$checked_delete@VConfigFile@@@boost@@YGXPAVConfigFile@@@Z");
    todo("implement");
    _sub_4F623F(x);
}

_extern void _sub_4F625D(AppObj::Data *);
_inline void boost::checked_delete<AppObj::Data>(AppObj::Data *x) // 0x4F625D
{
    mangled_assert("??$checked_delete@VData@AppObj@@@boost@@YGXPAVData@AppObj@@@Z");
    todo("implement");
    _sub_4F625D(x);
}

_extern void _sub_4F627A(Lobby *);
_inline void boost::checked_delete<Lobby>(Lobby *x) // 0x4F627A
{
    mangled_assert("??$checked_delete@VLobby@@@boost@@YGXPAVLobby@@@Z");
    todo("implement");
    _sub_4F627A(x);
}

_extern void _sub_4F6297(StatMonitor *);
_inline void boost::checked_delete<StatMonitor>(StatMonitor *x) // 0x4F6297
{
    mangled_assert("??$checked_delete@VStatMonitor@@@boost@@YGXPAVStatMonitor@@@Z");
    todo("implement");
    _sub_4F6297(x);
}

_extern void _sub_4DCB17(CameraCommand::FocusDistance *);
_inline void boost::checked_delete<CameraCommand::FocusDistance>(CameraCommand::FocusDistance *x) // 0x4DCB17
{
    mangled_assert("??$checked_delete@UFocusDistance@CameraCommand@@@boost@@YGXPAUFocusDistance@CameraCommand@@@Z");
    todo("implement");
    _sub_4DCB17(x);
}

_extern void _sub_4C001C(SobWithMeshStatic::LoadingEnv *);
_inline void boost::checked_delete<SobWithMeshStatic::LoadingEnv>(SobWithMeshStatic::LoadingEnv *x) // 0x4C001C
{
    mangled_assert("??$checked_delete@VLoadingEnv@SobWithMeshStatic@@@boost@@YGXPAVLoadingEnv@SobWithMeshStatic@@@Z");
    todo("implement");
    _sub_4C001C(x);
}

_extern void _sub_4AB79C(ShipHold::Data *);
_inline void boost::checked_delete<ShipHold::Data>(ShipHold::Data *x) // 0x4AB79C
{
    mangled_assert("??$checked_delete@VData@ShipHold@@@boost@@YGXPAVData@ShipHold@@@Z");
    todo("implement");
    _sub_4AB79C(x);
}

_extern void _sub_496507(ShipStatic::LoadingEnv *);
_inline void boost::checked_delete<ShipStatic::LoadingEnv>(ShipStatic::LoadingEnv *x) // 0x496507
{
    mangled_assert("??$checked_delete@VLoadingEnv@ShipStatic@@@boost@@YGXPAVLoadingEnv@ShipStatic@@@Z");
    todo("implement");
    _sub_496507(x);
}

_extern void _sub_480B14(StaticModelRegistry::Data *);
_inline void boost::checked_delete<StaticModelRegistry::Data>(StaticModelRegistry::Data *x) // 0x480B14
{
    mangled_assert("??$checked_delete@VData@StaticModelRegistry@@@boost@@YGXPAVData@StaticModelRegistry@@@Z");
    todo("implement");
    _sub_480B14(x);
}

_extern void _sub_480B31(SobWithMeshStatic::Model *);
_inline void boost::checked_delete<SobWithMeshStatic::Model>(SobWithMeshStatic::Model *x) // 0x480B31
{
    mangled_assert("??$checked_delete@VModel@SobWithMeshStatic@@@boost@@YGXPAVModel@SobWithMeshStatic@@@Z");
    todo("implement");
    _sub_480B31(x);
}

_extern void _sub_47B5BB(SobStatic::LoadingEnv *);
_inline void boost::checked_delete<SobStatic::LoadingEnv>(SobStatic::LoadingEnv *x) // 0x47B5BB
{
    mangled_assert("??$checked_delete@VLoadingEnv@SobStatic@@@boost@@YGXPAVLoadingEnv@SobStatic@@@Z");
    todo("implement");
    _sub_47B5BB(x);
}

_extern void _sub_47B5D8(SobStatic::Model *);
_inline void boost::checked_delete<SobStatic::Model>(SobStatic::Model *x) // 0x47B5D8
{
    mangled_assert("??$checked_delete@VModel@SobStatic@@@boost@@YGXPAVModel@SobStatic@@@Z");
    todo("implement");
    _sub_47B5D8(x);
}

_extern void _sub_479DBB(SobIDShared *);
_inline void boost::checked_delete<SobIDShared>(SobIDShared *x) // 0x479DBB
{
    mangled_assert("??$checked_delete@VSobIDShared@@@boost@@YGXPAVSobIDShared@@@Z");
    todo("implement");
    _sub_479DBB(x);
}

_extern void _sub_46CE20(InGameDisconnect *);
_inline void boost::checked_delete<InGameDisconnect>(InGameDisconnect *x) // 0x46CE20
{
    mangled_assert("??$checked_delete@VInGameDisconnect@@@boost@@YGXPAVInGameDisconnect@@@Z");
    todo("implement");
    _sub_46CE20(x);
}

_extern void _sub_467767(Subtitle::Data *);
_inline void boost::checked_delete<Subtitle::Data>(Subtitle::Data *x) // 0x467767
{
    mangled_assert("??$checked_delete@VData@Subtitle@@@boost@@YGXPAVData@Subtitle@@@Z");
    todo("implement");
    _sub_467767(x);
}

_extern void _sub_45F5B9(FrameOrders *);
_inline void boost::checked_delete<FrameOrders>(FrameOrders *x) // 0x45F5B9
{
    mangled_assert("??$checked_delete@VFrameOrders@@@boost@@YGXPAVFrameOrders@@@Z");
    todo("implement");
    _sub_45F5B9(x);
}

_extern void _sub_669369(UI::Graphic *);
_inline void boost::checked_delete<UI::Graphic>(UI::Graphic *x) // 0x669369
{
    mangled_assert("??$checked_delete@VGraphic@UI@@@boost@@YGXPAVGraphic@UI@@@Z");
    todo("implement");
    _sub_669369(x);
}

_extern void _sub_671139(UIDirectRenderer *);
_inline void boost::checked_delete<UIDirectRenderer>(UIDirectRenderer *x) // 0x671139
{
    mangled_assert("??$checked_delete@VUIDirectRenderer@@@boost@@YGXPAVUIDirectRenderer@@@Z");
    todo("implement");
    _sub_671139(x);
}

_extern void _sub_680945(UI::SharedGraphicFactory::Data *);
_inline void boost::checked_delete<UI::SharedGraphicFactory::Data>(UI::SharedGraphicFactory::Data *x) // 0x680945
{
    mangled_assert("??$checked_delete@VData@SharedGraphicFactory@UI@@@boost@@YGXPAVData@SharedGraphicFactory@UI@@@Z");
    todo("implement");
    _sub_680945(x);
}

_extern void _sub_66FA66(UI::UISoundManager::Data *);
_inline void boost::checked_delete<UI::UISoundManager::Data>(UI::UISoundManager::Data *x) // 0x66FA66
{
    mangled_assert("??$checked_delete@VData@UISoundManager@UI@@@boost@@YGXPAVData@UISoundManager@UI@@@Z");
    todo("implement");
    _sub_66FA66(x);
}

_extern void _sub_6B6EA5(DestinationFormation::Bucket *);
_inline void boost::checked_delete<DestinationFormation::Bucket>(DestinationFormation::Bucket *x) // 0x6B6EA5
{
    mangled_assert("??$checked_delete@UBucket@DestinationFormation@@@boost@@YGXPAUBucket@DestinationFormation@@@Z");
    todo("implement");
    _sub_6B6EA5(x);
}

_extern void _sub_6B6EC2(DestinationFormation::Row *);
_inline void boost::checked_delete<DestinationFormation::Row>(DestinationFormation::Row *x) // 0x6B6EC2
{
    mangled_assert("??$checked_delete@URow@DestinationFormation@@@boost@@YGXPAURow@DestinationFormation@@@Z");
    todo("implement");
    _sub_6B6EC2(x);
}

_extern void _sub_6B6ED4(DestinationFormation::Wall *);
_inline void boost::checked_delete<DestinationFormation::Wall>(DestinationFormation::Wall *x) // 0x6B6ED4
{
    mangled_assert("??$checked_delete@UWall@DestinationFormation@@@boost@@YGXPAUWall@DestinationFormation@@@Z");
    todo("implement");
    _sub_6B6ED4(x);
}

_extern void _sub_6C3668(SoundParamManager::Data *);
_inline void boost::checked_delete<SoundParamManager::Data>(SoundParamManager::Data *x) // 0x6C3668
{
    mangled_assert("??$checked_delete@VData@SoundParamManager@@@boost@@YGXPAVData@SoundParamManager@@@Z");
    todo("implement");
    _sub_6C3668(x);
}

_extern void _sub_6CF064(SoundEntityList::Memory *);
_inline void boost::checked_delete<SoundEntityList::Memory>(SoundEntityList::Memory *x) // 0x6CF064
{
    mangled_assert("??$checked_delete@VMemory@SoundEntityList@@@boost@@YGXPAVMemory@SoundEntityList@@@Z");
    todo("implement");
    _sub_6CF064(x);
}

_extern void _sub_6EA6A8(FXBeam::Renderer *);
_inline void boost::checked_delete<FXBeam::Renderer>(FXBeam::Renderer *x) // 0x6EA6A8
{
    mangled_assert("??$checked_delete@VRenderer@FXBeam@@@boost@@YGXPAVRenderer@FXBeam@@@Z");
    todo("implement");
    _sub_6EA6A8(x);
}

_extern void _sub_6E1361(FXCollisionSurf *);
_inline void boost::checked_delete<FXCollisionSurf>(FXCollisionSurf *x) // 0x6E1361
{
    mangled_assert("??$checked_delete@VFXCollisionSurf@@@boost@@YGXPAVFXCollisionSurf@@@Z");
    todo("implement");
    _sub_6E1361(x);
}

_extern void _sub_6F1655(FXHyperspace::Renderer *);
_inline void boost::checked_delete<FXHyperspace::Renderer>(FXHyperspace::Renderer *x) // 0x6F1655
{
    mangled_assert("??$checked_delete@VRenderer@FXHyperspace@@@boost@@YGXPAVRenderer@FXHyperspace@@@Z");
    todo("implement");
    _sub_6F1655(x);
}

_extern void _sub_6DAA82(FXManager::Data *);
_inline void boost::checked_delete<FXManager::Data>(FXManager::Data *x) // 0x6DAA82
{
    mangled_assert("??$checked_delete@VData@FXManager@@@boost@@YGXPAVData@FXManager@@@Z");
    todo("implement");
    _sub_6DAA82(x);
}

_extern void _sub_6DAA9F(FXManager::Dynamics *);
_inline void boost::checked_delete<FXManager::Dynamics>(FXManager::Dynamics *x) // 0x6DAA9F
{
    mangled_assert("??$checked_delete@VDynamics@FXManager@@@boost@@YGXPAVDynamics@FXManager@@@Z");
    todo("implement");
    _sub_6DAA9F(x);
}

_extern void _sub_6DAAB0(FXManager::Type *);
_inline void boost::checked_delete<FXManager::Type>(FXManager::Type *x) // 0x6DAAB0
{
    mangled_assert("??$checked_delete@VType@FXManager@@@boost@@YGXPAVType@FXManager@@@Z");
    todo("implement");
    _sub_6DAAB0(x);
}

_extern void _sub_6E4956(FXRing::Renderer *);
_inline void boost::checked_delete<FXRing::Renderer>(FXRing::Renderer *x) // 0x6E4956
{
    mangled_assert("??$checked_delete@VRenderer@FXRing@@@boost@@YGXPAVRenderer@FXRing@@@Z");
    todo("implement");
    _sub_6E4956(x);
}

_extern void _sub_6ED479(FXTrail::Renderer *);
_inline void boost::checked_delete<FXTrail::Renderer>(FXTrail::Renderer *x) // 0x6ED479
{
    mangled_assert("??$checked_delete@VRenderer@FXTrail@@@boost@@YGXPAVRenderer@FXTrail@@@Z");
    todo("implement");
    _sub_6ED479(x);
}

_extern void _sub_70EC2D(LuaRuleSystem::Data *);
_inline void boost::checked_delete<LuaRuleSystem::Data>(LuaRuleSystem::Data *x) // 0x70EC2D
{
    mangled_assert("??$checked_delete@VData@LuaRuleSystem@@@boost@@YGXPAVData@LuaRuleSystem@@@Z");
    todo("implement");
    _sub_70EC2D(x);
}

_extern void _sub_5DCF56(FatVertex *);
_inline void boost::checked_array_delete<FatVertex>(FatVertex *x) // 0x5DCF56
{
    mangled_assert("??$checked_array_delete@UFatVertex@@@boost@@YGXPAUFatVertex@@@Z");
    todo("implement");
    _sub_5DCF56(x);
}

_extern void _sub_56BEFA(unsigned __int32 *);
_inline void boost::checked_array_delete<unsigned int>(unsigned __int32 *x) // 0x56BEFA
{
    mangled_assert("??$checked_array_delete@I@boost@@YGXPAI@Z");
    todo("implement");
    _sub_56BEFA(x);
}

_extern void _sub_56BF14(vector4 *);
_inline void boost::checked_array_delete<vector4>(vector4 *x) // 0x56BF14
{
    mangled_assert("??$checked_array_delete@Vvector4@@@boost@@YGXPAVvector4@@@Z");
    todo("implement");
    _sub_56BF14(x);
}

_extern void _sub_5E59F8(boost::checked_deleter<BasicMesh> const *const, BasicMesh *);
_inline void boost::checked_deleter<BasicMesh>::operator()(BasicMesh *) const // 0x5E59F8
{
    mangled_assert("??R?$checked_deleter@VBasicMesh@@@boost@@QBEXPAVBasicMesh@@@Z");
    todo("implement");
    _sub_5E59F8(this, arg);
}

_extern void _sub_5E5A09(boost::checked_deleter<StarList> const *const, StarList *);
_inline void boost::checked_deleter<StarList>::operator()(StarList *) const // 0x5E5A09
{
    mangled_assert("??R?$checked_deleter@VStarList@@@boost@@QBEXPAVStarList@@@Z");
    todo("implement");
    _sub_5E5A09(this, arg);
}

_extern void _sub_5E4900(boost::checked_deleter<BgLightAnim::Data> const *const, BgLightAnim::Data *);
_inline void boost::checked_deleter<BgLightAnim::Data>::operator()(BgLightAnim::Data *) const // 0x5E4900
{
    mangled_assert("??R?$checked_deleter@VData@BgLightAnim@@@boost@@QBEXPAVData@BgLightAnim@@@Z");
    todo("implement");
    _sub_5E4900(this, arg);
}

_extern void _sub_481A6A(boost::checked_deleter<SobWithMeshStatic::Model> const *const, SobWithMeshStatic::Model *);
_inline void boost::checked_deleter<SobWithMeshStatic::Model>::operator()(SobWithMeshStatic::Model *) const // 0x481A6A
{
    mangled_assert("??R?$checked_deleter@VModel@SobWithMeshStatic@@@boost@@QBEXPAVModel@SobWithMeshStatic@@@Z");
    todo("implement");
    _sub_481A6A(this, arg);
}

_extern void _sub_47C67A(boost::checked_deleter<SobStatic::Model> const *const, SobStatic::Model *);
_inline void boost::checked_deleter<SobStatic::Model>::operator()(SobStatic::Model *) const // 0x47C67A
{
    mangled_assert("??R?$checked_deleter@VModel@SobStatic@@@boost@@QBEXPAVModel@SobStatic@@@Z");
    todo("implement");
    _sub_47C67A(this, arg);
}

_extern void _sub_47A2B6(boost::checked_deleter<SobIDShared> const *const, SobIDShared *);
_inline void boost::checked_deleter<SobIDShared>::operator()(SobIDShared *) const // 0x47A2B6
{
    mangled_assert("??R?$checked_deleter@VSobIDShared@@@boost@@QBEXPAVSobIDShared@@@Z");
    todo("implement");
    _sub_47A2B6(this, arg);
}

_extern void _sub_461232(boost::checked_deleter<FrameOrders> const *const, FrameOrders *);
_inline void boost::checked_deleter<FrameOrders>::operator()(FrameOrders *) const // 0x461232
{
    mangled_assert("??R?$checked_deleter@VFrameOrders@@@boost@@QBEXPAVFrameOrders@@@Z");
    todo("implement");
    _sub_461232(this, arg);
}

_extern void _sub_66A719(boost::checked_deleter<UI::Graphic> const *const, UI::Graphic *);
_inline void boost::checked_deleter<UI::Graphic>::operator()(UI::Graphic *) const // 0x66A719
{
    mangled_assert("??R?$checked_deleter@VGraphic@UI@@@boost@@QBEXPAVGraphic@UI@@@Z");
    todo("implement");
    _sub_66A719(this, arg);
}

_extern void _sub_6B7705(boost::checked_deleter<DestinationFormation::Bucket> const *const, DestinationFormation::Bucket *);
_inline void boost::checked_deleter<DestinationFormation::Bucket>::operator()(DestinationFormation::Bucket *) const // 0x6B7705
{
    mangled_assert("??R?$checked_deleter@UBucket@DestinationFormation@@@boost@@QBEXPAUBucket@DestinationFormation@@@Z");
    todo("implement");
    _sub_6B7705(this, arg);
}

_extern void _sub_6B770A(boost::checked_deleter<DestinationFormation::Row> const *const, DestinationFormation::Row *);
_inline void boost::checked_deleter<DestinationFormation::Row>::operator()(DestinationFormation::Row *) const // 0x6B770A
{
    mangled_assert("??R?$checked_deleter@URow@DestinationFormation@@@boost@@QBEXPAURow@DestinationFormation@@@Z");
    todo("implement");
    _sub_6B770A(this, arg);
}

_extern void _sub_6B771C(boost::checked_deleter<DestinationFormation::Wall> const *const, DestinationFormation::Wall *);
_inline void boost::checked_deleter<DestinationFormation::Wall>::operator()(DestinationFormation::Wall *) const // 0x6B771C
{
    mangled_assert("??R?$checked_deleter@UWall@DestinationFormation@@@boost@@QBEXPAUWall@DestinationFormation@@@Z");
    todo("implement");
    _sub_6B771C(this, arg);
}

_extern void _sub_6DC862(boost::checked_deleter<FXManager::Dynamics> const *const, FXManager::Dynamics *);
_inline void boost::checked_deleter<FXManager::Dynamics>::operator()(FXManager::Dynamics *) const // 0x6DC862
{
    mangled_assert("??R?$checked_deleter@VDynamics@FXManager@@@boost@@QBEXPAVDynamics@FXManager@@@Z");
    todo("implement");
    _sub_6DC862(this, arg);
}

_extern void _sub_6DC873(boost::checked_deleter<FXManager::Type> const *const, FXManager::Type *);
_inline void boost::checked_deleter<FXManager::Type>::operator()(FXManager::Type *) const // 0x6DC873
{
    mangled_assert("??R?$checked_deleter@VType@FXManager@@@boost@@QBEXPAVType@FXManager@@@Z");
    todo("implement");
    _sub_6DC873(this, arg);
}

/* ---------- private code */

#endif // __CHECKED_DELETE_H__
/* combined */
#ifndef __CHECKED_DELETE_H__
#define __CHECKED_DELETE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CHECKED_DELETE_H__
/* combined */
#ifndef __CHECKED_DELETE_H__
#define __CHECKED_DELETE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct boost::checked_deleter<LocalizerImp::Resource>
{
    typedef void result_type;
    typedef LocalizerImp::Resource *argument_type;
    void operator()(LocalizerImp::Resource *) const;
};
static_assert(sizeof(boost::checked_deleter<LocalizerImp::Resource>) == 1, "Invalid boost::checked_deleter<LocalizerImp::Resource> size");

/* ---------- prototypes */

extern _inline void boost::checked_delete<LocalizerImp::Resource>(LocalizerImp::Resource *x);
extern _inline void boost::checked_array_delete<unsigned short>(unsigned short *x);

/* ---------- globals */

/* ---------- public code */

_extern void _sub_10002F4C(LocalizerImp::Resource *);
_inline void boost::checked_delete<LocalizerImp::Resource>(LocalizerImp::Resource *x) // 0x10002F4C
{
    mangled_assert("??$checked_delete@VResource@LocalizerImp@@@boost@@YGXPAVResource@LocalizerImp@@@Z");
    todo("implement");
    _sub_10002F4C(x);
}

_extern void _sub_100011E2(unsigned short *);
_inline void boost::checked_array_delete<unsigned short>(unsigned short *x) // 0x100011E2
{
    mangled_assert("??$checked_array_delete@G@boost@@YGXPAG@Z");
    todo("implement");
    _sub_100011E2(x);
}

_extern void _sub_10003628(boost::checked_deleter<LocalizerImp::Resource> const *const, LocalizerImp::Resource *);
_inline void boost::checked_deleter<LocalizerImp::Resource>::operator()(LocalizerImp::Resource *) const // 0x10003628
{
    mangled_assert("??R?$checked_deleter@VResource@LocalizerImp@@@boost@@QBEXPAVResource@LocalizerImp@@@Z");
    todo("implement");
    _sub_10003628(this, arg);
}

/* ---------- private code */

#endif // __CHECKED_DELETE_H__
/* combined */
#ifndef __CHECKED_DELETE_H__
#define __CHECKED_DELETE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CHECKED_DELETE_H__
/* combined */
#ifndef __CHECKED_DELETE_H__
#define __CHECKED_DELETE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern _inline void boost::checked_delete<LuaConfig::Data>(LuaConfig::Data *x);

/* ---------- globals */

/* ---------- public code */

_extern void _sub_10001808(LuaConfig::Data *);
_inline void boost::checked_delete<LuaConfig::Data>(LuaConfig::Data *x) // 0x10001808
{
    mangled_assert("??$checked_delete@VData@LuaConfig@@@boost@@YGXPAVData@LuaConfig@@@Z");
    todo("implement");
    _sub_10001808(x);
}

/* ---------- private code */

#endif // __CHECKED_DELETE_H__
/* combined */
#ifndef __CHECKED_DELETE_H__
#define __CHECKED_DELETE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct boost::checked_deleter<StateCommandBlock>
{
    typedef void result_type;
    typedef StateCommandBlock *argument_type;
    void operator()(StateCommandBlock *) const;
};
static_assert(sizeof(boost::checked_deleter<StateCommandBlock>) == 1, "Invalid boost::checked_deleter<StateCommandBlock> size");

/* ---------- prototypes */

extern _inline void boost::checked_delete<StateCommandBlock>(StateCommandBlock *x);
extern _inline void boost::checked_delete<std::vector<FatVertex,std::allocator<FatVertex> > >(std::vector<FatVertex,std::allocator<FatVertex> > *x);
extern _inline void boost::checked_delete<FatVertex>(FatVertex *x);
extern _inline void boost::checked_array_delete<int>(__int32 *x);
extern _inline void boost::checked_array_delete<unsigned int>(unsigned __int32 *x);
extern _inline void boost::checked_array_delete<FatVertex>(FatVertex *x);

/* ---------- globals */

/* ---------- public code */

_extern void _sub_100B4D10(StateCommandBlock *);
_inline void boost::checked_delete<StateCommandBlock>(StateCommandBlock *x) // 0x100B4D10
{
    mangled_assert("??$checked_delete@VStateCommandBlock@@@boost@@YGXPAVStateCommandBlock@@@Z");
    todo("implement");
    _sub_100B4D10(x);
}

_extern void _sub_100980F0(std::vector<FatVertex,std::allocator<FatVertex> > *);
_inline void boost::checked_delete<std::vector<FatVertex,std::allocator<FatVertex> > >(std::vector<FatVertex,std::allocator<FatVertex> > *x) // 0x100980F0
{
    mangled_assert("??$checked_delete@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@boost@@YGXPAV?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@Z");
    todo("implement");
    _sub_100980F0(x);
}

_extern void _sub_10048360(FatVertex *);
_inline void boost::checked_delete<FatVertex>(FatVertex *x) // 0x10048360
{
    mangled_assert("??$checked_delete@UFatVertex@@@boost@@YGXPAUFatVertex@@@Z");
    todo("implement");
    _sub_10048360(x);
}

_extern void _sub_100A6630(__int32 *);
_inline void boost::checked_array_delete<int>(__int32 *x) // 0x100A6630
{
    mangled_assert("??$checked_array_delete@H@boost@@YGXPAH@Z");
    todo("implement");
    _sub_100A6630(x);
}

_extern void _sub_100A0F20(unsigned __int32 *);
_inline void boost::checked_array_delete<unsigned int>(unsigned __int32 *x) // 0x100A0F20
{
    mangled_assert("??$checked_array_delete@I@boost@@YGXPAI@Z");
    todo("implement");
    _sub_100A0F20(x);
}

_extern void _sub_10048350(FatVertex *);
_inline void boost::checked_array_delete<FatVertex>(FatVertex *x) // 0x10048350
{
    mangled_assert("??$checked_array_delete@UFatVertex@@@boost@@YGXPAUFatVertex@@@Z");
    todo("implement");
    _sub_10048350(x);
}

_extern void _sub_100B6070(boost::checked_deleter<StateCommandBlock> const *const, StateCommandBlock *);
_inline void boost::checked_deleter<StateCommandBlock>::operator()(StateCommandBlock *) const // 0x100B6070
{
    mangled_assert("??R?$checked_deleter@VStateCommandBlock@@@boost@@QBEXPAVStateCommandBlock@@@Z");
    todo("implement");
    _sub_100B6070(this, arg);
}

/* ---------- private code */

#endif // __CHECKED_DELETE_H__
/* combined */
#ifndef __CHECKED_DELETE_H__
#define __CHECKED_DELETE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CHECKED_DELETE_H__
/* combined */
#ifndef __CHECKED_DELETE_H__
#define __CHECKED_DELETE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CHECKED_DELETE_H__
/* combined */
#ifndef __CHECKED_DELETE_H__
#define __CHECKED_DELETE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CHECKED_DELETE_H__
/* combined */
#ifndef __CHECKED_DELETE_H__
#define __CHECKED_DELETE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CHECKED_DELETE_H__
