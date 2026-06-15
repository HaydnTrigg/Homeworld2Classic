#if 0
#ifndef __BATTLESCARUTIL_H__
#define __BATTLESCARUTIL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct BattleScarUtil::TextureReleaser
{
    void operator()(Texture *);
};
static_assert(sizeof(BattleScarUtil::TextureReleaser) == 1, "Invalid BattleScarUtil::TextureReleaser size");

class BattleScarUtil::TempMesh
{
public:
    _inline void reset();
    std::vector<FatVertex,std::allocator<FatVertex> > vertices; // 0x0
    std::vector<unsigned short,std::allocator<unsigned short> > vertIndices; // 0xC
    std::vector<unsigned short,std::allocator<unsigned short> > triIndices; // 0x18
    TempMesh(BattleScarUtil::TempMesh const &); /* compiler_generated() */
    _inline TempMesh(); /* compiler_generated() */
    _inline ~TempMesh(); /* compiler_generated() */
    BattleScarUtil::TempMesh &operator=(BattleScarUtil::TempMesh const &); /* compiler_generated() */
};
static_assert(sizeof(BattleScarUtil::TempMesh) == 36, "Invalid BattleScarUtil::TempMesh size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void BattleScarUtil::TextureReleaser::operator()(Texture *) // 0x55E063
{
    mangled_assert("??RTextureReleaser@BattleScarUtil@@QAEXPAVTexture@@@Z");
    todo("implement");
}

_inline void BattleScarUtil::TempMesh::reset() // 0x56063E
{
    mangled_assert("?reset@TempMesh@BattleScarUtil@@QAEXXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __BATTLESCARUTIL_H__
#endif
