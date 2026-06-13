#if 0
#ifndef __NAMEDINTERFACEIMPL_H__
#define __NAMEDINTERFACEIMPL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class NamedInterfaceImpl :
    public NamedInterface
{
public:
    static bool startup();
    static bool shutdown();
    static NamedInterfaceImpl *i();
    virtual void *interfaceGet(char const *) override;
    virtual NamedFactory *factoryGet(char const *) override;
    virtual bool interfaceRegister(char const *, void *) override;
    virtual bool factoryRegister(char const *, NamedFactory *) override;
    virtual bool interfaceUnregister(char const *) override;
    virtual bool factoryUnregister(char const *) override;
    NamedInterfaceImpl(NamedInterfaceImpl const &); /* compiler_generated() */
protected:
    NamedInterfaceImpl();
    virtual ~NamedInterfaceImpl() override;
    struct NamedInterfaceAtom
    {
        void *face; // 0x0
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > name; // 0x4
        _inline NamedInterfaceAtom(NamedInterfaceImpl::NamedInterfaceAtom const &); /* compiler_generated() */
        _inline NamedInterfaceAtom(); /* compiler_generated() */
        _inline ~NamedInterfaceAtom(); /* compiler_generated() */
        NamedInterfaceImpl::NamedInterfaceAtom &operator=(NamedInterfaceImpl::NamedInterfaceAtom const &); /* compiler_generated() */
    };
    static_assert(sizeof(NamedInterfaceAtom) == 28, "Invalid NamedInterfaceAtom size");
    struct NamedFactoryAtom
    {
        NamedFactory *factory; // 0x0
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > name; // 0x4
        _inline NamedFactoryAtom(NamedInterfaceImpl::NamedFactoryAtom const &); /* compiler_generated() */
        _inline NamedFactoryAtom(); /* compiler_generated() */
        _inline ~NamedFactoryAtom(); /* compiler_generated() */
        NamedInterfaceImpl::NamedFactoryAtom &operator=(NamedInterfaceImpl::NamedFactoryAtom const &); /* compiler_generated() */
    };
    static_assert(sizeof(NamedFactoryAtom) == 28, "Invalid NamedFactoryAtom size");
    typedef std::list<NamedInterfaceImpl::NamedInterfaceAtom,std::allocator<NamedInterfaceImpl::NamedInterfaceAtom> > NamedInterfaceAtomContainer;
    typedef std::list<NamedInterfaceImpl::NamedFactoryAtom,std::allocator<NamedInterfaceImpl::NamedFactoryAtom> > NamedFactoryAtomContainer;
private:
    static NamedInterfaceImpl *s_instance;
    std::list<NamedInterfaceImpl::NamedInterfaceAtom,std::allocator<NamedInterfaceImpl::NamedInterfaceAtom> > *m_namedInterfaceRegistry; // 0x4
    std::list<NamedInterfaceImpl::NamedFactoryAtom,std::allocator<NamedInterfaceImpl::NamedFactoryAtom> > *m_namedFactoryRegistry; // 0x8
public:
    NamedInterfaceImpl &operator=(NamedInterfaceImpl const &); /* compiler_generated() */
};
static_assert(sizeof(NamedInterfaceImpl) == 12, "Invalid NamedInterfaceImpl size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __NAMEDINTERFACEIMPL_H__
#endif
