#include "mathlib/gaen_math.h"
#include "mathlib/gaen_vec3.h"
#include "mathlib/gaen_mat4x4.h"

#include <cmath>

namespace gaen
{

    void to_matrix(Real* m, const Vec3& qV, Real qW)
    {
        m[0] = 1.0f - 2.0f * qV.y * qV.y - 2.0f * qV.z * qV.z;
        m[1] = 2.0f * qV.x * qV.y + 2.0f * qV.z * qW;
        m[2] = 2.0f * qV.x * qV.z - 2.0f * qV.y * qW;
        m[3] = 0.0f;

        m[4] = 2.0f * qV.x * qV.y - 2.0f * qV.z * qW;
        m[5] = 1.0f - 2.0f * qV.x * qV.x - 2.0f * qV.z * qV.z;
        m[6] = 2.0f * qV.z * qV.y + 2.0f * qV.x * qW;
        m[7] = 0.0f;

        m[8] = 2.0f * qV.x * qV.z + 2.0f * qV.y * qW;
        m[9] = 2.0f * qV.z * qV.y - 2.0f * qV.x * qW;
        m[10] = 1.0f - 2.0f * qV.x * qV.x - 2.0f * qV.y * qV.y;
        m[11] = 0.0f;

        m[12] = 0.f;
        m[13] = 0.f;
        m[14] = 0.f;
        m[15] = 1.f;
    }
       
} // ef gaen

void to_matrix(gaenReal* m, const gaenVec3& qV, gaenReal qW)
{
    gaen::to_matrix(m, qV, qW);
}