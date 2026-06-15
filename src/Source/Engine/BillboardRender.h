#if 0
#ifndef __BILLBOARDRENDER_H__
#define __BILLBOARDRENDER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class BillboardRender :
    public Saveable
{
public:
    BillboardRender(BillboardRender const &); /* compiler_generated() */
    BillboardRender(float, float);
    void Render(Camera const *, MeshRenderProxy &, vector4 const &, vector4 const &, HierarchyStatic const *, vector3 const &, float, float, MeshInstance const *);
    _inline void SetPhase(float);
    _inline void SetSpin(float);
    _inline void SetRotation(float);
private:
    float m_phase; // 0x4
    float m_rotation; // 0x8
    float m_spin; // 0xC
    float m_wobbleFrequency; // 0x10
    float m_wobbleAmplitude; // 0x14
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    virtual _inline ~BillboardRender() override; /* compiler_generated() */
    BillboardRender &operator=(BillboardRender const &); /* compiler_generated() */
};
static_assert(sizeof(BillboardRender) == 24, "Invalid BillboardRender size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void BillboardRender::SetPhase(float) // 0x4C0BB9
{
    mangled_assert("?SetPhase@BillboardRender@@QAEXM@Z");
    todo("implement");
}

_inline void BillboardRender::SetSpin(float) // 0x4C0BD5
{
    mangled_assert("?SetSpin@BillboardRender@@QAEXM@Z");
    todo("implement");
}

_inline void BillboardRender::SetRotation(float) // 0x4C0BC7
{
    mangled_assert("?SetRotation@BillboardRender@@QAEXM@Z");
    todo("implement");
}

_inline bool BillboardRender::isDeterministic() // 0x56DEA0
{
    mangled_assert("?isDeterministic@BillboardRender@@UAE_NXZ");
    todo("implement");
}

_inline char const *BillboardRender::saveToken() // 0x56DF17
{
    mangled_assert("?saveToken@BillboardRender@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __BILLBOARDRENDER_H__
#endif
