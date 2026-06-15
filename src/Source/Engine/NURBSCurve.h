#if 0
#ifndef __NURBSCURVE_H__
#define __NURBSCURVE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class NURBSCurve :
    public Curve3D
{
public:
    typedef std::vector<float,std::allocator<float> > KnotVector;
    enum Stats
    {
        STAT_Evaluations = 0,
        STAT_Lengths,
        STAT_Derives,
        STAT_ArcLenIterations,
        STAT_Number,
    };
    static void resetStats();
    static unsigned __int32 getNumStats();
    static float getStat(unsigned __int32 s);
    NURBSCurve(NURBSCurve const &); /* compiler_generated() */
    NURBSCurve();
    virtual ~NURBSCurve() override;
    void addKnot(float);
    void addCV(float, float, float, float);
    void addCV(vector4 const &);
    void setRational(bool);
    void setDegree(__int32);
    void precompute();
    unsigned __int32 getNumKnots() const;
    float getKnotValue(unsigned __int32) const;
    _inline unsigned __int32 getDegree() const;
    _inline float getKnotMin() const;
    _inline float getKnotMax() const;
    _inline float getPrecomputedTotalLength() const;
    virtual void draw(float) const override;
    virtual bool evaluate(float, vector3 *, vector3 *) const override;
    bool evaluate2(float, vector3 *, vector3 *) const;
    float length(float, __int32) const;
    float lengthIn(float, float, float, __int32) const;
    float arcLenParam(float const);
    float arcLenParam2(float const);
    float lengthF(float, __int32) const;
private:
    unsigned __int32 findSpan(float) const;
    void basisFuns(float, __int32, std::vector<float,std::allocator<float> > &) const;
    void derive3D(float, __int32, vector3 &) const;
    void deriveAt(float, __int32, std::vector<vector3,std::allocator<vector3> > &) const;
    void deriveAtH(float, __int32, std::vector<vector4,std::allocator<vector4> > &) const;
    void dersBasisFuns(__int32, float, __int32, Array2D<float,Array2DNewAllocator<float> > &) const;
    vector3 firstDn(float, __int32) const;
    vector4 firstD(float, __int32) const;
    vector4 hpointAt(float, __int32) const;
    __int32 findMult(__int32) const;
    typedef std::vector<vector4,std::allocator<vector4> > CVVector;
    bool m_bIsRational; // 0x4
    unsigned __int32 m_degree; // 0x8
    float m_knotMin; // 0xC
    float m_knotMax; // 0x10
    std::vector<vector4,std::allocator<vector4> > m_cv; // 0x14
    std::vector<float,std::allocator<float> > m_knot; // 0x20
    float m_totalLength; // 0x2C
    std::vector<vector4,std::allocator<vector4> > m_Qi; // 0x30
    unsigned __int32 m_numSubdivisions; // 0x3C
    FatVertex *m_fats; // 0x40
    static float m_stats[4];
public:
    NURBSCurve &operator=(NURBSCurve const &); /* compiler_generated() */
};
static_assert(sizeof(NURBSCurve) == 68, "Invalid NURBSCurve size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline unsigned __int32 NURBSCurve::getDegree() const // 0x5541F1
{
    mangled_assert("?getDegree@NURBSCurve@@QBEIXZ");
    todo("implement");
}

_inline float NURBSCurve::getKnotMin() const // 0x60FB4E
{
    mangled_assert("?getKnotMin@NURBSCurve@@QBEMXZ");
    todo("implement");
}

_inline float NURBSCurve::getKnotMax() const // 0x60FB4A
{
    mangled_assert("?getKnotMax@NURBSCurve@@QBEMXZ");
    todo("implement");
}

_inline float NURBSCurve::getPrecomputedTotalLength() const // 0x55455C
{
    mangled_assert("?getPrecomputedTotalLength@NURBSCurve@@QBEMXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __NURBSCURVE_H__
#endif
