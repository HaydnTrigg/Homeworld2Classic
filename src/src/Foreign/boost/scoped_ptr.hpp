#ifndef __SCOPED_PTR_H__
#define __SCOPED_PTR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::scoped_ptr<ByteStream>
{
private:
    ByteStream *ptr; // 0x0
public:
    scoped_ptr<ByteStream>(std::auto_ptr<ByteStream>);
    _inline scoped_ptr<ByteStream>(ByteStream *);
private:
    scoped_ptr<ByteStream>(boost::scoped_ptr<ByteStream> const &);
    boost::scoped_ptr<ByteStream> &operator=(boost::scoped_ptr<ByteStream> const &);
    typedef boost::scoped_ptr<ByteStream> this_type;
    typedef ByteStream element_type;
public:
    _inline ~scoped_ptr<ByteStream>();
    void reset(ByteStream *);
    _inline ByteStream &operator*() const;
    ByteStream *operator->() const;
    _inline ByteStream *get() const;
    typedef ByteStream **unspecified_bool_type() const;
    ByteStream **operator class ByteStream *(__thiscall boost::scoped_ptr<class ByteStream>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<ByteStream> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<ByteStream>) == 4, "Invalid boost::scoped_ptr<ByteStream> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_10007DD0(boost::scoped_ptr<ByteStream> *const, ByteStream *);
_inline boost::scoped_ptr<ByteStream>::scoped_ptr<ByteStream>(ByteStream *) // 0x10007DD0
{
    mangled_assert("??0?$scoped_ptr@VByteStream@@@boost@@QAE@PAVByteStream@@@Z");
    todo("implement");
    _sub_10007DD0(this, arg);
}

_extern void _sub_10007F06(boost::scoped_ptr<ByteStream> *const);
_inline boost::scoped_ptr<ByteStream>::~scoped_ptr<ByteStream>() // 0x10007F06
{
    mangled_assert("??1?$scoped_ptr@VByteStream@@@boost@@QAE@XZ");
    todo("implement");
    _sub_10007F06(this);
}

_extern ByteStream &_sub_100080FA(boost::scoped_ptr<ByteStream> const *const);
_inline ByteStream &boost::scoped_ptr<ByteStream>::operator*() const // 0x100080FA
{
    mangled_assert("??D?$scoped_ptr@VByteStream@@@boost@@QBEAAVByteStream@@XZ");
    todo("implement");
    ByteStream & __result = _sub_100080FA(this);
    return __result;
}

_extern ByteStream *_sub_10009966(boost::scoped_ptr<ByteStream> const *const);
_inline ByteStream *boost::scoped_ptr<ByteStream>::get() const // 0x10009966
{
    mangled_assert("?get@?$scoped_ptr@VByteStream@@@boost@@QBEPAVByteStream@@XZ");
    todo("implement");
    ByteStream * __result = _sub_10009966(this);
    return __result;
}

/* ---------- private code */

#endif // __SCOPED_PTR_H__
/* combined */
#ifndef __SCOPED_PTR_H__
#define __SCOPED_PTR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::scoped_ptr<LuaConfig::Data>
{
private:
    LuaConfig::Data *ptr; // 0x0
public:
    scoped_ptr<LuaConfig::Data>(std::auto_ptr<LuaConfig::Data>);
    scoped_ptr<LuaConfig::Data>(LuaConfig::Data *);
private:
    scoped_ptr<LuaConfig::Data>(boost::scoped_ptr<LuaConfig::Data> const &);
    boost::scoped_ptr<LuaConfig::Data> &operator=(boost::scoped_ptr<LuaConfig::Data> const &);
    typedef boost::scoped_ptr<LuaConfig::Data> this_type;
    class element_type;
public:
    ~scoped_ptr<LuaConfig::Data>();
    void reset(LuaConfig::Data *);
    LuaConfig::Data &operator*() const;
    LuaConfig::Data *operator->() const;
    LuaConfig::Data *get() const;
    typedef LuaConfig::Data **unspecified_bool_type() const;
    LuaConfig::Data **operator class LuaConfig::Data *(__thiscall boost::scoped_ptr<class LuaConfig::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<LuaConfig::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<LuaConfig::Data>) == 4, "Invalid boost::scoped_ptr<LuaConfig::Data> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SCOPED_PTR_H__
/* combined */
#ifndef __SCOPED_PTR_H__
#define __SCOPED_PTR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SCOPED_PTR_H__
/* combined */
#ifndef __SCOPED_PTR_H__
#define __SCOPED_PTR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::scoped_ptr<SobStatic::LoadingEnv>
{
private:
    SobStatic::LoadingEnv *ptr; // 0x0
public:
    scoped_ptr<SobStatic::LoadingEnv>(std::auto_ptr<SobStatic::LoadingEnv>);
    _inline scoped_ptr<SobStatic::LoadingEnv>(SobStatic::LoadingEnv *);
private:
    scoped_ptr<SobStatic::LoadingEnv>(boost::scoped_ptr<SobStatic::LoadingEnv> const &);
    boost::scoped_ptr<SobStatic::LoadingEnv> &operator=(boost::scoped_ptr<SobStatic::LoadingEnv> const &);
    typedef boost::scoped_ptr<SobStatic::LoadingEnv> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<SobStatic::LoadingEnv>();
    _inline void reset(SobStatic::LoadingEnv *);
    SobStatic::LoadingEnv &operator*() const;
    _inline SobStatic::LoadingEnv *operator->() const;
    _inline SobStatic::LoadingEnv *get() const;
    typedef SobStatic::LoadingEnv **unspecified_bool_type() const;
    SobStatic::LoadingEnv **operator class SobStatic::LoadingEnv *(__thiscall boost::scoped_ptr<class SobStatic::LoadingEnv>::* )(void) const() const() const;
    bool operator!() const;
    _inline void swap(boost::scoped_ptr<SobStatic::LoadingEnv> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<SobStatic::LoadingEnv>) == 4, "Invalid boost::scoped_ptr<SobStatic::LoadingEnv> size");

class boost::scoped_ptr<SobWithMeshStatic::LoadingEnv>
{
private:
    SobWithMeshStatic::LoadingEnv *ptr; // 0x0
public:
    scoped_ptr<SobWithMeshStatic::LoadingEnv>(std::auto_ptr<SobWithMeshStatic::LoadingEnv>);
    _inline scoped_ptr<SobWithMeshStatic::LoadingEnv>(SobWithMeshStatic::LoadingEnv *);
private:
    scoped_ptr<SobWithMeshStatic::LoadingEnv>(boost::scoped_ptr<SobWithMeshStatic::LoadingEnv> const &);
    boost::scoped_ptr<SobWithMeshStatic::LoadingEnv> &operator=(boost::scoped_ptr<SobWithMeshStatic::LoadingEnv> const &);
    typedef boost::scoped_ptr<SobWithMeshStatic::LoadingEnv> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<SobWithMeshStatic::LoadingEnv>();
    _inline void reset(SobWithMeshStatic::LoadingEnv *);
    SobWithMeshStatic::LoadingEnv &operator*() const;
    _inline SobWithMeshStatic::LoadingEnv *operator->() const;
    _inline SobWithMeshStatic::LoadingEnv *get() const;
    typedef SobWithMeshStatic::LoadingEnv **unspecified_bool_type() const;
    SobWithMeshStatic::LoadingEnv **operator class SobWithMeshStatic::LoadingEnv *(__thiscall boost::scoped_ptr<class SobWithMeshStatic::LoadingEnv>::* )(void) const() const() const;
    bool operator!() const;
    _inline void swap(boost::scoped_ptr<SobWithMeshStatic::LoadingEnv> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<SobWithMeshStatic::LoadingEnv>) == 4, "Invalid boost::scoped_ptr<SobWithMeshStatic::LoadingEnv> size");

class boost::scoped_ptr<Timer>
{
private:
    Timer *ptr; // 0x0
public:
    scoped_ptr<Timer>(std::auto_ptr<Timer>);
    _inline scoped_ptr<Timer>(Timer *);
private:
    scoped_ptr<Timer>(boost::scoped_ptr<Timer> const &);
    boost::scoped_ptr<Timer> &operator=(boost::scoped_ptr<Timer> const &);
    typedef boost::scoped_ptr<Timer> this_type;
    typedef Timer element_type;
public:
    _inline ~scoped_ptr<Timer>();
    _inline void reset(Timer *);
    Timer &operator*() const;
    Timer *operator->() const;
    _inline Timer *get() const;
    typedef Timer **unspecified_bool_type() const;
    Timer **operator class Timer *(__thiscall boost::scoped_ptr<class Timer>::* )(void) const() const() const;
    bool operator!() const;
    _inline void swap(boost::scoped_ptr<Timer> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<Timer>) == 4, "Invalid boost::scoped_ptr<Timer> size");

class boost::scoped_ptr<DecalRefMesh::Data>
{
private:
    DecalRefMesh::Data *ptr; // 0x0
public:
    scoped_ptr<DecalRefMesh::Data>(std::auto_ptr<DecalRefMesh::Data>);
    _inline scoped_ptr<DecalRefMesh::Data>(DecalRefMesh::Data *);
private:
    scoped_ptr<DecalRefMesh::Data>(boost::scoped_ptr<DecalRefMesh::Data> const &);
    boost::scoped_ptr<DecalRefMesh::Data> &operator=(boost::scoped_ptr<DecalRefMesh::Data> const &);
    typedef boost::scoped_ptr<DecalRefMesh::Data> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<DecalRefMesh::Data>();
    void reset(DecalRefMesh::Data *);
    DecalRefMesh::Data &operator*() const;
    _inline DecalRefMesh::Data *operator->() const;
    DecalRefMesh::Data *get() const;
    typedef DecalRefMesh::Data **unspecified_bool_type() const;
    DecalRefMesh::Data **operator class DecalRefMesh::Data *(__thiscall boost::scoped_ptr<class DecalRefMesh::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<DecalRefMesh::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<DecalRefMesh::Data>) == 4, "Invalid boost::scoped_ptr<DecalRefMesh::Data> size");

class boost::scoped_ptr<AppObj::Data>
{
private:
    AppObj::Data *ptr; // 0x0
public:
    scoped_ptr<AppObj::Data>(std::auto_ptr<AppObj::Data>);
    _inline scoped_ptr<AppObj::Data>(AppObj::Data *);
private:
    scoped_ptr<AppObj::Data>(boost::scoped_ptr<AppObj::Data> const &);
    boost::scoped_ptr<AppObj::Data> &operator=(boost::scoped_ptr<AppObj::Data> const &);
    typedef boost::scoped_ptr<AppObj::Data> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<AppObj::Data>();
    void reset(AppObj::Data *);
    AppObj::Data &operator*() const;
    _inline AppObj::Data *operator->() const;
    AppObj::Data *get() const;
    typedef AppObj::Data **unspecified_bool_type() const;
    AppObj::Data **operator class AppObj::Data *(__thiscall boost::scoped_ptr<class AppObj::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<AppObj::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<AppObj::Data>) == 4, "Invalid boost::scoped_ptr<AppObj::Data> size");

class boost::scoped_ptr<LuaConfig::Data>
{
private:
    LuaConfig::Data *ptr; // 0x0
public:
    scoped_ptr<LuaConfig::Data>(std::auto_ptr<LuaConfig::Data>);
    scoped_ptr<LuaConfig::Data>(LuaConfig::Data *);
private:
    scoped_ptr<LuaConfig::Data>(boost::scoped_ptr<LuaConfig::Data> const &);
    boost::scoped_ptr<LuaConfig::Data> &operator=(boost::scoped_ptr<LuaConfig::Data> const &);
    typedef boost::scoped_ptr<LuaConfig::Data> this_type;
    class element_type;
public:
    ~scoped_ptr<LuaConfig::Data>();
    void reset(LuaConfig::Data *);
    LuaConfig::Data &operator*() const;
    LuaConfig::Data *operator->() const;
    LuaConfig::Data *get() const;
    typedef LuaConfig::Data **unspecified_bool_type() const;
    LuaConfig::Data **operator class LuaConfig::Data *(__thiscall boost::scoped_ptr<class LuaConfig::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<LuaConfig::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<LuaConfig::Data>) == 4, "Invalid boost::scoped_ptr<LuaConfig::Data> size");

class boost::scoped_ptr<SensorsManager::Data>
{
private:
    SensorsManager::Data *ptr; // 0x0
public:
    scoped_ptr<SensorsManager::Data>(std::auto_ptr<SensorsManager::Data>);
    _inline scoped_ptr<SensorsManager::Data>(SensorsManager::Data *);
private:
    scoped_ptr<SensorsManager::Data>(boost::scoped_ptr<SensorsManager::Data> const &);
    boost::scoped_ptr<SensorsManager::Data> &operator=(boost::scoped_ptr<SensorsManager::Data> const &);
    typedef boost::scoped_ptr<SensorsManager::Data> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<SensorsManager::Data>();
    void reset(SensorsManager::Data *);
    SensorsManager::Data &operator*() const;
    _inline SensorsManager::Data *operator->() const;
    SensorsManager::Data *get() const;
    typedef SensorsManager::Data **unspecified_bool_type() const;
    SensorsManager::Data **operator class SensorsManager::Data *(__thiscall boost::scoped_ptr<class SensorsManager::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<SensorsManager::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<SensorsManager::Data>) == 4, "Invalid boost::scoped_ptr<SensorsManager::Data> size");

class boost::scoped_ptr<SoundParamManager::Data>
{
private:
    SoundParamManager::Data *ptr; // 0x0
public:
    scoped_ptr<SoundParamManager::Data>(std::auto_ptr<SoundParamManager::Data>);
    _inline scoped_ptr<SoundParamManager::Data>(SoundParamManager::Data *);
private:
    scoped_ptr<SoundParamManager::Data>(boost::scoped_ptr<SoundParamManager::Data> const &);
    boost::scoped_ptr<SoundParamManager::Data> &operator=(boost::scoped_ptr<SoundParamManager::Data> const &);
    typedef boost::scoped_ptr<SoundParamManager::Data> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<SoundParamManager::Data>();
    void reset(SoundParamManager::Data *);
    SoundParamManager::Data &operator*() const;
    _inline SoundParamManager::Data *operator->() const;
    SoundParamManager::Data *get() const;
    typedef SoundParamManager::Data **unspecified_bool_type() const;
    SoundParamManager::Data **operator class SoundParamManager::Data *(__thiscall boost::scoped_ptr<class SoundParamManager::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<SoundParamManager::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<SoundParamManager::Data>) == 4, "Invalid boost::scoped_ptr<SoundParamManager::Data> size");

class boost::scoped_ptr<UI::GameMenuData>
{
private:
    UI::GameMenuData *ptr; // 0x0
public:
    scoped_ptr<UI::GameMenuData>(std::auto_ptr<UI::GameMenuData>);
    _inline scoped_ptr<UI::GameMenuData>(UI::GameMenuData *);
private:
    scoped_ptr<UI::GameMenuData>(boost::scoped_ptr<UI::GameMenuData> const &);
    boost::scoped_ptr<UI::GameMenuData> &operator=(boost::scoped_ptr<UI::GameMenuData> const &);
    typedef boost::scoped_ptr<UI::GameMenuData> this_type;
    typedef UI::GameMenuData element_type;
public:
    _inline ~scoped_ptr<UI::GameMenuData>();
    void reset(UI::GameMenuData *);
    UI::GameMenuData &operator*() const;
    _inline UI::GameMenuData *operator->() const;
    UI::GameMenuData *get() const;
    typedef UI::GameMenuData **unspecified_bool_type() const;
    UI::GameMenuData **operator struct UI::GameMenuData *(__thiscall boost::scoped_ptr<struct UI::GameMenuData>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<UI::GameMenuData> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<UI::GameMenuData>) == 4, "Invalid boost::scoped_ptr<UI::GameMenuData> size");

class boost::scoped_ptr<PlayerProfile>
{
private:
    PlayerProfile *ptr; // 0x0
public:
    scoped_ptr<PlayerProfile>(std::auto_ptr<PlayerProfile>);
    _inline scoped_ptr<PlayerProfile>(PlayerProfile *);
private:
    scoped_ptr<PlayerProfile>(boost::scoped_ptr<PlayerProfile> const &);
    boost::scoped_ptr<PlayerProfile> &operator=(boost::scoped_ptr<PlayerProfile> const &);
    typedef boost::scoped_ptr<PlayerProfile> this_type;
    typedef PlayerProfile element_type;
public:
    _inline ~scoped_ptr<PlayerProfile>();
    _inline void reset(PlayerProfile *);
    PlayerProfile &operator*() const;
    _inline PlayerProfile *operator->() const;
    _inline PlayerProfile *get() const;
    typedef PlayerProfile **unspecified_bool_type() const;
    PlayerProfile **operator class PlayerProfile *(__thiscall boost::scoped_ptr<class PlayerProfile>::* )(void) const() const() const;
    bool operator!() const;
    _inline void swap(boost::scoped_ptr<PlayerProfile> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<PlayerProfile>) == 4, "Invalid boost::scoped_ptr<PlayerProfile> size");

class boost::scoped_ptr<`anonymous namespace'::Data>
{
private:
    `anonymous-namespace'::Data *ptr; // 0x0
public:
    scoped_ptr<`anonymous namespace'::Data>(std::auto_ptr<`anonymous namespace'::Data>);
    scoped_ptr<`anonymous namespace'::Data>(`anonymous-namespace'::Data *);
private:
    scoped_ptr<`anonymous namespace'::Data>(boost::scoped_ptr<`anonymous namespace'::Data> const &);
    boost::scoped_ptr<`anonymous namespace'::Data> &operator=(boost::scoped_ptr<`anonymous namespace'::Data> const &);
    typedef boost::scoped_ptr<`anonymous namespace'::Data> this_type;
    typedef `anonymous-namespace'::Data element_type;
public:
    ~scoped_ptr<`anonymous namespace'::Data>();
    void reset(`anonymous-namespace'::Data *);
    `anonymous-namespace'::Data &operator*() const;
    `anonymous-namespace'::Data *operator->() const;
    `anonymous-namespace'::Data *get() const;
    typedef `anonymous-namespace'::Data **unspecified_bool_type() const;
    `anonymous-namespace'::Data **operator struct `anonymous-namespace'::Data *(__thiscall boost::scoped_ptr<struct `anonymous namespace'::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<`anonymous namespace'::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<`anonymous namespace'::Data>) == 4, "Invalid boost::scoped_ptr<`anonymous namespace'::Data> size");

class boost::scoped_ptr<UI::UISoundManager::Data>
{
private:
    UI::UISoundManager::Data *ptr; // 0x0
public:
    scoped_ptr<UI::UISoundManager::Data>(std::auto_ptr<UI::UISoundManager::Data>);
    _inline scoped_ptr<UI::UISoundManager::Data>(UI::UISoundManager::Data *);
private:
    scoped_ptr<UI::UISoundManager::Data>(boost::scoped_ptr<UI::UISoundManager::Data> const &);
    boost::scoped_ptr<UI::UISoundManager::Data> &operator=(boost::scoped_ptr<UI::UISoundManager::Data> const &);
    typedef boost::scoped_ptr<UI::UISoundManager::Data> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<UI::UISoundManager::Data>();
    void reset(UI::UISoundManager::Data *);
    UI::UISoundManager::Data &operator*() const;
    _inline UI::UISoundManager::Data *operator->() const;
    UI::UISoundManager::Data *get() const;
    typedef UI::UISoundManager::Data **unspecified_bool_type() const;
    UI::UISoundManager::Data **operator class UI::UISoundManager::Data *(__thiscall boost::scoped_ptr<class UI::UISoundManager::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<UI::UISoundManager::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<UI::UISoundManager::Data>) == 4, "Invalid boost::scoped_ptr<UI::UISoundManager::Data> size");

class boost::scoped_ptr<UIDirectRenderer>
{
private:
    UIDirectRenderer *ptr; // 0x0
public:
    scoped_ptr<UIDirectRenderer>(std::auto_ptr<UIDirectRenderer>);
    _inline scoped_ptr<UIDirectRenderer>(UIDirectRenderer *);
private:
    scoped_ptr<UIDirectRenderer>(boost::scoped_ptr<UIDirectRenderer> const &);
    boost::scoped_ptr<UIDirectRenderer> &operator=(boost::scoped_ptr<UIDirectRenderer> const &);
    typedef boost::scoped_ptr<UIDirectRenderer> this_type;
    typedef UIDirectRenderer element_type;
public:
    _inline ~scoped_ptr<UIDirectRenderer>();
    void reset(UIDirectRenderer *);
    UIDirectRenderer &operator*() const;
    _inline UIDirectRenderer *operator->() const;
    _inline UIDirectRenderer *get() const;
    typedef UIDirectRenderer **unspecified_bool_type() const;
    UIDirectRenderer **operator class UIDirectRenderer *(__thiscall boost::scoped_ptr<class UIDirectRenderer>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<UIDirectRenderer> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<UIDirectRenderer>) == 4, "Invalid boost::scoped_ptr<UIDirectRenderer> size");

class boost::scoped_ptr<UI::MovieTimer>
{
private:
    UI::MovieTimer *ptr; // 0x0
public:
    scoped_ptr<UI::MovieTimer>(std::auto_ptr<UI::MovieTimer>);
    _inline scoped_ptr<UI::MovieTimer>(UI::MovieTimer *);
private:
    scoped_ptr<UI::MovieTimer>(boost::scoped_ptr<UI::MovieTimer> const &);
    boost::scoped_ptr<UI::MovieTimer> &operator=(boost::scoped_ptr<UI::MovieTimer> const &);
    typedef boost::scoped_ptr<UI::MovieTimer> this_type;
    typedef UI::MovieTimer element_type;
public:
    _inline ~scoped_ptr<UI::MovieTimer>();
    _inline void reset(UI::MovieTimer *);
    UI::MovieTimer &operator*() const;
    _inline UI::MovieTimer *operator->() const;
    _inline UI::MovieTimer *get() const;
    typedef UI::MovieTimer **unspecified_bool_type() const;
    UI::MovieTimer **operator class UI::MovieTimer *(__thiscall boost::scoped_ptr<class UI::MovieTimer>::* )(void) const() const() const;
    bool operator!() const;
    _inline void swap(boost::scoped_ptr<UI::MovieTimer> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<UI::MovieTimer>) == 4, "Invalid boost::scoped_ptr<UI::MovieTimer> size");

class boost::scoped_ptr<UI::MovieSpeech>
{
private:
    UI::MovieSpeech *ptr; // 0x0
public:
    scoped_ptr<UI::MovieSpeech>(std::auto_ptr<UI::MovieSpeech>);
    _inline scoped_ptr<UI::MovieSpeech>(UI::MovieSpeech *);
private:
    scoped_ptr<UI::MovieSpeech>(boost::scoped_ptr<UI::MovieSpeech> const &);
    boost::scoped_ptr<UI::MovieSpeech> &operator=(boost::scoped_ptr<UI::MovieSpeech> const &);
    typedef boost::scoped_ptr<UI::MovieSpeech> this_type;
    typedef UI::MovieSpeech element_type;
public:
    _inline ~scoped_ptr<UI::MovieSpeech>();
    _inline void reset(UI::MovieSpeech *);
    UI::MovieSpeech &operator*() const;
    _inline UI::MovieSpeech *operator->() const;
    _inline UI::MovieSpeech *get() const;
    typedef UI::MovieSpeech **unspecified_bool_type() const;
    UI::MovieSpeech **operator class UI::MovieSpeech *(__thiscall boost::scoped_ptr<class UI::MovieSpeech>::* )(void) const() const() const;
    bool operator!() const;
    _inline void swap(boost::scoped_ptr<UI::MovieSpeech> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<UI::MovieSpeech>) == 4, "Invalid boost::scoped_ptr<UI::MovieSpeech> size");

class boost::scoped_ptr<GameEventSys::Data>
{
private:
    GameEventSys::Data *ptr; // 0x0
public:
    scoped_ptr<GameEventSys::Data>(std::auto_ptr<GameEventSys::Data>);
    _inline scoped_ptr<GameEventSys::Data>(GameEventSys::Data *);
private:
    scoped_ptr<GameEventSys::Data>(boost::scoped_ptr<GameEventSys::Data> const &);
    boost::scoped_ptr<GameEventSys::Data> &operator=(boost::scoped_ptr<GameEventSys::Data> const &);
    typedef boost::scoped_ptr<GameEventSys::Data> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<GameEventSys::Data>();
    void reset(GameEventSys::Data *);
    GameEventSys::Data &operator*() const;
    _inline GameEventSys::Data *operator->() const;
    GameEventSys::Data *get() const;
    typedef GameEventSys::Data **unspecified_bool_type() const;
    GameEventSys::Data **operator class GameEventSys::Data *(__thiscall boost::scoped_ptr<class GameEventSys::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<GameEventSys::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<GameEventSys::Data>) == 4, "Invalid boost::scoped_ptr<GameEventSys::Data> size");

class boost::scoped_ptr<PlayerProfileGameOptionsData>
{
private:
    PlayerProfileGameOptionsData *ptr; // 0x0
public:
    scoped_ptr<PlayerProfileGameOptionsData>(std::auto_ptr<PlayerProfileGameOptionsData>);
    _inline scoped_ptr<PlayerProfileGameOptionsData>(PlayerProfileGameOptionsData *);
private:
    scoped_ptr<PlayerProfileGameOptionsData>(boost::scoped_ptr<PlayerProfileGameOptionsData> const &);
    boost::scoped_ptr<PlayerProfileGameOptionsData> &operator=(boost::scoped_ptr<PlayerProfileGameOptionsData> const &);
    typedef boost::scoped_ptr<PlayerProfileGameOptionsData> this_type;
    typedef PlayerProfileGameOptionsData element_type;
public:
    _inline ~scoped_ptr<PlayerProfileGameOptionsData>();
    void reset(PlayerProfileGameOptionsData *);
    PlayerProfileGameOptionsData &operator*() const;
    _inline PlayerProfileGameOptionsData *operator->() const;
    PlayerProfileGameOptionsData *get() const;
    typedef PlayerProfileGameOptionsData **unspecified_bool_type() const;
    PlayerProfileGameOptionsData **operator struct PlayerProfileGameOptionsData *(__thiscall boost::scoped_ptr<struct PlayerProfileGameOptionsData>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<PlayerProfileGameOptionsData> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<PlayerProfileGameOptionsData>) == 4, "Invalid boost::scoped_ptr<PlayerProfileGameOptionsData> size");

class boost::scoped_ptr<Subtitle::Data>
{
private:
    Subtitle::Data *ptr; // 0x0
public:
    scoped_ptr<Subtitle::Data>(std::auto_ptr<Subtitle::Data>);
    _inline scoped_ptr<Subtitle::Data>(Subtitle::Data *);
private:
    scoped_ptr<Subtitle::Data>(boost::scoped_ptr<Subtitle::Data> const &);
    boost::scoped_ptr<Subtitle::Data> &operator=(boost::scoped_ptr<Subtitle::Data> const &);
    typedef boost::scoped_ptr<Subtitle::Data> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<Subtitle::Data>();
    void reset(Subtitle::Data *);
    Subtitle::Data &operator*() const;
    _inline Subtitle::Data *operator->() const;
    Subtitle::Data *get() const;
    typedef Subtitle::Data **unspecified_bool_type() const;
    Subtitle::Data **operator class Subtitle::Data *(__thiscall boost::scoped_ptr<class Subtitle::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<Subtitle::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<Subtitle::Data>) == 4, "Invalid boost::scoped_ptr<Subtitle::Data> size");

class boost::scoped_ptr<UI::SubtitleScreen::Data>
{
private:
    UI::SubtitleScreen::Data *ptr; // 0x0
public:
    scoped_ptr<UI::SubtitleScreen::Data>(std::auto_ptr<UI::SubtitleScreen::Data>);
    _inline scoped_ptr<UI::SubtitleScreen::Data>(UI::SubtitleScreen::Data *);
private:
    scoped_ptr<UI::SubtitleScreen::Data>(boost::scoped_ptr<UI::SubtitleScreen::Data> const &);
    boost::scoped_ptr<UI::SubtitleScreen::Data> &operator=(boost::scoped_ptr<UI::SubtitleScreen::Data> const &);
    typedef boost::scoped_ptr<UI::SubtitleScreen::Data> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<UI::SubtitleScreen::Data>();
    void reset(UI::SubtitleScreen::Data *);
    UI::SubtitleScreen::Data &operator*() const;
    _inline UI::SubtitleScreen::Data *operator->() const;
    UI::SubtitleScreen::Data *get() const;
    typedef UI::SubtitleScreen::Data **unspecified_bool_type() const;
    UI::SubtitleScreen::Data **operator class UI::SubtitleScreen::Data *(__thiscall boost::scoped_ptr<class UI::SubtitleScreen::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<UI::SubtitleScreen::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<UI::SubtitleScreen::Data>) == 4, "Invalid boost::scoped_ptr<UI::SubtitleScreen::Data> size");

class boost::scoped_ptr<Campaign::Data>
{
private:
    Campaign::Data *ptr; // 0x0
public:
    scoped_ptr<Campaign::Data>(std::auto_ptr<Campaign::Data>);
    _inline scoped_ptr<Campaign::Data>(Campaign::Data *);
private:
    scoped_ptr<Campaign::Data>(boost::scoped_ptr<Campaign::Data> const &);
    boost::scoped_ptr<Campaign::Data> &operator=(boost::scoped_ptr<Campaign::Data> const &);
    typedef boost::scoped_ptr<Campaign::Data> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<Campaign::Data>();
    void reset(Campaign::Data *);
    Campaign::Data &operator*() const;
    _inline Campaign::Data *operator->() const;
    Campaign::Data *get() const;
    typedef Campaign::Data **unspecified_bool_type() const;
    Campaign::Data **operator class Campaign::Data *(__thiscall boost::scoped_ptr<class Campaign::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<Campaign::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<Campaign::Data>) == 4, "Invalid boost::scoped_ptr<Campaign::Data> size");

class boost::scoped_ptr<LuaSimProxyLib>
{
private:
    LuaSimProxyLib *ptr; // 0x0
public:
    scoped_ptr<LuaSimProxyLib>(std::auto_ptr<LuaSimProxyLib>);
    _inline scoped_ptr<LuaSimProxyLib>(LuaSimProxyLib *);
private:
    scoped_ptr<LuaSimProxyLib>(boost::scoped_ptr<LuaSimProxyLib> const &);
    boost::scoped_ptr<LuaSimProxyLib> &operator=(boost::scoped_ptr<LuaSimProxyLib> const &);
    typedef boost::scoped_ptr<LuaSimProxyLib> this_type;
    typedef LuaSimProxyLib element_type;
public:
    _inline ~scoped_ptr<LuaSimProxyLib>();
    _inline void reset(LuaSimProxyLib *);
    LuaSimProxyLib &operator*() const;
    _inline LuaSimProxyLib *operator->() const;
    LuaSimProxyLib *get() const;
    typedef LuaSimProxyLib **unspecified_bool_type() const;
    LuaSimProxyLib **operator class LuaSimProxyLib *(__thiscall boost::scoped_ptr<class LuaSimProxyLib>::* )(void) const() const() const;
    bool operator!() const;
    _inline void swap(boost::scoped_ptr<LuaSimProxyLib> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<LuaSimProxyLib>) == 4, "Invalid boost::scoped_ptr<LuaSimProxyLib> size");

class boost::scoped_ptr<SimProxy>
{
private:
    SimProxy *ptr; // 0x0
public:
    scoped_ptr<SimProxy>(std::auto_ptr<SimProxy>);
    _inline scoped_ptr<SimProxy>(SimProxy *);
private:
    scoped_ptr<SimProxy>(boost::scoped_ptr<SimProxy> const &);
    boost::scoped_ptr<SimProxy> &operator=(boost::scoped_ptr<SimProxy> const &);
    typedef boost::scoped_ptr<SimProxy> this_type;
    typedef SimProxy element_type;
public:
    _inline ~scoped_ptr<SimProxy>();
    _inline void reset(SimProxy *);
    SimProxy &operator*() const;
    SimProxy *operator->() const;
    _inline SimProxy *get() const;
    typedef SimProxy **unspecified_bool_type() const;
    SimProxy **operator class SimProxy *(__thiscall boost::scoped_ptr<class SimProxy>::* )(void) const() const() const;
    bool operator!() const;
    _inline void swap(boost::scoped_ptr<SimProxy> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<SimProxy>) == 4, "Invalid boost::scoped_ptr<SimProxy> size");

class boost::scoped_ptr<StatMonitor>
{
private:
    StatMonitor *ptr; // 0x0
public:
    scoped_ptr<StatMonitor>(std::auto_ptr<StatMonitor>);
    _inline scoped_ptr<StatMonitor>(StatMonitor *);
private:
    scoped_ptr<StatMonitor>(boost::scoped_ptr<StatMonitor> const &);
    boost::scoped_ptr<StatMonitor> &operator=(boost::scoped_ptr<StatMonitor> const &);
    typedef boost::scoped_ptr<StatMonitor> this_type;
    typedef StatMonitor element_type;
public:
    _inline ~scoped_ptr<StatMonitor>();
    _inline void reset(StatMonitor *);
    StatMonitor &operator*() const;
    StatMonitor *operator->() const;
    _inline StatMonitor *get() const;
    typedef StatMonitor **unspecified_bool_type() const;
    StatMonitor **operator class StatMonitor *(__thiscall boost::scoped_ptr<class StatMonitor>::* )(void) const() const() const;
    bool operator!() const;
    _inline void swap(boost::scoped_ptr<StatMonitor> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<StatMonitor>) == 4, "Invalid boost::scoped_ptr<StatMonitor> size");

class boost::scoped_ptr<ShipStatic::LoadingEnv>
{
private:
    ShipStatic::LoadingEnv *ptr; // 0x0
public:
    scoped_ptr<ShipStatic::LoadingEnv>(std::auto_ptr<ShipStatic::LoadingEnv>);
    _inline scoped_ptr<ShipStatic::LoadingEnv>(ShipStatic::LoadingEnv *);
private:
    scoped_ptr<ShipStatic::LoadingEnv>(boost::scoped_ptr<ShipStatic::LoadingEnv> const &);
    boost::scoped_ptr<ShipStatic::LoadingEnv> &operator=(boost::scoped_ptr<ShipStatic::LoadingEnv> const &);
    typedef boost::scoped_ptr<ShipStatic::LoadingEnv> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<ShipStatic::LoadingEnv>();
    _inline void reset(ShipStatic::LoadingEnv *);
    ShipStatic::LoadingEnv &operator*() const;
    _inline ShipStatic::LoadingEnv *operator->() const;
    _inline ShipStatic::LoadingEnv *get() const;
    typedef ShipStatic::LoadingEnv **unspecified_bool_type() const;
    ShipStatic::LoadingEnv **operator class ShipStatic::LoadingEnv *(__thiscall boost::scoped_ptr<class ShipStatic::LoadingEnv>::* )(void) const() const() const;
    bool operator!() const;
    _inline void swap(boost::scoped_ptr<ShipStatic::LoadingEnv> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<ShipStatic::LoadingEnv>) == 4, "Invalid boost::scoped_ptr<ShipStatic::LoadingEnv> size");

class boost::scoped_ptr<CameraCommand::FocusDistance>
{
private:
    CameraCommand::FocusDistance *ptr; // 0x0
public:
    scoped_ptr<CameraCommand::FocusDistance>(std::auto_ptr<CameraCommand::FocusDistance>);
    _inline scoped_ptr<CameraCommand::FocusDistance>(CameraCommand::FocusDistance *);
private:
    scoped_ptr<CameraCommand::FocusDistance>(boost::scoped_ptr<CameraCommand::FocusDistance> const &);
    boost::scoped_ptr<CameraCommand::FocusDistance> &operator=(boost::scoped_ptr<CameraCommand::FocusDistance> const &);
    typedef boost::scoped_ptr<CameraCommand::FocusDistance> this_type;
    struct element_type;
public:
    _inline ~scoped_ptr<CameraCommand::FocusDistance>();
    _inline void reset(CameraCommand::FocusDistance *);
    CameraCommand::FocusDistance &operator*() const;
    _inline CameraCommand::FocusDistance *operator->() const;
    _inline CameraCommand::FocusDistance *get() const;
    typedef CameraCommand::FocusDistance **unspecified_bool_type() const;
    CameraCommand::FocusDistance **operator struct CameraCommand::FocusDistance *(__thiscall boost::scoped_ptr<struct CameraCommand::FocusDistance>::* )(void) const() const() const;
    bool operator!() const;
    _inline void swap(boost::scoped_ptr<CameraCommand::FocusDistance> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<CameraCommand::FocusDistance>) == 4, "Invalid boost::scoped_ptr<CameraCommand::FocusDistance> size");

class boost::scoped_ptr<ShipHold::Data>
{
private:
    ShipHold::Data *ptr; // 0x0
public:
    scoped_ptr<ShipHold::Data>(std::auto_ptr<ShipHold::Data>);
    _inline scoped_ptr<ShipHold::Data>(ShipHold::Data *);
private:
    scoped_ptr<ShipHold::Data>(boost::scoped_ptr<ShipHold::Data> const &);
    boost::scoped_ptr<ShipHold::Data> &operator=(boost::scoped_ptr<ShipHold::Data> const &);
    typedef boost::scoped_ptr<ShipHold::Data> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<ShipHold::Data>();
    void reset(ShipHold::Data *);
    ShipHold::Data &operator*() const;
    _inline ShipHold::Data *operator->() const;
    ShipHold::Data *get() const;
    typedef ShipHold::Data **unspecified_bool_type() const;
    ShipHold::Data **operator class ShipHold::Data *(__thiscall boost::scoped_ptr<class ShipHold::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<ShipHold::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<ShipHold::Data>) == 4, "Invalid boost::scoped_ptr<ShipHold::Data> size");

class boost::scoped_ptr<RenderModelScars>
{
private:
    RenderModelScars *ptr; // 0x0
public:
    scoped_ptr<RenderModelScars>(std::auto_ptr<RenderModelScars>);
    _inline scoped_ptr<RenderModelScars>(RenderModelScars *);
private:
    scoped_ptr<RenderModelScars>(boost::scoped_ptr<RenderModelScars> const &);
    boost::scoped_ptr<RenderModelScars> &operator=(boost::scoped_ptr<RenderModelScars> const &);
    typedef boost::scoped_ptr<RenderModelScars> this_type;
    typedef RenderModelScars element_type;
public:
    _inline ~scoped_ptr<RenderModelScars>();
    void reset(RenderModelScars *);
    RenderModelScars &operator*() const;
    _inline RenderModelScars *operator->() const;
    _inline RenderModelScars *get() const;
    typedef RenderModelScars **unspecified_bool_type() const;
    RenderModelScars **operator class RenderModelScars *(__thiscall boost::scoped_ptr<class RenderModelScars>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<RenderModelScars> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<RenderModelScars>) == 4, "Invalid boost::scoped_ptr<RenderModelScars> size");

class boost::scoped_ptr<Background::Data>
{
private:
    Background::Data *ptr; // 0x0
public:
    scoped_ptr<Background::Data>(std::auto_ptr<Background::Data>);
    _inline scoped_ptr<Background::Data>(Background::Data *);
private:
    scoped_ptr<Background::Data>(boost::scoped_ptr<Background::Data> const &);
    boost::scoped_ptr<Background::Data> &operator=(boost::scoped_ptr<Background::Data> const &);
    typedef boost::scoped_ptr<Background::Data> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<Background::Data>();
    void reset(Background::Data *);
    Background::Data &operator*() const;
    _inline Background::Data *operator->() const;
    Background::Data *get() const;
    typedef Background::Data **unspecified_bool_type() const;
    Background::Data **operator class Background::Data *(__thiscall boost::scoped_ptr<class Background::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<Background::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<Background::Data>) == 4, "Invalid boost::scoped_ptr<Background::Data> size");

class boost::scoped_ptr<BattleScarManager::Data>
{
private:
    BattleScarManager::Data *ptr; // 0x0
public:
    scoped_ptr<BattleScarManager::Data>(std::auto_ptr<BattleScarManager::Data>);
    _inline scoped_ptr<BattleScarManager::Data>(BattleScarManager::Data *);
private:
    scoped_ptr<BattleScarManager::Data>(boost::scoped_ptr<BattleScarManager::Data> const &);
    boost::scoped_ptr<BattleScarManager::Data> &operator=(boost::scoped_ptr<BattleScarManager::Data> const &);
    typedef boost::scoped_ptr<BattleScarManager::Data> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<BattleScarManager::Data>();
    void reset(BattleScarManager::Data *);
    BattleScarManager::Data &operator*() const;
    _inline BattleScarManager::Data *operator->() const;
    _inline BattleScarManager::Data *get() const;
    typedef BattleScarManager::Data **unspecified_bool_type() const;
    BattleScarManager::Data **operator class BattleScarManager::Data *(__thiscall boost::scoped_ptr<class BattleScarManager::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<BattleScarManager::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<BattleScarManager::Data>) == 4, "Invalid boost::scoped_ptr<BattleScarManager::Data> size");

class boost::scoped_ptr<BattleScarStats::Data>
{
private:
    BattleScarStats::Data *ptr; // 0x0
public:
    scoped_ptr<BattleScarStats::Data>(std::auto_ptr<BattleScarStats::Data>);
    _inline scoped_ptr<BattleScarStats::Data>(BattleScarStats::Data *);
private:
    scoped_ptr<BattleScarStats::Data>(boost::scoped_ptr<BattleScarStats::Data> const &);
    boost::scoped_ptr<BattleScarStats::Data> &operator=(boost::scoped_ptr<BattleScarStats::Data> const &);
    typedef boost::scoped_ptr<BattleScarStats::Data> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<BattleScarStats::Data>();
    void reset(BattleScarStats::Data *);
    BattleScarStats::Data &operator*() const;
    _inline BattleScarStats::Data *operator->() const;
    BattleScarStats::Data *get() const;
    typedef BattleScarStats::Data **unspecified_bool_type() const;
    BattleScarStats::Data **operator class BattleScarStats::Data *(__thiscall boost::scoped_ptr<class BattleScarStats::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<BattleScarStats::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<BattleScarStats::Data>) == 4, "Invalid boost::scoped_ptr<BattleScarStats::Data> size");

class boost::scoped_ptr<FXManager::Data>
{
private:
    FXManager::Data *ptr; // 0x0
public:
    scoped_ptr<FXManager::Data>(std::auto_ptr<FXManager::Data>);
    _inline scoped_ptr<FXManager::Data>(FXManager::Data *);
private:
    scoped_ptr<FXManager::Data>(boost::scoped_ptr<FXManager::Data> const &);
    boost::scoped_ptr<FXManager::Data> &operator=(boost::scoped_ptr<FXManager::Data> const &);
    typedef boost::scoped_ptr<FXManager::Data> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<FXManager::Data>();
    void reset(FXManager::Data *);
    FXManager::Data &operator*() const;
    _inline FXManager::Data *operator->() const;
    FXManager::Data *get() const;
    typedef FXManager::Data **unspecified_bool_type() const;
    FXManager::Data **operator class FXManager::Data *(__thiscall boost::scoped_ptr<class FXManager::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<FXManager::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<FXManager::Data>) == 4, "Invalid boost::scoped_ptr<FXManager::Data> size");

class boost::scoped_ptr<DecalManager::Data>
{
private:
    DecalManager::Data *ptr; // 0x0
public:
    scoped_ptr<DecalManager::Data>(std::auto_ptr<DecalManager::Data>);
    _inline scoped_ptr<DecalManager::Data>(DecalManager::Data *);
private:
    scoped_ptr<DecalManager::Data>(boost::scoped_ptr<DecalManager::Data> const &);
    boost::scoped_ptr<DecalManager::Data> &operator=(boost::scoped_ptr<DecalManager::Data> const &);
    typedef boost::scoped_ptr<DecalManager::Data> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<DecalManager::Data>();
    void reset(DecalManager::Data *);
    DecalManager::Data &operator*() const;
    _inline DecalManager::Data *operator->() const;
    DecalManager::Data *get() const;
    typedef DecalManager::Data **unspecified_bool_type() const;
    DecalManager::Data **operator class DecalManager::Data *(__thiscall boost::scoped_ptr<class DecalManager::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<DecalManager::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<DecalManager::Data>) == 4, "Invalid boost::scoped_ptr<DecalManager::Data> size");

class boost::scoped_ptr<VertexPool::Data>
{
private:
    VertexPool::Data *ptr; // 0x0
public:
    scoped_ptr<VertexPool::Data>(std::auto_ptr<VertexPool::Data>);
    _inline scoped_ptr<VertexPool::Data>(VertexPool::Data *);
private:
    scoped_ptr<VertexPool::Data>(boost::scoped_ptr<VertexPool::Data> const &);
    boost::scoped_ptr<VertexPool::Data> &operator=(boost::scoped_ptr<VertexPool::Data> const &);
    typedef boost::scoped_ptr<VertexPool::Data> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<VertexPool::Data>();
    void reset(VertexPool::Data *);
    VertexPool::Data &operator*() const;
    _inline VertexPool::Data *operator->() const;
    VertexPool::Data *get() const;
    typedef VertexPool::Data **unspecified_bool_type() const;
    VertexPool::Data **operator class VertexPool::Data *(__thiscall boost::scoped_ptr<class VertexPool::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<VertexPool::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<VertexPool::Data>) == 4, "Invalid boost::scoped_ptr<VertexPool::Data> size");

class boost::scoped_ptr<UI::Statistics::StatsImpl>
{
private:
    UI::Statistics::StatsImpl *ptr; // 0x0
public:
    scoped_ptr<UI::Statistics::StatsImpl>(std::auto_ptr<UI::Statistics::StatsImpl>);
    _inline scoped_ptr<UI::Statistics::StatsImpl>(UI::Statistics::StatsImpl *);
private:
    scoped_ptr<UI::Statistics::StatsImpl>(boost::scoped_ptr<UI::Statistics::StatsImpl> const &);
    boost::scoped_ptr<UI::Statistics::StatsImpl> &operator=(boost::scoped_ptr<UI::Statistics::StatsImpl> const &);
    typedef boost::scoped_ptr<UI::Statistics::StatsImpl> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<UI::Statistics::StatsImpl>();
    void reset(UI::Statistics::StatsImpl *);
    UI::Statistics::StatsImpl &operator*() const;
    _inline UI::Statistics::StatsImpl *operator->() const;
    UI::Statistics::StatsImpl *get() const;
    typedef UI::Statistics::StatsImpl **unspecified_bool_type() const;
    UI::Statistics::StatsImpl **operator class UI::Statistics::StatsImpl *(__thiscall boost::scoped_ptr<class UI::Statistics::StatsImpl>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<UI::Statistics::StatsImpl> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<UI::Statistics::StatsImpl>) == 4, "Invalid boost::scoped_ptr<UI::Statistics::StatsImpl> size");

class boost::scoped_ptr<UI::ErrorMessageData>
{
private:
    UI::ErrorMessageData *ptr; // 0x0
public:
    scoped_ptr<UI::ErrorMessageData>(std::auto_ptr<UI::ErrorMessageData>);
    _inline scoped_ptr<UI::ErrorMessageData>(UI::ErrorMessageData *);
private:
    scoped_ptr<UI::ErrorMessageData>(boost::scoped_ptr<UI::ErrorMessageData> const &);
    boost::scoped_ptr<UI::ErrorMessageData> &operator=(boost::scoped_ptr<UI::ErrorMessageData> const &);
    typedef boost::scoped_ptr<UI::ErrorMessageData> this_type;
    typedef UI::ErrorMessageData element_type;
public:
    _inline ~scoped_ptr<UI::ErrorMessageData>();
    void reset(UI::ErrorMessageData *);
    UI::ErrorMessageData &operator*() const;
    _inline UI::ErrorMessageData *operator->() const;
    UI::ErrorMessageData *get() const;
    typedef UI::ErrorMessageData **unspecified_bool_type() const;
    UI::ErrorMessageData **operator struct UI::ErrorMessageData *(__thiscall boost::scoped_ptr<struct UI::ErrorMessageData>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<UI::ErrorMessageData> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<UI::ErrorMessageData>) == 4, "Invalid boost::scoped_ptr<UI::ErrorMessageData> size");

class boost::scoped_ptr<UI::EventsScreenData>
{
private:
    UI::EventsScreenData *ptr; // 0x0
public:
    scoped_ptr<UI::EventsScreenData>(std::auto_ptr<UI::EventsScreenData>);
    _inline scoped_ptr<UI::EventsScreenData>(UI::EventsScreenData *);
private:
    scoped_ptr<UI::EventsScreenData>(boost::scoped_ptr<UI::EventsScreenData> const &);
    boost::scoped_ptr<UI::EventsScreenData> &operator=(boost::scoped_ptr<UI::EventsScreenData> const &);
    typedef boost::scoped_ptr<UI::EventsScreenData> this_type;
    typedef UI::EventsScreenData element_type;
public:
    _inline ~scoped_ptr<UI::EventsScreenData>();
    void reset(UI::EventsScreenData *);
    UI::EventsScreenData &operator*() const;
    _inline UI::EventsScreenData *operator->() const;
    UI::EventsScreenData *get() const;
    typedef UI::EventsScreenData **unspecified_bool_type() const;
    UI::EventsScreenData **operator class UI::EventsScreenData *(__thiscall boost::scoped_ptr<class UI::EventsScreenData>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<UI::EventsScreenData> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<UI::EventsScreenData>) == 4, "Invalid boost::scoped_ptr<UI::EventsScreenData> size");

class boost::scoped_ptr<InGameDisconnect>
{
private:
    InGameDisconnect *ptr; // 0x0
public:
    scoped_ptr<InGameDisconnect>(std::auto_ptr<InGameDisconnect>);
    _inline scoped_ptr<InGameDisconnect>(InGameDisconnect *);
private:
    scoped_ptr<InGameDisconnect>(boost::scoped_ptr<InGameDisconnect> const &);
    boost::scoped_ptr<InGameDisconnect> &operator=(boost::scoped_ptr<InGameDisconnect> const &);
    typedef boost::scoped_ptr<InGameDisconnect> this_type;
    typedef InGameDisconnect element_type;
public:
    _inline ~scoped_ptr<InGameDisconnect>();
    _inline void reset(InGameDisconnect *);
    InGameDisconnect &operator*() const;
    InGameDisconnect *operator->() const;
    _inline InGameDisconnect *get() const;
    typedef InGameDisconnect **unspecified_bool_type() const;
    InGameDisconnect **operator class InGameDisconnect *(__thiscall boost::scoped_ptr<class InGameDisconnect>::* )(void) const() const() const;
    bool operator!() const;
    _inline void swap(boost::scoped_ptr<InGameDisconnect> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<InGameDisconnect>) == 4, "Invalid boost::scoped_ptr<InGameDisconnect> size");

class boost::scoped_ptr<StaticModelRegistry::Data>
{
private:
    StaticModelRegistry::Data *ptr; // 0x0
public:
    scoped_ptr<StaticModelRegistry::Data>(std::auto_ptr<StaticModelRegistry::Data>);
    _inline scoped_ptr<StaticModelRegistry::Data>(StaticModelRegistry::Data *);
private:
    scoped_ptr<StaticModelRegistry::Data>(boost::scoped_ptr<StaticModelRegistry::Data> const &);
    boost::scoped_ptr<StaticModelRegistry::Data> &operator=(boost::scoped_ptr<StaticModelRegistry::Data> const &);
    typedef boost::scoped_ptr<StaticModelRegistry::Data> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<StaticModelRegistry::Data>();
    void reset(StaticModelRegistry::Data *);
    StaticModelRegistry::Data &operator*() const;
    _inline StaticModelRegistry::Data *operator->() const;
    StaticModelRegistry::Data *get() const;
    typedef StaticModelRegistry::Data **unspecified_bool_type() const;
    StaticModelRegistry::Data **operator class StaticModelRegistry::Data *(__thiscall boost::scoped_ptr<class StaticModelRegistry::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<StaticModelRegistry::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<StaticModelRegistry::Data>) == 4, "Invalid boost::scoped_ptr<StaticModelRegistry::Data> size");

class boost::scoped_ptr<RenderModelScars::Data>
{
private:
    RenderModelScars::Data *ptr; // 0x0
public:
    scoped_ptr<RenderModelScars::Data>(std::auto_ptr<RenderModelScars::Data>);
    _inline scoped_ptr<RenderModelScars::Data>(RenderModelScars::Data *);
private:
    scoped_ptr<RenderModelScars::Data>(boost::scoped_ptr<RenderModelScars::Data> const &);
    boost::scoped_ptr<RenderModelScars::Data> &operator=(boost::scoped_ptr<RenderModelScars::Data> const &);
    typedef boost::scoped_ptr<RenderModelScars::Data> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<RenderModelScars::Data>();
    void reset(RenderModelScars::Data *);
    RenderModelScars::Data &operator*() const;
    _inline RenderModelScars::Data *operator->() const;
    RenderModelScars::Data *get() const;
    typedef RenderModelScars::Data **unspecified_bool_type() const;
    RenderModelScars::Data **operator class RenderModelScars::Data *(__thiscall boost::scoped_ptr<class RenderModelScars::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<RenderModelScars::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<RenderModelScars::Data>) == 4, "Invalid boost::scoped_ptr<RenderModelScars::Data> size");

class boost::scoped_ptr<DecalRefMeshRegistry::Data>
{
private:
    DecalRefMeshRegistry::Data *ptr; // 0x0
public:
    scoped_ptr<DecalRefMeshRegistry::Data>(std::auto_ptr<DecalRefMeshRegistry::Data>);
    _inline scoped_ptr<DecalRefMeshRegistry::Data>(DecalRefMeshRegistry::Data *);
private:
    scoped_ptr<DecalRefMeshRegistry::Data>(boost::scoped_ptr<DecalRefMeshRegistry::Data> const &);
    boost::scoped_ptr<DecalRefMeshRegistry::Data> &operator=(boost::scoped_ptr<DecalRefMeshRegistry::Data> const &);
    typedef boost::scoped_ptr<DecalRefMeshRegistry::Data> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<DecalRefMeshRegistry::Data>();
    void reset(DecalRefMeshRegistry::Data *);
    DecalRefMeshRegistry::Data &operator*() const;
    _inline DecalRefMeshRegistry::Data *operator->() const;
    DecalRefMeshRegistry::Data *get() const;
    typedef DecalRefMeshRegistry::Data **unspecified_bool_type() const;
    DecalRefMeshRegistry::Data **operator class DecalRefMeshRegistry::Data *(__thiscall boost::scoped_ptr<class DecalRefMeshRegistry::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<DecalRefMeshRegistry::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<DecalRefMeshRegistry::Data>) == 4, "Invalid boost::scoped_ptr<DecalRefMeshRegistry::Data> size");

class boost::scoped_ptr<FXCollisionSurf>
{
private:
    FXCollisionSurf *ptr; // 0x0
public:
    scoped_ptr<FXCollisionSurf>(std::auto_ptr<FXCollisionSurf>);
    _inline scoped_ptr<FXCollisionSurf>(FXCollisionSurf *);
private:
    scoped_ptr<FXCollisionSurf>(boost::scoped_ptr<FXCollisionSurf> const &);
    boost::scoped_ptr<FXCollisionSurf> &operator=(boost::scoped_ptr<FXCollisionSurf> const &);
    typedef boost::scoped_ptr<FXCollisionSurf> this_type;
    typedef FXCollisionSurf element_type;
public:
    _inline ~scoped_ptr<FXCollisionSurf>();
    void reset(FXCollisionSurf *);
    FXCollisionSurf &operator*() const;
    FXCollisionSurf *operator->() const;
    _inline FXCollisionSurf *get() const;
    typedef FXCollisionSurf **unspecified_bool_type() const;
    FXCollisionSurf **operator class FXCollisionSurf *(__thiscall boost::scoped_ptr<class FXCollisionSurf>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<FXCollisionSurf> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<FXCollisionSurf>) == 4, "Invalid boost::scoped_ptr<FXCollisionSurf> size");

class boost::scoped_ptr<StatLoggingInternal>
{
private:
    StatLoggingInternal *ptr; // 0x0
public:
    scoped_ptr<StatLoggingInternal>(std::auto_ptr<StatLoggingInternal>);
    _inline scoped_ptr<StatLoggingInternal>(StatLoggingInternal *);
private:
    scoped_ptr<StatLoggingInternal>(boost::scoped_ptr<StatLoggingInternal> const &);
    boost::scoped_ptr<StatLoggingInternal> &operator=(boost::scoped_ptr<StatLoggingInternal> const &);
    typedef boost::scoped_ptr<StatLoggingInternal> this_type;
    typedef StatLoggingInternal element_type;
public:
    _inline ~scoped_ptr<StatLoggingInternal>();
    _inline void reset(StatLoggingInternal *);
    StatLoggingInternal &operator*() const;
    _inline StatLoggingInternal *operator->() const;
    _inline StatLoggingInternal *get() const;
    typedef StatLoggingInternal **unspecified_bool_type() const;
    StatLoggingInternal **operator class StatLoggingInternal *(__thiscall boost::scoped_ptr<class StatLoggingInternal>::* )(void) const() const() const;
    bool operator!() const;
    _inline void swap(boost::scoped_ptr<StatLoggingInternal> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<StatLoggingInternal>) == 4, "Invalid boost::scoped_ptr<StatLoggingInternal> size");

class boost::scoped_ptr<LuaRuleSystem::Data>
{
private:
    LuaRuleSystem::Data *ptr; // 0x0
public:
    scoped_ptr<LuaRuleSystem::Data>(std::auto_ptr<LuaRuleSystem::Data>);
    _inline scoped_ptr<LuaRuleSystem::Data>(LuaRuleSystem::Data *);
private:
    scoped_ptr<LuaRuleSystem::Data>(boost::scoped_ptr<LuaRuleSystem::Data> const &);
    boost::scoped_ptr<LuaRuleSystem::Data> &operator=(boost::scoped_ptr<LuaRuleSystem::Data> const &);
    typedef boost::scoped_ptr<LuaRuleSystem::Data> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<LuaRuleSystem::Data>();
    void reset(LuaRuleSystem::Data *);
    LuaRuleSystem::Data &operator*() const;
    _inline LuaRuleSystem::Data *operator->() const;
    LuaRuleSystem::Data *get() const;
    typedef LuaRuleSystem::Data **unspecified_bool_type() const;
    LuaRuleSystem::Data **operator class LuaRuleSystem::Data *(__thiscall boost::scoped_ptr<class LuaRuleSystem::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<LuaRuleSystem::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<LuaRuleSystem::Data>) == 4, "Invalid boost::scoped_ptr<LuaRuleSystem::Data> size");

class boost::scoped_ptr<ConfigFile>
{
private:
    ConfigFile *ptr; // 0x0
public:
    scoped_ptr<ConfigFile>(std::auto_ptr<ConfigFile>);
    _inline scoped_ptr<ConfigFile>(ConfigFile *);
private:
    scoped_ptr<ConfigFile>(boost::scoped_ptr<ConfigFile> const &);
    boost::scoped_ptr<ConfigFile> &operator=(boost::scoped_ptr<ConfigFile> const &);
    typedef boost::scoped_ptr<ConfigFile> this_type;
    typedef ConfigFile element_type;
public:
    _inline ~scoped_ptr<ConfigFile>();
    _inline void reset(ConfigFile *);
    ConfigFile &operator*() const;
    ConfigFile *operator->() const;
    _inline ConfigFile *get() const;
    typedef ConfigFile **unspecified_bool_type() const;
    ConfigFile **operator class ConfigFile *(__thiscall boost::scoped_ptr<class ConfigFile>::* )(void) const() const() const;
    bool operator!() const;
    _inline void swap(boost::scoped_ptr<ConfigFile> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<ConfigFile>) == 4, "Invalid boost::scoped_ptr<ConfigFile> size");

class boost::scoped_ptr<Lobby>
{
private:
    Lobby *ptr; // 0x0
public:
    scoped_ptr<Lobby>(std::auto_ptr<Lobby>);
    _inline scoped_ptr<Lobby>(Lobby *);
private:
    scoped_ptr<Lobby>(boost::scoped_ptr<Lobby> const &);
    boost::scoped_ptr<Lobby> &operator=(boost::scoped_ptr<Lobby> const &);
    typedef boost::scoped_ptr<Lobby> this_type;
    typedef Lobby element_type;
public:
    _inline ~scoped_ptr<Lobby>();
    _inline void reset(Lobby *);
    Lobby &operator*() const;
    Lobby *operator->() const;
    _inline Lobby *get() const;
    typedef Lobby **unspecified_bool_type() const;
    Lobby **operator class Lobby *(__thiscall boost::scoped_ptr<class Lobby>::* )(void) const() const() const;
    bool operator!() const;
    _inline void swap(boost::scoped_ptr<Lobby> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<Lobby>) == 4, "Invalid boost::scoped_ptr<Lobby> size");

class boost::scoped_ptr<UI::GameOverScreenData>
{
private:
    UI::GameOverScreenData *ptr; // 0x0
public:
    scoped_ptr<UI::GameOverScreenData>(std::auto_ptr<UI::GameOverScreenData>);
    _inline scoped_ptr<UI::GameOverScreenData>(UI::GameOverScreenData *);
private:
    scoped_ptr<UI::GameOverScreenData>(boost::scoped_ptr<UI::GameOverScreenData> const &);
    boost::scoped_ptr<UI::GameOverScreenData> &operator=(boost::scoped_ptr<UI::GameOverScreenData> const &);
    typedef boost::scoped_ptr<UI::GameOverScreenData> this_type;
    typedef UI::GameOverScreenData element_type;
public:
    _inline ~scoped_ptr<UI::GameOverScreenData>();
    void reset(UI::GameOverScreenData *);
    UI::GameOverScreenData &operator*() const;
    _inline UI::GameOverScreenData *operator->() const;
    UI::GameOverScreenData *get() const;
    typedef UI::GameOverScreenData **unspecified_bool_type() const;
    UI::GameOverScreenData **operator struct UI::GameOverScreenData *(__thiscall boost::scoped_ptr<struct UI::GameOverScreenData>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<UI::GameOverScreenData> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<UI::GameOverScreenData>) == 4, "Invalid boost::scoped_ptr<UI::GameOverScreenData> size");

class boost::scoped_ptr<SimProxy::Data>
{
private:
    SimProxy::Data *ptr; // 0x0
public:
    scoped_ptr<SimProxy::Data>(std::auto_ptr<SimProxy::Data>);
    _inline scoped_ptr<SimProxy::Data>(SimProxy::Data *);
private:
    scoped_ptr<SimProxy::Data>(boost::scoped_ptr<SimProxy::Data> const &);
    boost::scoped_ptr<SimProxy::Data> &operator=(boost::scoped_ptr<SimProxy::Data> const &);
    typedef boost::scoped_ptr<SimProxy::Data> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<SimProxy::Data>();
    void reset(SimProxy::Data *);
    SimProxy::Data &operator*() const;
    _inline SimProxy::Data *operator->() const;
    SimProxy::Data *get() const;
    typedef SimProxy::Data **unspecified_bool_type() const;
    SimProxy::Data **operator class SimProxy::Data *(__thiscall boost::scoped_ptr<class SimProxy::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<SimProxy::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<SimProxy::Data>) == 4, "Invalid boost::scoped_ptr<SimProxy::Data> size");

class boost::scoped_ptr<HW2CpuPlayer::Data>
{
private:
    HW2CpuPlayer::Data *ptr; // 0x0
public:
    scoped_ptr<HW2CpuPlayer::Data>(std::auto_ptr<HW2CpuPlayer::Data>);
    _inline scoped_ptr<HW2CpuPlayer::Data>(HW2CpuPlayer::Data *);
private:
    scoped_ptr<HW2CpuPlayer::Data>(boost::scoped_ptr<HW2CpuPlayer::Data> const &);
    boost::scoped_ptr<HW2CpuPlayer::Data> &operator=(boost::scoped_ptr<HW2CpuPlayer::Data> const &);
    typedef boost::scoped_ptr<HW2CpuPlayer::Data> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<HW2CpuPlayer::Data>();
    void reset(HW2CpuPlayer::Data *);
    HW2CpuPlayer::Data &operator*() const;
    _inline HW2CpuPlayer::Data *operator->() const;
    HW2CpuPlayer::Data *get() const;
    typedef HW2CpuPlayer::Data **unspecified_bool_type() const;
    HW2CpuPlayer::Data **operator class HW2CpuPlayer::Data *(__thiscall boost::scoped_ptr<class HW2CpuPlayer::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<HW2CpuPlayer::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<HW2CpuPlayer::Data>) == 4, "Invalid boost::scoped_ptr<HW2CpuPlayer::Data> size");

class boost::scoped_ptr<UniverseInterp::Data>
{
private:
    UniverseInterp::Data *ptr; // 0x0
public:
    scoped_ptr<UniverseInterp::Data>(std::auto_ptr<UniverseInterp::Data>);
    _inline scoped_ptr<UniverseInterp::Data>(UniverseInterp::Data *);
private:
    scoped_ptr<UniverseInterp::Data>(boost::scoped_ptr<UniverseInterp::Data> const &);
    boost::scoped_ptr<UniverseInterp::Data> &operator=(boost::scoped_ptr<UniverseInterp::Data> const &);
    typedef boost::scoped_ptr<UniverseInterp::Data> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<UniverseInterp::Data>();
    void reset(UniverseInterp::Data *);
    UniverseInterp::Data &operator*() const;
    _inline UniverseInterp::Data *operator->() const;
    UniverseInterp::Data *get() const;
    typedef UniverseInterp::Data **unspecified_bool_type() const;
    UniverseInterp::Data **operator class UniverseInterp::Data *(__thiscall boost::scoped_ptr<class UniverseInterp::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<UniverseInterp::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<UniverseInterp::Data>) == 4, "Invalid boost::scoped_ptr<UniverseInterp::Data> size");

class boost::scoped_ptr<CpuFleetCommand::Data>
{
private:
    CpuFleetCommand::Data *ptr; // 0x0
public:
    scoped_ptr<CpuFleetCommand::Data>(std::auto_ptr<CpuFleetCommand::Data>);
    _inline scoped_ptr<CpuFleetCommand::Data>(CpuFleetCommand::Data *);
private:
    scoped_ptr<CpuFleetCommand::Data>(boost::scoped_ptr<CpuFleetCommand::Data> const &);
    boost::scoped_ptr<CpuFleetCommand::Data> &operator=(boost::scoped_ptr<CpuFleetCommand::Data> const &);
    typedef boost::scoped_ptr<CpuFleetCommand::Data> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<CpuFleetCommand::Data>();
    void reset(CpuFleetCommand::Data *);
    CpuFleetCommand::Data &operator*() const;
    _inline CpuFleetCommand::Data *operator->() const;
    CpuFleetCommand::Data *get() const;
    typedef CpuFleetCommand::Data **unspecified_bool_type() const;
    CpuFleetCommand::Data **operator class CpuFleetCommand::Data *(__thiscall boost::scoped_ptr<class CpuFleetCommand::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<CpuFleetCommand::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<CpuFleetCommand::Data>) == 4, "Invalid boost::scoped_ptr<CpuFleetCommand::Data> size");

class boost::scoped_ptr<BattleScarTrail::Renderer>
{
private:
    BattleScarTrail::Renderer *ptr; // 0x0
public:
    scoped_ptr<BattleScarTrail::Renderer>(std::auto_ptr<BattleScarTrail::Renderer>);
    _inline scoped_ptr<BattleScarTrail::Renderer>(BattleScarTrail::Renderer *);
private:
    scoped_ptr<BattleScarTrail::Renderer>(boost::scoped_ptr<BattleScarTrail::Renderer> const &);
    boost::scoped_ptr<BattleScarTrail::Renderer> &operator=(boost::scoped_ptr<BattleScarTrail::Renderer> const &);
    typedef boost::scoped_ptr<BattleScarTrail::Renderer> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<BattleScarTrail::Renderer>();
    void reset(BattleScarTrail::Renderer *);
    BattleScarTrail::Renderer &operator*() const;
    _inline BattleScarTrail::Renderer *operator->() const;
    BattleScarTrail::Renderer *get() const;
    typedef BattleScarTrail::Renderer **unspecified_bool_type() const;
    BattleScarTrail::Renderer **operator class BattleScarTrail::Renderer *(__thiscall boost::scoped_ptr<class BattleScarTrail::Renderer>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<BattleScarTrail::Renderer> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<BattleScarTrail::Renderer>) == 4, "Invalid boost::scoped_ptr<BattleScarTrail::Renderer> size");

class boost::scoped_ptr<BattleScarPoint::Renderer>
{
private:
    BattleScarPoint::Renderer *ptr; // 0x0
public:
    scoped_ptr<BattleScarPoint::Renderer>(std::auto_ptr<BattleScarPoint::Renderer>);
    _inline scoped_ptr<BattleScarPoint::Renderer>(BattleScarPoint::Renderer *);
private:
    scoped_ptr<BattleScarPoint::Renderer>(boost::scoped_ptr<BattleScarPoint::Renderer> const &);
    boost::scoped_ptr<BattleScarPoint::Renderer> &operator=(boost::scoped_ptr<BattleScarPoint::Renderer> const &);
    typedef boost::scoped_ptr<BattleScarPoint::Renderer> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<BattleScarPoint::Renderer>();
    void reset(BattleScarPoint::Renderer *);
    BattleScarPoint::Renderer &operator*() const;
    _inline BattleScarPoint::Renderer *operator->() const;
    BattleScarPoint::Renderer *get() const;
    typedef BattleScarPoint::Renderer **unspecified_bool_type() const;
    BattleScarPoint::Renderer **operator class BattleScarPoint::Renderer *(__thiscall boost::scoped_ptr<class BattleScarPoint::Renderer>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<BattleScarPoint::Renderer> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<BattleScarPoint::Renderer>) == 4, "Invalid boost::scoped_ptr<BattleScarPoint::Renderer> size");

class boost::scoped_ptr<DecalManager>
{
private:
    DecalManager *ptr; // 0x0
public:
    scoped_ptr<DecalManager>(std::auto_ptr<DecalManager>);
    _inline scoped_ptr<DecalManager>(DecalManager *);
private:
    scoped_ptr<DecalManager>(boost::scoped_ptr<DecalManager> const &);
    boost::scoped_ptr<DecalManager> &operator=(boost::scoped_ptr<DecalManager> const &);
    typedef boost::scoped_ptr<DecalManager> this_type;
    typedef DecalManager element_type;
public:
    _inline ~scoped_ptr<DecalManager>();
    _inline void reset(DecalManager *);
    DecalManager &operator*() const;
    _inline DecalManager *operator->() const;
    _inline DecalManager *get() const;
    typedef DecalManager **unspecified_bool_type() const;
    DecalManager **operator class DecalManager *(__thiscall boost::scoped_ptr<class DecalManager>::* )(void) const() const() const;
    bool operator!() const;
    _inline void swap(boost::scoped_ptr<DecalManager> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<DecalManager>) == 4, "Invalid boost::scoped_ptr<DecalManager> size");

class boost::scoped_ptr<UI::ControlsFrameData>
{
private:
    UI::ControlsFrameData *ptr; // 0x0
public:
    scoped_ptr<UI::ControlsFrameData>(std::auto_ptr<UI::ControlsFrameData>);
    _inline scoped_ptr<UI::ControlsFrameData>(UI::ControlsFrameData *);
private:
    scoped_ptr<UI::ControlsFrameData>(boost::scoped_ptr<UI::ControlsFrameData> const &);
    boost::scoped_ptr<UI::ControlsFrameData> &operator=(boost::scoped_ptr<UI::ControlsFrameData> const &);
    typedef boost::scoped_ptr<UI::ControlsFrameData> this_type;
    typedef UI::ControlsFrameData element_type;
public:
    _inline ~scoped_ptr<UI::ControlsFrameData>();
    void reset(UI::ControlsFrameData *);
    UI::ControlsFrameData &operator*() const;
    _inline UI::ControlsFrameData *operator->() const;
    UI::ControlsFrameData *get() const;
    typedef UI::ControlsFrameData **unspecified_bool_type() const;
    UI::ControlsFrameData **operator class UI::ControlsFrameData *(__thiscall boost::scoped_ptr<class UI::ControlsFrameData>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<UI::ControlsFrameData> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<UI::ControlsFrameData>) == 4, "Invalid boost::scoped_ptr<UI::ControlsFrameData> size");

class boost::scoped_ptr<`anonymous namespace'::Data>
{
private:
    `anonymous-namespace'::Data *ptr; // 0x0
public:
    scoped_ptr<`anonymous namespace'::Data>(std::auto_ptr<`anonymous namespace'::Data>);
    scoped_ptr<`anonymous namespace'::Data>(`anonymous-namespace'::Data *);
private:
    scoped_ptr<`anonymous namespace'::Data>(boost::scoped_ptr<`anonymous namespace'::Data> const &);
    boost::scoped_ptr<`anonymous namespace'::Data> &operator=(boost::scoped_ptr<`anonymous namespace'::Data> const &);
    typedef boost::scoped_ptr<`anonymous namespace'::Data> this_type;
    typedef `anonymous-namespace'::Data element_type;
public:
    ~scoped_ptr<`anonymous namespace'::Data>();
    void reset(`anonymous-namespace'::Data *);
    `anonymous-namespace'::Data &operator*() const;
    `anonymous-namespace'::Data *operator->() const;
    `anonymous-namespace'::Data *get() const;
    typedef `anonymous-namespace'::Data **unspecified_bool_type() const;
    `anonymous-namespace'::Data **operator struct `anonymous-namespace'::Data *(__thiscall boost::scoped_ptr<struct `anonymous namespace'::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<`anonymous namespace'::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<`anonymous namespace'::Data>) == 4, "Invalid boost::scoped_ptr<`anonymous namespace'::Data> size");

class boost::scoped_ptr<UI::SharedGraphicFactory::Data>
{
private:
    UI::SharedGraphicFactory::Data *ptr; // 0x0
public:
    scoped_ptr<UI::SharedGraphicFactory::Data>(std::auto_ptr<UI::SharedGraphicFactory::Data>);
    _inline scoped_ptr<UI::SharedGraphicFactory::Data>(UI::SharedGraphicFactory::Data *);
private:
    scoped_ptr<UI::SharedGraphicFactory::Data>(boost::scoped_ptr<UI::SharedGraphicFactory::Data> const &);
    boost::scoped_ptr<UI::SharedGraphicFactory::Data> &operator=(boost::scoped_ptr<UI::SharedGraphicFactory::Data> const &);
    typedef boost::scoped_ptr<UI::SharedGraphicFactory::Data> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<UI::SharedGraphicFactory::Data>();
    void reset(UI::SharedGraphicFactory::Data *);
    UI::SharedGraphicFactory::Data &operator*() const;
    _inline UI::SharedGraphicFactory::Data *operator->() const;
    UI::SharedGraphicFactory::Data *get() const;
    typedef UI::SharedGraphicFactory::Data **unspecified_bool_type() const;
    UI::SharedGraphicFactory::Data **operator class UI::SharedGraphicFactory::Data *(__thiscall boost::scoped_ptr<class UI::SharedGraphicFactory::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<UI::SharedGraphicFactory::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<UI::SharedGraphicFactory::Data>) == 4, "Invalid boost::scoped_ptr<UI::SharedGraphicFactory::Data> size");

class boost::scoped_ptr<`anonymous namespace'::Data>
{
private:
    `anonymous-namespace'::Data *ptr; // 0x0
public:
    scoped_ptr<`anonymous namespace'::Data>(std::auto_ptr<`anonymous namespace'::Data>);
    scoped_ptr<`anonymous namespace'::Data>(`anonymous-namespace'::Data *);
private:
    scoped_ptr<`anonymous namespace'::Data>(boost::scoped_ptr<`anonymous namespace'::Data> const &);
    boost::scoped_ptr<`anonymous namespace'::Data> &operator=(boost::scoped_ptr<`anonymous namespace'::Data> const &);
    typedef boost::scoped_ptr<`anonymous namespace'::Data> this_type;
    typedef `anonymous-namespace'::Data element_type;
public:
    ~scoped_ptr<`anonymous namespace'::Data>();
    void reset(`anonymous-namespace'::Data *);
    `anonymous-namespace'::Data &operator*() const;
    `anonymous-namespace'::Data *operator->() const;
    `anonymous-namespace'::Data *get() const;
    typedef `anonymous-namespace'::Data **unspecified_bool_type() const;
    `anonymous-namespace'::Data **operator struct `anonymous-namespace'::Data *(__thiscall boost::scoped_ptr<struct `anonymous namespace'::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<`anonymous namespace'::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<`anonymous namespace'::Data>) == 4, "Invalid boost::scoped_ptr<`anonymous namespace'::Data> size");

class boost::scoped_ptr<`anonymous namespace'::Data>
{
private:
    `anonymous-namespace'::Data *ptr; // 0x0
public:
    scoped_ptr<`anonymous namespace'::Data>(std::auto_ptr<`anonymous namespace'::Data>);
    scoped_ptr<`anonymous namespace'::Data>(`anonymous-namespace'::Data *);
private:
    scoped_ptr<`anonymous namespace'::Data>(boost::scoped_ptr<`anonymous namespace'::Data> const &);
    boost::scoped_ptr<`anonymous namespace'::Data> &operator=(boost::scoped_ptr<`anonymous namespace'::Data> const &);
    typedef boost::scoped_ptr<`anonymous namespace'::Data> this_type;
    typedef `anonymous-namespace'::Data element_type;
public:
    ~scoped_ptr<`anonymous namespace'::Data>();
    void reset(`anonymous-namespace'::Data *);
    `anonymous-namespace'::Data &operator*() const;
    `anonymous-namespace'::Data *operator->() const;
    `anonymous-namespace'::Data *get() const;
    typedef `anonymous-namespace'::Data **unspecified_bool_type() const;
    `anonymous-namespace'::Data **operator struct `anonymous-namespace'::Data *(__thiscall boost::scoped_ptr<struct `anonymous namespace'::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<`anonymous namespace'::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<`anonymous namespace'::Data>) == 4, "Invalid boost::scoped_ptr<`anonymous namespace'::Data> size");

class boost::scoped_ptr<`anonymous namespace'::Data>
{
private:
    `anonymous-namespace'::Data *ptr; // 0x0
public:
    scoped_ptr<`anonymous namespace'::Data>(std::auto_ptr<`anonymous namespace'::Data>);
    scoped_ptr<`anonymous namespace'::Data>(`anonymous-namespace'::Data *);
private:
    scoped_ptr<`anonymous namespace'::Data>(boost::scoped_ptr<`anonymous namespace'::Data> const &);
    boost::scoped_ptr<`anonymous namespace'::Data> &operator=(boost::scoped_ptr<`anonymous namespace'::Data> const &);
    typedef boost::scoped_ptr<`anonymous namespace'::Data> this_type;
    typedef `anonymous-namespace'::Data element_type;
public:
    ~scoped_ptr<`anonymous namespace'::Data>();
    void reset(`anonymous-namespace'::Data *);
    `anonymous-namespace'::Data &operator*() const;
    `anonymous-namespace'::Data *operator->() const;
    `anonymous-namespace'::Data *get() const;
    typedef `anonymous-namespace'::Data **unspecified_bool_type() const;
    `anonymous-namespace'::Data **operator struct `anonymous-namespace'::Data *(__thiscall boost::scoped_ptr<struct `anonymous namespace'::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<`anonymous namespace'::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<`anonymous namespace'::Data>) == 4, "Invalid boost::scoped_ptr<`anonymous namespace'::Data> size");

class boost::scoped_ptr<UI::PointerData>
{
private:
    UI::PointerData *ptr; // 0x0
public:
    scoped_ptr<UI::PointerData>(std::auto_ptr<UI::PointerData>);
    _inline scoped_ptr<UI::PointerData>(UI::PointerData *);
private:
    scoped_ptr<UI::PointerData>(boost::scoped_ptr<UI::PointerData> const &);
    boost::scoped_ptr<UI::PointerData> &operator=(boost::scoped_ptr<UI::PointerData> const &);
    typedef boost::scoped_ptr<UI::PointerData> this_type;
    typedef UI::PointerData element_type;
public:
    _inline ~scoped_ptr<UI::PointerData>();
    void reset(UI::PointerData *);
    UI::PointerData &operator*() const;
    _inline UI::PointerData *operator->() const;
    UI::PointerData *get() const;
    typedef UI::PointerData **unspecified_bool_type() const;
    UI::PointerData **operator class UI::PointerData *(__thiscall boost::scoped_ptr<class UI::PointerData>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<UI::PointerData> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<UI::PointerData>) == 4, "Invalid boost::scoped_ptr<UI::PointerData> size");

class boost::scoped_ptr<UI::SaveLoadDialogData>
{
private:
    UI::SaveLoadDialogData *ptr; // 0x0
public:
    scoped_ptr<UI::SaveLoadDialogData>(std::auto_ptr<UI::SaveLoadDialogData>);
    _inline scoped_ptr<UI::SaveLoadDialogData>(UI::SaveLoadDialogData *);
private:
    scoped_ptr<UI::SaveLoadDialogData>(boost::scoped_ptr<UI::SaveLoadDialogData> const &);
    boost::scoped_ptr<UI::SaveLoadDialogData> &operator=(boost::scoped_ptr<UI::SaveLoadDialogData> const &);
    typedef boost::scoped_ptr<UI::SaveLoadDialogData> this_type;
    typedef UI::SaveLoadDialogData element_type;
public:
    _inline ~scoped_ptr<UI::SaveLoadDialogData>();
    void reset(UI::SaveLoadDialogData *);
    UI::SaveLoadDialogData &operator*() const;
    _inline UI::SaveLoadDialogData *operator->() const;
    UI::SaveLoadDialogData *get() const;
    typedef UI::SaveLoadDialogData **unspecified_bool_type() const;
    UI::SaveLoadDialogData **operator struct UI::SaveLoadDialogData *(__thiscall boost::scoped_ptr<struct UI::SaveLoadDialogData>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<UI::SaveLoadDialogData> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<UI::SaveLoadDialogData>) == 4, "Invalid boost::scoped_ptr<UI::SaveLoadDialogData> size");

class boost::scoped_ptr<UI::Data>
{
private:
    UI::Data *ptr; // 0x0
public:
    scoped_ptr<UI::Data>(std::auto_ptr<UI::Data>);
    _inline scoped_ptr<UI::Data>(UI::Data *);
private:
    scoped_ptr<UI::Data>(boost::scoped_ptr<UI::Data> const &);
    boost::scoped_ptr<UI::Data> &operator=(boost::scoped_ptr<UI::Data> const &);
    typedef boost::scoped_ptr<UI::Data> this_type;
    typedef UI::Data element_type;
public:
    _inline ~scoped_ptr<UI::Data>();
    void reset(UI::Data *);
    UI::Data &operator*() const;
    _inline UI::Data *operator->() const;
    UI::Data *get() const;
    typedef UI::Data **unspecified_bool_type() const;
    UI::Data **operator struct UI::Data *(__thiscall boost::scoped_ptr<struct UI::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<UI::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<UI::Data>) == 4, "Invalid boost::scoped_ptr<UI::Data> size");

class boost::scoped_ptr<`anonymous namespace'::Data>
{
private:
    `anonymous-namespace'::Data *ptr; // 0x0
public:
    scoped_ptr<`anonymous namespace'::Data>(std::auto_ptr<`anonymous namespace'::Data>);
    scoped_ptr<`anonymous namespace'::Data>(`anonymous-namespace'::Data *);
private:
    scoped_ptr<`anonymous namespace'::Data>(boost::scoped_ptr<`anonymous namespace'::Data> const &);
    boost::scoped_ptr<`anonymous namespace'::Data> &operator=(boost::scoped_ptr<`anonymous namespace'::Data> const &);
    typedef boost::scoped_ptr<`anonymous namespace'::Data> this_type;
    typedef `anonymous-namespace'::Data element_type;
public:
    ~scoped_ptr<`anonymous namespace'::Data>();
    void reset(`anonymous-namespace'::Data *);
    `anonymous-namespace'::Data &operator*() const;
    `anonymous-namespace'::Data *operator->() const;
    `anonymous-namespace'::Data *get() const;
    typedef `anonymous-namespace'::Data **unspecified_bool_type() const;
    `anonymous-namespace'::Data **operator struct `anonymous-namespace'::Data *(__thiscall boost::scoped_ptr<struct `anonymous namespace'::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<`anonymous namespace'::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<`anonymous namespace'::Data>) == 4, "Invalid boost::scoped_ptr<`anonymous namespace'::Data> size");

class boost::scoped_ptr<UI::PlayMoviesScreenData>
{
private:
    UI::PlayMoviesScreenData *ptr; // 0x0
public:
    scoped_ptr<UI::PlayMoviesScreenData>(std::auto_ptr<UI::PlayMoviesScreenData>);
    _inline scoped_ptr<UI::PlayMoviesScreenData>(UI::PlayMoviesScreenData *);
private:
    scoped_ptr<UI::PlayMoviesScreenData>(boost::scoped_ptr<UI::PlayMoviesScreenData> const &);
    boost::scoped_ptr<UI::PlayMoviesScreenData> &operator=(boost::scoped_ptr<UI::PlayMoviesScreenData> const &);
    typedef boost::scoped_ptr<UI::PlayMoviesScreenData> this_type;
    typedef UI::PlayMoviesScreenData element_type;
public:
    _inline ~scoped_ptr<UI::PlayMoviesScreenData>();
    void reset(UI::PlayMoviesScreenData *);
    UI::PlayMoviesScreenData &operator*() const;
    _inline UI::PlayMoviesScreenData *operator->() const;
    UI::PlayMoviesScreenData *get() const;
    typedef UI::PlayMoviesScreenData **unspecified_bool_type() const;
    UI::PlayMoviesScreenData **operator struct UI::PlayMoviesScreenData *(__thiscall boost::scoped_ptr<struct UI::PlayMoviesScreenData>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<UI::PlayMoviesScreenData> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<UI::PlayMoviesScreenData>) == 4, "Invalid boost::scoped_ptr<UI::PlayMoviesScreenData> size");

class boost::scoped_ptr<UI::UnitCapInfoPopupData>
{
private:
    UI::UnitCapInfoPopupData *ptr; // 0x0
public:
    scoped_ptr<UI::UnitCapInfoPopupData>(std::auto_ptr<UI::UnitCapInfoPopupData>);
    _inline scoped_ptr<UI::UnitCapInfoPopupData>(UI::UnitCapInfoPopupData *);
private:
    scoped_ptr<UI::UnitCapInfoPopupData>(boost::scoped_ptr<UI::UnitCapInfoPopupData> const &);
    boost::scoped_ptr<UI::UnitCapInfoPopupData> &operator=(boost::scoped_ptr<UI::UnitCapInfoPopupData> const &);
    typedef boost::scoped_ptr<UI::UnitCapInfoPopupData> this_type;
    typedef UI::UnitCapInfoPopupData element_type;
public:
    _inline ~scoped_ptr<UI::UnitCapInfoPopupData>();
    void reset(UI::UnitCapInfoPopupData *);
    UI::UnitCapInfoPopupData &operator*() const;
    _inline UI::UnitCapInfoPopupData *operator->() const;
    UI::UnitCapInfoPopupData *get() const;
    typedef UI::UnitCapInfoPopupData **unspecified_bool_type() const;
    UI::UnitCapInfoPopupData **operator struct UI::UnitCapInfoPopupData *(__thiscall boost::scoped_ptr<struct UI::UnitCapInfoPopupData>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<UI::UnitCapInfoPopupData> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<UI::UnitCapInfoPopupData>) == 4, "Invalid boost::scoped_ptr<UI::UnitCapInfoPopupData> size");

class boost::scoped_ptr<`anonymous namespace'::Data>
{
private:
    `anonymous-namespace'::Data *ptr; // 0x0
public:
    scoped_ptr<`anonymous namespace'::Data>(std::auto_ptr<`anonymous namespace'::Data>);
    scoped_ptr<`anonymous namespace'::Data>(`anonymous-namespace'::Data *);
private:
    scoped_ptr<`anonymous namespace'::Data>(boost::scoped_ptr<`anonymous namespace'::Data> const &);
    boost::scoped_ptr<`anonymous namespace'::Data> &operator=(boost::scoped_ptr<`anonymous namespace'::Data> const &);
    typedef boost::scoped_ptr<`anonymous namespace'::Data> this_type;
    typedef `anonymous-namespace'::Data element_type;
public:
    ~scoped_ptr<`anonymous namespace'::Data>();
    void reset(`anonymous-namespace'::Data *);
    `anonymous-namespace'::Data &operator*() const;
    `anonymous-namespace'::Data *operator->() const;
    `anonymous-namespace'::Data *get() const;
    typedef `anonymous-namespace'::Data **unspecified_bool_type() const;
    `anonymous-namespace'::Data **operator struct `anonymous-namespace'::Data *(__thiscall boost::scoped_ptr<struct `anonymous namespace'::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<`anonymous namespace'::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<`anonymous namespace'::Data>) == 4, "Invalid boost::scoped_ptr<`anonymous namespace'::Data> size");

class boost::scoped_ptr<`anonymous namespace'::Data>
{
private:
    `anonymous-namespace'::Data *ptr; // 0x0
public:
    scoped_ptr<`anonymous namespace'::Data>(std::auto_ptr<`anonymous namespace'::Data>);
    scoped_ptr<`anonymous namespace'::Data>(`anonymous-namespace'::Data *);
private:
    scoped_ptr<`anonymous namespace'::Data>(boost::scoped_ptr<`anonymous namespace'::Data> const &);
    boost::scoped_ptr<`anonymous namespace'::Data> &operator=(boost::scoped_ptr<`anonymous namespace'::Data> const &);
    typedef boost::scoped_ptr<`anonymous namespace'::Data> this_type;
    typedef `anonymous-namespace'::Data element_type;
public:
    ~scoped_ptr<`anonymous namespace'::Data>();
    void reset(`anonymous-namespace'::Data *);
    `anonymous-namespace'::Data &operator*() const;
    `anonymous-namespace'::Data *operator->() const;
    `anonymous-namespace'::Data *get() const;
    typedef `anonymous-namespace'::Data **unspecified_bool_type() const;
    `anonymous-namespace'::Data **operator struct `anonymous-namespace'::Data *(__thiscall boost::scoped_ptr<struct `anonymous namespace'::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<`anonymous namespace'::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<`anonymous namespace'::Data>) == 4, "Invalid boost::scoped_ptr<`anonymous namespace'::Data> size");

class boost::scoped_ptr<`anonymous namespace'::Data>
{
private:
    `anonymous-namespace'::Data *ptr; // 0x0
public:
    scoped_ptr<`anonymous namespace'::Data>(std::auto_ptr<`anonymous namespace'::Data>);
    scoped_ptr<`anonymous namespace'::Data>(`anonymous-namespace'::Data *);
private:
    scoped_ptr<`anonymous namespace'::Data>(boost::scoped_ptr<`anonymous namespace'::Data> const &);
    boost::scoped_ptr<`anonymous namespace'::Data> &operator=(boost::scoped_ptr<`anonymous namespace'::Data> const &);
    typedef boost::scoped_ptr<`anonymous namespace'::Data> this_type;
    typedef `anonymous-namespace'::Data element_type;
public:
    ~scoped_ptr<`anonymous namespace'::Data>();
    void reset(`anonymous-namespace'::Data *);
    `anonymous-namespace'::Data &operator*() const;
    `anonymous-namespace'::Data *operator->() const;
    `anonymous-namespace'::Data *get() const;
    typedef `anonymous-namespace'::Data **unspecified_bool_type() const;
    `anonymous-namespace'::Data **operator struct `anonymous-namespace'::Data *(__thiscall boost::scoped_ptr<struct `anonymous namespace'::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<`anonymous namespace'::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<`anonymous namespace'::Data>) == 4, "Invalid boost::scoped_ptr<`anonymous namespace'::Data> size");

class boost::scoped_ptr<`anonymous namespace'::Data>
{
private:
    `anonymous-namespace'::Data *ptr; // 0x0
public:
    scoped_ptr<`anonymous namespace'::Data>(std::auto_ptr<`anonymous namespace'::Data>);
    scoped_ptr<`anonymous namespace'::Data>(`anonymous-namespace'::Data *);
private:
    scoped_ptr<`anonymous namespace'::Data>(boost::scoped_ptr<`anonymous namespace'::Data> const &);
    boost::scoped_ptr<`anonymous namespace'::Data> &operator=(boost::scoped_ptr<`anonymous namespace'::Data> const &);
    typedef boost::scoped_ptr<`anonymous namespace'::Data> this_type;
    typedef `anonymous-namespace'::Data element_type;
public:
    ~scoped_ptr<`anonymous namespace'::Data>();
    void reset(`anonymous-namespace'::Data *);
    `anonymous-namespace'::Data &operator*() const;
    `anonymous-namespace'::Data *operator->() const;
    `anonymous-namespace'::Data *get() const;
    typedef `anonymous-namespace'::Data **unspecified_bool_type() const;
    `anonymous-namespace'::Data **operator struct `anonymous-namespace'::Data *(__thiscall boost::scoped_ptr<struct `anonymous namespace'::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<`anonymous namespace'::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<`anonymous namespace'::Data>) == 4, "Invalid boost::scoped_ptr<`anonymous namespace'::Data> size");

class boost::scoped_ptr<`anonymous namespace'::Data>
{
private:
    `anonymous-namespace'::Data *ptr; // 0x0
public:
    scoped_ptr<`anonymous namespace'::Data>(std::auto_ptr<`anonymous namespace'::Data>);
    scoped_ptr<`anonymous namespace'::Data>(`anonymous-namespace'::Data *);
private:
    scoped_ptr<`anonymous namespace'::Data>(boost::scoped_ptr<`anonymous namespace'::Data> const &);
    boost::scoped_ptr<`anonymous namespace'::Data> &operator=(boost::scoped_ptr<`anonymous namespace'::Data> const &);
    typedef boost::scoped_ptr<`anonymous namespace'::Data> this_type;
    typedef `anonymous-namespace'::Data element_type;
public:
    ~scoped_ptr<`anonymous namespace'::Data>();
    void reset(`anonymous-namespace'::Data *);
    `anonymous-namespace'::Data &operator*() const;
    `anonymous-namespace'::Data *operator->() const;
    `anonymous-namespace'::Data *get() const;
    typedef `anonymous-namespace'::Data **unspecified_bool_type() const;
    `anonymous-namespace'::Data **operator struct `anonymous-namespace'::Data *(__thiscall boost::scoped_ptr<struct `anonymous namespace'::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<`anonymous namespace'::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<`anonymous namespace'::Data>) == 4, "Invalid boost::scoped_ptr<`anonymous namespace'::Data> size");

class boost::scoped_ptr<`anonymous namespace'::Data>
{
private:
    `anonymous-namespace'::Data *ptr; // 0x0
public:
    scoped_ptr<`anonymous namespace'::Data>(std::auto_ptr<`anonymous namespace'::Data>);
    scoped_ptr<`anonymous namespace'::Data>(`anonymous-namespace'::Data *);
private:
    scoped_ptr<`anonymous namespace'::Data>(boost::scoped_ptr<`anonymous namespace'::Data> const &);
    boost::scoped_ptr<`anonymous namespace'::Data> &operator=(boost::scoped_ptr<`anonymous namespace'::Data> const &);
    typedef boost::scoped_ptr<`anonymous namespace'::Data> this_type;
    typedef `anonymous-namespace'::Data element_type;
public:
    ~scoped_ptr<`anonymous namespace'::Data>();
    void reset(`anonymous-namespace'::Data *);
    `anonymous-namespace'::Data &operator*() const;
    `anonymous-namespace'::Data *operator->() const;
    `anonymous-namespace'::Data *get() const;
    typedef `anonymous-namespace'::Data **unspecified_bool_type() const;
    `anonymous-namespace'::Data **operator struct `anonymous-namespace'::Data *(__thiscall boost::scoped_ptr<struct `anonymous namespace'::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<`anonymous namespace'::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<`anonymous namespace'::Data>) == 4, "Invalid boost::scoped_ptr<`anonymous namespace'::Data> size");

class boost::scoped_ptr<`anonymous namespace'::Data>
{
private:
    `anonymous-namespace'::Data *ptr; // 0x0
public:
    scoped_ptr<`anonymous namespace'::Data>(std::auto_ptr<`anonymous namespace'::Data>);
    scoped_ptr<`anonymous namespace'::Data>(`anonymous-namespace'::Data *);
private:
    scoped_ptr<`anonymous namespace'::Data>(boost::scoped_ptr<`anonymous namespace'::Data> const &);
    boost::scoped_ptr<`anonymous namespace'::Data> &operator=(boost::scoped_ptr<`anonymous namespace'::Data> const &);
    typedef boost::scoped_ptr<`anonymous namespace'::Data> this_type;
    typedef `anonymous-namespace'::Data element_type;
public:
    ~scoped_ptr<`anonymous namespace'::Data>();
    void reset(`anonymous-namespace'::Data *);
    `anonymous-namespace'::Data &operator*() const;
    `anonymous-namespace'::Data *operator->() const;
    `anonymous-namespace'::Data *get() const;
    typedef `anonymous-namespace'::Data **unspecified_bool_type() const;
    `anonymous-namespace'::Data **operator struct `anonymous-namespace'::Data *(__thiscall boost::scoped_ptr<struct `anonymous namespace'::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<`anonymous namespace'::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<`anonymous namespace'::Data>) == 4, "Invalid boost::scoped_ptr<`anonymous namespace'::Data> size");

class boost::scoped_ptr<AABBGrid<unsigned short,std::allocator<unsigned short> > >
{
private:
    AABBGrid<unsigned short,std::allocator<unsigned short> > *ptr; // 0x0
public:
    scoped_ptr<AABBGrid<unsigned short,std::allocator<unsigned short> > >(std::auto_ptr<AABBGrid<unsigned short,std::allocator<unsigned short> > >);
    _inline scoped_ptr<AABBGrid<unsigned short,std::allocator<unsigned short> > >(AABBGrid<unsigned short,std::allocator<unsigned short> > *);
private:
    scoped_ptr<AABBGrid<unsigned short,std::allocator<unsigned short> > >(boost::scoped_ptr<AABBGrid<unsigned short,std::allocator<unsigned short> > > const &);
    boost::scoped_ptr<AABBGrid<unsigned short,std::allocator<unsigned short> > > &operator=(boost::scoped_ptr<AABBGrid<unsigned short,std::allocator<unsigned short> > > const &);
    typedef boost::scoped_ptr<AABBGrid<unsigned short,std::allocator<unsigned short> > > this_type;
    typedef AABBGrid<unsigned short,std::allocator<unsigned short> > element_type;
public:
    _inline ~scoped_ptr<AABBGrid<unsigned short,std::allocator<unsigned short> > >();
    _inline void reset(AABBGrid<unsigned short,std::allocator<unsigned short> > *);
    AABBGrid<unsigned short,std::allocator<unsigned short> > &operator*() const;
    _inline AABBGrid<unsigned short,std::allocator<unsigned short> > *operator->() const;
    _inline AABBGrid<unsigned short,std::allocator<unsigned short> > *get() const;
    typedef AABBGrid<unsigned short,std::allocator<unsigned short> > **unspecified_bool_type() const;
    AABBGrid<unsigned short,std::allocator<unsigned short> > **operator class AABBGrid<unsigned short,class std::allocator<unsigned short> > *(__thiscall boost::scoped_ptr<class AABBGrid<unsigned short,class std::allocator<unsigned short> > >::* )(void) const() const() const;
    bool operator!() const;
    _inline void swap(boost::scoped_ptr<AABBGrid<unsigned short,std::allocator<unsigned short> > > &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<AABBGrid<unsigned short,std::allocator<unsigned short> > >) == 4, "Invalid boost::scoped_ptr<AABBGrid<unsigned short,std::allocator<unsigned short> > > size");

class boost::scoped_ptr<StarList::Data>
{
private:
    StarList::Data *ptr; // 0x0
public:
    scoped_ptr<StarList::Data>(std::auto_ptr<StarList::Data>);
    _inline scoped_ptr<StarList::Data>(StarList::Data *);
private:
    scoped_ptr<StarList::Data>(boost::scoped_ptr<StarList::Data> const &);
    boost::scoped_ptr<StarList::Data> &operator=(boost::scoped_ptr<StarList::Data> const &);
    typedef boost::scoped_ptr<StarList::Data> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<StarList::Data>();
    void reset(StarList::Data *);
    StarList::Data &operator*() const;
    _inline StarList::Data *operator->() const;
    StarList::Data *get() const;
    typedef StarList::Data **unspecified_bool_type() const;
    StarList::Data **operator class StarList::Data *(__thiscall boost::scoped_ptr<class StarList::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<StarList::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<StarList::Data>) == 4, "Invalid boost::scoped_ptr<StarList::Data> size");

class boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > >
{
private:
    std::vector<FatVertex,std::allocator<FatVertex> > *ptr; // 0x0
public:
    scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > >(std::auto_ptr<std::vector<FatVertex,std::allocator<FatVertex> > >);
    scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > >(std::vector<FatVertex,std::allocator<FatVertex> > *);
private:
    scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > >(boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > > const &);
    boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > > &operator=(boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > > const &);
    typedef boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > > this_type;
    typedef std::vector<FatVertex,std::allocator<FatVertex> > element_type;
public:
    ~scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > >();
    void reset(std::vector<FatVertex,std::allocator<FatVertex> > *);
    std::vector<FatVertex,std::allocator<FatVertex> > &operator*() const;
    std::vector<FatVertex,std::allocator<FatVertex> > *operator->() const;
    std::vector<FatVertex,std::allocator<FatVertex> > *get() const;
    typedef std::vector<FatVertex,std::allocator<FatVertex> > **unspecified_bool_type() const;
    std::vector<FatVertex,std::allocator<FatVertex> > **operator class std::vector<struct FatVertex,class std::allocator<struct FatVertex> > *(__thiscall boost::scoped_ptr<class std::vector<struct FatVertex,class std::allocator<struct FatVertex> > >::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > > &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > >) == 4, "Invalid boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > > size");

class boost::scoped_ptr<`anonymous namespace'::Data>
{
private:
    `anonymous-namespace'::Data *ptr; // 0x0
public:
    scoped_ptr<`anonymous namespace'::Data>(std::auto_ptr<`anonymous namespace'::Data>);
    scoped_ptr<`anonymous namespace'::Data>(`anonymous-namespace'::Data *);
private:
    scoped_ptr<`anonymous namespace'::Data>(boost::scoped_ptr<`anonymous namespace'::Data> const &);
    boost::scoped_ptr<`anonymous namespace'::Data> &operator=(boost::scoped_ptr<`anonymous namespace'::Data> const &);
    typedef boost::scoped_ptr<`anonymous namespace'::Data> this_type;
    typedef `anonymous-namespace'::Data element_type;
public:
    ~scoped_ptr<`anonymous namespace'::Data>();
    void reset(`anonymous-namespace'::Data *);
    `anonymous-namespace'::Data &operator*() const;
    `anonymous-namespace'::Data *operator->() const;
    `anonymous-namespace'::Data *get() const;
    typedef `anonymous-namespace'::Data **unspecified_bool_type() const;
    `anonymous-namespace'::Data **operator struct `anonymous-namespace'::Data *(__thiscall boost::scoped_ptr<struct `anonymous namespace'::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<`anonymous namespace'::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<`anonymous namespace'::Data>) == 4, "Invalid boost::scoped_ptr<`anonymous namespace'::Data> size");

class boost::scoped_ptr<`anonymous namespace'::Data>
{
private:
    `anonymous-namespace'::Data *ptr; // 0x0
public:
    scoped_ptr<`anonymous namespace'::Data>(std::auto_ptr<`anonymous namespace'::Data>);
    scoped_ptr<`anonymous namespace'::Data>(`anonymous-namespace'::Data *);
private:
    scoped_ptr<`anonymous namespace'::Data>(boost::scoped_ptr<`anonymous namespace'::Data> const &);
    boost::scoped_ptr<`anonymous namespace'::Data> &operator=(boost::scoped_ptr<`anonymous namespace'::Data> const &);
    typedef boost::scoped_ptr<`anonymous namespace'::Data> this_type;
    typedef `anonymous-namespace'::Data element_type;
public:
    ~scoped_ptr<`anonymous namespace'::Data>();
    void reset(`anonymous-namespace'::Data *);
    `anonymous-namespace'::Data &operator*() const;
    `anonymous-namespace'::Data *operator->() const;
    `anonymous-namespace'::Data *get() const;
    typedef `anonymous-namespace'::Data **unspecified_bool_type() const;
    `anonymous-namespace'::Data **operator struct `anonymous-namespace'::Data *(__thiscall boost::scoped_ptr<struct `anonymous namespace'::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<`anonymous namespace'::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<`anonymous namespace'::Data>) == 4, "Invalid boost::scoped_ptr<`anonymous namespace'::Data> size");

class boost::scoped_ptr<SoundEntityList::Memory>
{
private:
    SoundEntityList::Memory *ptr; // 0x0
public:
    scoped_ptr<SoundEntityList::Memory>(std::auto_ptr<SoundEntityList::Memory>);
    _inline scoped_ptr<SoundEntityList::Memory>(SoundEntityList::Memory *);
private:
    scoped_ptr<SoundEntityList::Memory>(boost::scoped_ptr<SoundEntityList::Memory> const &);
    boost::scoped_ptr<SoundEntityList::Memory> &operator=(boost::scoped_ptr<SoundEntityList::Memory> const &);
    typedef boost::scoped_ptr<SoundEntityList::Memory> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<SoundEntityList::Memory>();
    void reset(SoundEntityList::Memory *);
    SoundEntityList::Memory &operator*() const;
    _inline SoundEntityList::Memory *operator->() const;
    SoundEntityList::Memory *get() const;
    typedef SoundEntityList::Memory **unspecified_bool_type() const;
    SoundEntityList::Memory **operator class SoundEntityList::Memory *(__thiscall boost::scoped_ptr<class SoundEntityList::Memory>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<SoundEntityList::Memory> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<SoundEntityList::Memory>) == 4, "Invalid boost::scoped_ptr<SoundEntityList::Memory> size");

class boost::scoped_ptr<FXBeam::Renderer>
{
private:
    FXBeam::Renderer *ptr; // 0x0
public:
    scoped_ptr<FXBeam::Renderer>(std::auto_ptr<FXBeam::Renderer>);
    _inline scoped_ptr<FXBeam::Renderer>(FXBeam::Renderer *);
private:
    scoped_ptr<FXBeam::Renderer>(boost::scoped_ptr<FXBeam::Renderer> const &);
    boost::scoped_ptr<FXBeam::Renderer> &operator=(boost::scoped_ptr<FXBeam::Renderer> const &);
    typedef boost::scoped_ptr<FXBeam::Renderer> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<FXBeam::Renderer>();
    _inline void reset(FXBeam::Renderer *);
    FXBeam::Renderer &operator*() const;
    _inline FXBeam::Renderer *operator->() const;
    _inline FXBeam::Renderer *get() const;
    typedef FXBeam::Renderer **unspecified_bool_type() const;
    FXBeam::Renderer **operator class FXBeam::Renderer *(__thiscall boost::scoped_ptr<class FXBeam::Renderer>::* )(void) const() const() const;
    bool operator!() const;
    _inline void swap(boost::scoped_ptr<FXBeam::Renderer> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<FXBeam::Renderer>) == 4, "Invalid boost::scoped_ptr<FXBeam::Renderer> size");

class boost::scoped_ptr<FXHyperspace::Renderer>
{
private:
    FXHyperspace::Renderer *ptr; // 0x0
public:
    scoped_ptr<FXHyperspace::Renderer>(std::auto_ptr<FXHyperspace::Renderer>);
    _inline scoped_ptr<FXHyperspace::Renderer>(FXHyperspace::Renderer *);
private:
    scoped_ptr<FXHyperspace::Renderer>(boost::scoped_ptr<FXHyperspace::Renderer> const &);
    boost::scoped_ptr<FXHyperspace::Renderer> &operator=(boost::scoped_ptr<FXHyperspace::Renderer> const &);
    typedef boost::scoped_ptr<FXHyperspace::Renderer> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<FXHyperspace::Renderer>();
    _inline void reset(FXHyperspace::Renderer *);
    FXHyperspace::Renderer &operator*() const;
    _inline FXHyperspace::Renderer *operator->() const;
    _inline FXHyperspace::Renderer *get() const;
    typedef FXHyperspace::Renderer **unspecified_bool_type() const;
    FXHyperspace::Renderer **operator class FXHyperspace::Renderer *(__thiscall boost::scoped_ptr<class FXHyperspace::Renderer>::* )(void) const() const() const;
    bool operator!() const;
    _inline void swap(boost::scoped_ptr<FXHyperspace::Renderer> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<FXHyperspace::Renderer>) == 4, "Invalid boost::scoped_ptr<FXHyperspace::Renderer> size");

class boost::scoped_ptr<FXRing::Renderer>
{
private:
    FXRing::Renderer *ptr; // 0x0
public:
    scoped_ptr<FXRing::Renderer>(std::auto_ptr<FXRing::Renderer>);
    _inline scoped_ptr<FXRing::Renderer>(FXRing::Renderer *);
private:
    scoped_ptr<FXRing::Renderer>(boost::scoped_ptr<FXRing::Renderer> const &);
    boost::scoped_ptr<FXRing::Renderer> &operator=(boost::scoped_ptr<FXRing::Renderer> const &);
    typedef boost::scoped_ptr<FXRing::Renderer> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<FXRing::Renderer>();
    _inline void reset(FXRing::Renderer *);
    FXRing::Renderer &operator*() const;
    _inline FXRing::Renderer *operator->() const;
    _inline FXRing::Renderer *get() const;
    typedef FXRing::Renderer **unspecified_bool_type() const;
    FXRing::Renderer **operator class FXRing::Renderer *(__thiscall boost::scoped_ptr<class FXRing::Renderer>::* )(void) const() const() const;
    bool operator!() const;
    _inline void swap(boost::scoped_ptr<FXRing::Renderer> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<FXRing::Renderer>) == 4, "Invalid boost::scoped_ptr<FXRing::Renderer> size");

class boost::scoped_ptr<FXTrail::Renderer>
{
private:
    FXTrail::Renderer *ptr; // 0x0
public:
    scoped_ptr<FXTrail::Renderer>(std::auto_ptr<FXTrail::Renderer>);
    _inline scoped_ptr<FXTrail::Renderer>(FXTrail::Renderer *);
private:
    scoped_ptr<FXTrail::Renderer>(boost::scoped_ptr<FXTrail::Renderer> const &);
    boost::scoped_ptr<FXTrail::Renderer> &operator=(boost::scoped_ptr<FXTrail::Renderer> const &);
    typedef boost::scoped_ptr<FXTrail::Renderer> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<FXTrail::Renderer>();
    _inline void reset(FXTrail::Renderer *);
    FXTrail::Renderer &operator*() const;
    _inline FXTrail::Renderer *operator->() const;
    _inline FXTrail::Renderer *get() const;
    typedef FXTrail::Renderer **unspecified_bool_type() const;
    FXTrail::Renderer **operator class FXTrail::Renderer *(__thiscall boost::scoped_ptr<class FXTrail::Renderer>::* )(void) const() const() const;
    bool operator!() const;
    _inline void swap(boost::scoped_ptr<FXTrail::Renderer> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<FXTrail::Renderer>) == 4, "Invalid boost::scoped_ptr<FXTrail::Renderer> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_6519C9(boost::scoped_ptr<UniverseInterp::Data> *const, UniverseInterp::Data *);
_inline boost::scoped_ptr<UniverseInterp::Data>::scoped_ptr<UniverseInterp::Data>(UniverseInterp::Data *) // 0x6519C9
{
    mangled_assert("??0?$scoped_ptr@VData@UniverseInterp@@@boost@@QAE@PAVData@UniverseInterp@@@Z");
    todo("implement");
    _sub_6519C9(this, arg);
}

_extern _sub_64C440(boost::scoped_ptr<Timer> *const, Timer *);
_inline boost::scoped_ptr<Timer>::scoped_ptr<Timer>(Timer *) // 0x64C440
{
    mangled_assert("??0?$scoped_ptr@VTimer@@@boost@@QAE@PAVTimer@@@Z");
    todo("implement");
    _sub_64C440(this, arg);
}

_extern _sub_640897(boost::scoped_ptr<StarList::Data> *const, StarList::Data *);
_inline boost::scoped_ptr<StarList::Data>::scoped_ptr<StarList::Data>(StarList::Data *) // 0x640897
{
    mangled_assert("??0?$scoped_ptr@VData@StarList@@@boost@@QAE@PAVData@StarList@@@Z");
    todo("implement");
    _sub_640897(this, arg);
}

_extern _sub_637CE9(boost::scoped_ptr<SimProxy::Data> *const, SimProxy::Data *);
_inline boost::scoped_ptr<SimProxy::Data>::scoped_ptr<SimProxy::Data>(SimProxy::Data *) // 0x637CE9
{
    mangled_assert("??0?$scoped_ptr@VData@SimProxy@@@boost@@QAE@PAVData@SimProxy@@@Z");
    todo("implement");
    _sub_637CE9(this, arg);
}

_extern _sub_6363D3(boost::scoped_ptr<SensorsManager::Data> *const, SensorsManager::Data *);
_inline boost::scoped_ptr<SensorsManager::Data>::scoped_ptr<SensorsManager::Data>(SensorsManager::Data *) // 0x6363D3
{
    mangled_assert("??0?$scoped_ptr@VData@SensorsManager@@@boost@@QAE@PAVData@SensorsManager@@@Z");
    todo("implement");
    _sub_6363D3(this, arg);
}

_extern _sub_5EF54B(boost::scoped_ptr<GameEventSys::Data> *const, GameEventSys::Data *);
_inline boost::scoped_ptr<GameEventSys::Data>::scoped_ptr<GameEventSys::Data>(GameEventSys::Data *) // 0x5EF54B
{
    mangled_assert("??0?$scoped_ptr@VData@GameEventSys@@@boost@@QAE@PAVData@GameEventSys@@@Z");
    todo("implement");
    _sub_5EF54B(this, arg);
}

_extern _sub_5E7C40(boost::scoped_ptr<Campaign::Data> *const, Campaign::Data *);
_inline boost::scoped_ptr<Campaign::Data>::scoped_ptr<Campaign::Data>(Campaign::Data *) // 0x5E7C40
{
    mangled_assert("??0?$scoped_ptr@VData@Campaign@@@boost@@QAE@PAVData@Campaign@@@Z");
    todo("implement");
    _sub_5E7C40(this, arg);
}

_extern _sub_5E56C5(boost::scoped_ptr<Background::Data> *const, Background::Data *);
_inline boost::scoped_ptr<Background::Data>::scoped_ptr<Background::Data>(Background::Data *) // 0x5E56C5
{
    mangled_assert("??0?$scoped_ptr@VData@Background@@@boost@@QAE@PAVData@Background@@@Z");
    todo("implement");
    _sub_5E56C5(this, arg);
}

_extern _sub_5C47E7(boost::scoped_ptr<VertexPool::Data> *const, VertexPool::Data *);
_inline boost::scoped_ptr<VertexPool::Data>::scoped_ptr<VertexPool::Data>(VertexPool::Data *) // 0x5C47E7
{
    mangled_assert("??0?$scoped_ptr@VData@VertexPool@@@boost@@QAE@PAVData@VertexPool@@@Z");
    todo("implement");
    _sub_5C47E7(this, arg);
}

_extern _sub_5C3CBB(boost::scoped_ptr<DecalRefMeshRegistry::Data> *const, DecalRefMeshRegistry::Data *);
_inline boost::scoped_ptr<DecalRefMeshRegistry::Data>::scoped_ptr<DecalRefMeshRegistry::Data>(DecalRefMeshRegistry::Data *) // 0x5C3CBB
{
    mangled_assert("??0?$scoped_ptr@VData@DecalRefMeshRegistry@@@boost@@QAE@PAVData@DecalRefMeshRegistry@@@Z");
    todo("implement");
    _sub_5C3CBB(this, arg);
}

_extern _sub_5C22CD(boost::scoped_ptr<AABBGrid<unsigned short,std::allocator<unsigned short> > > *const, AABBGrid<unsigned short,std::allocator<unsigned short> > *);
_inline boost::scoped_ptr<AABBGrid<unsigned short,std::allocator<unsigned short> > >::scoped_ptr<AABBGrid<unsigned short,std::allocator<unsigned short> > >(AABBGrid<unsigned short,std::allocator<unsigned short> > *) // 0x5C22CD
{
    mangled_assert("??0?$scoped_ptr@V?$AABBGrid@GV?$allocator@G@std@@@@@boost@@QAE@PAV?$AABBGrid@GV?$allocator@G@std@@@@@Z");
    todo("implement");
    _sub_5C22CD(this, arg);
}

_extern _sub_5C22D8(boost::scoped_ptr<DecalRefMesh::Data> *const, DecalRefMesh::Data *);
_inline boost::scoped_ptr<DecalRefMesh::Data>::scoped_ptr<DecalRefMesh::Data>(DecalRefMesh::Data *) // 0x5C22D8
{
    mangled_assert("??0?$scoped_ptr@VData@DecalRefMesh@@@boost@@QAE@PAVData@DecalRefMesh@@@Z");
    todo("implement");
    _sub_5C22D8(this, arg);
}

_extern _sub_5C14A5(boost::scoped_ptr<DecalManager::Data> *const, DecalManager::Data *);
_inline boost::scoped_ptr<DecalManager::Data>::scoped_ptr<DecalManager::Data>(DecalManager::Data *) // 0x5C14A5
{
    mangled_assert("??0?$scoped_ptr@VData@DecalManager@@@boost@@QAE@PAVData@DecalManager@@@Z");
    todo("implement");
    _sub_5C14A5(this, arg);
}

_extern _sub_5AE709(boost::scoped_ptr<UI::UnitCapInfoPopupData> *const, UI::UnitCapInfoPopupData *);
_inline boost::scoped_ptr<UI::UnitCapInfoPopupData>::scoped_ptr<UI::UnitCapInfoPopupData>(UI::UnitCapInfoPopupData *) // 0x5AE709
{
    mangled_assert("??0?$scoped_ptr@UUnitCapInfoPopupData@UI@@@boost@@QAE@PAUUnitCapInfoPopupData@UI@@@Z");
    todo("implement");
    _sub_5AE709(this, arg);
}

_extern _sub_5AD3CF(boost::scoped_ptr<UI::SubtitleScreen::Data> *const, UI::SubtitleScreen::Data *);
_inline boost::scoped_ptr<UI::SubtitleScreen::Data>::scoped_ptr<UI::SubtitleScreen::Data>(UI::SubtitleScreen::Data *) // 0x5AD3CF
{
    mangled_assert("??0?$scoped_ptr@VData@SubtitleScreen@UI@@@boost@@QAE@PAVData@SubtitleScreen@UI@@@Z");
    todo("implement");
    _sub_5AD3CF(this, arg);
}

_extern _sub_5AA137(boost::scoped_ptr<UI::Statistics::StatsImpl> *const, UI::Statistics::StatsImpl *);
_inline boost::scoped_ptr<UI::Statistics::StatsImpl>::scoped_ptr<UI::Statistics::StatsImpl>(UI::Statistics::StatsImpl *) // 0x5AA137
{
    mangled_assert("??0?$scoped_ptr@VStatsImpl@Statistics@UI@@@boost@@QAE@PAVStatsImpl@Statistics@UI@@@Z");
    todo("implement");
    _sub_5AA137(this, arg);
}

_extern _sub_5A6A3A(boost::scoped_ptr<UI::SaveLoadDialogData> *const, UI::SaveLoadDialogData *);
_inline boost::scoped_ptr<UI::SaveLoadDialogData>::scoped_ptr<UI::SaveLoadDialogData>(UI::SaveLoadDialogData *) // 0x5A6A3A
{
    mangled_assert("??0?$scoped_ptr@USaveLoadDialogData@UI@@@boost@@QAE@PAUSaveLoadDialogData@UI@@@Z");
    todo("implement");
    _sub_5A6A3A(this, arg);
}

_extern _sub_5A4290(boost::scoped_ptr<UI::PointerData> *const, UI::PointerData *);
_inline boost::scoped_ptr<UI::PointerData>::scoped_ptr<UI::PointerData>(UI::PointerData *) // 0x5A4290
{
    mangled_assert("??0?$scoped_ptr@VPointerData@UI@@@boost@@QAE@PAVPointerData@UI@@@Z");
    todo("implement");
    _sub_5A4290(this, arg);
}

_extern _sub_5A3D33(boost::scoped_ptr<UI::PlayMoviesScreenData> *const, UI::PlayMoviesScreenData *);
_inline boost::scoped_ptr<UI::PlayMoviesScreenData>::scoped_ptr<UI::PlayMoviesScreenData>(UI::PlayMoviesScreenData *) // 0x5A3D33
{
    mangled_assert("??0?$scoped_ptr@UPlayMoviesScreenData@UI@@@boost@@QAE@PAUPlayMoviesScreenData@UI@@@Z");
    todo("implement");
    _sub_5A3D33(this, arg);
}

_extern _sub_590A69(boost::scoped_ptr<UI::MovieSpeech> *const, UI::MovieSpeech *);
_inline boost::scoped_ptr<UI::MovieSpeech>::scoped_ptr<UI::MovieSpeech>(UI::MovieSpeech *) // 0x590A69
{
    mangled_assert("??0?$scoped_ptr@VMovieSpeech@UI@@@boost@@QAE@PAVMovieSpeech@UI@@@Z");
    todo("implement");
    _sub_590A69(this, arg);
}

_extern _sub_590A74(boost::scoped_ptr<UI::MovieTimer> *const, UI::MovieTimer *);
_inline boost::scoped_ptr<UI::MovieTimer>::scoped_ptr<UI::MovieTimer>(UI::MovieTimer *) // 0x590A74
{
    mangled_assert("??0?$scoped_ptr@VMovieTimer@UI@@@boost@@QAE@PAVMovieTimer@UI@@@Z");
    todo("implement");
    _sub_590A74(this, arg);
}

_extern _sub_58BBD3(boost::scoped_ptr<UI::Data> *const, UI::Data *);
_inline boost::scoped_ptr<UI::Data>::scoped_ptr<UI::Data>(UI::Data *) // 0x58BBD3
{
    mangled_assert("??0?$scoped_ptr@UData@UI@@@boost@@QAE@PAUData@UI@@@Z");
    todo("implement");
    _sub_58BBD3(this, arg);
}

_extern _sub_5860A0(boost::scoped_ptr<UI::GameOverScreenData> *const, UI::GameOverScreenData *);
_inline boost::scoped_ptr<UI::GameOverScreenData>::scoped_ptr<UI::GameOverScreenData>(UI::GameOverScreenData *) // 0x5860A0
{
    mangled_assert("??0?$scoped_ptr@UGameOverScreenData@UI@@@boost@@QAE@PAUGameOverScreenData@UI@@@Z");
    todo("implement");
    _sub_5860A0(this, arg);
}

_extern _sub_585A78(boost::scoped_ptr<UI::GameMenuData> *const, UI::GameMenuData *);
_inline boost::scoped_ptr<UI::GameMenuData>::scoped_ptr<UI::GameMenuData>(UI::GameMenuData *) // 0x585A78
{
    mangled_assert("??0?$scoped_ptr@UGameMenuData@UI@@@boost@@QAE@PAUGameMenuData@UI@@@Z");
    todo("implement");
    _sub_585A78(this, arg);
}

_extern _sub_577148(boost::scoped_ptr<UI::EventsScreenData> *const, UI::EventsScreenData *);
_inline boost::scoped_ptr<UI::EventsScreenData>::scoped_ptr<UI::EventsScreenData>(UI::EventsScreenData *) // 0x577148
{
    mangled_assert("??0?$scoped_ptr@VEventsScreenData@UI@@@boost@@QAE@PAVEventsScreenData@UI@@@Z");
    todo("implement");
    _sub_577148(this, arg);
}

_extern _sub_575D90(boost::scoped_ptr<UI::ErrorMessageData> *const, UI::ErrorMessageData *);
_inline boost::scoped_ptr<UI::ErrorMessageData>::scoped_ptr<UI::ErrorMessageData>(UI::ErrorMessageData *) // 0x575D90
{
    mangled_assert("??0?$scoped_ptr@UErrorMessageData@UI@@@boost@@QAE@PAUErrorMessageData@UI@@@Z");
    todo("implement");
    _sub_575D90(this, arg);
}

_extern _sub_57205F(boost::scoped_ptr<UI::ControlsFrameData> *const, UI::ControlsFrameData *);
_inline boost::scoped_ptr<UI::ControlsFrameData>::scoped_ptr<UI::ControlsFrameData>(UI::ControlsFrameData *) // 0x57205F
{
    mangled_assert("??0?$scoped_ptr@VControlsFrameData@UI@@@boost@@QAE@PAVControlsFrameData@UI@@@Z");
    todo("implement");
    _sub_57205F(this, arg);
}

_extern _sub_56282F(boost::scoped_ptr<BattleScarTrail::Renderer> *const, BattleScarTrail::Renderer *);
_inline boost::scoped_ptr<BattleScarTrail::Renderer>::scoped_ptr<BattleScarTrail::Renderer>(BattleScarTrail::Renderer *) // 0x56282F
{
    mangled_assert("??0?$scoped_ptr@VRenderer@BattleScarTrail@@@boost@@QAE@PAVRenderer@BattleScarTrail@@@Z");
    todo("implement");
    _sub_56282F(this, arg);
}

_extern _sub_560F24(boost::scoped_ptr<BattleScarStats::Data> *const, BattleScarStats::Data *);
_inline boost::scoped_ptr<BattleScarStats::Data>::scoped_ptr<BattleScarStats::Data>(BattleScarStats::Data *) // 0x560F24
{
    mangled_assert("??0?$scoped_ptr@VData@BattleScarStats@@@boost@@QAE@PAVData@BattleScarStats@@@Z");
    todo("implement");
    _sub_560F24(this, arg);
}

_extern _sub_55D9CF(boost::scoped_ptr<BattleScarPoint::Renderer> *const, BattleScarPoint::Renderer *);
_inline boost::scoped_ptr<BattleScarPoint::Renderer>::scoped_ptr<BattleScarPoint::Renderer>(BattleScarPoint::Renderer *) // 0x55D9CF
{
    mangled_assert("??0?$scoped_ptr@VRenderer@BattleScarPoint@@@boost@@QAE@PAVRenderer@BattleScarPoint@@@Z");
    todo("implement");
    _sub_55D9CF(this, arg);
}

_extern _sub_559DAD(boost::scoped_ptr<BattleScarManager::Data> *const, BattleScarManager::Data *);
_inline boost::scoped_ptr<BattleScarManager::Data>::scoped_ptr<BattleScarManager::Data>(BattleScarManager::Data *) // 0x559DAD
{
    mangled_assert("??0?$scoped_ptr@VData@BattleScarManager@@@boost@@QAE@PAVData@BattleScarManager@@@Z");
    todo("implement");
    _sub_559DAD(this, arg);
}

_extern _sub_559DB8(boost::scoped_ptr<DecalManager> *const, DecalManager *);
_inline boost::scoped_ptr<DecalManager>::scoped_ptr<DecalManager>(DecalManager *) // 0x559DB8
{
    mangled_assert("??0?$scoped_ptr@VDecalManager@@@boost@@QAE@PAVDecalManager@@@Z");
    todo("implement");
    _sub_559DB8(this, arg);
}

_extern _sub_541535(boost::scoped_ptr<HW2CpuPlayer::Data> *const, HW2CpuPlayer::Data *);
_inline boost::scoped_ptr<HW2CpuPlayer::Data>::scoped_ptr<HW2CpuPlayer::Data>(HW2CpuPlayer::Data *) // 0x541535
{
    mangled_assert("??0?$scoped_ptr@VData@HW2CpuPlayer@@@boost@@QAE@PAVData@HW2CpuPlayer@@@Z");
    todo("implement");
    _sub_541535(this, arg);
}

_extern _sub_52F6C6(boost::scoped_ptr<CpuFleetCommand::Data> *const, CpuFleetCommand::Data *);
_inline boost::scoped_ptr<CpuFleetCommand::Data>::scoped_ptr<CpuFleetCommand::Data>(CpuFleetCommand::Data *) // 0x52F6C6
{
    mangled_assert("??0?$scoped_ptr@VData@CpuFleetCommand@@@boost@@QAE@PAVData@CpuFleetCommand@@@Z");
    todo("implement");
    _sub_52F6C6(this, arg);
}

_extern _sub_5226C0(boost::scoped_ptr<RenderModelScars> *const, RenderModelScars *);
_inline boost::scoped_ptr<RenderModelScars>::scoped_ptr<RenderModelScars>(RenderModelScars *) // 0x5226C0
{
    mangled_assert("??0?$scoped_ptr@VRenderModelScars@@@boost@@QAE@PAVRenderModelScars@@@Z");
    todo("implement");
    _sub_5226C0(this, arg);
}

_extern _sub_520988(boost::scoped_ptr<RenderModelScars::Data> *const, RenderModelScars::Data *);
_inline boost::scoped_ptr<RenderModelScars::Data>::scoped_ptr<RenderModelScars::Data>(RenderModelScars::Data *) // 0x520988
{
    mangled_assert("??0?$scoped_ptr@VData@RenderModelScars@@@boost@@QAE@PAVData@RenderModelScars@@@Z");
    todo("implement");
    _sub_520988(this, arg);
}

_extern _sub_50D79F(boost::scoped_ptr<StatLoggingInternal> *const, StatLoggingInternal *);
_inline boost::scoped_ptr<StatLoggingInternal>::scoped_ptr<StatLoggingInternal>(StatLoggingInternal *) // 0x50D79F
{
    mangled_assert("??0?$scoped_ptr@VStatLoggingInternal@@@boost@@QAE@PAVStatLoggingInternal@@@Z");
    todo("implement");
    _sub_50D79F(this, arg);
}

_extern _sub_504553(boost::scoped_ptr<PlayerProfile> *const, PlayerProfile *);
_inline boost::scoped_ptr<PlayerProfile>::scoped_ptr<PlayerProfile>(PlayerProfile *) // 0x504553
{
    mangled_assert("??0?$scoped_ptr@VPlayerProfile@@@boost@@QAE@PAVPlayerProfile@@@Z");
    todo("implement");
    _sub_504553(this, arg);
}

_extern _sub_502EE0(boost::scoped_ptr<PlayerProfileGameOptionsData> *const, PlayerProfileGameOptionsData *);
_inline boost::scoped_ptr<PlayerProfileGameOptionsData>::scoped_ptr<PlayerProfileGameOptionsData>(PlayerProfileGameOptionsData *) // 0x502EE0
{
    mangled_assert("??0?$scoped_ptr@UPlayerProfileGameOptionsData@@@boost@@QAE@PAUPlayerProfileGameOptionsData@@@Z");
    todo("implement");
    _sub_502EE0(this, arg);
}

_extern _sub_4F8503(boost::scoped_ptr<LuaSimProxyLib> *const, LuaSimProxyLib *);
_inline boost::scoped_ptr<LuaSimProxyLib>::scoped_ptr<LuaSimProxyLib>(LuaSimProxyLib *) // 0x4F8503
{
    mangled_assert("??0?$scoped_ptr@VLuaSimProxyLib@@@boost@@QAE@PAVLuaSimProxyLib@@@Z");
    todo("implement");
    _sub_4F8503(this, arg);
}

_extern _sub_4F850E(boost::scoped_ptr<SimProxy> *const, SimProxy *);
_inline boost::scoped_ptr<SimProxy>::scoped_ptr<SimProxy>(SimProxy *) // 0x4F850E
{
    mangled_assert("??0?$scoped_ptr@VSimProxy@@@boost@@QAE@PAVSimProxy@@@Z");
    todo("implement");
    _sub_4F850E(this, arg);
}

_extern _sub_4F62EB(boost::scoped_ptr<ConfigFile> *const, ConfigFile *);
_inline boost::scoped_ptr<ConfigFile>::scoped_ptr<ConfigFile>(ConfigFile *) // 0x4F62EB
{
    mangled_assert("??0?$scoped_ptr@VConfigFile@@@boost@@QAE@PAVConfigFile@@@Z");
    todo("implement");
    _sub_4F62EB(this, arg);
}

_extern _sub_4F62F6(boost::scoped_ptr<AppObj::Data> *const, AppObj::Data *);
_inline boost::scoped_ptr<AppObj::Data>::scoped_ptr<AppObj::Data>(AppObj::Data *) // 0x4F62F6
{
    mangled_assert("??0?$scoped_ptr@VData@AppObj@@@boost@@QAE@PAVData@AppObj@@@Z");
    todo("implement");
    _sub_4F62F6(this, arg);
}

_extern _sub_4F6301(boost::scoped_ptr<Lobby> *const, Lobby *);
_inline boost::scoped_ptr<Lobby>::scoped_ptr<Lobby>(Lobby *) // 0x4F6301
{
    mangled_assert("??0?$scoped_ptr@VLobby@@@boost@@QAE@PAVLobby@@@Z");
    todo("implement");
    _sub_4F6301(this, arg);
}

_extern _sub_4F630C(boost::scoped_ptr<StatMonitor> *const, StatMonitor *);
_inline boost::scoped_ptr<StatMonitor>::scoped_ptr<StatMonitor>(StatMonitor *) // 0x4F630C
{
    mangled_assert("??0?$scoped_ptr@VStatMonitor@@@boost@@QAE@PAVStatMonitor@@@Z");
    todo("implement");
    _sub_4F630C(this, arg);
}

_extern _sub_4DCCA1(boost::scoped_ptr<CameraCommand::FocusDistance> *const, CameraCommand::FocusDistance *);
_inline boost::scoped_ptr<CameraCommand::FocusDistance>::scoped_ptr<CameraCommand::FocusDistance>(CameraCommand::FocusDistance *) // 0x4DCCA1
{
    mangled_assert("??0?$scoped_ptr@UFocusDistance@CameraCommand@@@boost@@QAE@PAUFocusDistance@CameraCommand@@@Z");
    todo("implement");
    _sub_4DCCA1(this, arg);
}

_extern _sub_4C0029(boost::scoped_ptr<SobWithMeshStatic::LoadingEnv> *const, SobWithMeshStatic::LoadingEnv *);
_inline boost::scoped_ptr<SobWithMeshStatic::LoadingEnv>::scoped_ptr<SobWithMeshStatic::LoadingEnv>(SobWithMeshStatic::LoadingEnv *) // 0x4C0029
{
    mangled_assert("??0?$scoped_ptr@VLoadingEnv@SobWithMeshStatic@@@boost@@QAE@PAVLoadingEnv@SobWithMeshStatic@@@Z");
    todo("implement");
    _sub_4C0029(this, arg);
}

_extern _sub_4AC04C(boost::scoped_ptr<ShipHold::Data> *const, ShipHold::Data *);
_inline boost::scoped_ptr<ShipHold::Data>::scoped_ptr<ShipHold::Data>(ShipHold::Data *) // 0x4AC04C
{
    mangled_assert("??0?$scoped_ptr@VData@ShipHold@@@boost@@QAE@PAVData@ShipHold@@@Z");
    todo("implement");
    _sub_4AC04C(this, arg);
}

_extern _sub_4969A4(boost::scoped_ptr<ShipStatic::LoadingEnv> *const, ShipStatic::LoadingEnv *);
_inline boost::scoped_ptr<ShipStatic::LoadingEnv>::scoped_ptr<ShipStatic::LoadingEnv>(ShipStatic::LoadingEnv *) // 0x4969A4
{
    mangled_assert("??0?$scoped_ptr@VLoadingEnv@ShipStatic@@@boost@@QAE@PAVLoadingEnv@ShipStatic@@@Z");
    todo("implement");
    _sub_4969A4(this, arg);
}

_extern _sub_48121E(boost::scoped_ptr<StaticModelRegistry::Data> *const, StaticModelRegistry::Data *);
_inline boost::scoped_ptr<StaticModelRegistry::Data>::scoped_ptr<StaticModelRegistry::Data>(StaticModelRegistry::Data *) // 0x48121E
{
    mangled_assert("??0?$scoped_ptr@VData@StaticModelRegistry@@@boost@@QAE@PAVData@StaticModelRegistry@@@Z");
    todo("implement");
    _sub_48121E(this, arg);
}

_extern _sub_47BD37(boost::scoped_ptr<SobStatic::LoadingEnv> *const, SobStatic::LoadingEnv *);
_inline boost::scoped_ptr<SobStatic::LoadingEnv>::scoped_ptr<SobStatic::LoadingEnv>(SobStatic::LoadingEnv *) // 0x47BD37
{
    mangled_assert("??0?$scoped_ptr@VLoadingEnv@SobStatic@@@boost@@QAE@PAVLoadingEnv@SobStatic@@@Z");
    todo("implement");
    _sub_47BD37(this, arg);
}

_extern _sub_46D074(boost::scoped_ptr<InGameDisconnect> *const, InGameDisconnect *);
_inline boost::scoped_ptr<InGameDisconnect>::scoped_ptr<InGameDisconnect>(InGameDisconnect *) // 0x46D074
{
    mangled_assert("??0?$scoped_ptr@VInGameDisconnect@@@boost@@QAE@PAVInGameDisconnect@@@Z");
    todo("implement");
    _sub_46D074(this, arg);
}

_extern _sub_4679FA(boost::scoped_ptr<Subtitle::Data> *const, Subtitle::Data *);
_inline boost::scoped_ptr<Subtitle::Data>::scoped_ptr<Subtitle::Data>(Subtitle::Data *) // 0x4679FA
{
    mangled_assert("??0?$scoped_ptr@VData@Subtitle@@@boost@@QAE@PAVData@Subtitle@@@Z");
    todo("implement");
    _sub_4679FA(this, arg);
}

_extern _sub_671572(boost::scoped_ptr<UIDirectRenderer> *const, UIDirectRenderer *);
_inline boost::scoped_ptr<UIDirectRenderer>::scoped_ptr<UIDirectRenderer>(UIDirectRenderer *) // 0x671572
{
    mangled_assert("??0?$scoped_ptr@VUIDirectRenderer@@@boost@@QAE@PAVUIDirectRenderer@@@Z");
    todo("implement");
    _sub_671572(this, arg);
}

_extern _sub_680AAF(boost::scoped_ptr<UI::SharedGraphicFactory::Data> *const, UI::SharedGraphicFactory::Data *);
_inline boost::scoped_ptr<UI::SharedGraphicFactory::Data>::scoped_ptr<UI::SharedGraphicFactory::Data>(UI::SharedGraphicFactory::Data *) // 0x680AAF
{
    mangled_assert("??0?$scoped_ptr@VData@SharedGraphicFactory@UI@@@boost@@QAE@PAVData@SharedGraphicFactory@UI@@@Z");
    todo("implement");
    _sub_680AAF(this, arg);
}

_extern _sub_66FDC3(boost::scoped_ptr<UI::UISoundManager::Data> *const, UI::UISoundManager::Data *);
_inline boost::scoped_ptr<UI::UISoundManager::Data>::scoped_ptr<UI::UISoundManager::Data>(UI::UISoundManager::Data *) // 0x66FDC3
{
    mangled_assert("??0?$scoped_ptr@VData@UISoundManager@UI@@@boost@@QAE@PAVData@UISoundManager@UI@@@Z");
    todo("implement");
    _sub_66FDC3(this, arg);
}

_extern _sub_6C383C(boost::scoped_ptr<SoundParamManager::Data> *const, SoundParamManager::Data *);
_inline boost::scoped_ptr<SoundParamManager::Data>::scoped_ptr<SoundParamManager::Data>(SoundParamManager::Data *) // 0x6C383C
{
    mangled_assert("??0?$scoped_ptr@VData@SoundParamManager@@@boost@@QAE@PAVData@SoundParamManager@@@Z");
    todo("implement");
    _sub_6C383C(this, arg);
}

_extern _sub_6CF248(boost::scoped_ptr<SoundEntityList::Memory> *const, SoundEntityList::Memory *);
_inline boost::scoped_ptr<SoundEntityList::Memory>::scoped_ptr<SoundEntityList::Memory>(SoundEntityList::Memory *) // 0x6CF248
{
    mangled_assert("??0?$scoped_ptr@VMemory@SoundEntityList@@@boost@@QAE@PAVMemory@SoundEntityList@@@Z");
    todo("implement");
    _sub_6CF248(this, arg);
}

_extern _sub_6EA7AE(boost::scoped_ptr<FXBeam::Renderer> *const, FXBeam::Renderer *);
_inline boost::scoped_ptr<FXBeam::Renderer>::scoped_ptr<FXBeam::Renderer>(FXBeam::Renderer *) // 0x6EA7AE
{
    mangled_assert("??0?$scoped_ptr@VRenderer@FXBeam@@@boost@@QAE@PAVRenderer@FXBeam@@@Z");
    todo("implement");
    _sub_6EA7AE(this, arg);
}

_extern _sub_6E1372(boost::scoped_ptr<FXCollisionSurf> *const, FXCollisionSurf *);
_inline boost::scoped_ptr<FXCollisionSurf>::scoped_ptr<FXCollisionSurf>(FXCollisionSurf *) // 0x6E1372
{
    mangled_assert("??0?$scoped_ptr@VFXCollisionSurf@@@boost@@QAE@PAVFXCollisionSurf@@@Z");
    todo("implement");
    _sub_6E1372(this, arg);
}

_extern _sub_6F1737(boost::scoped_ptr<FXHyperspace::Renderer> *const, FXHyperspace::Renderer *);
_inline boost::scoped_ptr<FXHyperspace::Renderer>::scoped_ptr<FXHyperspace::Renderer>(FXHyperspace::Renderer *) // 0x6F1737
{
    mangled_assert("??0?$scoped_ptr@VRenderer@FXHyperspace@@@boost@@QAE@PAVRenderer@FXHyperspace@@@Z");
    todo("implement");
    _sub_6F1737(this, arg);
}

_extern _sub_6DBB0F(boost::scoped_ptr<FXManager::Data> *const, FXManager::Data *);
_inline boost::scoped_ptr<FXManager::Data>::scoped_ptr<FXManager::Data>(FXManager::Data *) // 0x6DBB0F
{
    mangled_assert("??0?$scoped_ptr@VData@FXManager@@@boost@@QAE@PAVData@FXManager@@@Z");
    todo("implement");
    _sub_6DBB0F(this, arg);
}

_extern _sub_6E4F2B(boost::scoped_ptr<FXRing::Renderer> *const, FXRing::Renderer *);
_inline boost::scoped_ptr<FXRing::Renderer>::scoped_ptr<FXRing::Renderer>(FXRing::Renderer *) // 0x6E4F2B
{
    mangled_assert("??0?$scoped_ptr@VRenderer@FXRing@@@boost@@QAE@PAVRenderer@FXRing@@@Z");
    todo("implement");
    _sub_6E4F2B(this, arg);
}

_extern _sub_6ED6C2(boost::scoped_ptr<FXTrail::Renderer> *const, FXTrail::Renderer *);
_inline boost::scoped_ptr<FXTrail::Renderer>::scoped_ptr<FXTrail::Renderer>(FXTrail::Renderer *) // 0x6ED6C2
{
    mangled_assert("??0?$scoped_ptr@VRenderer@FXTrail@@@boost@@QAE@PAVRenderer@FXTrail@@@Z");
    todo("implement");
    _sub_6ED6C2(this, arg);
}

_extern _sub_70EEAB(boost::scoped_ptr<LuaRuleSystem::Data> *const, LuaRuleSystem::Data *);
_inline boost::scoped_ptr<LuaRuleSystem::Data>::scoped_ptr<LuaRuleSystem::Data>(LuaRuleSystem::Data *) // 0x70EEAB
{
    mangled_assert("??0?$scoped_ptr@VData@LuaRuleSystem@@@boost@@QAE@PAVData@LuaRuleSystem@@@Z");
    todo("implement");
    _sub_70EEAB(this, arg);
}

_extern void _sub_651A2B(boost::scoped_ptr<UniverseInterp::Data> *const);
_inline boost::scoped_ptr<UniverseInterp::Data>::~scoped_ptr<UniverseInterp::Data>() // 0x651A2B
{
    mangled_assert("??1?$scoped_ptr@VData@UniverseInterp@@@boost@@QAE@XZ");
    todo("implement");
    _sub_651A2B(this);
}

_extern void _sub_64C820(boost::scoped_ptr<Timer> *const);
_inline boost::scoped_ptr<Timer>::~scoped_ptr<Timer>() // 0x64C820
{
    mangled_assert("??1?$scoped_ptr@VTimer@@@boost@@QAE@XZ");
    todo("implement");
    _sub_64C820(this);
}

_extern void _sub_640AAF(boost::scoped_ptr<StarList::Data> *const);
_inline boost::scoped_ptr<StarList::Data>::~scoped_ptr<StarList::Data>() // 0x640AAF
{
    mangled_assert("??1?$scoped_ptr@VData@StarList@@@boost@@QAE@XZ");
    todo("implement");
    _sub_640AAF(this);
}

_extern void _sub_637DD5(boost::scoped_ptr<SimProxy::Data> *const);
_inline boost::scoped_ptr<SimProxy::Data>::~scoped_ptr<SimProxy::Data>() // 0x637DD5
{
    mangled_assert("??1?$scoped_ptr@VData@SimProxy@@@boost@@QAE@XZ");
    todo("implement");
    _sub_637DD5(this);
}

_extern void _sub_6364DE(boost::scoped_ptr<SensorsManager::Data> *const);
_inline boost::scoped_ptr<SensorsManager::Data>::~scoped_ptr<SensorsManager::Data>() // 0x6364DE
{
    mangled_assert("??1?$scoped_ptr@VData@SensorsManager@@@boost@@QAE@XZ");
    todo("implement");
    _sub_6364DE(this);
}

_extern void _sub_5EF593(boost::scoped_ptr<GameEventSys::Data> *const);
_inline boost::scoped_ptr<GameEventSys::Data>::~scoped_ptr<GameEventSys::Data>() // 0x5EF593
{
    mangled_assert("??1?$scoped_ptr@VData@GameEventSys@@@boost@@QAE@XZ");
    todo("implement");
    _sub_5EF593(this);
}

_extern void _sub_5E7EFF(boost::scoped_ptr<Campaign::Data> *const);
_inline boost::scoped_ptr<Campaign::Data>::~scoped_ptr<Campaign::Data>() // 0x5E7EFF
{
    mangled_assert("??1?$scoped_ptr@VData@Campaign@@@boost@@QAE@XZ");
    todo("implement");
    _sub_5E7EFF(this);
}

_extern void _sub_5E58BC(boost::scoped_ptr<Background::Data> *const);
_inline boost::scoped_ptr<Background::Data>::~scoped_ptr<Background::Data>() // 0x5E58BC
{
    mangled_assert("??1?$scoped_ptr@VData@Background@@@boost@@QAE@XZ");
    todo("implement");
    _sub_5E58BC(this);
}

_extern void _sub_5C4834(boost::scoped_ptr<VertexPool::Data> *const);
_inline boost::scoped_ptr<VertexPool::Data>::~scoped_ptr<VertexPool::Data>() // 0x5C4834
{
    mangled_assert("??1?$scoped_ptr@VData@VertexPool@@@boost@@QAE@XZ");
    todo("implement");
    _sub_5C4834(this);
}

_extern void _sub_5C3D6C(boost::scoped_ptr<DecalRefMeshRegistry::Data> *const);
_inline boost::scoped_ptr<DecalRefMeshRegistry::Data>::~scoped_ptr<DecalRefMeshRegistry::Data>() // 0x5C3D6C
{
    mangled_assert("??1?$scoped_ptr@VData@DecalRefMeshRegistry@@@boost@@QAE@XZ");
    todo("implement");
    _sub_5C3D6C(this);
}

_extern void _sub_5C23A1(boost::scoped_ptr<AABBGrid<unsigned short,std::allocator<unsigned short> > > *const);
_inline boost::scoped_ptr<AABBGrid<unsigned short,std::allocator<unsigned short> > >::~scoped_ptr<AABBGrid<unsigned short,std::allocator<unsigned short> > >() // 0x5C23A1
{
    mangled_assert("??1?$scoped_ptr@V?$AABBGrid@GV?$allocator@G@std@@@@@boost@@QAE@XZ");
    todo("implement");
    _sub_5C23A1(this);
}

_extern void _sub_5C23A9(boost::scoped_ptr<DecalRefMesh::Data> *const);
_inline boost::scoped_ptr<DecalRefMesh::Data>::~scoped_ptr<DecalRefMesh::Data>() // 0x5C23A9
{
    mangled_assert("??1?$scoped_ptr@VData@DecalRefMesh@@@boost@@QAE@XZ");
    todo("implement");
    _sub_5C23A9(this);
}

_extern void _sub_5C1549(boost::scoped_ptr<DecalManager::Data> *const);
_inline boost::scoped_ptr<DecalManager::Data>::~scoped_ptr<DecalManager::Data>() // 0x5C1549
{
    mangled_assert("??1?$scoped_ptr@VData@DecalManager@@@boost@@QAE@XZ");
    todo("implement");
    _sub_5C1549(this);
}

_extern void _sub_5AE802(boost::scoped_ptr<UI::UnitCapInfoPopupData> *const);
_inline boost::scoped_ptr<UI::UnitCapInfoPopupData>::~scoped_ptr<UI::UnitCapInfoPopupData>() // 0x5AE802
{
    mangled_assert("??1?$scoped_ptr@UUnitCapInfoPopupData@UI@@@boost@@QAE@XZ");
    todo("implement");
    _sub_5AE802(this);
}

_extern void _sub_5AD450(boost::scoped_ptr<UI::SubtitleScreen::Data> *const);
_inline boost::scoped_ptr<UI::SubtitleScreen::Data>::~scoped_ptr<UI::SubtitleScreen::Data>() // 0x5AD450
{
    mangled_assert("??1?$scoped_ptr@VData@SubtitleScreen@UI@@@boost@@QAE@XZ");
    todo("implement");
    _sub_5AD450(this);
}

_extern void _sub_5AA5BF(boost::scoped_ptr<UI::Statistics::StatsImpl> *const);
_inline boost::scoped_ptr<UI::Statistics::StatsImpl>::~scoped_ptr<UI::Statistics::StatsImpl>() // 0x5AA5BF
{
    mangled_assert("??1?$scoped_ptr@VStatsImpl@Statistics@UI@@@boost@@QAE@XZ");
    todo("implement");
    _sub_5AA5BF(this);
}

_extern void _sub_5A6AD0(boost::scoped_ptr<UI::SaveLoadDialogData> *const);
_inline boost::scoped_ptr<UI::SaveLoadDialogData>::~scoped_ptr<UI::SaveLoadDialogData>() // 0x5A6AD0
{
    mangled_assert("??1?$scoped_ptr@USaveLoadDialogData@UI@@@boost@@QAE@XZ");
    todo("implement");
    _sub_5A6AD0(this);
}

_extern void _sub_5A4315(boost::scoped_ptr<UI::PointerData> *const);
_inline boost::scoped_ptr<UI::PointerData>::~scoped_ptr<UI::PointerData>() // 0x5A4315
{
    mangled_assert("??1?$scoped_ptr@VPointerData@UI@@@boost@@QAE@XZ");
    todo("implement");
    _sub_5A4315(this);
}

_extern void _sub_5A3DC0(boost::scoped_ptr<UI::PlayMoviesScreenData> *const);
_inline boost::scoped_ptr<UI::PlayMoviesScreenData>::~scoped_ptr<UI::PlayMoviesScreenData>() // 0x5A3DC0
{
    mangled_assert("??1?$scoped_ptr@UPlayMoviesScreenData@UI@@@boost@@QAE@XZ");
    todo("implement");
    _sub_5A3DC0(this);
}

_extern void _sub_590C1C(boost::scoped_ptr<UI::MovieSpeech> *const);
_inline boost::scoped_ptr<UI::MovieSpeech>::~scoped_ptr<UI::MovieSpeech>() // 0x590C1C
{
    mangled_assert("??1?$scoped_ptr@VMovieSpeech@UI@@@boost@@QAE@XZ");
    todo("implement");
    _sub_590C1C(this);
}

_extern void _sub_590C24(boost::scoped_ptr<UI::MovieTimer> *const);
_inline boost::scoped_ptr<UI::MovieTimer>::~scoped_ptr<UI::MovieTimer>() // 0x590C24
{
    mangled_assert("??1?$scoped_ptr@VMovieTimer@UI@@@boost@@QAE@XZ");
    todo("implement");
    _sub_590C24(this);
}

_extern void _sub_58BC51(boost::scoped_ptr<UI::Data> *const);
_inline boost::scoped_ptr<UI::Data>::~scoped_ptr<UI::Data>() // 0x58BC51
{
    mangled_assert("??1?$scoped_ptr@UData@UI@@@boost@@QAE@XZ");
    todo("implement");
    _sub_58BC51(this);
}

_extern void _sub_5860F3(boost::scoped_ptr<UI::GameOverScreenData> *const);
_inline boost::scoped_ptr<UI::GameOverScreenData>::~scoped_ptr<UI::GameOverScreenData>() // 0x5860F3
{
    mangled_assert("??1?$scoped_ptr@UGameOverScreenData@UI@@@boost@@QAE@XZ");
    todo("implement");
    _sub_5860F3(this);
}

_extern void _sub_585AC5(boost::scoped_ptr<UI::GameMenuData> *const);
_inline boost::scoped_ptr<UI::GameMenuData>::~scoped_ptr<UI::GameMenuData>() // 0x585AC5
{
    mangled_assert("??1?$scoped_ptr@UGameMenuData@UI@@@boost@@QAE@XZ");
    todo("implement");
    _sub_585AC5(this);
}

_extern void _sub_5772A5(boost::scoped_ptr<UI::EventsScreenData> *const);
_inline boost::scoped_ptr<UI::EventsScreenData>::~scoped_ptr<UI::EventsScreenData>() // 0x5772A5
{
    mangled_assert("??1?$scoped_ptr@VEventsScreenData@UI@@@boost@@QAE@XZ");
    todo("implement");
    _sub_5772A5(this);
}

_extern void _sub_575F46(boost::scoped_ptr<UI::ErrorMessageData> *const);
_inline boost::scoped_ptr<UI::ErrorMessageData>::~scoped_ptr<UI::ErrorMessageData>() // 0x575F46
{
    mangled_assert("??1?$scoped_ptr@UErrorMessageData@UI@@@boost@@QAE@XZ");
    todo("implement");
    _sub_575F46(this);
}

_extern void _sub_572251(boost::scoped_ptr<UI::ControlsFrameData> *const);
_inline boost::scoped_ptr<UI::ControlsFrameData>::~scoped_ptr<UI::ControlsFrameData>() // 0x572251
{
    mangled_assert("??1?$scoped_ptr@VControlsFrameData@UI@@@boost@@QAE@XZ");
    todo("implement");
    _sub_572251(this);
}

_extern void _sub_562B42(boost::scoped_ptr<BattleScarTrail::Renderer> *const);
_inline boost::scoped_ptr<BattleScarTrail::Renderer>::~scoped_ptr<BattleScarTrail::Renderer>() // 0x562B42
{
    mangled_assert("??1?$scoped_ptr@VRenderer@BattleScarTrail@@@boost@@QAE@XZ");
    todo("implement");
    _sub_562B42(this);
}

_extern void _sub_560FE4(boost::scoped_ptr<BattleScarStats::Data> *const);
_inline boost::scoped_ptr<BattleScarStats::Data>::~scoped_ptr<BattleScarStats::Data>() // 0x560FE4
{
    mangled_assert("??1?$scoped_ptr@VData@BattleScarStats@@@boost@@QAE@XZ");
    todo("implement");
    _sub_560FE4(this);
}

_extern void _sub_55DC02(boost::scoped_ptr<BattleScarPoint::Renderer> *const);
_inline boost::scoped_ptr<BattleScarPoint::Renderer>::~scoped_ptr<BattleScarPoint::Renderer>() // 0x55DC02
{
    mangled_assert("??1?$scoped_ptr@VRenderer@BattleScarPoint@@@boost@@QAE@XZ");
    todo("implement");
    _sub_55DC02(this);
}

_extern void _sub_55A102(boost::scoped_ptr<BattleScarManager::Data> *const);
_inline boost::scoped_ptr<BattleScarManager::Data>::~scoped_ptr<BattleScarManager::Data>() // 0x55A102
{
    mangled_assert("??1?$scoped_ptr@VData@BattleScarManager@@@boost@@QAE@XZ");
    todo("implement");
    _sub_55A102(this);
}

_extern void _sub_55A10A(boost::scoped_ptr<DecalManager> *const);
_inline boost::scoped_ptr<DecalManager>::~scoped_ptr<DecalManager>() // 0x55A10A
{
    mangled_assert("??1?$scoped_ptr@VDecalManager@@@boost@@QAE@XZ");
    todo("implement");
    _sub_55A10A(this);
}

_extern void _sub_5416CD(boost::scoped_ptr<HW2CpuPlayer::Data> *const);
_inline boost::scoped_ptr<HW2CpuPlayer::Data>::~scoped_ptr<HW2CpuPlayer::Data>() // 0x5416CD
{
    mangled_assert("??1?$scoped_ptr@VData@HW2CpuPlayer@@@boost@@QAE@XZ");
    todo("implement");
    _sub_5416CD(this);
}

_extern void _sub_52F9BD(boost::scoped_ptr<CpuFleetCommand::Data> *const);
_inline boost::scoped_ptr<CpuFleetCommand::Data>::~scoped_ptr<CpuFleetCommand::Data>() // 0x52F9BD
{
    mangled_assert("??1?$scoped_ptr@VData@CpuFleetCommand@@@boost@@QAE@XZ");
    todo("implement");
    _sub_52F9BD(this);
}

_extern void _sub_5229B0(boost::scoped_ptr<RenderModelScars> *const);
_inline boost::scoped_ptr<RenderModelScars>::~scoped_ptr<RenderModelScars>() // 0x5229B0
{
    mangled_assert("??1?$scoped_ptr@VRenderModelScars@@@boost@@QAE@XZ");
    todo("implement");
    _sub_5229B0(this);
}

_extern void _sub_520AD3(boost::scoped_ptr<RenderModelScars::Data> *const);
_inline boost::scoped_ptr<RenderModelScars::Data>::~scoped_ptr<RenderModelScars::Data>() // 0x520AD3
{
    mangled_assert("??1?$scoped_ptr@VData@RenderModelScars@@@boost@@QAE@XZ");
    todo("implement");
    _sub_520AD3(this);
}

_extern void _sub_50DB60(boost::scoped_ptr<StatLoggingInternal> *const);
_inline boost::scoped_ptr<StatLoggingInternal>::~scoped_ptr<StatLoggingInternal>() // 0x50DB60
{
    mangled_assert("??1?$scoped_ptr@VStatLoggingInternal@@@boost@@QAE@XZ");
    todo("implement");
    _sub_50DB60(this);
}

_extern void _sub_504646(boost::scoped_ptr<PlayerProfile> *const);
_inline boost::scoped_ptr<PlayerProfile>::~scoped_ptr<PlayerProfile>() // 0x504646
{
    mangled_assert("??1?$scoped_ptr@VPlayerProfile@@@boost@@QAE@XZ");
    todo("implement");
    _sub_504646(this);
}

_extern void _sub_502EFC(boost::scoped_ptr<PlayerProfileGameOptionsData> *const);
_inline boost::scoped_ptr<PlayerProfileGameOptionsData>::~scoped_ptr<PlayerProfileGameOptionsData>() // 0x502EFC
{
    mangled_assert("??1?$scoped_ptr@UPlayerProfileGameOptionsData@@@boost@@QAE@XZ");
    todo("implement");
    _sub_502EFC(this);
}

_extern void _sub_4F8649(boost::scoped_ptr<LuaSimProxyLib> *const);
_inline boost::scoped_ptr<LuaSimProxyLib>::~scoped_ptr<LuaSimProxyLib>() // 0x4F8649
{
    mangled_assert("??1?$scoped_ptr@VLuaSimProxyLib@@@boost@@QAE@XZ");
    todo("implement");
    _sub_4F8649(this);
}

_extern void _sub_4F8651(boost::scoped_ptr<SimProxy> *const);
_inline boost::scoped_ptr<SimProxy>::~scoped_ptr<SimProxy>() // 0x4F8651
{
    mangled_assert("??1?$scoped_ptr@VSimProxy@@@boost@@QAE@XZ");
    todo("implement");
    _sub_4F8651(this);
}

_extern void _sub_4F65DA(boost::scoped_ptr<ConfigFile> *const);
_inline boost::scoped_ptr<ConfigFile>::~scoped_ptr<ConfigFile>() // 0x4F65DA
{
    mangled_assert("??1?$scoped_ptr@VConfigFile@@@boost@@QAE@XZ");
    todo("implement");
    _sub_4F65DA(this);
}

_extern void _sub_4F65E2(boost::scoped_ptr<AppObj::Data> *const);
_inline boost::scoped_ptr<AppObj::Data>::~scoped_ptr<AppObj::Data>() // 0x4F65E2
{
    mangled_assert("??1?$scoped_ptr@VData@AppObj@@@boost@@QAE@XZ");
    todo("implement");
    _sub_4F65E2(this);
}

_extern void _sub_4F65EA(boost::scoped_ptr<Lobby> *const);
_inline boost::scoped_ptr<Lobby>::~scoped_ptr<Lobby>() // 0x4F65EA
{
    mangled_assert("??1?$scoped_ptr@VLobby@@@boost@@QAE@XZ");
    todo("implement");
    _sub_4F65EA(this);
}

_extern void _sub_4F65F2(boost::scoped_ptr<StatMonitor> *const);
_inline boost::scoped_ptr<StatMonitor>::~scoped_ptr<StatMonitor>() // 0x4F65F2
{
    mangled_assert("??1?$scoped_ptr@VStatMonitor@@@boost@@QAE@XZ");
    todo("implement");
    _sub_4F65F2(this);
}

_extern void _sub_4DCE31(boost::scoped_ptr<CameraCommand::FocusDistance> *const);
_inline boost::scoped_ptr<CameraCommand::FocusDistance>::~scoped_ptr<CameraCommand::FocusDistance>() // 0x4DCE31
{
    mangled_assert("??1?$scoped_ptr@UFocusDistance@CameraCommand@@@boost@@QAE@XZ");
    todo("implement");
    _sub_4DCE31(this);
}

_extern void _sub_4C0217(boost::scoped_ptr<SobWithMeshStatic::LoadingEnv> *const);
_inline boost::scoped_ptr<SobWithMeshStatic::LoadingEnv>::~scoped_ptr<SobWithMeshStatic::LoadingEnv>() // 0x4C0217
{
    mangled_assert("??1?$scoped_ptr@VLoadingEnv@SobWithMeshStatic@@@boost@@QAE@XZ");
    todo("implement");
    _sub_4C0217(this);
}

_extern void _sub_4AC4E8(boost::scoped_ptr<ShipHold::Data> *const);
_inline boost::scoped_ptr<ShipHold::Data>::~scoped_ptr<ShipHold::Data>() // 0x4AC4E8
{
    mangled_assert("??1?$scoped_ptr@VData@ShipHold@@@boost@@QAE@XZ");
    todo("implement");
    _sub_4AC4E8(this);
}

_extern void _sub_496F8D(boost::scoped_ptr<ShipStatic::LoadingEnv> *const);
_inline boost::scoped_ptr<ShipStatic::LoadingEnv>::~scoped_ptr<ShipStatic::LoadingEnv>() // 0x496F8D
{
    mangled_assert("??1?$scoped_ptr@VLoadingEnv@ShipStatic@@@boost@@QAE@XZ");
    todo("implement");
    _sub_496F8D(this);
}

_extern void _sub_481531(boost::scoped_ptr<StaticModelRegistry::Data> *const);
_inline boost::scoped_ptr<StaticModelRegistry::Data>::~scoped_ptr<StaticModelRegistry::Data>() // 0x481531
{
    mangled_assert("??1?$scoped_ptr@VData@StaticModelRegistry@@@boost@@QAE@XZ");
    todo("implement");
    _sub_481531(this);
}

_extern void _sub_47C214(boost::scoped_ptr<SobStatic::LoadingEnv> *const);
_inline boost::scoped_ptr<SobStatic::LoadingEnv>::~scoped_ptr<SobStatic::LoadingEnv>() // 0x47C214
{
    mangled_assert("??1?$scoped_ptr@VLoadingEnv@SobStatic@@@boost@@QAE@XZ");
    todo("implement");
    _sub_47C214(this);
}

_extern void _sub_46D20C(boost::scoped_ptr<InGameDisconnect> *const);
_inline boost::scoped_ptr<InGameDisconnect>::~scoped_ptr<InGameDisconnect>() // 0x46D20C
{
    mangled_assert("??1?$scoped_ptr@VInGameDisconnect@@@boost@@QAE@XZ");
    todo("implement");
    _sub_46D20C(this);
}

_extern void _sub_467BBE(boost::scoped_ptr<Subtitle::Data> *const);
_inline boost::scoped_ptr<Subtitle::Data>::~scoped_ptr<Subtitle::Data>() // 0x467BBE
{
    mangled_assert("??1?$scoped_ptr@VData@Subtitle@@@boost@@QAE@XZ");
    todo("implement");
    _sub_467BBE(this);
}

_extern void _sub_67189E(boost::scoped_ptr<UIDirectRenderer> *const);
_inline boost::scoped_ptr<UIDirectRenderer>::~scoped_ptr<UIDirectRenderer>() // 0x67189E
{
    mangled_assert("??1?$scoped_ptr@VUIDirectRenderer@@@boost@@QAE@XZ");
    todo("implement");
    _sub_67189E(this);
}

_extern void _sub_680B40(boost::scoped_ptr<UI::SharedGraphicFactory::Data> *const);
_inline boost::scoped_ptr<UI::SharedGraphicFactory::Data>::~scoped_ptr<UI::SharedGraphicFactory::Data>() // 0x680B40
{
    mangled_assert("??1?$scoped_ptr@VData@SharedGraphicFactory@UI@@@boost@@QAE@XZ");
    todo("implement");
    _sub_680B40(this);
}

_extern void _sub_66FEED(boost::scoped_ptr<UI::UISoundManager::Data> *const);
_inline boost::scoped_ptr<UI::UISoundManager::Data>::~scoped_ptr<UI::UISoundManager::Data>() // 0x66FEED
{
    mangled_assert("??1?$scoped_ptr@VData@UISoundManager@UI@@@boost@@QAE@XZ");
    todo("implement");
    _sub_66FEED(this);
}

_extern void _sub_6C397A(boost::scoped_ptr<SoundParamManager::Data> *const);
_inline boost::scoped_ptr<SoundParamManager::Data>::~scoped_ptr<SoundParamManager::Data>() // 0x6C397A
{
    mangled_assert("??1?$scoped_ptr@VData@SoundParamManager@@@boost@@QAE@XZ");
    todo("implement");
    _sub_6C397A(this);
}

_extern void _sub_6CF37E(boost::scoped_ptr<SoundEntityList::Memory> *const);
_inline boost::scoped_ptr<SoundEntityList::Memory>::~scoped_ptr<SoundEntityList::Memory>() // 0x6CF37E
{
    mangled_assert("??1?$scoped_ptr@VMemory@SoundEntityList@@@boost@@QAE@XZ");
    todo("implement");
    _sub_6CF37E(this);
}

_extern void _sub_6EAA95(boost::scoped_ptr<FXBeam::Renderer> *const);
_inline boost::scoped_ptr<FXBeam::Renderer>::~scoped_ptr<FXBeam::Renderer>() // 0x6EAA95
{
    mangled_assert("??1?$scoped_ptr@VRenderer@FXBeam@@@boost@@QAE@XZ");
    todo("implement");
    _sub_6EAA95(this);
}

_extern void _sub_6E1409(boost::scoped_ptr<FXCollisionSurf> *const);
_inline boost::scoped_ptr<FXCollisionSurf>::~scoped_ptr<FXCollisionSurf>() // 0x6E1409
{
    mangled_assert("??1?$scoped_ptr@VFXCollisionSurf@@@boost@@QAE@XZ");
    todo("implement");
    _sub_6E1409(this);
}

_extern void _sub_6F1A9D(boost::scoped_ptr<FXHyperspace::Renderer> *const);
_inline boost::scoped_ptr<FXHyperspace::Renderer>::~scoped_ptr<FXHyperspace::Renderer>() // 0x6F1A9D
{
    mangled_assert("??1?$scoped_ptr@VRenderer@FXHyperspace@@@boost@@QAE@XZ");
    todo("implement");
    _sub_6F1A9D(this);
}

_extern void _sub_6DC13A(boost::scoped_ptr<FXManager::Data> *const);
_inline boost::scoped_ptr<FXManager::Data>::~scoped_ptr<FXManager::Data>() // 0x6DC13A
{
    mangled_assert("??1?$scoped_ptr@VData@FXManager@@@boost@@QAE@XZ");
    todo("implement");
    _sub_6DC13A(this);
}

_extern void _sub_6E55BB(boost::scoped_ptr<FXRing::Renderer> *const);
_inline boost::scoped_ptr<FXRing::Renderer>::~scoped_ptr<FXRing::Renderer>() // 0x6E55BB
{
    mangled_assert("??1?$scoped_ptr@VRenderer@FXRing@@@boost@@QAE@XZ");
    todo("implement");
    _sub_6E55BB(this);
}

_extern void _sub_6ED951(boost::scoped_ptr<FXTrail::Renderer> *const);
_inline boost::scoped_ptr<FXTrail::Renderer>::~scoped_ptr<FXTrail::Renderer>() // 0x6ED951
{
    mangled_assert("??1?$scoped_ptr@VRenderer@FXTrail@@@boost@@QAE@XZ");
    todo("implement");
    _sub_6ED951(this);
}

_extern void _sub_70EF8F(boost::scoped_ptr<LuaRuleSystem::Data> *const);
_inline boost::scoped_ptr<LuaRuleSystem::Data>::~scoped_ptr<LuaRuleSystem::Data>() // 0x70EF8F
{
    mangled_assert("??1?$scoped_ptr@VData@LuaRuleSystem@@@boost@@QAE@XZ");
    todo("implement");
    _sub_70EF8F(this);
}

_extern void _sub_65074E(boost::scoped_ptr<Timer> *const, Timer *);
_inline void boost::scoped_ptr<Timer>::reset(Timer *) // 0x65074E
{
    mangled_assert("?reset@?$scoped_ptr@VTimer@@@boost@@QAEXPAVTimer@@@Z");
    todo("implement");
    _sub_65074E(this, arg);
}

_extern void _sub_5C33D8(boost::scoped_ptr<AABBGrid<unsigned short,std::allocator<unsigned short> > > *const, AABBGrid<unsigned short,std::allocator<unsigned short> > *);
_inline void boost::scoped_ptr<AABBGrid<unsigned short,std::allocator<unsigned short> > >::reset(AABBGrid<unsigned short,std::allocator<unsigned short> > *) // 0x5C33D8
{
    mangled_assert("?reset@?$scoped_ptr@V?$AABBGrid@GV?$allocator@G@std@@@@@boost@@QAEXPAV?$AABBGrid@GV?$allocator@G@std@@@@@Z");
    todo("implement");
    _sub_5C33D8(this, arg);
}

_extern void _sub_5925DE(boost::scoped_ptr<UI::MovieSpeech> *const, UI::MovieSpeech *);
_inline void boost::scoped_ptr<UI::MovieSpeech>::reset(UI::MovieSpeech *) // 0x5925DE
{
    mangled_assert("?reset@?$scoped_ptr@VMovieSpeech@UI@@@boost@@QAEXPAVMovieSpeech@UI@@@Z");
    todo("implement");
    _sub_5925DE(this, arg);
}

_extern void _sub_5925EF(boost::scoped_ptr<UI::MovieTimer> *const, UI::MovieTimer *);
_inline void boost::scoped_ptr<UI::MovieTimer>::reset(UI::MovieTimer *) // 0x5925EF
{
    mangled_assert("?reset@?$scoped_ptr@VMovieTimer@UI@@@boost@@QAEXPAVMovieTimer@UI@@@Z");
    todo("implement");
    _sub_5925EF(this, arg);
}

_extern void _sub_55C1D1(boost::scoped_ptr<DecalManager> *const, DecalManager *);
_inline void boost::scoped_ptr<DecalManager>::reset(DecalManager *) // 0x55C1D1
{
    mangled_assert("?reset@?$scoped_ptr@VDecalManager@@@boost@@QAEXPAVDecalManager@@@Z");
    todo("implement");
    _sub_55C1D1(this, arg);
}

_extern void _sub_50F169(boost::scoped_ptr<StatLoggingInternal> *const, StatLoggingInternal *);
_inline void boost::scoped_ptr<StatLoggingInternal>::reset(StatLoggingInternal *) // 0x50F169
{
    mangled_assert("?reset@?$scoped_ptr@VStatLoggingInternal@@@boost@@QAEXPAVStatLoggingInternal@@@Z");
    todo("implement");
    _sub_50F169(this, arg);
}

_extern void _sub_506665(boost::scoped_ptr<PlayerProfile> *const, PlayerProfile *);
_inline void boost::scoped_ptr<PlayerProfile>::reset(PlayerProfile *) // 0x506665
{
    mangled_assert("?reset@?$scoped_ptr@VPlayerProfile@@@boost@@QAEXPAVPlayerProfile@@@Z");
    todo("implement");
    _sub_506665(this, arg);
}

_extern void _sub_4FB2E7(boost::scoped_ptr<LuaSimProxyLib> *const, LuaSimProxyLib *);
_inline void boost::scoped_ptr<LuaSimProxyLib>::reset(LuaSimProxyLib *) // 0x4FB2E7
{
    mangled_assert("?reset@?$scoped_ptr@VLuaSimProxyLib@@@boost@@QAEXPAVLuaSimProxyLib@@@Z");
    todo("implement");
    _sub_4FB2E7(this, arg);
}

_extern void _sub_4FB2F8(boost::scoped_ptr<SimProxy> *const, SimProxy *);
_inline void boost::scoped_ptr<SimProxy>::reset(SimProxy *) // 0x4FB2F8
{
    mangled_assert("?reset@?$scoped_ptr@VSimProxy@@@boost@@QAEXPAVSimProxy@@@Z");
    todo("implement");
    _sub_4FB2F8(this, arg);
}

_extern void _sub_4F7230(boost::scoped_ptr<ConfigFile> *const, ConfigFile *);
_inline void boost::scoped_ptr<ConfigFile>::reset(ConfigFile *) // 0x4F7230
{
    mangled_assert("?reset@?$scoped_ptr@VConfigFile@@@boost@@QAEXPAVConfigFile@@@Z");
    todo("implement");
    _sub_4F7230(this, arg);
}

_extern void _sub_4F7241(boost::scoped_ptr<Lobby> *const, Lobby *);
_inline void boost::scoped_ptr<Lobby>::reset(Lobby *) // 0x4F7241
{
    mangled_assert("?reset@?$scoped_ptr@VLobby@@@boost@@QAEXPAVLobby@@@Z");
    todo("implement");
    _sub_4F7241(this, arg);
}

_extern void _sub_4F7252(boost::scoped_ptr<StatMonitor> *const, StatMonitor *);
_inline void boost::scoped_ptr<StatMonitor>::reset(StatMonitor *) // 0x4F7252
{
    mangled_assert("?reset@?$scoped_ptr@VStatMonitor@@@boost@@QAEXPAVStatMonitor@@@Z");
    todo("implement");
    _sub_4F7252(this, arg);
}

_extern void _sub_4DF7BE(boost::scoped_ptr<CameraCommand::FocusDistance> *const, CameraCommand::FocusDistance *);
_inline void boost::scoped_ptr<CameraCommand::FocusDistance>::reset(CameraCommand::FocusDistance *) // 0x4DF7BE
{
    mangled_assert("?reset@?$scoped_ptr@UFocusDistance@CameraCommand@@@boost@@QAEXPAUFocusDistance@CameraCommand@@@Z");
    todo("implement");
    _sub_4DF7BE(this, arg);
}

_extern void _sub_4C094D(boost::scoped_ptr<SobWithMeshStatic::LoadingEnv> *const, SobWithMeshStatic::LoadingEnv *);
_inline void boost::scoped_ptr<SobWithMeshStatic::LoadingEnv>::reset(SobWithMeshStatic::LoadingEnv *) // 0x4C094D
{
    mangled_assert("?reset@?$scoped_ptr@VLoadingEnv@SobWithMeshStatic@@@boost@@QAEXPAVLoadingEnv@SobWithMeshStatic@@@Z");
    todo("implement");
    _sub_4C094D(this, arg);
}

_extern void _sub_4980EB(boost::scoped_ptr<ShipStatic::LoadingEnv> *const, ShipStatic::LoadingEnv *);
_inline void boost::scoped_ptr<ShipStatic::LoadingEnv>::reset(ShipStatic::LoadingEnv *) // 0x4980EB
{
    mangled_assert("?reset@?$scoped_ptr@VLoadingEnv@ShipStatic@@@boost@@QAEXPAVLoadingEnv@ShipStatic@@@Z");
    todo("implement");
    _sub_4980EB(this, arg);
}

_extern void _sub_47F036(boost::scoped_ptr<SobStatic::LoadingEnv> *const, SobStatic::LoadingEnv *);
_inline void boost::scoped_ptr<SobStatic::LoadingEnv>::reset(SobStatic::LoadingEnv *) // 0x47F036
{
    mangled_assert("?reset@?$scoped_ptr@VLoadingEnv@SobStatic@@@boost@@QAEXPAVLoadingEnv@SobStatic@@@Z");
    todo("implement");
    _sub_47F036(this, arg);
}

_extern void _sub_46E3EA(boost::scoped_ptr<InGameDisconnect> *const, InGameDisconnect *);
_inline void boost::scoped_ptr<InGameDisconnect>::reset(InGameDisconnect *) // 0x46E3EA
{
    mangled_assert("?reset@?$scoped_ptr@VInGameDisconnect@@@boost@@QAEXPAVInGameDisconnect@@@Z");
    todo("implement");
    _sub_46E3EA(this, arg);
}

_extern void _sub_6ED031(boost::scoped_ptr<FXBeam::Renderer> *const, FXBeam::Renderer *);
_inline void boost::scoped_ptr<FXBeam::Renderer>::reset(FXBeam::Renderer *) // 0x6ED031
{
    mangled_assert("?reset@?$scoped_ptr@VRenderer@FXBeam@@@boost@@QAEXPAVRenderer@FXBeam@@@Z");
    todo("implement");
    _sub_6ED031(this, arg);
}

_extern void _sub_6F3A87(boost::scoped_ptr<FXHyperspace::Renderer> *const, FXHyperspace::Renderer *);
_inline void boost::scoped_ptr<FXHyperspace::Renderer>::reset(FXHyperspace::Renderer *) // 0x6F3A87
{
    mangled_assert("?reset@?$scoped_ptr@VRenderer@FXHyperspace@@@boost@@QAEXPAVRenderer@FXHyperspace@@@Z");
    todo("implement");
    _sub_6F3A87(this, arg);
}

_extern void _sub_6E8CD4(boost::scoped_ptr<FXRing::Renderer> *const, FXRing::Renderer *);
_inline void boost::scoped_ptr<FXRing::Renderer>::reset(FXRing::Renderer *) // 0x6E8CD4
{
    mangled_assert("?reset@?$scoped_ptr@VRenderer@FXRing@@@boost@@QAEXPAVRenderer@FXRing@@@Z");
    todo("implement");
    _sub_6E8CD4(this, arg);
}

_extern void _sub_6EFC88(boost::scoped_ptr<FXTrail::Renderer> *const, FXTrail::Renderer *);
_inline void boost::scoped_ptr<FXTrail::Renderer>::reset(FXTrail::Renderer *) // 0x6EFC88
{
    mangled_assert("?reset@?$scoped_ptr@VRenderer@FXTrail@@@boost@@QAEXPAVRenderer@FXTrail@@@Z");
    todo("implement");
    _sub_6EFC88(this, arg);
}

_extern UniverseInterp::Data *_sub_651A4E(boost::scoped_ptr<UniverseInterp::Data> const *const);
_inline UniverseInterp::Data *boost::scoped_ptr<UniverseInterp::Data>::operator->() const // 0x651A4E
{
    mangled_assert("??C?$scoped_ptr@VData@UniverseInterp@@@boost@@QBEPAVData@UniverseInterp@@XZ");
    todo("implement");
    UniverseInterp::Data * __result = _sub_651A4E(this);
    return __result;
}

_extern StarList::Data *_sub_640B83(boost::scoped_ptr<StarList::Data> const *const);
_inline StarList::Data *boost::scoped_ptr<StarList::Data>::operator->() const // 0x640B83
{
    mangled_assert("??C?$scoped_ptr@VData@StarList@@@boost@@QBEPAVData@StarList@@XZ");
    todo("implement");
    StarList::Data * __result = _sub_640B83(this);
    return __result;
}

_extern SimProxy::Data *_sub_637E80(boost::scoped_ptr<SimProxy::Data> const *const);
_inline SimProxy::Data *boost::scoped_ptr<SimProxy::Data>::operator->() const // 0x637E80
{
    mangled_assert("??C?$scoped_ptr@VData@SimProxy@@@boost@@QBEPAVData@SimProxy@@XZ");
    todo("implement");
    SimProxy::Data * __result = _sub_637E80(this);
    return __result;
}

_extern SensorsManager::Data *_sub_63657C(boost::scoped_ptr<SensorsManager::Data> const *const);
_inline SensorsManager::Data *boost::scoped_ptr<SensorsManager::Data>::operator->() const // 0x63657C
{
    mangled_assert("??C?$scoped_ptr@VData@SensorsManager@@@boost@@QBEPAVData@SensorsManager@@XZ");
    todo("implement");
    SensorsManager::Data * __result = _sub_63657C(this);
    return __result;
}

_extern GameEventSys::Data *_sub_5EF5CD(boost::scoped_ptr<GameEventSys::Data> const *const);
_inline GameEventSys::Data *boost::scoped_ptr<GameEventSys::Data>::operator->() const // 0x5EF5CD
{
    mangled_assert("??C?$scoped_ptr@VData@GameEventSys@@@boost@@QBEPAVData@GameEventSys@@XZ");
    todo("implement");
    GameEventSys::Data * __result = _sub_5EF5CD(this);
    return __result;
}

_extern Campaign::Data *_sub_5E800D(boost::scoped_ptr<Campaign::Data> const *const);
_inline Campaign::Data *boost::scoped_ptr<Campaign::Data>::operator->() const // 0x5E800D
{
    mangled_assert("??C?$scoped_ptr@VData@Campaign@@@boost@@QBEPAVData@Campaign@@XZ");
    todo("implement");
    Campaign::Data * __result = _sub_5E800D(this);
    return __result;
}

_extern Background::Data *_sub_5E59D1(boost::scoped_ptr<Background::Data> const *const);
_inline Background::Data *boost::scoped_ptr<Background::Data>::operator->() const // 0x5E59D1
{
    mangled_assert("??C?$scoped_ptr@VData@Background@@@boost@@QBEPAVData@Background@@XZ");
    todo("implement");
    Background::Data * __result = _sub_5E59D1(this);
    return __result;
}

_extern VertexPool::Data *_sub_5C4881(boost::scoped_ptr<VertexPool::Data> const *const);
_inline VertexPool::Data *boost::scoped_ptr<VertexPool::Data>::operator->() const // 0x5C4881
{
    mangled_assert("??C?$scoped_ptr@VData@VertexPool@@@boost@@QBEPAVData@VertexPool@@XZ");
    todo("implement");
    VertexPool::Data * __result = _sub_5C4881(this);
    return __result;
}

_extern DecalRefMeshRegistry::Data *_sub_5C3E16(boost::scoped_ptr<DecalRefMeshRegistry::Data> const *const);
_inline DecalRefMeshRegistry::Data *boost::scoped_ptr<DecalRefMeshRegistry::Data>::operator->() const // 0x5C3E16
{
    mangled_assert("??C?$scoped_ptr@VData@DecalRefMeshRegistry@@@boost@@QBEPAVData@DecalRefMeshRegistry@@XZ");
    todo("implement");
    DecalRefMeshRegistry::Data * __result = _sub_5C3E16(this);
    return __result;
}

_extern AABBGrid<unsigned short,std::allocator<unsigned short> > *_sub_5C247F(boost::scoped_ptr<AABBGrid<unsigned short,std::allocator<unsigned short> > > const *const);
_inline AABBGrid<unsigned short,std::allocator<unsigned short> > *boost::scoped_ptr<AABBGrid<unsigned short,std::allocator<unsigned short> > >::operator->() const // 0x5C247F
{
    mangled_assert("??C?$scoped_ptr@V?$AABBGrid@GV?$allocator@G@std@@@@@boost@@QBEPAV?$AABBGrid@GV?$allocator@G@std@@@@XZ");
    todo("implement");
    AABBGrid<unsigned short,std::allocator<unsigned short> > * __result = _sub_5C247F(this);
    return __result;
}

_extern DecalRefMesh::Data *_sub_5C2482(boost::scoped_ptr<DecalRefMesh::Data> const *const);
_inline DecalRefMesh::Data *boost::scoped_ptr<DecalRefMesh::Data>::operator->() const // 0x5C2482
{
    mangled_assert("??C?$scoped_ptr@VData@DecalRefMesh@@@boost@@QBEPAVData@DecalRefMesh@@XZ");
    todo("implement");
    DecalRefMesh::Data * __result = _sub_5C2482(this);
    return __result;
}

_extern DecalManager::Data *_sub_5C16C9(boost::scoped_ptr<DecalManager::Data> const *const);
_inline DecalManager::Data *boost::scoped_ptr<DecalManager::Data>::operator->() const // 0x5C16C9
{
    mangled_assert("??C?$scoped_ptr@VData@DecalManager@@@boost@@QBEPAVData@DecalManager@@XZ");
    todo("implement");
    DecalManager::Data * __result = _sub_5C16C9(this);
    return __result;
}

_extern UI::UnitCapInfoPopupData *_sub_5AE8D0(boost::scoped_ptr<UI::UnitCapInfoPopupData> const *const);
_inline UI::UnitCapInfoPopupData *boost::scoped_ptr<UI::UnitCapInfoPopupData>::operator->() const // 0x5AE8D0
{
    mangled_assert("??C?$scoped_ptr@UUnitCapInfoPopupData@UI@@@boost@@QBEPAUUnitCapInfoPopupData@UI@@XZ");
    todo("implement");
    UI::UnitCapInfoPopupData * __result = _sub_5AE8D0(this);
    return __result;
}

_extern UI::SubtitleScreen::Data *_sub_5AD4EF(boost::scoped_ptr<UI::SubtitleScreen::Data> const *const);
_inline UI::SubtitleScreen::Data *boost::scoped_ptr<UI::SubtitleScreen::Data>::operator->() const // 0x5AD4EF
{
    mangled_assert("??C?$scoped_ptr@VData@SubtitleScreen@UI@@@boost@@QBEPAVData@SubtitleScreen@UI@@XZ");
    todo("implement");
    UI::SubtitleScreen::Data * __result = _sub_5AD4EF(this);
    return __result;
}

_extern UI::Statistics::StatsImpl *_sub_5AA927(boost::scoped_ptr<UI::Statistics::StatsImpl> const *const);
_inline UI::Statistics::StatsImpl *boost::scoped_ptr<UI::Statistics::StatsImpl>::operator->() const // 0x5AA927
{
    mangled_assert("??C?$scoped_ptr@VStatsImpl@Statistics@UI@@@boost@@QBEPAVStatsImpl@Statistics@UI@@XZ");
    todo("implement");
    UI::Statistics::StatsImpl * __result = _sub_5AA927(this);
    return __result;
}

_extern UI::SaveLoadDialogData *_sub_5A6B17(boost::scoped_ptr<UI::SaveLoadDialogData> const *const);
_inline UI::SaveLoadDialogData *boost::scoped_ptr<UI::SaveLoadDialogData>::operator->() const // 0x5A6B17
{
    mangled_assert("??C?$scoped_ptr@USaveLoadDialogData@UI@@@boost@@QBEPAUSaveLoadDialogData@UI@@XZ");
    todo("implement");
    UI::SaveLoadDialogData * __result = _sub_5A6B17(this);
    return __result;
}

_extern UI::PointerData *_sub_5A437A(boost::scoped_ptr<UI::PointerData> const *const);
_inline UI::PointerData *boost::scoped_ptr<UI::PointerData>::operator->() const // 0x5A437A
{
    mangled_assert("??C?$scoped_ptr@VPointerData@UI@@@boost@@QBEPAVPointerData@UI@@XZ");
    todo("implement");
    UI::PointerData * __result = _sub_5A437A(this);
    return __result;
}

_extern UI::PlayMoviesScreenData *_sub_5A3E0B(boost::scoped_ptr<UI::PlayMoviesScreenData> const *const);
_inline UI::PlayMoviesScreenData *boost::scoped_ptr<UI::PlayMoviesScreenData>::operator->() const // 0x5A3E0B
{
    mangled_assert("??C?$scoped_ptr@UPlayMoviesScreenData@UI@@@boost@@QBEPAUPlayMoviesScreenData@UI@@XZ");
    todo("implement");
    UI::PlayMoviesScreenData * __result = _sub_5A3E0B(this);
    return __result;
}

_extern UI::MovieSpeech *_sub_590D37(boost::scoped_ptr<UI::MovieSpeech> const *const);
_inline UI::MovieSpeech *boost::scoped_ptr<UI::MovieSpeech>::operator->() const // 0x590D37
{
    mangled_assert("??C?$scoped_ptr@VMovieSpeech@UI@@@boost@@QBEPAVMovieSpeech@UI@@XZ");
    todo("implement");
    UI::MovieSpeech * __result = _sub_590D37(this);
    return __result;
}

_extern UI::MovieTimer *_sub_590D3A(boost::scoped_ptr<UI::MovieTimer> const *const);
_inline UI::MovieTimer *boost::scoped_ptr<UI::MovieTimer>::operator->() const // 0x590D3A
{
    mangled_assert("??C?$scoped_ptr@VMovieTimer@UI@@@boost@@QBEPAVMovieTimer@UI@@XZ");
    todo("implement");
    UI::MovieTimer * __result = _sub_590D3A(this);
    return __result;
}

_extern UI::Data *_sub_58BC86(boost::scoped_ptr<UI::Data> const *const);
_inline UI::Data *boost::scoped_ptr<UI::Data>::operator->() const // 0x58BC86
{
    mangled_assert("??C?$scoped_ptr@UData@UI@@@boost@@QBEPAUData@UI@@XZ");
    todo("implement");
    UI::Data * __result = _sub_58BC86(this);
    return __result;
}

_extern UI::GameOverScreenData *_sub_586120(boost::scoped_ptr<UI::GameOverScreenData> const *const);
_inline UI::GameOverScreenData *boost::scoped_ptr<UI::GameOverScreenData>::operator->() const // 0x586120
{
    mangled_assert("??C?$scoped_ptr@UGameOverScreenData@UI@@@boost@@QBEPAUGameOverScreenData@UI@@XZ");
    todo("implement");
    UI::GameOverScreenData * __result = _sub_586120(this);
    return __result;
}

_extern UI::GameMenuData *_sub_585BF9(boost::scoped_ptr<UI::GameMenuData> const *const);
_inline UI::GameMenuData *boost::scoped_ptr<UI::GameMenuData>::operator->() const // 0x585BF9
{
    mangled_assert("??C?$scoped_ptr@UGameMenuData@UI@@@boost@@QBEPAUGameMenuData@UI@@XZ");
    todo("implement");
    UI::GameMenuData * __result = _sub_585BF9(this);
    return __result;
}

_extern UI::EventsScreenData *_sub_577362(boost::scoped_ptr<UI::EventsScreenData> const *const);
_inline UI::EventsScreenData *boost::scoped_ptr<UI::EventsScreenData>::operator->() const // 0x577362
{
    mangled_assert("??C?$scoped_ptr@VEventsScreenData@UI@@@boost@@QBEPAVEventsScreenData@UI@@XZ");
    todo("implement");
    UI::EventsScreenData * __result = _sub_577362(this);
    return __result;
}

_extern UI::ErrorMessageData *_sub_5760F7(boost::scoped_ptr<UI::ErrorMessageData> const *const);
_inline UI::ErrorMessageData *boost::scoped_ptr<UI::ErrorMessageData>::operator->() const // 0x5760F7
{
    mangled_assert("??C?$scoped_ptr@UErrorMessageData@UI@@@boost@@QBEPAUErrorMessageData@UI@@XZ");
    todo("implement");
    UI::ErrorMessageData * __result = _sub_5760F7(this);
    return __result;
}

_extern UI::ControlsFrameData *_sub_57235A(boost::scoped_ptr<UI::ControlsFrameData> const *const);
_inline UI::ControlsFrameData *boost::scoped_ptr<UI::ControlsFrameData>::operator->() const // 0x57235A
{
    mangled_assert("??C?$scoped_ptr@VControlsFrameData@UI@@@boost@@QBEPAVControlsFrameData@UI@@XZ");
    todo("implement");
    UI::ControlsFrameData * __result = _sub_57235A(this);
    return __result;
}

_extern BattleScarTrail::Renderer *_sub_562E5E(boost::scoped_ptr<BattleScarTrail::Renderer> const *const);
_inline BattleScarTrail::Renderer *boost::scoped_ptr<BattleScarTrail::Renderer>::operator->() const // 0x562E5E
{
    mangled_assert("??C?$scoped_ptr@VRenderer@BattleScarTrail@@@boost@@QBEPAVRenderer@BattleScarTrail@@XZ");
    todo("implement");
    BattleScarTrail::Renderer * __result = _sub_562E5E(this);
    return __result;
}

_extern BattleScarStats::Data *_sub_561074(boost::scoped_ptr<BattleScarStats::Data> const *const);
_inline BattleScarStats::Data *boost::scoped_ptr<BattleScarStats::Data>::operator->() const // 0x561074
{
    mangled_assert("??C?$scoped_ptr@VData@BattleScarStats@@@boost@@QBEPAVData@BattleScarStats@@XZ");
    todo("implement");
    BattleScarStats::Data * __result = _sub_561074(this);
    return __result;
}

_extern BattleScarPoint::Renderer *_sub_55DF3A(boost::scoped_ptr<BattleScarPoint::Renderer> const *const);
_inline BattleScarPoint::Renderer *boost::scoped_ptr<BattleScarPoint::Renderer>::operator->() const // 0x55DF3A
{
    mangled_assert("??C?$scoped_ptr@VRenderer@BattleScarPoint@@@boost@@QBEPAVRenderer@BattleScarPoint@@XZ");
    todo("implement");
    BattleScarPoint::Renderer * __result = _sub_55DF3A(this);
    return __result;
}

_extern BattleScarManager::Data *_sub_55A5CB(boost::scoped_ptr<BattleScarManager::Data> const *const);
_inline BattleScarManager::Data *boost::scoped_ptr<BattleScarManager::Data>::operator->() const // 0x55A5CB
{
    mangled_assert("??C?$scoped_ptr@VData@BattleScarManager@@@boost@@QBEPAVData@BattleScarManager@@XZ");
    todo("implement");
    BattleScarManager::Data * __result = _sub_55A5CB(this);
    return __result;
}

_extern DecalManager *_sub_55A5CE(boost::scoped_ptr<DecalManager> const *const);
_inline DecalManager *boost::scoped_ptr<DecalManager>::operator->() const // 0x55A5CE
{
    mangled_assert("??C?$scoped_ptr@VDecalManager@@@boost@@QBEPAVDecalManager@@XZ");
    todo("implement");
    DecalManager * __result = _sub_55A5CE(this);
    return __result;
}

_extern HW2CpuPlayer::Data *_sub_5417B8(boost::scoped_ptr<HW2CpuPlayer::Data> const *const);
_inline HW2CpuPlayer::Data *boost::scoped_ptr<HW2CpuPlayer::Data>::operator->() const // 0x5417B8
{
    mangled_assert("??C?$scoped_ptr@VData@HW2CpuPlayer@@@boost@@QBEPAVData@HW2CpuPlayer@@XZ");
    todo("implement");
    HW2CpuPlayer::Data * __result = _sub_5417B8(this);
    return __result;
}

_extern CpuFleetCommand::Data *_sub_52FB25(boost::scoped_ptr<CpuFleetCommand::Data> const *const);
_inline CpuFleetCommand::Data *boost::scoped_ptr<CpuFleetCommand::Data>::operator->() const // 0x52FB25
{
    mangled_assert("??C?$scoped_ptr@VData@CpuFleetCommand@@@boost@@QBEPAVData@CpuFleetCommand@@XZ");
    todo("implement");
    CpuFleetCommand::Data * __result = _sub_52FB25(this);
    return __result;
}

_extern RenderModelScars *_sub_522AA0(boost::scoped_ptr<RenderModelScars> const *const);
_inline RenderModelScars *boost::scoped_ptr<RenderModelScars>::operator->() const // 0x522AA0
{
    mangled_assert("??C?$scoped_ptr@VRenderModelScars@@@boost@@QBEPAVRenderModelScars@@XZ");
    todo("implement");
    RenderModelScars * __result = _sub_522AA0(this);
    return __result;
}

_extern RenderModelScars::Data *_sub_520BE0(boost::scoped_ptr<RenderModelScars::Data> const *const);
_inline RenderModelScars::Data *boost::scoped_ptr<RenderModelScars::Data>::operator->() const // 0x520BE0
{
    mangled_assert("??C?$scoped_ptr@VData@RenderModelScars@@@boost@@QBEPAVData@RenderModelScars@@XZ");
    todo("implement");
    RenderModelScars::Data * __result = _sub_520BE0(this);
    return __result;
}

_extern StatLoggingInternal *_sub_50DF68(boost::scoped_ptr<StatLoggingInternal> const *const);
_inline StatLoggingInternal *boost::scoped_ptr<StatLoggingInternal>::operator->() const // 0x50DF68
{
    mangled_assert("??C?$scoped_ptr@VStatLoggingInternal@@@boost@@QBEPAVStatLoggingInternal@@XZ");
    todo("implement");
    StatLoggingInternal * __result = _sub_50DF68(this);
    return __result;
}

_extern PlayerProfile *_sub_5047B3(boost::scoped_ptr<PlayerProfile> const *const);
_inline PlayerProfile *boost::scoped_ptr<PlayerProfile>::operator->() const // 0x5047B3
{
    mangled_assert("??C?$scoped_ptr@VPlayerProfile@@@boost@@QBEPAVPlayerProfile@@XZ");
    todo("implement");
    PlayerProfile * __result = _sub_5047B3(this);
    return __result;
}

_extern PlayerProfileGameOptionsData *_sub_502F2E(boost::scoped_ptr<PlayerProfileGameOptionsData> const *const);
_inline PlayerProfileGameOptionsData *boost::scoped_ptr<PlayerProfileGameOptionsData>::operator->() const // 0x502F2E
{
    mangled_assert("??C?$scoped_ptr@UPlayerProfileGameOptionsData@@@boost@@QBEPAUPlayerProfileGameOptionsData@@XZ");
    todo("implement");
    PlayerProfileGameOptionsData * __result = _sub_502F2E(this);
    return __result;
}

_extern LuaSimProxyLib *_sub_4F87C4(boost::scoped_ptr<LuaSimProxyLib> const *const);
_inline LuaSimProxyLib *boost::scoped_ptr<LuaSimProxyLib>::operator->() const // 0x4F87C4
{
    mangled_assert("??C?$scoped_ptr@VLuaSimProxyLib@@@boost@@QBEPAVLuaSimProxyLib@@XZ");
    todo("implement");
    LuaSimProxyLib * __result = _sub_4F87C4(this);
    return __result;
}

_extern AppObj::Data *_sub_4F6724(boost::scoped_ptr<AppObj::Data> const *const);
_inline AppObj::Data *boost::scoped_ptr<AppObj::Data>::operator->() const // 0x4F6724
{
    mangled_assert("??C?$scoped_ptr@VData@AppObj@@@boost@@QBEPAVData@AppObj@@XZ");
    todo("implement");
    AppObj::Data * __result = _sub_4F6724(this);
    return __result;
}

_extern CameraCommand::FocusDistance *_sub_4DCF73(boost::scoped_ptr<CameraCommand::FocusDistance> const *const);
_inline CameraCommand::FocusDistance *boost::scoped_ptr<CameraCommand::FocusDistance>::operator->() const // 0x4DCF73
{
    mangled_assert("??C?$scoped_ptr@UFocusDistance@CameraCommand@@@boost@@QBEPAUFocusDistance@CameraCommand@@XZ");
    todo("implement");
    CameraCommand::FocusDistance * __result = _sub_4DCF73(this);
    return __result;
}

_extern SobWithMeshStatic::LoadingEnv *_sub_4C02F0(boost::scoped_ptr<SobWithMeshStatic::LoadingEnv> const *const);
_inline SobWithMeshStatic::LoadingEnv *boost::scoped_ptr<SobWithMeshStatic::LoadingEnv>::operator->() const // 0x4C02F0
{
    mangled_assert("??C?$scoped_ptr@VLoadingEnv@SobWithMeshStatic@@@boost@@QBEPAVLoadingEnv@SobWithMeshStatic@@XZ");
    todo("implement");
    SobWithMeshStatic::LoadingEnv * __result = _sub_4C02F0(this);
    return __result;
}

_extern ShipHold::Data *_sub_4AC8A6(boost::scoped_ptr<ShipHold::Data> const *const);
_inline ShipHold::Data *boost::scoped_ptr<ShipHold::Data>::operator->() const // 0x4AC8A6
{
    mangled_assert("??C?$scoped_ptr@VData@ShipHold@@@boost@@QBEPAVData@ShipHold@@XZ");
    todo("implement");
    ShipHold::Data * __result = _sub_4AC8A6(this);
    return __result;
}

_extern ShipStatic::LoadingEnv *_sub_4973A6(boost::scoped_ptr<ShipStatic::LoadingEnv> const *const);
_inline ShipStatic::LoadingEnv *boost::scoped_ptr<ShipStatic::LoadingEnv>::operator->() const // 0x4973A6
{
    mangled_assert("??C?$scoped_ptr@VLoadingEnv@ShipStatic@@@boost@@QBEPAVLoadingEnv@ShipStatic@@XZ");
    todo("implement");
    ShipStatic::LoadingEnv * __result = _sub_4973A6(this);
    return __result;
}

_extern StaticModelRegistry::Data *_sub_481777(boost::scoped_ptr<StaticModelRegistry::Data> const *const);
_inline StaticModelRegistry::Data *boost::scoped_ptr<StaticModelRegistry::Data>::operator->() const // 0x481777
{
    mangled_assert("??C?$scoped_ptr@VData@StaticModelRegistry@@@boost@@QBEPAVData@StaticModelRegistry@@XZ");
    todo("implement");
    StaticModelRegistry::Data * __result = _sub_481777(this);
    return __result;
}

_extern SobStatic::LoadingEnv *_sub_47C57E(boost::scoped_ptr<SobStatic::LoadingEnv> const *const);
_inline SobStatic::LoadingEnv *boost::scoped_ptr<SobStatic::LoadingEnv>::operator->() const // 0x47C57E
{
    mangled_assert("??C?$scoped_ptr@VLoadingEnv@SobStatic@@@boost@@QBEPAVLoadingEnv@SobStatic@@XZ");
    todo("implement");
    SobStatic::LoadingEnv * __result = _sub_47C57E(this);
    return __result;
}

_extern Subtitle::Data *_sub_467CB4(boost::scoped_ptr<Subtitle::Data> const *const);
_inline Subtitle::Data *boost::scoped_ptr<Subtitle::Data>::operator->() const // 0x467CB4
{
    mangled_assert("??C?$scoped_ptr@VData@Subtitle@@@boost@@QBEPAVData@Subtitle@@XZ");
    todo("implement");
    Subtitle::Data * __result = _sub_467CB4(this);
    return __result;
}

_extern UIDirectRenderer *_sub_671A3F(boost::scoped_ptr<UIDirectRenderer> const *const);
_inline UIDirectRenderer *boost::scoped_ptr<UIDirectRenderer>::operator->() const // 0x671A3F
{
    mangled_assert("??C?$scoped_ptr@VUIDirectRenderer@@@boost@@QBEPAVUIDirectRenderer@@XZ");
    todo("implement");
    UIDirectRenderer * __result = _sub_671A3F(this);
    return __result;
}

_extern UI::SharedGraphicFactory::Data *_sub_680B8E(boost::scoped_ptr<UI::SharedGraphicFactory::Data> const *const);
_inline UI::SharedGraphicFactory::Data *boost::scoped_ptr<UI::SharedGraphicFactory::Data>::operator->() const // 0x680B8E
{
    mangled_assert("??C?$scoped_ptr@VData@SharedGraphicFactory@UI@@@boost@@QBEPAVData@SharedGraphicFactory@UI@@XZ");
    todo("implement");
    UI::SharedGraphicFactory::Data * __result = _sub_680B8E(this);
    return __result;
}

_extern UI::UISoundManager::Data *_sub_670015(boost::scoped_ptr<UI::UISoundManager::Data> const *const);
_inline UI::UISoundManager::Data *boost::scoped_ptr<UI::UISoundManager::Data>::operator->() const // 0x670015
{
    mangled_assert("??C?$scoped_ptr@VData@UISoundManager@UI@@@boost@@QBEPAVData@UISoundManager@UI@@XZ");
    todo("implement");
    UI::UISoundManager::Data * __result = _sub_670015(this);
    return __result;
}

_extern SoundParamManager::Data *_sub_6C3C59(boost::scoped_ptr<SoundParamManager::Data> const *const);
_inline SoundParamManager::Data *boost::scoped_ptr<SoundParamManager::Data>::operator->() const // 0x6C3C59
{
    mangled_assert("??C?$scoped_ptr@VData@SoundParamManager@@@boost@@QBEPAVData@SoundParamManager@@XZ");
    todo("implement");
    SoundParamManager::Data * __result = _sub_6C3C59(this);
    return __result;
}

_extern SoundEntityList::Memory *_sub_6CF456(boost::scoped_ptr<SoundEntityList::Memory> const *const);
_inline SoundEntityList::Memory *boost::scoped_ptr<SoundEntityList::Memory>::operator->() const // 0x6CF456
{
    mangled_assert("??C?$scoped_ptr@VMemory@SoundEntityList@@@boost@@QBEPAVMemory@SoundEntityList@@XZ");
    todo("implement");
    SoundEntityList::Memory * __result = _sub_6CF456(this);
    return __result;
}

_extern FXBeam::Renderer *_sub_6EAC66(boost::scoped_ptr<FXBeam::Renderer> const *const);
_inline FXBeam::Renderer *boost::scoped_ptr<FXBeam::Renderer>::operator->() const // 0x6EAC66
{
    mangled_assert("??C?$scoped_ptr@VRenderer@FXBeam@@@boost@@QBEPAVRenderer@FXBeam@@XZ");
    todo("implement");
    FXBeam::Renderer * __result = _sub_6EAC66(this);
    return __result;
}

_extern FXHyperspace::Renderer *_sub_6F1CFA(boost::scoped_ptr<FXHyperspace::Renderer> const *const);
_inline FXHyperspace::Renderer *boost::scoped_ptr<FXHyperspace::Renderer>::operator->() const // 0x6F1CFA
{
    mangled_assert("??C?$scoped_ptr@VRenderer@FXHyperspace@@@boost@@QBEPAVRenderer@FXHyperspace@@XZ");
    todo("implement");
    FXHyperspace::Renderer * __result = _sub_6F1CFA(this);
    return __result;
}

_extern FXManager::Data *_sub_6DC5A5(boost::scoped_ptr<FXManager::Data> const *const);
_inline FXManager::Data *boost::scoped_ptr<FXManager::Data>::operator->() const // 0x6DC5A5
{
    mangled_assert("??C?$scoped_ptr@VData@FXManager@@@boost@@QBEPAVData@FXManager@@XZ");
    todo("implement");
    FXManager::Data * __result = _sub_6DC5A5(this);
    return __result;
}

_extern FXRing::Renderer *_sub_6E5B47(boost::scoped_ptr<FXRing::Renderer> const *const);
_inline FXRing::Renderer *boost::scoped_ptr<FXRing::Renderer>::operator->() const // 0x6E5B47
{
    mangled_assert("??C?$scoped_ptr@VRenderer@FXRing@@@boost@@QBEPAVRenderer@FXRing@@XZ");
    todo("implement");
    FXRing::Renderer * __result = _sub_6E5B47(this);
    return __result;
}

_extern FXTrail::Renderer *_sub_6EDAC4(boost::scoped_ptr<FXTrail::Renderer> const *const);
_inline FXTrail::Renderer *boost::scoped_ptr<FXTrail::Renderer>::operator->() const // 0x6EDAC4
{
    mangled_assert("??C?$scoped_ptr@VRenderer@FXTrail@@@boost@@QBEPAVRenderer@FXTrail@@XZ");
    todo("implement");
    FXTrail::Renderer * __result = _sub_6EDAC4(this);
    return __result;
}

_extern LuaRuleSystem::Data *_sub_70F045(boost::scoped_ptr<LuaRuleSystem::Data> const *const);
_inline LuaRuleSystem::Data *boost::scoped_ptr<LuaRuleSystem::Data>::operator->() const // 0x70F045
{
    mangled_assert("??C?$scoped_ptr@VData@LuaRuleSystem@@@boost@@QBEPAVData@LuaRuleSystem@@XZ");
    todo("implement");
    LuaRuleSystem::Data * __result = _sub_70F045(this);
    return __result;
}

_extern Timer *_sub_64FB80(boost::scoped_ptr<Timer> const *const);
_inline Timer *boost::scoped_ptr<Timer>::get() const // 0x64FB80
{
    mangled_assert("?get@?$scoped_ptr@VTimer@@@boost@@QBEPAVTimer@@XZ");
    todo("implement");
    Timer * __result = _sub_64FB80(this);
    return __result;
}

_extern AABBGrid<unsigned short,std::allocator<unsigned short> > *_sub_5C25E1(boost::scoped_ptr<AABBGrid<unsigned short,std::allocator<unsigned short> > > const *const);
_inline AABBGrid<unsigned short,std::allocator<unsigned short> > *boost::scoped_ptr<AABBGrid<unsigned short,std::allocator<unsigned short> > >::get() const // 0x5C25E1
{
    mangled_assert("?get@?$scoped_ptr@V?$AABBGrid@GV?$allocator@G@std@@@@@boost@@QBEPAV?$AABBGrid@GV?$allocator@G@std@@@@XZ");
    todo("implement");
    AABBGrid<unsigned short,std::allocator<unsigned short> > * __result = _sub_5C25E1(this);
    return __result;
}

_extern UI::MovieSpeech *_sub_592445(boost::scoped_ptr<UI::MovieSpeech> const *const);
_inline UI::MovieSpeech *boost::scoped_ptr<UI::MovieSpeech>::get() const // 0x592445
{
    mangled_assert("?get@?$scoped_ptr@VMovieSpeech@UI@@@boost@@QBEPAVMovieSpeech@UI@@XZ");
    todo("implement");
    UI::MovieSpeech * __result = _sub_592445(this);
    return __result;
}

_extern UI::MovieTimer *_sub_592448(boost::scoped_ptr<UI::MovieTimer> const *const);
_inline UI::MovieTimer *boost::scoped_ptr<UI::MovieTimer>::get() const // 0x592448
{
    mangled_assert("?get@?$scoped_ptr@VMovieTimer@UI@@@boost@@QBEPAVMovieTimer@UI@@XZ");
    todo("implement");
    UI::MovieTimer * __result = _sub_592448(this);
    return __result;
}

_extern BattleScarManager::Data *_sub_55B7B4(boost::scoped_ptr<BattleScarManager::Data> const *const);
_inline BattleScarManager::Data *boost::scoped_ptr<BattleScarManager::Data>::get() const // 0x55B7B4
{
    mangled_assert("?get@?$scoped_ptr@VData@BattleScarManager@@@boost@@QBEPAVData@BattleScarManager@@XZ");
    todo("implement");
    BattleScarManager::Data * __result = _sub_55B7B4(this);
    return __result;
}

_extern DecalManager *_sub_55B7B7(boost::scoped_ptr<DecalManager> const *const);
_inline DecalManager *boost::scoped_ptr<DecalManager>::get() const // 0x55B7B7
{
    mangled_assert("?get@?$scoped_ptr@VDecalManager@@@boost@@QBEPAVDecalManager@@XZ");
    todo("implement");
    DecalManager * __result = _sub_55B7B7(this);
    return __result;
}

_extern RenderModelScars *_sub_522BC0(boost::scoped_ptr<RenderModelScars> const *const);
_inline RenderModelScars *boost::scoped_ptr<RenderModelScars>::get() const // 0x522BC0
{
    mangled_assert("?get@?$scoped_ptr@VRenderModelScars@@@boost@@QBEPAVRenderModelScars@@XZ");
    todo("implement");
    RenderModelScars * __result = _sub_522BC0(this);
    return __result;
}

_extern StatLoggingInternal *_sub_50F0CA(boost::scoped_ptr<StatLoggingInternal> const *const);
_inline StatLoggingInternal *boost::scoped_ptr<StatLoggingInternal>::get() const // 0x50F0CA
{
    mangled_assert("?get@?$scoped_ptr@VStatLoggingInternal@@@boost@@QBEPAVStatLoggingInternal@@XZ");
    todo("implement");
    StatLoggingInternal * __result = _sub_50F0CA(this);
    return __result;
}

_extern PlayerProfile *_sub_506400(boost::scoped_ptr<PlayerProfile> const *const);
_inline PlayerProfile *boost::scoped_ptr<PlayerProfile>::get() const // 0x506400
{
    mangled_assert("?get@?$scoped_ptr@VPlayerProfile@@@boost@@QBEPAVPlayerProfile@@XZ");
    todo("implement");
    PlayerProfile * __result = _sub_506400(this);
    return __result;
}

_extern SimProxy *_sub_4FAF6A(boost::scoped_ptr<SimProxy> const *const);
_inline SimProxy *boost::scoped_ptr<SimProxy>::get() const // 0x4FAF6A
{
    mangled_assert("?get@?$scoped_ptr@VSimProxy@@@boost@@QBEPAVSimProxy@@XZ");
    todo("implement");
    SimProxy * __result = _sub_4FAF6A(this);
    return __result;
}

_extern ConfigFile *_sub_4F7227(boost::scoped_ptr<ConfigFile> const *const);
_inline ConfigFile *boost::scoped_ptr<ConfigFile>::get() const // 0x4F7227
{
    mangled_assert("?get@?$scoped_ptr@VConfigFile@@@boost@@QBEPAVConfigFile@@XZ");
    todo("implement");
    ConfigFile * __result = _sub_4F7227(this);
    return __result;
}

_extern Lobby *_sub_4F722A(boost::scoped_ptr<Lobby> const *const);
_inline Lobby *boost::scoped_ptr<Lobby>::get() const // 0x4F722A
{
    mangled_assert("?get@?$scoped_ptr@VLobby@@@boost@@QBEPAVLobby@@XZ");
    todo("implement");
    Lobby * __result = _sub_4F722A(this);
    return __result;
}

_extern StatMonitor *_sub_4F722D(boost::scoped_ptr<StatMonitor> const *const);
_inline StatMonitor *boost::scoped_ptr<StatMonitor>::get() const // 0x4F722D
{
    mangled_assert("?get@?$scoped_ptr@VStatMonitor@@@boost@@QBEPAVStatMonitor@@XZ");
    todo("implement");
    StatMonitor * __result = _sub_4F722D(this);
    return __result;
}

_extern CameraCommand::FocusDistance *_sub_4DF022(boost::scoped_ptr<CameraCommand::FocusDistance> const *const);
_inline CameraCommand::FocusDistance *boost::scoped_ptr<CameraCommand::FocusDistance>::get() const // 0x4DF022
{
    mangled_assert("?get@?$scoped_ptr@UFocusDistance@CameraCommand@@@boost@@QBEPAUFocusDistance@CameraCommand@@XZ");
    todo("implement");
    CameraCommand::FocusDistance * __result = _sub_4DF022(this);
    return __result;
}

_extern ShipStatic::LoadingEnv *_sub_497E8E(boost::scoped_ptr<ShipStatic::LoadingEnv> const *const);
_inline ShipStatic::LoadingEnv *boost::scoped_ptr<ShipStatic::LoadingEnv>::get() const // 0x497E8E
{
    mangled_assert("?get@?$scoped_ptr@VLoadingEnv@ShipStatic@@@boost@@QBEPAVLoadingEnv@ShipStatic@@XZ");
    todo("implement");
    ShipStatic::LoadingEnv * __result = _sub_497E8E(this);
    return __result;
}

_extern SobWithMeshStatic::LoadingEnv *_sub_497E91(boost::scoped_ptr<SobWithMeshStatic::LoadingEnv> const *const);
_inline SobWithMeshStatic::LoadingEnv *boost::scoped_ptr<SobWithMeshStatic::LoadingEnv>::get() const // 0x497E91
{
    mangled_assert("?get@?$scoped_ptr@VLoadingEnv@SobWithMeshStatic@@@boost@@QBEPAVLoadingEnv@SobWithMeshStatic@@XZ");
    todo("implement");
    SobWithMeshStatic::LoadingEnv * __result = _sub_497E91(this);
    return __result;
}

_extern SobStatic::LoadingEnv *_sub_47EDA3(boost::scoped_ptr<SobStatic::LoadingEnv> const *const);
_inline SobStatic::LoadingEnv *boost::scoped_ptr<SobStatic::LoadingEnv>::get() const // 0x47EDA3
{
    mangled_assert("?get@?$scoped_ptr@VLoadingEnv@SobStatic@@@boost@@QBEPAVLoadingEnv@SobStatic@@XZ");
    todo("implement");
    SobStatic::LoadingEnv * __result = _sub_47EDA3(this);
    return __result;
}

_extern InGameDisconnect *_sub_46E3A5(boost::scoped_ptr<InGameDisconnect> const *const);
_inline InGameDisconnect *boost::scoped_ptr<InGameDisconnect>::get() const // 0x46E3A5
{
    mangled_assert("?get@?$scoped_ptr@VInGameDisconnect@@@boost@@QBEPAVInGameDisconnect@@XZ");
    todo("implement");
    InGameDisconnect * __result = _sub_46E3A5(this);
    return __result;
}

_extern UIDirectRenderer *_sub_67375A(boost::scoped_ptr<UIDirectRenderer> const *const);
_inline UIDirectRenderer *boost::scoped_ptr<UIDirectRenderer>::get() const // 0x67375A
{
    mangled_assert("?get@?$scoped_ptr@VUIDirectRenderer@@@boost@@QBEPAVUIDirectRenderer@@XZ");
    todo("implement");
    UIDirectRenderer * __result = _sub_67375A(this);
    return __result;
}

_extern FXBeam::Renderer *_sub_6ECFD7(boost::scoped_ptr<FXBeam::Renderer> const *const);
_inline FXBeam::Renderer *boost::scoped_ptr<FXBeam::Renderer>::get() const // 0x6ECFD7
{
    mangled_assert("?get@?$scoped_ptr@VRenderer@FXBeam@@@boost@@QBEPAVRenderer@FXBeam@@XZ");
    todo("implement");
    FXBeam::Renderer * __result = _sub_6ECFD7(this);
    return __result;
}

_extern FXCollisionSurf *_sub_6E1730(boost::scoped_ptr<FXCollisionSurf> const *const);
_inline FXCollisionSurf *boost::scoped_ptr<FXCollisionSurf>::get() const // 0x6E1730
{
    mangled_assert("?get@?$scoped_ptr@VFXCollisionSurf@@@boost@@QBEPAVFXCollisionSurf@@XZ");
    todo("implement");
    FXCollisionSurf * __result = _sub_6E1730(this);
    return __result;
}

_extern FXHyperspace::Renderer *_sub_6F3A6A(boost::scoped_ptr<FXHyperspace::Renderer> const *const);
_inline FXHyperspace::Renderer *boost::scoped_ptr<FXHyperspace::Renderer>::get() const // 0x6F3A6A
{
    mangled_assert("?get@?$scoped_ptr@VRenderer@FXHyperspace@@@boost@@QBEPAVRenderer@FXHyperspace@@XZ");
    todo("implement");
    FXHyperspace::Renderer * __result = _sub_6F3A6A(this);
    return __result;
}

_extern FXRing::Renderer *_sub_6E8AF7(boost::scoped_ptr<FXRing::Renderer> const *const);
_inline FXRing::Renderer *boost::scoped_ptr<FXRing::Renderer>::get() const // 0x6E8AF7
{
    mangled_assert("?get@?$scoped_ptr@VRenderer@FXRing@@@boost@@QBEPAVRenderer@FXRing@@XZ");
    todo("implement");
    FXRing::Renderer * __result = _sub_6E8AF7(this);
    return __result;
}

_extern FXTrail::Renderer *_sub_6EFBB6(boost::scoped_ptr<FXTrail::Renderer> const *const);
_inline FXTrail::Renderer *boost::scoped_ptr<FXTrail::Renderer>::get() const // 0x6EFBB6
{
    mangled_assert("?get@?$scoped_ptr@VRenderer@FXTrail@@@boost@@QBEPAVRenderer@FXTrail@@XZ");
    todo("implement");
    FXTrail::Renderer * __result = _sub_6EFBB6(this);
    return __result;
}

_extern void _sub_650F8C(boost::scoped_ptr<Timer> *const, boost::scoped_ptr<Timer> &);
_inline void boost::scoped_ptr<Timer>::swap(boost::scoped_ptr<Timer> &) // 0x650F8C
{
    mangled_assert("?swap@?$scoped_ptr@VTimer@@@boost@@QAEXAAV12@@Z");
    todo("implement");
    _sub_650F8C(this, arg);
}

_extern void _sub_5C35F9(boost::scoped_ptr<AABBGrid<unsigned short,std::allocator<unsigned short> > > *const, boost::scoped_ptr<AABBGrid<unsigned short,std::allocator<unsigned short> > > &);
_inline void boost::scoped_ptr<AABBGrid<unsigned short,std::allocator<unsigned short> > >::swap(boost::scoped_ptr<AABBGrid<unsigned short,std::allocator<unsigned short> > > &) // 0x5C35F9
{
    mangled_assert("?swap@?$scoped_ptr@V?$AABBGrid@GV?$allocator@G@std@@@@@boost@@QAEXAAV12@@Z");
    todo("implement");
    _sub_5C35F9(this, arg);
}

_extern void _sub_59264F(boost::scoped_ptr<UI::MovieSpeech> *const, boost::scoped_ptr<UI::MovieSpeech> &);
_inline void boost::scoped_ptr<UI::MovieSpeech>::swap(boost::scoped_ptr<UI::MovieSpeech> &) // 0x59264F
{
    mangled_assert("?swap@?$scoped_ptr@VMovieSpeech@UI@@@boost@@QAEXAAV12@@Z");
    todo("implement");
    _sub_59264F(this, arg);
}

_extern void _sub_592660(boost::scoped_ptr<UI::MovieTimer> *const, boost::scoped_ptr<UI::MovieTimer> &);
_inline void boost::scoped_ptr<UI::MovieTimer>::swap(boost::scoped_ptr<UI::MovieTimer> &) // 0x592660
{
    mangled_assert("?swap@?$scoped_ptr@VMovieTimer@UI@@@boost@@QAEXAAV12@@Z");
    todo("implement");
    _sub_592660(this, arg);
}

_extern void _sub_55CA7E(boost::scoped_ptr<DecalManager> *const, boost::scoped_ptr<DecalManager> &);
_inline void boost::scoped_ptr<DecalManager>::swap(boost::scoped_ptr<DecalManager> &) // 0x55CA7E
{
    mangled_assert("?swap@?$scoped_ptr@VDecalManager@@@boost@@QAEXAAV12@@Z");
    todo("implement");
    _sub_55CA7E(this, arg);
}

_extern void _sub_50F372(boost::scoped_ptr<StatLoggingInternal> *const, boost::scoped_ptr<StatLoggingInternal> &);
_inline void boost::scoped_ptr<StatLoggingInternal>::swap(boost::scoped_ptr<StatLoggingInternal> &) // 0x50F372
{
    mangled_assert("?swap@?$scoped_ptr@VStatLoggingInternal@@@boost@@QAEXAAV12@@Z");
    todo("implement");
    _sub_50F372(this, arg);
}

_extern void _sub_506684(boost::scoped_ptr<PlayerProfile> *const, boost::scoped_ptr<PlayerProfile> &);
_inline void boost::scoped_ptr<PlayerProfile>::swap(boost::scoped_ptr<PlayerProfile> &) // 0x506684
{
    mangled_assert("?swap@?$scoped_ptr@VPlayerProfile@@@boost@@QAEXAAV12@@Z");
    todo("implement");
    _sub_506684(this, arg);
}

_extern void _sub_4FB5F0(boost::scoped_ptr<LuaSimProxyLib> *const, boost::scoped_ptr<LuaSimProxyLib> &);
_inline void boost::scoped_ptr<LuaSimProxyLib>::swap(boost::scoped_ptr<LuaSimProxyLib> &) // 0x4FB5F0
{
    mangled_assert("?swap@?$scoped_ptr@VLuaSimProxyLib@@@boost@@QAEXAAV12@@Z");
    todo("implement");
    _sub_4FB5F0(this, arg);
}

_extern void _sub_4FB601(boost::scoped_ptr<SimProxy> *const, boost::scoped_ptr<SimProxy> &);
_inline void boost::scoped_ptr<SimProxy>::swap(boost::scoped_ptr<SimProxy> &) // 0x4FB601
{
    mangled_assert("?swap@?$scoped_ptr@VSimProxy@@@boost@@QAEXAAV12@@Z");
    todo("implement");
    _sub_4FB601(this, arg);
}

_extern void _sub_4F7263(boost::scoped_ptr<ConfigFile> *const, boost::scoped_ptr<ConfigFile> &);
_inline void boost::scoped_ptr<ConfigFile>::swap(boost::scoped_ptr<ConfigFile> &) // 0x4F7263
{
    mangled_assert("?swap@?$scoped_ptr@VConfigFile@@@boost@@QAEXAAV12@@Z");
    todo("implement");
    _sub_4F7263(this, arg);
}

_extern void _sub_4F7274(boost::scoped_ptr<Lobby> *const, boost::scoped_ptr<Lobby> &);
_inline void boost::scoped_ptr<Lobby>::swap(boost::scoped_ptr<Lobby> &) // 0x4F7274
{
    mangled_assert("?swap@?$scoped_ptr@VLobby@@@boost@@QAEXAAV12@@Z");
    todo("implement");
    _sub_4F7274(this, arg);
}

_extern void _sub_4F7285(boost::scoped_ptr<StatMonitor> *const, boost::scoped_ptr<StatMonitor> &);
_inline void boost::scoped_ptr<StatMonitor>::swap(boost::scoped_ptr<StatMonitor> &) // 0x4F7285
{
    mangled_assert("?swap@?$scoped_ptr@VStatMonitor@@@boost@@QAEXAAV12@@Z");
    todo("implement");
    _sub_4F7285(this, arg);
}

_extern void _sub_4DFCCF(boost::scoped_ptr<CameraCommand::FocusDistance> *const, boost::scoped_ptr<CameraCommand::FocusDistance> &);
_inline void boost::scoped_ptr<CameraCommand::FocusDistance>::swap(boost::scoped_ptr<CameraCommand::FocusDistance> &) // 0x4DFCCF
{
    mangled_assert("?swap@?$scoped_ptr@UFocusDistance@CameraCommand@@@boost@@QAEXAAV12@@Z");
    todo("implement");
    _sub_4DFCCF(this, arg);
}

_extern void _sub_4C096F(boost::scoped_ptr<SobWithMeshStatic::LoadingEnv> *const, boost::scoped_ptr<SobWithMeshStatic::LoadingEnv> &);
_inline void boost::scoped_ptr<SobWithMeshStatic::LoadingEnv>::swap(boost::scoped_ptr<SobWithMeshStatic::LoadingEnv> &) // 0x4C096F
{
    mangled_assert("?swap@?$scoped_ptr@VLoadingEnv@SobWithMeshStatic@@@boost@@QAEXAAV12@@Z");
    todo("implement");
    _sub_4C096F(this, arg);
}

_extern void _sub_498132(boost::scoped_ptr<ShipStatic::LoadingEnv> *const, boost::scoped_ptr<ShipStatic::LoadingEnv> &);
_inline void boost::scoped_ptr<ShipStatic::LoadingEnv>::swap(boost::scoped_ptr<ShipStatic::LoadingEnv> &) // 0x498132
{
    mangled_assert("?swap@?$scoped_ptr@VLoadingEnv@ShipStatic@@@boost@@QAEXAAV12@@Z");
    todo("implement");
    _sub_498132(this, arg);
}

_extern void _sub_47F8F1(boost::scoped_ptr<SobStatic::LoadingEnv> *const, boost::scoped_ptr<SobStatic::LoadingEnv> &);
_inline void boost::scoped_ptr<SobStatic::LoadingEnv>::swap(boost::scoped_ptr<SobStatic::LoadingEnv> &) // 0x47F8F1
{
    mangled_assert("?swap@?$scoped_ptr@VLoadingEnv@SobStatic@@@boost@@QAEXAAV12@@Z");
    todo("implement");
    _sub_47F8F1(this, arg);
}

_extern void _sub_46E423(boost::scoped_ptr<InGameDisconnect> *const, boost::scoped_ptr<InGameDisconnect> &);
_inline void boost::scoped_ptr<InGameDisconnect>::swap(boost::scoped_ptr<InGameDisconnect> &) // 0x46E423
{
    mangled_assert("?swap@?$scoped_ptr@VInGameDisconnect@@@boost@@QAEXAAV12@@Z");
    todo("implement");
    _sub_46E423(this, arg);
}

_extern void _sub_6ED0FC(boost::scoped_ptr<FXBeam::Renderer> *const, boost::scoped_ptr<FXBeam::Renderer> &);
_inline void boost::scoped_ptr<FXBeam::Renderer>::swap(boost::scoped_ptr<FXBeam::Renderer> &) // 0x6ED0FC
{
    mangled_assert("?swap@?$scoped_ptr@VRenderer@FXBeam@@@boost@@QAEXAAV12@@Z");
    todo("implement");
    _sub_6ED0FC(this, arg);
}

_extern void _sub_6F3B40(boost::scoped_ptr<FXHyperspace::Renderer> *const, boost::scoped_ptr<FXHyperspace::Renderer> &);
_inline void boost::scoped_ptr<FXHyperspace::Renderer>::swap(boost::scoped_ptr<FXHyperspace::Renderer> &) // 0x6F3B40
{
    mangled_assert("?swap@?$scoped_ptr@VRenderer@FXHyperspace@@@boost@@QAEXAAV12@@Z");
    todo("implement");
    _sub_6F3B40(this, arg);
}

_extern void _sub_6E8E48(boost::scoped_ptr<FXRing::Renderer> *const, boost::scoped_ptr<FXRing::Renderer> &);
_inline void boost::scoped_ptr<FXRing::Renderer>::swap(boost::scoped_ptr<FXRing::Renderer> &) // 0x6E8E48
{
    mangled_assert("?swap@?$scoped_ptr@VRenderer@FXRing@@@boost@@QAEXAAV12@@Z");
    todo("implement");
    _sub_6E8E48(this, arg);
}

_extern void _sub_6EFD98(boost::scoped_ptr<FXTrail::Renderer> *const, boost::scoped_ptr<FXTrail::Renderer> &);
_inline void boost::scoped_ptr<FXTrail::Renderer>::swap(boost::scoped_ptr<FXTrail::Renderer> &) // 0x6EFD98
{
    mangled_assert("?swap@?$scoped_ptr@VRenderer@FXTrail@@@boost@@QAEXAAV12@@Z");
    todo("implement");
    _sub_6EFD98(this, arg);
}

/* ---------- private code */

#endif // __SCOPED_PTR_H__
/* combined */
#ifndef __SCOPED_PTR_H__
#define __SCOPED_PTR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SCOPED_PTR_H__
/* combined */
#ifndef __SCOPED_PTR_H__
#define __SCOPED_PTR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::scoped_ptr<`anonymous namespace'::FileBuffer>
{
private:
    `anonymous-namespace'::FileBuffer *ptr; // 0x0
public:
    scoped_ptr<`anonymous namespace'::FileBuffer>(std::auto_ptr<`anonymous namespace'::FileBuffer>);
    scoped_ptr<`anonymous namespace'::FileBuffer>(`anonymous-namespace'::FileBuffer *);
private:
    scoped_ptr<`anonymous namespace'::FileBuffer>(boost::scoped_ptr<`anonymous namespace'::FileBuffer> const &);
    boost::scoped_ptr<`anonymous namespace'::FileBuffer> &operator=(boost::scoped_ptr<`anonymous namespace'::FileBuffer> const &);
    typedef boost::scoped_ptr<`anonymous namespace'::FileBuffer> this_type;
    typedef `anonymous-namespace'::FileBuffer element_type;
public:
    ~scoped_ptr<`anonymous namespace'::FileBuffer>();
    void reset(`anonymous-namespace'::FileBuffer *);
    `anonymous-namespace'::FileBuffer &operator*() const;
    `anonymous-namespace'::FileBuffer *operator->() const;
    `anonymous-namespace'::FileBuffer *get() const;
    typedef `anonymous-namespace'::FileBuffer **unspecified_bool_type() const;
    `anonymous-namespace'::FileBuffer **operator class `anonymous-namespace'::FileBuffer *(__thiscall boost::scoped_ptr<class `anonymous namespace'::FileBuffer>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<`anonymous namespace'::FileBuffer> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<`anonymous namespace'::FileBuffer>) == 4, "Invalid boost::scoped_ptr<`anonymous namespace'::FileBuffer> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SCOPED_PTR_H__
/* combined */
#ifndef __SCOPED_PTR_H__
#define __SCOPED_PTR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SCOPED_PTR_H__
/* combined */
#ifndef __SCOPED_PTR_H__
#define __SCOPED_PTR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::scoped_ptr<LuaConfig::Data>
{
private:
    LuaConfig::Data *ptr; // 0x0
public:
    scoped_ptr<LuaConfig::Data>(std::auto_ptr<LuaConfig::Data>);
    scoped_ptr<LuaConfig::Data>(LuaConfig::Data *);
private:
    scoped_ptr<LuaConfig::Data>(boost::scoped_ptr<LuaConfig::Data> const &);
    boost::scoped_ptr<LuaConfig::Data> &operator=(boost::scoped_ptr<LuaConfig::Data> const &);
    typedef boost::scoped_ptr<LuaConfig::Data> this_type;
    class element_type;
public:
    _inline ~scoped_ptr<LuaConfig::Data>();
    void reset(LuaConfig::Data *);
    LuaConfig::Data &operator*() const;
    LuaConfig::Data *operator->() const;
    LuaConfig::Data *get() const;
    typedef LuaConfig::Data **unspecified_bool_type() const;
    LuaConfig::Data **operator class LuaConfig::Data *(__thiscall boost::scoped_ptr<class LuaConfig::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<LuaConfig::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<LuaConfig::Data>) == 4, "Invalid boost::scoped_ptr<LuaConfig::Data> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_10001A7D(boost::scoped_ptr<LuaConfig::Data> *const);
_inline boost::scoped_ptr<LuaConfig::Data>::~scoped_ptr<LuaConfig::Data>() // 0x10001A7D
{
    mangled_assert("??1?$scoped_ptr@VData@LuaConfig@@@boost@@QAE@XZ");
    todo("implement");
    _sub_10001A7D(this);
}

/* ---------- private code */

#endif // __SCOPED_PTR_H__
/* combined */
#ifndef __SCOPED_PTR_H__
#define __SCOPED_PTR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > >
{
private:
    std::vector<FatVertex,std::allocator<FatVertex> > *ptr; // 0x0
public:
    scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > >(std::auto_ptr<std::vector<FatVertex,std::allocator<FatVertex> > >);
    _inline scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > >(std::vector<FatVertex,std::allocator<FatVertex> > *);
private:
    scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > >(boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > > const &);
    boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > > &operator=(boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > > const &);
    typedef boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > > this_type;
    typedef std::vector<FatVertex,std::allocator<FatVertex> > element_type;
public:
    _inline ~scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > >();
    _inline void reset(std::vector<FatVertex,std::allocator<FatVertex> > *);
    _inline std::vector<FatVertex,std::allocator<FatVertex> > &operator*() const;
    _inline std::vector<FatVertex,std::allocator<FatVertex> > *operator->() const;
    _inline std::vector<FatVertex,std::allocator<FatVertex> > *get() const;
    typedef std::vector<FatVertex,std::allocator<FatVertex> > **unspecified_bool_type() const;
    std::vector<FatVertex,std::allocator<FatVertex> > **operator class std::vector<struct FatVertex,class std::allocator<struct FatVertex> > *(__thiscall boost::scoped_ptr<class std::vector<struct FatVertex,class std::allocator<struct FatVertex> > >::* )(void) const() const() const;
    bool operator!() const;
    _inline void swap(boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > > &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > >) == 4, "Invalid boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > > size");

class boost::scoped_ptr<FatVertex>
{
private:
    FatVertex *ptr; // 0x0
public:
    scoped_ptr<FatVertex>(std::auto_ptr<FatVertex>);
    _inline scoped_ptr<FatVertex>(FatVertex *);
private:
    scoped_ptr<FatVertex>(boost::scoped_ptr<FatVertex> const &);
    boost::scoped_ptr<FatVertex> &operator=(boost::scoped_ptr<FatVertex> const &);
    typedef boost::scoped_ptr<FatVertex> this_type;
    typedef FatVertex element_type;
public:
    _inline ~scoped_ptr<FatVertex>();
    void reset(FatVertex *);
    FatVertex &operator*() const;
    _inline FatVertex *operator->() const;
    _inline FatVertex *get() const;
    typedef FatVertex **unspecified_bool_type() const;
    FatVertex **operator struct FatVertex *(__thiscall boost::scoped_ptr<struct FatVertex>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<FatVertex> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<FatVertex>) == 4, "Invalid boost::scoped_ptr<FatVertex> size");

class boost::scoped_ptr<LuaConfig::Data>
{
private:
    LuaConfig::Data *ptr; // 0x0
public:
    scoped_ptr<LuaConfig::Data>(std::auto_ptr<LuaConfig::Data>);
    scoped_ptr<LuaConfig::Data>(LuaConfig::Data *);
private:
    scoped_ptr<LuaConfig::Data>(boost::scoped_ptr<LuaConfig::Data> const &);
    boost::scoped_ptr<LuaConfig::Data> &operator=(boost::scoped_ptr<LuaConfig::Data> const &);
    typedef boost::scoped_ptr<LuaConfig::Data> this_type;
    class element_type;
public:
    ~scoped_ptr<LuaConfig::Data>();
    void reset(LuaConfig::Data *);
    LuaConfig::Data &operator*() const;
    LuaConfig::Data *operator->() const;
    LuaConfig::Data *get() const;
    typedef LuaConfig::Data **unspecified_bool_type() const;
    LuaConfig::Data **operator class LuaConfig::Data *(__thiscall boost::scoped_ptr<class LuaConfig::Data>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_ptr<LuaConfig::Data> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_ptr<LuaConfig::Data>) == 4, "Invalid boost::scoped_ptr<LuaConfig::Data> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_10098140(boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > > *const, std::vector<FatVertex,std::allocator<FatVertex> > *);
_inline boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > >::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > >(std::vector<FatVertex,std::allocator<FatVertex> > *) // 0x10098140
{
    mangled_assert("??0?$scoped_ptr@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@boost@@QAE@PAV?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@Z");
    todo("implement");
    _sub_10098140(this, arg);
}

_extern _sub_10048380(boost::scoped_ptr<FatVertex> *const, FatVertex *);
_inline boost::scoped_ptr<FatVertex>::scoped_ptr<FatVertex>(FatVertex *) // 0x10048380
{
    mangled_assert("??0?$scoped_ptr@UFatVertex@@@boost@@QAE@PAUFatVertex@@@Z");
    todo("implement");
    _sub_10048380(this, arg);
}

_extern void _sub_100981E0(boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > > *const);
_inline boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > >::~scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > >() // 0x100981E0
{
    mangled_assert("??1?$scoped_ptr@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@boost@@QAE@XZ");
    todo("implement");
    _sub_100981E0(this);
}

_extern void _sub_10048450(boost::scoped_ptr<FatVertex> *const);
_inline boost::scoped_ptr<FatVertex>::~scoped_ptr<FatVertex>() // 0x10048450
{
    mangled_assert("??1?$scoped_ptr@UFatVertex@@@boost@@QAE@XZ");
    todo("implement");
    _sub_10048450(this);
}

_extern void _sub_10098AC0(boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > > *const, std::vector<FatVertex,std::allocator<FatVertex> > *);
_inline void boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > >::reset(std::vector<FatVertex,std::allocator<FatVertex> > *) // 0x10098AC0
{
    mangled_assert("?reset@?$scoped_ptr@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@boost@@QAEXPAV?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@Z");
    todo("implement");
    _sub_10098AC0(this, arg);
}

_extern std::vector<FatVertex,std::allocator<FatVertex> > &_sub_10098360(boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > > const *const);
_inline std::vector<FatVertex,std::allocator<FatVertex> > &boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > >::operator*() const // 0x10098360
{
    mangled_assert("??D?$scoped_ptr@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@boost@@QBEAAV?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@XZ");
    todo("implement");
    std::vector<FatVertex,std::allocator<FatVertex> > & __result = _sub_10098360(this);
    return __result;
}

_extern std::vector<FatVertex,std::allocator<FatVertex> > *_sub_10098350(boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > > const *const);
_inline std::vector<FatVertex,std::allocator<FatVertex> > *boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > >::operator->() const // 0x10098350
{
    mangled_assert("??C?$scoped_ptr@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@boost@@QBEPAV?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@XZ");
    todo("implement");
    std::vector<FatVertex,std::allocator<FatVertex> > * __result = _sub_10098350(this);
    return __result;
}

_extern FatVertex *_sub_10048520(boost::scoped_ptr<FatVertex> const *const);
_inline FatVertex *boost::scoped_ptr<FatVertex>::operator->() const // 0x10048520
{
    mangled_assert("??C?$scoped_ptr@UFatVertex@@@boost@@QBEPAUFatVertex@@XZ");
    todo("implement");
    FatVertex * __result = _sub_10048520(this);
    return __result;
}

_extern std::vector<FatVertex,std::allocator<FatVertex> > *_sub_10098510(boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > > const *const);
_inline std::vector<FatVertex,std::allocator<FatVertex> > *boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > >::get() const // 0x10098510
{
    mangled_assert("?get@?$scoped_ptr@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@boost@@QBEPAV?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@XZ");
    todo("implement");
    std::vector<FatVertex,std::allocator<FatVertex> > * __result = _sub_10098510(this);
    return __result;
}

_extern FatVertex *_sub_10048A10(boost::scoped_ptr<FatVertex> const *const);
_inline FatVertex *boost::scoped_ptr<FatVertex>::get() const // 0x10048A10
{
    mangled_assert("?get@?$scoped_ptr@UFatVertex@@@boost@@QBEPAUFatVertex@@XZ");
    todo("implement");
    FatVertex * __result = _sub_10048A10(this);
    return __result;
}

_extern void _sub_10098B80(boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > > *const, boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > > &);
_inline void boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > >::swap(boost::scoped_ptr<std::vector<FatVertex,std::allocator<FatVertex> > > &) // 0x10098B80
{
    mangled_assert("?swap@?$scoped_ptr@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@boost@@QAEXAAV12@@Z");
    todo("implement");
    _sub_10098B80(this, arg);
}

/* ---------- private code */

#endif // __SCOPED_PTR_H__
/* combined */
#ifndef __SCOPED_PTR_H__
#define __SCOPED_PTR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SCOPED_PTR_H__
/* combined */
#ifndef __SCOPED_PTR_H__
#define __SCOPED_PTR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SCOPED_PTR_H__
/* combined */
#ifndef __SCOPED_PTR_H__
#define __SCOPED_PTR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SCOPED_PTR_H__
/* combined */
#ifndef __SCOPED_PTR_H__
#define __SCOPED_PTR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SCOPED_PTR_H__
