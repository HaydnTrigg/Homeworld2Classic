#if 0
#ifndef __LAYER_H__
#define __LAYER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Layer :
    public Core
{
private:
    Layer(Layer const &);
public:
    Layer();
    virtual ~Layer() override;
    static Layer *create();
    void clear();
    void setTexture(Texture *, bool);
    Texture *getTexture() const;
    void setUnitMode(TextureMode);
    TextureMode getUnitMode() const;
private:
    Texture *m_texture; // 0x4
    TextureMode m_unitMode; // 0x8
    Layer &operator=(Layer const &);
};
static_assert(sizeof(Layer) == 12, "Invalid Layer size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LAYER_H__
#endif
