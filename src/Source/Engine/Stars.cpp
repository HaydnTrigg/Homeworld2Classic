#if 0
/* ---------- headers */

#include "decomp.h"
#include <gameRandom.h>
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\matrix3.h>
#include <boost\checked_delete.hpp>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <xhash>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <vector>
#include <iosfwd>
#include <fileio\filestream.h>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <debug\ctassert.h>
#include <Render\objects\stateblock\stateblockmanager.h>
#include <math.h>
#include <list>
#include <Mathlib\vector3.h>
#include <Render\objects\stateblock\stateblock.h>
#include <Mathlib\vector4.h>
#include <Render\objects\stateblock\stateblocktypes.h>
#include <map>
#include <random.h>
#include <xtree>
#include <Render\objects\vertexarray.h>
#include <boost\scoped_ptr.hpp>
#include <Render\objects\vertexarrayinternal.h>
#include <Render\objects\stateblock\statevariableinstance.h>
#include <util\dictionary.h>
#include <Mathlib\vector2.h>
#include <Render\objects\hw2ddraw.h>
#include <util\utilexports.h>
#include <util\types.h>
#include <platform\windowinterface.h>
#include <Interface.h>
#include <platform\platformexports.h>
#include <Render\objects\image.h>
#include <Mathlib\mathlibdll.h>
#include <Render\objects\objects.h>
#include <profile\profile.h>
#include <Mathlib\fastmath.h>
#include <Render\objects\texture.h>
#include <iostream>
#include <Render\objects\core.h>
#include <platform\osdef.h>
#include <debug\db.h>
#include <renderer.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <Render\gl\types.h>
#include <Render\objects\stateblock\compoundstateblockinstance.h>
#include <boost\throw_exception.hpp>
#include <Mathlib\matvec.h>
#include <savegamedef.h>
#include <bitset>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Render\gl\lotypes.h>
#include <Render\gl\r_types.h>
#include <Stars.h>

/* ---------- constants */

/* ---------- definitions */

class BoundingSphere
{
public:
    _inline BoundingSphere();
    _inline void BuildBegin();
    void BuildAdd(vector3 const &);
    _inline void BuildEnd();
    _inline bool IsBuilt() const;
    _inline vector3 const &GetCenter() const;
    _inline float GetRadius() const;
private:
    bool m_bBuilt; // 0x0
    unsigned __int32 m_numPoints; // 0x4
    vector3 m_center; // 0x8
    float m_radiusSq; // 0x14
    float m_radius; // 0x18
};
static_assert(sizeof(BoundingSphere) == 28, "Invalid BoundingSphere size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern float s_nearDist; // 0x83D5EC
    extern float s_nearWidth; // 0x83D5F0
    extern __int32 s_viewportWidth; // 0x83D5F4
}

/* ---------- public code */

_inline BoundingSphere::BoundingSphere() // 0x6408A2
{
    mangled_assert("??0BoundingSphere@@QAE@XZ");
    todo("implement");
}

_inline void BoundingSphere::BuildBegin() // 0x640CDA
{
    mangled_assert("?BuildBegin@BoundingSphere@@QAEXXZ");
    todo("implement");
}

_inline void BoundingSphere::BuildEnd() // 0x640CE7
{
    mangled_assert("?BuildEnd@BoundingSphere@@QAEXXZ");
    todo("implement");
}

_inline bool BoundingSphere::IsBuilt() const // 0x640CF3
{
    mangled_assert("?IsBuilt@BoundingSphere@@QBE_NXZ");
    todo("implement");
}

_inline vector3 const &BoundingSphere::GetCenter() const // 0x640CEB
{
    mangled_assert("?GetCenter@BoundingSphere@@QBEABVvector3@@XZ");
    todo("implement");
}

_inline float BoundingSphere::GetRadius() const // 0x640CEF
{
    mangled_assert("?GetRadius@BoundingSphere@@QBEMXZ");
    todo("implement");
}

void BoundingSphere::BuildAdd(vector3 const &) // 0x640BB7
{
    mangled_assert("?BuildAdd@BoundingSphere@@QAEXABVvector3@@@Z");
    todo("implement");
}

StarList::Data::Data() // 0x6408AC
{
    mangled_assert("??0Data@StarList@@QAE@XZ");
    todo("implement");
}

StarList::Data::~Data() // 0x640AC3
{
    mangled_assert("??1Data@StarList@@QAE@XZ");
    todo("implement");
}

StarList::StarList(StarList::StarType) // 0x640923
{
    mangled_assert("??0StarList@@QAE@W4StarType@0@@Z");
    todo("implement");
}

_inline boost::shared_ptr<StateCommandBlock>::~shared_ptr<StateCommandBlock>() // 0x640AB7
{
    mangled_assert("??1?$shared_ptr@VStateCommandBlock@@@boost@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

StarList::~StarList() // 0x640B3E
{
    mangled_assert("??1StarList@@QAE@XZ");
    todo("implement");
}

_inline boost::shared_ptr<StateCommandBlock> &boost::shared_ptr<StateCommandBlock>::operator=(boost::shared_ptr<StateCommandBlock> const &) // 0x640B46
{
    mangled_assert("??4?$shared_ptr@VStateCommandBlock@@@boost@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

bool StarList::setTexture(char const *) // 0x64177E
{
    mangled_assert("?setTexture@StarList@@QAE_NPBD@Z");
    todo("implement");
}

void StarList::addStars(std::vector<StarList::Star,std::allocator<StarList::Star> > const &) // 0x64100C
{
    mangled_assert("?addStars@StarList@@QAEXABV?$vector@UStar@StarList@@V?$allocator@UStar@StarList@@@std@@@std@@@Z");
    todo("implement");
}

void StarList::build() // 0x641067
{
    mangled_assert("?build@StarList@@QAEXXZ");
    todo("implement");
}

void StarList::buildPointStars() // 0x641073
{
    mangled_assert("?buildPointStars@StarList@@QAEXXZ");
    todo("implement");
}

void StarList::buildTexturedStars() // 0x64116C
{
    mangled_assert("?buildTexturedStars@StarList@@QAEXXZ");
    todo("implement");
}

void StarList::createDisplayList() // 0x64116D
{
    mangled_assert("?createDisplayList@StarList@@QAEXXZ");
    todo("implement");
}

void StarList::addStarVertices(StarList::Star const &, std::vector<FatVertex,std::allocator<FatVertex> > &) // 0x640D55
{
    mangled_assert("?addStarVertices@StarList@@QAEXABUStar@1@AAV?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@Z");
    todo("implement");
}

__int32 StarList::draw(vector3 const &, vector3 const &, vector3 const &, float) const // 0x6411E1
{
    mangled_assert("?draw@StarList@@QBEHABVvector3@@00M@Z");
    todo("implement");
}

__int32 StarList::drawPointStars(vector3 const &, float) const // 0x641233
{
    mangled_assert("?drawPointStars@StarList@@QBEHABVvector3@@M@Z");
    todo("implement");
}

__int32 StarList::drawTexturedStars(vector3 const &, vector3 const &, vector3 const &, float) const // 0x6413A2
{
    mangled_assert("?drawTexturedStars@StarList@@QBEHABVvector3@@00M@Z");
    todo("implement");
}

bool StarList::hasBoundingSphere() const // 0x64176C
{
    mangled_assert("?hasBoundingSphere@StarList@@QBE_NXZ");
    todo("implement");
}

void StarList::getBoundingSphere(vector3 &, float &) // 0x641748
{
    mangled_assert("?getBoundingSphere@StarList@@QAEXAAVvector3@@AAM@Z");
    todo("implement");
}

void StarList::setVisible(bool) // 0x6417B1
{
    mangled_assert("?setVisible@StarList@@QAEX_N@Z");
    todo("implement");
}

bool StarList::isVisible() const // 0x641775
{
    mangled_assert("?isVisible@StarList@@QBE_NXZ");
    todo("implement");
}

void StarList::SetDisplaySettings(float fovDeg, float nearClipDist) // 0x640CF6
{
    mangled_assert("?SetDisplaySettings@StarList@@SGXMM@Z");
    todo("implement");
}

/* ---------- private code */
#endif
