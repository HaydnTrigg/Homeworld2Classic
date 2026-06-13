#if 0
#ifndef __NISMANAGER_H__
#define __NISMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class NISManager
{
public:
    typedef unsigned __int32 NISHandle;
    static bool startup();
    static bool shutdown();
    static NISManager *i();
    enum
    {
        NISHandle_Invalid = 0,
    };
    unsigned __int32 load(char const *);
    bool unload(char const *);
    void play(unsigned __int32, bool);
    unsigned __int32 play(char const *, vector3 const &, matrix3 const &);
    bool isPlaying(unsigned __int32) const;
    bool isAnyPlaying() const;
    unsigned __int32 getPlayingHandle(char const *) const;
    void setTestFile(char const *);
    char const *getTestFile() const;
    bool pause(bool);
    bool pauseToggle();
    bool stop();
    bool skip();
    void disableInterface(bool);
    void seek(float);
    void seekForward(float);
    bool isActive();
    bool isCameraFree();
    void freeCamera(bool);
    void visualize3D();
    void visualize2D();
    void renderTimeUpdate(float);
    void render2D(float);
    void update(float);
    bool displayCard(char const *, vector2 const &, vector2 const &, float, float, float, float);
    void setEndFocus(Selection const &);
    void setSkippable(bool);
private:
    NISManager();
    ~NISManager();
    void deleteNISs();
    void deleteNISCards();
    void movieMode(bool, bool, bool, bool);
    bool wideScreenUpdate(float);
    bool fadeUpdate(float);
    NISCard *findCard(char const *);
    void updateCamera();
    void exitMovieMode(bool, bool);
    typedef std::vector<NISCard *,std::allocator<NISCard *> > NISCardList;
    typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NIS *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NIS *> > > NISList;
    static NISManager *s_instance;
    class Data;
    NISManager::Data *m_pimpl; // 0x0
};
static_assert(sizeof(NISManager) == 4, "Invalid NISManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __NISMANAGER_H__
#endif
