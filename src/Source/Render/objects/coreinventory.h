#if 0
#ifndef __COREINVENTORY_H__
#define __COREINVENTORY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CoreInventory
{
public:
    CoreInventory(CoreInventory const &); /* compiler_generated() */
    CoreInventory();
    ~CoreInventory();
    void add(Core *);
    void remove(Core *);
    void shutdown();
    typedef std::list<Core *,std::allocator<Core *> > CoreInventoryType;
private:
    std::list<Core *,std::allocator<Core *> > m_inv; // 0x0
public:
    CoreInventory &operator=(CoreInventory const &); /* compiler_generated() */
};
static_assert(sizeof(CoreInventory) == 8, "Invalid CoreInventory size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __COREINVENTORY_H__
/* combined */
#ifndef __COREINVENTORY_H__
#define __COREINVENTORY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CoreInventory
{
public:
    _inline CoreInventory(CoreInventory const &); /* compiler_generated() */
    CoreInventory();
    ~CoreInventory();
    void add(Core *);
    void remove(Core *);
    void shutdown();
    typedef std::list<Core *,std::allocator<Core *> > CoreInventoryType;
private:
    std::list<Core *,std::allocator<Core *> > m_inv; // 0x0
public:
    _inline CoreInventory &operator=(CoreInventory const &); /* compiler_generated() */
};
static_assert(sizeof(CoreInventory) == 8, "Invalid CoreInventory size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __COREINVENTORY_H__
#endif
