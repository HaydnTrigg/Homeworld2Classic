#if 0
#ifndef __TASK_H__
#define __TASK_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum TaskType
{
    TT_NoType = 0,
    TT_Deterministic,
    TT_NonDeterministic,
    TT_OncePerFrame,
};

/* ---------- definitions */

class Task
{
public:
    Task(Task const &); /* compiler_generated() */
    Task();
    virtual ~Task();
    _inline char const *getName() const;
    _inline TaskType getType() const;
    _inline float getElapsed() const;
    _inline void setElapsed(float);
    _inline float getPeriod() const;
    void setPeriod(float);
    _inline __int32 getYieldCounter() const;
    _inline void setYieldCounter(__int32);
    _inline bool getPaused();
    _inline void decYieldCounter();
    void startTask(char const *, float, TaskType, Task *, Task *);
    void stopTask();
    _inline void resetTask();
    bool isStarted(TaskType);
    virtual __int32 taskFunction(float) = 0;
private:
    Task &operator=(Task const &);
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x4
    float m_period; // 0x1C
    float m_elapsed; // 0x20
    TaskType m_type; // 0x24
    __int32 m_yieldCounter; // 0x28
    bool m_bPaused; // 0x2C
};
static_assert(sizeof(Task) == 48, "Invalid Task size");

struct DetermCall
{
    Task *m_thisTask; // 0x0
    float m_elapsed; // 0x4
};
static_assert(sizeof(DetermCall) == 8, "Invalid DetermCall size");

class TaskList
{
public:
    TaskList(TaskList const &); /* compiler_generated() */
    TaskList();
    ~TaskList();
    bool addTask(Task *);
    bool addTaskBefore(Task *, Task *);
    bool addTaskAfter(Task *, Task *);
    bool addTaskRelative(Task *, Task *, Task *);
    bool removeTask(Task *);
    bool isTaskAdded(Task *, TaskType);
    void printList();
    unsigned __int32 deterministicChecksum();
    void dispatchDeterministic(float);
    void dispatchNonDeterministic(float);
    void dispatchOncePerFrame(float);
    _inline float getLongestPeriod() const;
    unsigned __int32 deterministicState();
    void analCheck();
private:
    __int32 updateDeterministicOrder();
    DetermCall *addToDeterministicOrder();
    std::vector<Task *,std::allocator<Task *> > m_deterministic; // 0x0
    std::vector<Task *,std::allocator<Task *> > m_nonDeterministic; // 0xC
    std::vector<Task *,std::allocator<Task *> > m_oncePerFrame; // 0x18
    DetermCall *m_deterministicOrder; // 0x24
    __int32 m_orderSize; // 0x28
    __int32 m_orderAllocated; // 0x2C
    __int32 m_orderIndex; // 0x30
    float m_orderElapsed; // 0x34
    float m_longestPeriod; // 0x38
    __int32 m_dispatchIndex; // 0x3C
    TaskType m_dispatchType; // 0x40
public:
    TaskList &operator=(TaskList const &); /* compiler_generated() */
};
static_assert(sizeof(TaskList) == 68, "Invalid TaskList size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern char const *_sub_646BED(Task const *const);
_inline char const *Task::getName() const // 0x646BED
{
    mangled_assert("?getName@Task@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_646BED(this);
    return __result;
}

_extern TaskType _sub_646BFD(Task const *const);
_inline TaskType Task::getType() const // 0x646BFD
{
    mangled_assert("?getType@Task@@QBE?AW4TaskType@@XZ");
    todo("implement");
    TaskType __result = _sub_646BFD(this);
    return __result;
}

_extern float _sub_646BE5(Task const *const);
_inline float Task::getElapsed() const // 0x646BE5
{
    mangled_assert("?getElapsed@Task@@QBEMXZ");
    todo("implement");
    float __result = _sub_646BE5(this);
    return __result;
}

_extern void _sub_646E95(Task *const, float);
_inline void Task::setElapsed(float) // 0x646E95
{
    mangled_assert("?setElapsed@Task@@QAEXM@Z");
    todo("implement");
    _sub_646E95(this, arg);
}

_extern float _sub_4FAF6D(Task const *const);
_inline float Task::getPeriod() const // 0x4FAF6D
{
    mangled_assert("?getPeriod@Task@@QBEMXZ");
    todo("implement");
    float __result = _sub_4FAF6D(this);
    return __result;
}

_extern __int32 _sub_646C01(Task const *const);
_inline __int32 Task::getYieldCounter() const // 0x646C01
{
    mangled_assert("?getYieldCounter@Task@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_646C01(this);
    return __result;
}

_extern void _sub_646EC3(Task *const, __int32);
_inline void Task::setYieldCounter(__int32) // 0x646EC3
{
    mangled_assert("?setYieldCounter@Task@@QAEXH@Z");
    todo("implement");
    _sub_646EC3(this, arg);
}

_extern bool _sub_646BF9(Task *const);
_inline bool Task::getPaused() // 0x646BF9
{
    mangled_assert("?getPaused@Task@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_646BF9(this);
    return __result;
}

_extern void _sub_64661A(Task *const);
_inline void Task::decYieldCounter() // 0x64661A
{
    mangled_assert("?decYieldCounter@Task@@QAEXXZ");
    todo("implement");
    _sub_64661A(this);
}

_extern void _sub_646E88(Task *const);
_inline void Task::resetTask() // 0x646E88
{
    mangled_assert("?resetTask@Task@@QAEXXZ");
    todo("implement");
    _sub_646E88(this);
}

_extern float _sub_646BE9(TaskList const *const);
_inline float TaskList::getLongestPeriod() const // 0x646BE9
{
    mangled_assert("?getLongestPeriod@TaskList@@QBEMXZ");
    todo("implement");
    float __result = _sub_646BE9(this);
    return __result;
}

/* ---------- private code */

#endif // __TASK_H__
#endif
