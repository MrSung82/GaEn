#include "mathlib/gaen_cmn_math.h"
#include "mathlib/gaen_vec3.h"
#include "mathlib/gaen_mat4x4.h"

#include <cmath>

namespace gaen
{
    void from_axis_angle(Real* m, const Vec3& axis, Real angle)
    {
        Vec3 qV;
        Real qW{};

        // init quaternion
        const Real aHalf = gaen::kREAL_HALF * angle;
        qW = cosf(aHalf);
        multiply(qV, axis, sinf(aHalf));
        
       // normalize quaternion
        auto kNormFactor = (Real)reciprocal_sqrt((double)(len_squared(qV) + qW * qW));
        scale(qV, kNormFactor);
        qW *= kNormFactor;

        gaen::to_matrix(m, qV, qW);
    }

    void get_row(Vec3& row, UIndex idx, const Real* m)
    {
        const Real* p = &(m[sizeof(Real) * 4 * idx]);
        init(row, p[0], p[1], p[2]);
    }

    void get_col(Vec3& col, UIndex idx, const Real* m)
    {
        const Size nElemPerRow = 4;;
        init(col, *(m + idx), *(m + nElemPerRow + idx), *(m + 2 * nElemPerRow + idx));
    }

    void from_z_axis(Real* m, Real angle)
    {
        Vec3 zAxis;
        init(zAxis, kREAL_ZERO, kREAL_ZERO, kREAL_ONE);
        gaen::from_axis_angle(m, zAxis, angle);
    }
} // ef gaen

void from_axis_angle(gaenReal* m, const gaenVec3& axis, gaenReal angle)
{
    gaen::from_axis_angle(m, axis, angle);
}

void from_z_axis(gaenReal* m, gaenReal angle)
{
    gaen::from_z_axis(m, angle);
}

namespace gaen
{
    void transform(Vec3& result, const Vec3& src, const Real* m)
    {
        Vec3 col;
        get_col(col, 0, m);
        result.x = dot(src, col);
        get_col(col, 1, m);
        result.y = dot(src, col);
        get_col(col, 2, m);
        result.z = dot(src, col);
    }

    
} // ef gaen

void transform(gaenVec3& result, const gaenVec3& src, const gaenReal* m)
{
    gaen::transform(result, src, m);
}