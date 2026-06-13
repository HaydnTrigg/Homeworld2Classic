#if 0
#ifndef __SHAREDGRAPHICFACTORY_H__
#define __SHAREDGRAPHICFACTORY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::SharedGraphicFactory
{
public:
    static void Startup();
    static void Shutdown();
    static UI::SharedGraphicFactory *Instance();
    typedef boost::shared_ptr<UI::Graphic> Obj;
    typedef std::list<boost::shared_ptr<UI::Graphic>,std::allocator<boost::shared_ptr<UI::Graphic> > > SharedObjList;
    boost::shared_ptr<UI::Graphic> Create(boost::shared_ptr<UI::Graphic> const &);
    boost::shared_ptr<UI::Graphic> Create(Texture *, char const *);
    boost::shared_ptr<UI::Graphic> Create(char const *);
    boost::shared_ptr<UI::Graphic> Create(LuaConfig &);
    boost::shared_ptr<UI::Graphic> Create();
    std::list<boost::shared_ptr<UI::Graphic>,std::allocator<boost::shared_ptr<UI::Graphic> > > const &GetAll() const;
    void UpdateAll(unsigned __int32);
    SharedGraphicFactory(UI::SharedGraphicFactory const &); /* compiler_generated() */
private:
    SharedGraphicFactory();
    ~SharedGraphicFactory();
    class Data;
    boost::scoped_ptr<UI::SharedGraphicFactory::Data> m_pimpl; // 0x0
public:
    UI::SharedGraphicFactory &operator=(UI::SharedGraphicFactory const &); /* compiler_generated() */
};
static_assert(sizeof(UI::SharedGraphicFactory) == 4, "Invalid UI::SharedGraphicFactory size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SHAREDGRAPHICFACTORY_H__
#endif
