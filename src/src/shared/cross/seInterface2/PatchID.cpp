#if 0
/* ---------- headers */

#include "decomp.h"
#include <seInterface2\SampleID.h>
#include <seInterface2\SampleBase.h>
#include <vector>
#include <new>
#include <xmemory0>
#include <xstddef>
#include <seInterface2\sePatchInfoList.h>
#include <type_traits>
#include <xstring>
#include <xutility>
#include <seInterface2\sedefinesshared.h>
#include <iosfwd>
#include "src\Src\Shared\PC\seInterface2\pch.h"
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\seinclude.h>
#include <seInterface2\seinterfacefunc.h>
#include <seInterface2\Channel.h>
#include <fileio\platform.h>
#include <fileio\fileioexports.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > > MapIDToUnitCaps;
typedef Collision::Span<Sob> AvoidanceTree;
typedef Collision::Span<Sob> CollisionTree;
typedef std::vector<PhysicsObject *,std::allocator<PhysicsObject *> > PhysicsObjectVector;
typedef std::deque<AllianceEvent,std::allocator<AllianceEvent> > AllianceEventList;
typedef std::list<ResearchData *,std::allocator<ResearchData *> > ResearchList;
typedef std::_List_iterator<std::_List_val<std::_List_simple_types<ResearchData *> > > ResearchIterator;
typedef std::_List_const_iterator<std::_List_val<std::_List_simple_types<ResearchData *> > > ResearchConstIterator;
typedef std::list<BuildData *,std::allocator<BuildData *> > BuildList;
typedef std::_List_iterator<std::_List_val<std::_List_simple_types<BuildData *> > > BuildIterator;
typedef std::_List_const_iterator<std::_List_val<std::_List_simple_types<BuildData *> > > BuildConstIterator;
typedef std::set<Player::Observer *,std::less<Player::Observer *>,std::allocator<Player::Observer *> > PlayerObserverList;
typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NebulaGroup *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NebulaGroup *> > > NebulaGroupMap;
typedef std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *> > > > DustCloudGroupMapIterator;
typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DustCloudGroup *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *> > > DustCloudGroupMap;
typedef std::map<unsigned int,float,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,float> > > timerMap;
typedef std::vector<vector3,std::allocator<vector3> > VertexList;
typedef std::vector<unsigned short,std::allocator<unsigned short> > IndexList;
typedef std::vector<Collision::Triangle,std::allocator<Collision::Triangle> > TriangleList;
typedef std::vector<MeshAnimJoint *,std::allocator<MeshAnimJoint *> > JointList;
typedef void (*WalkCB)(JointAnimStack const *, void *);
typedef std::vector<MeshAnimator *,std::allocator<MeshAnimator *> > AnimatorList;
typedef std::vector<JointAnimStack,std::allocator<JointAnimStack> > JointStackList;
typedef std::map<unsigned int,EventPointerManager::EventPointer,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,EventPointerManager::EventPointer> > > EventPointerMap;
typedef unsigned long Key;
typedef void (*StateFuncI)(unsigned __int32);
typedef void (*StateFuncVp)(eVertexPrograms);
typedef void (*StateFuncFp)(eFragmentPrograms);
typedef void (*StateFuncCf)(ComparisonFunc);
typedef void (*StateFuncII)(unsigned __int32, unsigned __int32);
typedef void (*StateFuncITgm)(unsigned __int32, TexgenMode);
typedef void (*StateFuncTfTf)(TextureFilter, TextureFilter);
typedef void (*StateFuncIII)(unsigned __int32, unsigned __int32, unsigned __int32);
typedef void (*StateFuncProgIV)(eProgramType const, unsigned __int32 const, vector4 const &);
typedef void (*StateFuncCfII)(ComparisonFunc, unsigned __int32, unsigned __int32);
typedef void (*StateFuncSoSoSo)(StencilOp, StencilOp, StencilOp);
typedef void (*StateFuncTwTwTw)(TextureWrap, TextureWrap, TextureWrap);
typedef void (*StateFuncIIII)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32);
typedef void (*StateFuncIIIIII)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32);
typedef void (*StateFuncIIIIIIIBBB)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, bool, bool, bool);
typedef bool (*StateFuncIB)(unsigned __int32, bool);
typedef void (*StateFuncIC)(unsigned __int32, vector4 const &);
typedef void (*StateFuncIIF)(unsigned __int32, unsigned __int32, float);
typedef void (*StateFuncIFP)(unsigned __int32, float const *);
typedef void (*StateFuncIIFP)(unsigned __int32, unsigned __int32, float const *);
typedef void (*StateFuncC)(vector4 const &);
typedef void (*StateFuncB)(bool);
typedef void (*StateFuncBBBB)(bool, bool, bool, bool);
typedef void (*StateFuncF)(float);
typedef void (*StateFuncFF)(float, float);
typedef void (*StateFuncT)(unsigned __int32);
typedef void (*StateFuncIBV)(unsigned __int32, bool, vector4 const &);
typedef void (*StateFuncM)(matrix4 const &);
typedef void (*StateFuncIT)(__int32, unsigned __int32);
typedef std::vector<StateVariable::CommandData,std::allocator<StateVariable::CommandData> > CommandDataCont;
typedef std::vector<StateCommand *,std::allocator<StateCommand *> > StateCommandCont;
typedef std::vector<StateVariable *,std::allocator<StateVariable *> > StateVariableCont;
typedef std::vector<boost::shared_ptr<StateCommandBlock>,std::allocator<boost::shared_ptr<StateCommandBlock> > > BlockCont;
typedef std::bitset<32> BlockMask;
typedef std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > CompoundStateBlockInstanceCont;
typedef std::vector<MeshInstance::VariableCacheIndex,std::allocator<MeshInstance::VariableCacheIndex> > VariableCacheIndexCont;
typedef std::vector<SubMesh *,std::allocator<SubMesh *> > MeshStructList;
typedef std::vector<Texture *,std::allocator<Texture *> > TextureList;
typedef void (*Callback)();
typedef `anonymous-namespace'::SobPairSort ?A0xe07ac96d::SobPairSort;
typedef `anonymous-namespace'::CollisionPair ?A0xe07ac96d::CollisionPair;
typedef `anonymous-namespace'::NarrowPhaseFunctionAvoidance ?A0xe07ac96d::NarrowPhaseFunctionAvoidance;
typedef `anonymous-namespace'::NarrowPhaseFunctionCollision ?A0xe07ac96d::NarrowPhaseFunctionCollision;
typedef std::vector<std::pair<void *,void *>,std::allocator<std::pair<void *,void *> > > CollisionList;
typedef unsigned __int32 NISHandle;
typedef boost::scoped_ptr<Timer> this_type;

/* ---------- prototypes */

/* ---------- globals */

extern PatchID PatchID::ID_Invalid; // 0x84CA88

/* ---------- private variables */

/* ---------- public code */

PatchID::PatchID() // 0x6BDAD1
{
    mangled_assert("??0PatchID@@QAE@XZ");
    todo("implement");
}

PatchID::~PatchID() // 0x6BDAD7
{
    mangled_assert("??1PatchID@@QAE@XZ");
    todo("implement");
}

PatchID::PatchID(PatchID const &) // 0x6BDA64
{
    mangled_assert("??0PatchID@@QAE@ABV0@@Z");
    todo("implement");
}

PatchID::PatchID(char const *, PatchBase *) // 0x6BDA79
{
    mangled_assert("??0PatchID@@QAE@PBDPAVPatchBase@@@Z");
    todo("implement");
}

char const *PatchID::GetFileName() const // 0x6BDB01
{
    mangled_assert("?GetFileName@PatchID@@QBEPBDXZ");
    todo("implement");
}

_inline PatchID::Info::Info() // 0x6BDA53
{
    mangled_assert("??0Info@PatchID@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

PatchID &PatchID::operator=(PatchID const &) // 0x6BDADC
{
    mangled_assert("??4PatchID@@QAEAAV0@ABV0@@Z");
    todo("implement");
}

void PatchID::Reset() // 0x6BDB2C
{
    mangled_assert("?Reset@PatchID@@AAEXXZ");
    todo("implement");
}

void PatchID::Save(char const *) // 0x6BDB39
{
    mangled_assert("?Save@PatchID@@QAEXPBD@Z");
    todo("implement");
}

void PatchID::Load(char const *) // 0x6BDB0C
{
    mangled_assert("?Load@PatchID@@QAEXPBD@Z");
    todo("implement");
}

void PatchID::New() // 0x6BDB1F
{
    mangled_assert("?New@PatchID@@QAEXXZ");
    todo("implement");
}

/* ---------- private code */
#endif
