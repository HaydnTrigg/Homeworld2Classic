#if 0
#ifndef __CAMERALIST_H__
#define __CAMERALIST_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CameraList
{
public:
    typedef std::list<FocalPoint *,std::allocator<FocalPoint *> > FocalPointList;
    CameraList(CameraList const &); /* compiler_generated() */
    CameraList(unsigned __int32);
    CameraList();
    ~CameraList();
    bool initialize(unsigned __int32);
    FocalPoint *append(vector3 const &);
    FocalPoint *append(Selection const &);
    FocalPoint *appendMatchingCamera(vector3 const &, OrbitParameters const &, vector3 const &);
    FocalPoint *appendMatchingCamera(Selection const &, OrbitParameters const &, vector3 const &);
    void appendMatchingCameraAttributes(FocalPoint &, float, float, float, vector3 const &, vector3 const &);
    void purge();
    void popFront();
    void previous(bool);
    void next(bool);
    FocalPoint *getCurrent();
    Selection *getFocusSelection();
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<FocalPoint *> > > begin() const;
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<FocalPoint *> > > end() const;
    _inline unsigned __int32 size() const;
private:
    void removeEverythingAfterCurrent();
    typedef std::_List_iterator<std::_List_val<std::_List_simple_types<FocalPoint *> > > FocalPointListIterator;
    unsigned __int32 m_maxSize; // 0x0
    std::list<FocalPoint *,std::allocator<FocalPoint *> > m_cameraList; // 0x4
    std::_List_iterator<std::_List_val<std::_List_simple_types<FocalPoint *> > > m_current; // 0xC
public:
    CameraList &operator=(CameraList const &); /* compiler_generated() */
};
static_assert(sizeof(CameraList) == 16, "Invalid CameraList size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern std::_List_const_iterator<std::_List_val<std::_List_simple_types<FocalPoint *> > > _sub_4DD1ED(CameraList const *const);
_inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<FocalPoint *> > > CameraList::begin() const // 0x4DD1ED
{
    mangled_assert("?begin@CameraList@@QBE?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PAVFocalPoint@@@std@@@std@@@std@@XZ");
    todo("implement");
    std::_List_const_iterator<std::_List_val<std::_List_simple_types<FocalPoint *> > > __result = _sub_4DD1ED(this);
    return __result;
}

_extern std::_List_const_iterator<std::_List_val<std::_List_simple_types<FocalPoint *> > > _sub_4DE5A3(CameraList const *const);
_inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<FocalPoint *> > > CameraList::end() const // 0x4DE5A3
{
    mangled_assert("?end@CameraList@@QBE?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PAVFocalPoint@@@std@@@std@@@std@@XZ");
    todo("implement");
    std::_List_const_iterator<std::_List_val<std::_List_simple_types<FocalPoint *> > > __result = _sub_4DE5A3(this);
    return __result;
}

_extern unsigned __int32 _sub_4DFC0C(CameraList const *const);
_inline unsigned __int32 CameraList::size() const // 0x4DFC0C
{
    mangled_assert("?size@CameraList@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_4DFC0C(this);
    return __result;
}

/* ---------- private code */

#endif // __CAMERALIST_H__
#endif
