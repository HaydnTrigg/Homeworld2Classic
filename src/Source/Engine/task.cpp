#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Mathlib\mathutil.h>
#include <profile\profile.h>
#include <iostream>
#include <Mathlib\matrix3.h>
#include <orders.h>
#include <new>
#include <orders_base.h>
#include <xstddef>
#include <sobid.h>
#include <type_traits>
#include <util\statmonitor.h>
#include <util\utilexports.h>
#include <platform\timer.h>
#include <xutility>
#include <platform\platformexports.h>
#include <platform\cmdline.h>
#include <gameSettings.h>
#include <utility>
#include <iosfwd>
#include <LevelDesc.h>
#include <vector>
#include <fileio\bytestream.h>
#include <Hash.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <fileio\md5.h>
#include <debug\ctassert.h>
#include <gamestructimpl.h>
#include <Badge.h>
#include <math.h>
#include <commandtype.h>
#include <list>
#include <Interface.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <fileio\crc.h>
#include <boost\static_assert.hpp>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <TimerMap.h>
#include <platform\osdef.h>
#include <gamemsg.h>
#include <boost\config.hpp>
#include <renderer.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Render\gl\lotypes.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <recorder.h>
#include <config.h>
#include <Render\gl\r_types.h>
#include <syncChecking.h>
#include <deque>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Render\gl\r_defines.h>
#include <task.h>
#include <Render\gl\glext.h>
#include <stack>
#include <wchar.h>
#include <SquadronList.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::stack<TaskList *,std::deque<TaskList *,std::allocator<TaskList *> > > TaskStack;

/* ---------- prototypes */

extern bool taskStartup();
extern bool taskShutdown();
extern bool taskReset();
extern bool taskPauseAll();
extern bool taskUnpauseAll();
extern void taskEnableStatMonitors(unsigned __int32 enableBits);
extern void taskRenderStatMonitors();
extern void taskDispatch();
extern unsigned __int32 taskDeterministicChecksum();
extern float taskDeltaTimeElapsed();
extern float taskTotalTimeElapsed();
extern float taskDispatchTimeElapsed();
extern float taskSetFixedTimeElapsed(float timeElapsed);
extern bool taskSuperTurbo();
extern void taskSuperTurbo(bool bSuperTurbo);

_static bool findInList(std::vector<Task *,std::allocator<Task *> > *taskList, Task *toFind, std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Task *> > > *index);

/* ---------- globals */

extern StatMonitor *statMonitorTask; // 0x84AF94
extern bool l_bPaused; // 0x84AFA5
extern float g_taskFixedTimeElapsed; // 0x84AFA8
extern bool s_bSuperTurbo; // 0x84AFA6
extern bool s_bTaskMaxTime; // 0x83D6AC
extern float g_taskFps; // 0x84AFB0

/* ---------- private variables */

_static
{
    extern Timer *taskTimer; // 0x84AF98
    extern Timer *taskIntraFrameTimer; // 0x84AF9C
    extern std::stack<TaskList *,std::deque<TaskList *,std::allocator<TaskList *> > > *taskStack; // 0x84AFA0
    extern float thisTickTimeDelta; // 0x84AFB4
    extern float totalTimeElapsed; // 0x84AFB8
    extern bool bModuleStarted; // 0x84AFA4
    extern Task *taskDispatching; // 0x84AFBC
    extern bool taskDispatchingDeleted; // 0x84AFC0
    extern bool taskDispatchingStopped; // 0x84AFC1
    extern StatMonitor *statMonitorDeterministic; // 0x84AFC4
    extern StatMonitor *statMonitorNonDeterministic; // 0x84AFC8
    extern StatMonitor *statMonitorOncePerFrame; // 0x84AFCC
    extern unsigned __int32 statMonsEnabled; // 0x84AFAC
    extern char const *kSuperTurboOption; // 0x83D6A4
    extern char const *kNoTaskMaxTimeOption; // 0x83D6A8
    extern float const taskDeterministicTick; // 0x7B0CD4
    extern float const taskLongestFrame; // 0x7B0CD8
}

/* ---------- public code */

_extern _sub_6459E0(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<TaskList *> > > *const, std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<TaskList *> > > const &);
_inline std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<TaskList *> > >::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<TaskList *> > >(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<TaskList *> > > const &) // 0x6459E0
{
    mangled_assert("??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PAVTaskList@@@std@@@std@@@std@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_6459E0(this, arg);
}

_extern _sub_645A22(std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<TaskList *> > > *const, std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<TaskList *> > > const &);
_inline std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<TaskList *> > >::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<TaskList *> > >(std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<TaskList *> > > const &) // 0x645A22
{
    mangled_assert("??0?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PAVTaskList@@@std@@@std@@@std@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_645A22(this, arg);
}

_extern bool _sub_647305();
bool taskStartup() // 0x647305
{
    mangled_assert("?taskStartup@@YG_NXZ");
    todo("implement");
    bool __result = _sub_647305();
    return __result;
}

_extern bool _sub_64724E();
bool taskShutdown() // 0x64724E
{
    mangled_assert("?taskShutdown@@YG_NXZ");
    todo("implement");
    bool __result = _sub_64724E();
    return __result;
}

_extern bool _sub_6471FC();
bool taskReset() // 0x6471FC
{
    mangled_assert("?taskReset@@YG_NXZ");
    todo("implement");
    bool __result = _sub_6471FC();
    return __result;
}

_extern bool _sub_647150();
bool taskPauseAll() // 0x647150
{
    mangled_assert("?taskPauseAll@@YG_NXZ");
    todo("implement");
    bool __result = _sub_647150();
    return __result;
}

_extern bool _sub_647557();
bool taskUnpauseAll() // 0x647557
{
    mangled_assert("?taskUnpauseAll@@YG_NXZ");
    todo("implement");
    bool __result = _sub_647557();
    return __result;
}

_extern void _sub_647144(unsigned __int32);
void taskEnableStatMonitors(unsigned __int32 enableBits) // 0x647144
{
    mangled_assert("?taskEnableStatMonitors@@YGXI@Z");
    todo("implement");
    _sub_647144(enableBits);
}

_extern void _sub_6471C0();
void taskRenderStatMonitors() // 0x6471C0
{
    mangled_assert("?taskRenderStatMonitors@@YGXXZ");
    todo("implement");
    _sub_6471C0();
}

_extern void _sub_646F92();
void taskDispatch() // 0x646F92
{
    mangled_assert("?taskDispatch@@YGXXZ");
    todo("implement");
    _sub_646F92();
}

_extern unsigned __int32 _sub_646F80();
unsigned __int32 taskDeterministicChecksum() // 0x646F80
{
    mangled_assert("?taskDeterministicChecksum@@YGIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_646F80();
    return __result;
}

_extern float _sub_646F79();
float taskDeltaTimeElapsed() // 0x646F79
{
    mangled_assert("?taskDeltaTimeElapsed@@YGMXZ");
    todo("implement");
    float __result = _sub_646F79();
    return __result;
}

_extern float _sub_647550();
float taskTotalTimeElapsed() // 0x647550
{
    mangled_assert("?taskTotalTimeElapsed@@YGMXZ");
    todo("implement");
    float __result = _sub_647550();
    return __result;
}

_extern float _sub_6470FF();
float taskDispatchTimeElapsed() // 0x6470FF
{
    mangled_assert("?taskDispatchTimeElapsed@@YGMXZ");
    todo("implement");
    float __result = _sub_6470FF();
    return __result;
}

_extern float _sub_647229(float);
float taskSetFixedTimeElapsed(float timeElapsed) // 0x647229
{
    mangled_assert("?taskSetFixedTimeElapsed@@YGMM@Z");
    todo("implement");
    float __result = _sub_647229(timeElapsed);
    return __result;
}

_extern bool _sub_64754A();
bool taskSuperTurbo() // 0x64754A
{
    mangled_assert("?taskSuperTurbo@@YG_NXZ");
    todo("implement");
    bool __result = _sub_64754A();
    return __result;
}

_extern void _sub_64753E(bool);
void taskSuperTurbo(bool bSuperTurbo) // 0x64753E
{
    mangled_assert("?taskSuperTurbo@@YGX_N@Z");
    todo("implement");
    _sub_64753E(bSuperTurbo);
}

_extern _sub_645B26(Task *const);
Task::Task() // 0x645B26
{
    mangled_assert("??0Task@@QAE@XZ");
    todo("implement");
    _sub_645B26(this);
}

_extern void _sub_645BD1(Task *const);
Task::~Task() // 0x645BD1
{
    mangled_assert("??1Task@@UAE@XZ");
    todo("implement");
    _sub_645BD1(this);
}

_extern void _sub_646EDE(Task *const, char const *, float, TaskType, Task *, Task *);
void Task::startTask(char const *, float, TaskType, Task *, Task *) // 0x646EDE
{
    mangled_assert("?startTask@Task@@QAEXPBDMW4TaskType@@PAV1@2@Z");
    todo("implement");
    _sub_646EDE(this, arg, arg, arg, arg, arg);
}

_extern void _sub_646F3D(Task *const);
void Task::stopTask() // 0x646F3D
{
    mangled_assert("?stopTask@Task@@QAEXXZ");
    todo("implement");
    _sub_646F3D(this);
}

_extern bool _sub_646C1F(Task *const, TaskType);
bool Task::isStarted(TaskType) // 0x646C1F
{
    mangled_assert("?isStarted@Task@@QAE_NW4TaskType@@@Z");
    todo("implement");
    bool __result = _sub_646C1F(this, arg);
    return __result;
}

_extern void _sub_646EA3(Task *const, float);
void Task::setPeriod(float) // 0x646EA3
{
    mangled_assert("?setPeriod@Task@@QAEXM@Z");
    todo("implement");
    _sub_646EA3(this, arg);
}

_extern _sub_645B53(TaskList *const);
TaskList::TaskList() // 0x645B53
{
    mangled_assert("??0TaskList@@QAE@XZ");
    todo("implement");
    _sub_645B53(this);
}

_extern void _sub_645BA4(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<TaskList *> > > *const);
_inline std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<TaskList *> > >::~_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<TaskList *> > >() // 0x645BA4
{
    mangled_assert("??1?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PAVTaskList@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_645BA4(this);
}

_extern void _sub_645BA5(std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<TaskList *> > > *const);
_inline std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<TaskList *> > >::~_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<TaskList *> > >() // 0x645BA5
{
    mangled_assert("??1?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PAVTaskList@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_645BA5(this);
}

_extern void _sub_645BA6(std::_Deque_val<std::_Deque_simple_types<TaskList *> > *const);
_inline std::_Deque_val<std::_Deque_simple_types<TaskList *> >::~_Deque_val<std::_Deque_simple_types<TaskList *> >() // 0x645BA6
{
    mangled_assert("??1?$_Deque_val@U?$_Deque_simple_types@PAVTaskList@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_645BA6(this);
}

_extern void _sub_645BBC(std::stack<TaskList *,std::deque<TaskList *,std::allocator<TaskList *> > > *const);
_inline std::stack<TaskList *,std::deque<TaskList *,std::allocator<TaskList *> > >::~stack<TaskList *,std::deque<TaskList *,std::allocator<TaskList *> > >() // 0x645BBC
{
    mangled_assert("??1?$stack@PAVTaskList@@V?$deque@PAVTaskList@@V?$allocator@PAVTaskList@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_645BBC(this);
}

_extern void _sub_645C3C(TaskList *const);
TaskList::~TaskList() // 0x645C3C
{
    mangled_assert("??1TaskList@@QAE@XZ");
    todo("implement");
    _sub_645C3C(this);
}

_extern bool _sub_6462B6(TaskList *const, Task *, Task *, Task *);
bool TaskList::addTaskRelative(Task *, Task *, Task *) // 0x6462B6
{
    mangled_assert("?addTaskRelative@TaskList@@QAE_NPAVTask@@00@Z");
    todo("implement");
    bool __result = _sub_6462B6(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_646C3D(TaskList *const, Task *, TaskType);
bool TaskList::isTaskAdded(Task *, TaskType) // 0x646C3D
{
    mangled_assert("?isTaskAdded@TaskList@@QAE_NPAVTask@@W4TaskType@@@Z");
    todo("implement");
    bool __result = _sub_646C3D(this, arg, arg);
    return __result;
}

_extern bool _sub_646282(TaskList *const, Task *);
bool TaskList::addTask(Task *) // 0x646282
{
    mangled_assert("?addTask@TaskList@@QAE_NPAVTask@@@Z");
    todo("implement");
    bool __result = _sub_646282(this, arg);
    return __result;
}

_extern bool _sub_6462A4(TaskList *const, Task *, Task *);
bool TaskList::addTaskBefore(Task *, Task *) // 0x6462A4
{
    mangled_assert("?addTaskBefore@TaskList@@QAE_NPAVTask@@0@Z");
    todo("implement");
    bool __result = _sub_6462A4(this, arg, arg);
    return __result;
}

_extern bool _sub_646292(TaskList *const, Task *, Task *);
bool TaskList::addTaskAfter(Task *, Task *) // 0x646292
{
    mangled_assert("?addTaskAfter@TaskList@@QAE_NPAVTask@@0@Z");
    todo("implement");
    bool __result = _sub_646292(this, arg, arg);
    return __result;
}

_extern bool _sub_646DAA(TaskList *const, Task *);
bool TaskList::removeTask(Task *) // 0x646DAA
{
    mangled_assert("?removeTask@TaskList@@QAE_NPAVTask@@@Z");
    todo("implement");
    bool __result = _sub_646DAA(this, arg);
    return __result;
}

_extern DetermCall *_sub_6464CB(TaskList *const);
DetermCall *TaskList::addToDeterministicOrder() // 0x6464CB
{
    mangled_assert("?addToDeterministicOrder@TaskList@@AAEPAUDetermCall@@XZ");
    todo("implement");
    DetermCall * __result = _sub_6464CB(this);
    return __result;
}

_extern __int32 _sub_6475DA(TaskList *const);
__int32 TaskList::updateDeterministicOrder() // 0x6475DA
{
    mangled_assert("?updateDeterministicOrder@TaskList@@AAEHXZ");
    todo("implement");
    __int32 __result = _sub_6475DA(this);
    return __result;
}

_extern unsigned __int32 _sub_64661E(TaskList *const);
unsigned __int32 TaskList::deterministicChecksum() // 0x64661E
{
    mangled_assert("?deterministicChecksum@TaskList@@QAEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_64661E(this);
    return __result;
}

_extern void _sub_6466F6(TaskList *const, float);
void TaskList::dispatchDeterministic(float) // 0x6466F6
{
    mangled_assert("?dispatchDeterministic@TaskList@@QAEXM@Z");
    todo("implement");
    _sub_6466F6(this, arg);
}

_extern void _sub_646876(TaskList *const, float);
void TaskList::dispatchNonDeterministic(float) // 0x646876
{
    mangled_assert("?dispatchNonDeterministic@TaskList@@QAEXM@Z");
    todo("implement");
    _sub_646876(this, arg);
}

_extern void _sub_6469FC(TaskList *const, float);
void TaskList::dispatchOncePerFrame(float) // 0x6469FC
{
    mangled_assert("?dispatchOncePerFrame@TaskList@@QAEXM@Z");
    todo("implement");
    _sub_6469FC(this, arg);
}

_extern void _sub_64657F(TaskList *const);
void TaskList::analCheck() // 0x64657F
{
    mangled_assert("?analCheck@TaskList@@QAEXXZ");
    todo("implement");
    _sub_64657F(this);
}

/* ---------- private code */

_extern bool _sub_646BB5(std::vector<Task *,std::allocator<Task *> > *, Task *, std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Task *> > > *);
_static bool findInList(std::vector<Task *,std::allocator<Task *> > *taskList, Task *toFind, std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Task *> > > *index) // 0x646BB5
{
    mangled_assert("findInList");
    todo("implement");
    bool __result = _sub_646BB5(taskList, toFind, index);
    return __result;
}
#endif
