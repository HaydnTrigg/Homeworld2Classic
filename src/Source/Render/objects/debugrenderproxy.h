#if 0
#ifndef __DEBUGRENDERPROXY_H__
#define __DEBUGRENDERPROXY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class DebugRenderProxyImp :
    public DebugRenderProxy
{
public:
    DebugRenderProxyImp(DebugRenderProxyImp const &); /* compiler_generated() */
    DebugRenderProxyImp();
    virtual ~DebugRenderProxyImp() override;
    virtual void Display() override;
    virtual void List(std::vector<char const *,std::allocator<char const *> > &) override;
    virtual void SetDisplay(char const *, bool) override;
    virtual bool GetDisplay(char const *) override;
    virtual void SetAutoClear(char const *, bool) override;
    virtual bool GetAutoClear(char const *) override;
    virtual void Clear(char const *) override;
    virtual void Draw(DebugRender::Cylinder const &, char const *) override;
    virtual void Draw(DebugRender::WText3D const &, char const *) override;
    virtual void Draw(DebugRender::Text3D const &, char const *) override;
    virtual void Draw(DebugRender::Texture2D const &, char const *) override;
    virtual void Draw(DebugRender::WText2D const &, char const *) override;
    virtual void Draw(DebugRender::Text2D const &, char const *) override;
    virtual void Draw(DebugRender::Sphere const &, char const *) override;
    virtual void Draw(DebugRender::Cube const &, char const *) override;
    virtual void Draw(DebugRender::Tri const &, char const *) override;
    virtual void Draw(DebugRender::Line const &, char const *) override;
    virtual void Draw(DebugRender::Point const &, char const *) override;
    virtual void Draw(DebugRender::OvalOutline const &, char const *) override;
    virtual void Draw(DebugRender::RectOutline const &, char const *) override;
    virtual void Draw(DebugRender::Tris2DDupeVerts const &, char const *) override;
    virtual void Draw(DebugRender::Tri2D const &, char const *) override;
    virtual void Draw(DebugRender::Lines2DDupeVerts const &, char const *) override;
    virtual void Draw(DebugRender::Line2D const &, char const *) override;
    virtual void Draw(DebugRender::Point2D const &, char const *) override;
    struct Frame
    {
        Frame(DebugRenderProxyImp::Frame const &); /* compiler_generated() */
        Frame();
        bool bDisplay; // 0x0
        bool bAutoClear; // 0x1
        std::vector<DebugRender::Point2D,std::allocator<DebugRender::Point2D> > cPoint2D; // 0x4
        std::vector<DebugRender::Line2D,std::allocator<DebugRender::Line2D> > cLine2D; // 0x10
        std::vector<DebugRender::Lines2DDupeVerts,std::allocator<DebugRender::Lines2DDupeVerts> > cLines2DDupeVerts; // 0x1C
        std::vector<DebugRender::Tri2D,std::allocator<DebugRender::Tri2D> > cTri2D; // 0x28
        std::vector<DebugRender::Tris2DDupeVerts,std::allocator<DebugRender::Tris2DDupeVerts> > cTris2DDupeVerts; // 0x34
        std::vector<DebugRender::Point,std::allocator<DebugRender::Point> > cPoint; // 0x40
        std::vector<DebugRender::Line,std::allocator<DebugRender::Line> > cLine; // 0x4C
        std::vector<DebugRender::Tri,std::allocator<DebugRender::Tri> > cTri; // 0x58
        std::vector<DebugRender::Sphere,std::allocator<DebugRender::Sphere> > cSphere; // 0x64
        std::vector<DebugRender::Text2D,std::allocator<DebugRender::Text2D> > cText2D; // 0x70
        std::vector<DebugRender::WText2D,std::allocator<DebugRender::WText2D> > cWText2D; // 0x7C
        std::vector<DebugRender::Texture2D,std::allocator<DebugRender::Texture2D> > cTexture2D; // 0x88
        std::vector<DebugRender::Text3D,std::allocator<DebugRender::Text3D> > cText3D; // 0x94
        std::vector<DebugRender::WText3D,std::allocator<DebugRender::WText3D> > cWText3D; // 0xA0
        std::vector<DebugRender::Cylinder,std::allocator<DebugRender::Cylinder> > cCylinder; // 0xAC
        ~Frame(); /* compiler_generated() */
        DebugRenderProxyImp::Frame &operator=(DebugRenderProxyImp::Frame const &); /* compiler_generated() */
    };
    static_assert(sizeof(Frame) == 184, "Invalid Frame size");
    typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DebugRenderProxyImp::Frame,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DebugRenderProxyImp::Frame> > > FrameMap;
private:
    std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DebugRenderProxyImp::Frame,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DebugRenderProxyImp::Frame> > > m_cFrame; // 0x4
    bool FrameMatch(std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DebugRenderProxyImp::Frame> > > > const &, char const *);
    void Display2DElements(DebugRenderProxyImp::Frame &);
public:
    DebugRenderProxyImp &operator=(DebugRenderProxyImp const &); /* compiler_generated() */
};
static_assert(sizeof(DebugRenderProxyImp) == 12, "Invalid DebugRenderProxyImp size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DEBUGRENDERPROXY_H__
/* combined */
#ifndef __DEBUGRENDERPROXY_H__
#define __DEBUGRENDERPROXY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class DebugRenderProxyImp :
    public DebugRenderProxy
{
public:
    _inline DebugRenderProxyImp(DebugRenderProxyImp const &); /* compiler_generated() */
    DebugRenderProxyImp();
    virtual ~DebugRenderProxyImp() override;
    virtual void Display() override;
    virtual void List(std::vector<char const *,std::allocator<char const *> > &) override;
    virtual void SetDisplay(char const *, bool) override;
    virtual bool GetDisplay(char const *) override;
    virtual void SetAutoClear(char const *, bool) override;
    virtual bool GetAutoClear(char const *) override;
    virtual void Clear(char const *) override;
    virtual void Draw(DebugRender::Cylinder const &, char const *) override;
    virtual void Draw(DebugRender::WText3D const &, char const *) override;
    virtual void Draw(DebugRender::Text3D const &, char const *) override;
    virtual void Draw(DebugRender::Texture2D const &, char const *) override;
    virtual void Draw(DebugRender::WText2D const &, char const *) override;
    virtual void Draw(DebugRender::Text2D const &, char const *) override;
    virtual void Draw(DebugRender::Sphere const &, char const *) override;
    virtual void Draw(DebugRender::Cube const &, char const *) override;
    virtual void Draw(DebugRender::Tri const &, char const *) override;
    virtual void Draw(DebugRender::Line const &, char const *) override;
    virtual void Draw(DebugRender::Point const &, char const *) override;
    virtual void Draw(DebugRender::OvalOutline const &, char const *) override;
    virtual void Draw(DebugRender::RectOutline const &, char const *) override;
    virtual void Draw(DebugRender::Tris2DDupeVerts const &, char const *) override;
    virtual void Draw(DebugRender::Tri2D const &, char const *) override;
    virtual void Draw(DebugRender::Lines2DDupeVerts const &, char const *) override;
    virtual void Draw(DebugRender::Line2D const &, char const *) override;
    virtual void Draw(DebugRender::Point2D const &, char const *) override;
    struct Frame
    {
        _inline Frame(DebugRenderProxyImp::Frame const &); /* compiler_generated() */
        _inline Frame();
        bool bDisplay; // 0x0
        bool bAutoClear; // 0x1
        std::vector<DebugRender::Point2D,std::allocator<DebugRender::Point2D> > cPoint2D; // 0x4
        std::vector<DebugRender::Line2D,std::allocator<DebugRender::Line2D> > cLine2D; // 0x10
        std::vector<DebugRender::Lines2DDupeVerts,std::allocator<DebugRender::Lines2DDupeVerts> > cLines2DDupeVerts; // 0x1C
        std::vector<DebugRender::Tri2D,std::allocator<DebugRender::Tri2D> > cTri2D; // 0x28
        std::vector<DebugRender::Tris2DDupeVerts,std::allocator<DebugRender::Tris2DDupeVerts> > cTris2DDupeVerts; // 0x34
        std::vector<DebugRender::Point,std::allocator<DebugRender::Point> > cPoint; // 0x40
        std::vector<DebugRender::Line,std::allocator<DebugRender::Line> > cLine; // 0x4C
        std::vector<DebugRender::Tri,std::allocator<DebugRender::Tri> > cTri; // 0x58
        std::vector<DebugRender::Sphere,std::allocator<DebugRender::Sphere> > cSphere; // 0x64
        std::vector<DebugRender::Text2D,std::allocator<DebugRender::Text2D> > cText2D; // 0x70
        std::vector<DebugRender::WText2D,std::allocator<DebugRender::WText2D> > cWText2D; // 0x7C
        std::vector<DebugRender::Texture2D,std::allocator<DebugRender::Texture2D> > cTexture2D; // 0x88
        std::vector<DebugRender::Text3D,std::allocator<DebugRender::Text3D> > cText3D; // 0x94
        std::vector<DebugRender::WText3D,std::allocator<DebugRender::WText3D> > cWText3D; // 0xA0
        std::vector<DebugRender::Cylinder,std::allocator<DebugRender::Cylinder> > cCylinder; // 0xAC
        _inline ~Frame(); /* compiler_generated() */
        DebugRenderProxyImp::Frame &operator=(DebugRenderProxyImp::Frame const &); /* compiler_generated() */
    };
    static_assert(sizeof(Frame) == 184, "Invalid Frame size");
    typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DebugRenderProxyImp::Frame,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DebugRenderProxyImp::Frame> > > FrameMap;
private:
    std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DebugRenderProxyImp::Frame,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DebugRenderProxyImp::Frame> > > m_cFrame; // 0x4
    _inline bool FrameMatch(std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DebugRenderProxyImp::Frame> > > > const &, char const *);
    void Display2DElements(DebugRenderProxyImp::Frame &);
public:
    _inline DebugRenderProxyImp &operator=(DebugRenderProxyImp const &); /* compiler_generated() */
};
static_assert(sizeof(DebugRenderProxyImp) == 12, "Invalid DebugRenderProxyImp size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_1003DF00(DebugRenderProxyImp::Frame *const);
_inline DebugRenderProxyImp::Frame::Frame() // 0x1003DF00
{
    mangled_assert("??0Frame@DebugRenderProxyImp@@QAE@XZ");
    todo("implement");
    _sub_1003DF00(this);
}

_extern bool _sub_100425F0(DebugRenderProxyImp *const, std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DebugRenderProxyImp::Frame> > > > const &, char const *);
_inline bool DebugRenderProxyImp::FrameMatch(std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DebugRenderProxyImp::Frame> > > > const &, char const *) // 0x100425F0
{
    mangled_assert("?FrameMatch@DebugRenderProxyImp@@AAE_NABV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UFrame@DebugRenderProxyImp@@@std@@@std@@@std@@@std@@PBD@Z");
    todo("implement");
    bool __result = _sub_100425F0(this, arg, arg);
    return __result;
}

/* ---------- private code */

#endif // __DEBUGRENDERPROXY_H__
#endif
