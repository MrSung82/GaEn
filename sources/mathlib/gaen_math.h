#ifndef GAEN_MATH_H
#define GAEN_MATH_H

#include "mathlib/gaen_cmn_math.h"
#include "mathlib/gaen_vec3.h"
#include "mathlib/gaen_mat4x4.h"

namespace gaen
{
    void transform(Vec3& result, const Vec3& src, const Real* m);


} // ef gaen

void transform(gaenVec3& result, const gaenVec3& src, const gaenReal* m);

#endif // GAEN_MATH_H