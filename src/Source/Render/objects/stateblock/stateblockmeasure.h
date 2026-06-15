#if 0
#ifndef __STATEBLOCKMEASURE_H__
#define __STATEBLOCKMEASURE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class StateBlockMeasure
{
public:
    static StateBlockMeasure *Instance();
    StateBlockMeasure(StateBlockMeasure const &); /* compiler_generated() */
    StateBlockMeasure();
    void Clear();
    void PushFrame(char const *);
    void PopFrame();
    void Increment(StateCommand const *);
    void Dump(rndTable &, char const *);
    void RenderCall(unsigned __int32);
    typedef std::map<long,unsigned int,std::less<long>,std::allocator<std::pair<long const ,unsigned int> > > CommandMap;
    class RenderFrame
    {
    public:
        RenderFrame(StateBlockMeasure::RenderFrame const &); /* compiler_generated() */
        RenderFrame(unsigned __int32);
        unsigned __int32 m_numTris; // 0x0
        std::map<long,unsigned int,std::less<long>,std::allocator<std::pair<long const ,unsigned int> > > m_renderCommandMap; // 0x4
        ~RenderFrame(); /* compiler_generated() */
        StateBlockMeasure::RenderFrame &operator=(StateBlockMeasure::RenderFrame const &); /* compiler_generated() */
    };
    static_assert(sizeof(RenderFrame) == 12, "Invalid RenderFrame size");
    typedef std::vector<StateBlockMeasure::RenderFrame,std::allocator<StateBlockMeasure::RenderFrame> > RenderFrameCont;
    class Frame
    {
    public:
        Frame(StateBlockMeasure::Frame const &); /* compiler_generated() */
        Frame(char const *);
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x0
        std::map<long,unsigned int,std::less<long>,std::allocator<std::pair<long const ,unsigned int> > > m_commandMap; // 0x18
        std::map<long,unsigned int,std::less<long>,std::allocator<std::pair<long const ,unsigned int> > > m_renderCommandMap; // 0x20
        std::vector<StateBlockMeasure::RenderFrame,std::allocator<StateBlockMeasure::RenderFrame> > m_renderFrames; // 0x28
        ~Frame(); /* compiler_generated() */
        StateBlockMeasure::Frame &operator=(StateBlockMeasure::Frame const &); /* compiler_generated() */
    };
    static_assert(sizeof(Frame) == 52, "Invalid Frame size");
    typedef std::stack<StateBlockMeasure::Frame,std::deque<StateBlockMeasure::Frame,std::allocator<StateBlockMeasure::Frame> > > FrameStack;
private:
    void IncrementCommandMap(std::map<long,unsigned int,std::less<long>,std::allocator<std::pair<long const ,unsigned int> > > &, long);
    void DumpCommandMap(rndTable &, FileStream &, std::map<long,unsigned int,std::less<long>,std::allocator<std::pair<long const ,unsigned int> > > const &) const;
    static StateBlockMeasure *s_instance;
    std::stack<StateBlockMeasure::Frame,std::deque<StateBlockMeasure::Frame,std::allocator<StateBlockMeasure::Frame> > > m_frameStack; // 0x0
public:
    ~StateBlockMeasure(); /* compiler_generated() */
    StateBlockMeasure &operator=(StateBlockMeasure const &); /* compiler_generated() */
};
static_assert(sizeof(StateBlockMeasure) == 20, "Invalid StateBlockMeasure size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __STATEBLOCKMEASURE_H__
/* combined */
#ifndef __STATEBLOCKMEASURE_H__
#define __STATEBLOCKMEASURE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class StateBlockMeasure
{
public:
    static StateBlockMeasure *Instance();
    _inline StateBlockMeasure(StateBlockMeasure const &); /* compiler_generated() */
    StateBlockMeasure();
    void Clear();
    void PushFrame(char const *);
    void PopFrame();
    void Increment(StateCommand const *);
    void Dump(rndTable &, char const *);
    void RenderCall(unsigned __int32);
    typedef std::map<long,unsigned int,std::less<long>,std::allocator<std::pair<long const ,unsigned int> > > CommandMap;
    class RenderFrame
    {
    public:
        _inline RenderFrame(StateBlockMeasure::RenderFrame const &); /* compiler_generated() */
        _inline RenderFrame(unsigned __int32);
        unsigned __int32 m_numTris; // 0x0
        std::map<long,unsigned int,std::less<long>,std::allocator<std::pair<long const ,unsigned int> > > m_renderCommandMap; // 0x4
        _inline ~RenderFrame(); /* compiler_generated() */
        _inline StateBlockMeasure::RenderFrame &operator=(StateBlockMeasure::RenderFrame const &); /* compiler_generated() */
    };
    static_assert(sizeof(RenderFrame) == 12, "Invalid RenderFrame size");
    typedef std::vector<StateBlockMeasure::RenderFrame,std::allocator<StateBlockMeasure::RenderFrame> > RenderFrameCont;
    class Frame
    {
    public:
        _inline Frame(StateBlockMeasure::Frame const &); /* compiler_generated() */
        _inline Frame(char const *);
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x0
        std::map<long,unsigned int,std::less<long>,std::allocator<std::pair<long const ,unsigned int> > > m_commandMap; // 0x18
        std::map<long,unsigned int,std::less<long>,std::allocator<std::pair<long const ,unsigned int> > > m_renderCommandMap; // 0x20
        std::vector<StateBlockMeasure::RenderFrame,std::allocator<StateBlockMeasure::RenderFrame> > m_renderFrames; // 0x28
        _inline ~Frame(); /* compiler_generated() */
        _inline StateBlockMeasure::Frame &operator=(StateBlockMeasure::Frame const &); /* compiler_generated() */
    };
    static_assert(sizeof(Frame) == 52, "Invalid Frame size");
    typedef std::stack<StateBlockMeasure::Frame,std::deque<StateBlockMeasure::Frame,std::allocator<StateBlockMeasure::Frame> > > FrameStack;
private:
    void IncrementCommandMap(std::map<long,unsigned int,std::less<long>,std::allocator<std::pair<long const ,unsigned int> > > &, long);
    void DumpCommandMap(rndTable &, FileStream &, std::map<long,unsigned int,std::less<long>,std::allocator<std::pair<long const ,unsigned int> > > const &) const;
    static StateBlockMeasure *s_instance;
    std::stack<StateBlockMeasure::Frame,std::deque<StateBlockMeasure::Frame,std::allocator<StateBlockMeasure::Frame> > > m_frameStack; // 0x0
public:
    _inline ~StateBlockMeasure(); /* compiler_generated() */
    _inline StateBlockMeasure &operator=(StateBlockMeasure const &); /* compiler_generated() */
};
static_assert(sizeof(StateBlockMeasure) == 20, "Invalid StateBlockMeasure size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline StateBlockMeasure::RenderFrame::RenderFrame(unsigned __int32) // 0x100BA150
{
    mangled_assert("??0RenderFrame@StateBlockMeasure@@QAE@I@Z");
    todo("implement");
}

_inline StateBlockMeasure::Frame::Frame(char const *) // 0x100BA090
{
    mangled_assert("??0Frame@StateBlockMeasure@@QAE@PBD@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __STATEBLOCKMEASURE_H__
#endif
