#if 0
#ifndef __AVOIDANCEBOXES_H__
#define __AVOIDANCEBOXES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class AvoidanceBoxes
{
public:
    static AvoidanceBoxes *instance();
    static bool release();
    static bool startup();
    static bool shutdown();
    AvoidanceBoxes(AvoidanceBoxes const &); /* compiler_generated() */
private:
    _inline AvoidanceBoxes();
    _inline ~AvoidanceBoxes();
    static AvoidanceBoxes *create();
    static AvoidanceBoxes *s_instance;
public:
    void AddAvoidanceBox(Collision::OBB const &);
    typedef std::vector<Collision::OBB,std::allocator<Collision::OBB> > OBBContainer;
    _inline std::vector<Collision::OBB,std::allocator<Collision::OBB> > const &GetBoxes() const;
    static _inline void SetShowAvoidanceBoxes(bool enable);
    void DebugRender() const;
private:
    static bool m_drawdebug;
    std::vector<Collision::OBB,std::allocator<Collision::OBB> > m_boxes; // 0x0
public:
    AvoidanceBoxes &operator=(AvoidanceBoxes const &); /* compiler_generated() */
};
static_assert(sizeof(AvoidanceBoxes) == 12, "Invalid AvoidanceBoxes size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_4EBE3D(AvoidanceBoxes *const);
_inline AvoidanceBoxes::AvoidanceBoxes() // 0x4EBE3D
{
    mangled_assert("??0AvoidanceBoxes@@AAE@XZ");
    todo("implement");
    _sub_4EBE3D(this);
}

_extern void _sub_4EBE4F(AvoidanceBoxes *const);
_inline AvoidanceBoxes::~AvoidanceBoxes() // 0x4EBE4F
{
    mangled_assert("??1AvoidanceBoxes@@AAE@XZ");
    todo("implement");
    _sub_4EBE4F(this);
}

_extern std::vector<Collision::OBB,std::allocator<Collision::OBB> > const &_sub_4E41BD(AvoidanceBoxes const *const);
_inline std::vector<Collision::OBB,std::allocator<Collision::OBB> > const &AvoidanceBoxes::GetBoxes() const // 0x4E41BD
{
    mangled_assert("?GetBoxes@AvoidanceBoxes@@QBEABV?$vector@VOBB@Collision@@V?$allocator@VOBB@Collision@@@std@@@std@@XZ");
    todo("implement");
    std::vector<Collision::OBB,std::allocator<Collision::OBB> > const & __result = _sub_4E41BD(this);
    return __result;
}

_extern void _sub_5C69D7(bool);
_inline void AvoidanceBoxes::SetShowAvoidanceBoxes(bool enable) // 0x5C69D7
{
    mangled_assert("?SetShowAvoidanceBoxes@AvoidanceBoxes@@SGX_N@Z");
    todo("implement");
    _sub_5C69D7(enable);
}

/* ---------- private code */

#endif // __AVOIDANCEBOXES_H__
#endif
