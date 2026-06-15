#if 0
#ifndef __CAMERA_H__
#define __CAMERA_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Camera
{
public:
    _inline Camera(Camera const &); /* compiler_generated() */
    Camera();
    virtual ~Camera();
    Camera &operator=(Camera const &);
    virtual void setVerticalFOV(float);
    virtual void setNearClip(float);
    virtual void setFarClip(float);
    virtual void setAspectRatio(float);
    virtual float const getVerticalFOV() const;
    virtual float const getHorizontalFOV() const;
    virtual _inline float getAspectRatio() const;
    virtual _inline float getNearClip() const;
    virtual _inline float getFarClip() const;
    virtual void setWindow(vector4 &);
    virtual vector4 &getWindow();
    virtual vector3 const &getPosition() const;
    virtual void getUpVector(vector3 &) const;
    virtual void getRightVector(vector3 &) const;
    virtual void getNormalVector(vector3 &) const;
    void getMouseRay(float const, float const, vector3 &) const;
    void createFrustum(Frustum &);
    Frustum const &getFrustum() const;
    virtual void update();
    _inline matrix4 const &getMatrix() const;
    _inline matrix4 const &getMatrixWithoutTranslation() const;
    _inline matrix4 const &getProjectionMatrix() const;
    void setUseInputMatrix(bool);
    void setInputMatrix(matrix4 const &);
protected:
    void updateProjectionMatrix();
    matrix4 m_matrix; // 0x4
    matrix4 m_matrixNoTrans; // 0x44
    matrix4 m_projectionMatrix; // 0x84
    matrix4 m_inputMatrix; // 0xC4
    bool m_bUseInputMatrix; // 0x104
    vector3 m_position; // 0x108
    vector4 m_window; // 0x114
    float m_vertFOV; // 0x124
    float m_aspectRatio; // 0x128
    float m_nearClip; // 0x12C
    float m_farClip; // 0x130
    Frustum m_frustum; // 0x134
};
static_assert(sizeof(Camera) == 400, "Invalid Camera size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline float Camera::getAspectRatio() const // 0x4E052D
{
    mangled_assert("?getAspectRatio@Camera@@UBEMXZ");
    todo("implement");
}

_inline float Camera::getNearClip() const // 0x4E053B
{
    mangled_assert("?getNearClip@Camera@@UBEMXZ");
    todo("implement");
}

_inline float Camera::getFarClip() const // 0x4E0534
{
    mangled_assert("?getFarClip@Camera@@UBEMXZ");
    todo("implement");
}

_inline matrix4 const &Camera::getMatrix() const // 0x441BD0
{
    mangled_assert("?getMatrix@Camera@@QBEABVmatrix4@@XZ");
    todo("implement");
}

_inline matrix4 const &Camera::getMatrixWithoutTranslation() const // 0x5F0FD4
{
    mangled_assert("?getMatrixWithoutTranslation@Camera@@QBEABVmatrix4@@XZ");
    todo("implement");
}

_inline matrix4 const &Camera::getProjectionMatrix() const // 0x4460C2
{
    mangled_assert("?getProjectionMatrix@Camera@@QBEABVmatrix4@@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __CAMERA_H__
#endif
