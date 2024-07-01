#ifndef GAEN_MAT4X4_H
#define GAEN_MAT4X4_H

#include "mathlib/gaen_vec3.h"

namespace gaen
{
    void to_matrix(Real* m, const Vec3& qV, Real qW);
    void from_axis_angle(Real* m, const Vec3& axis, Real angle);
    void from_z_axis(Real* m, Real angle);
} // eof gaen

void to_matrix(gaenReal* m, const gaenVec3& qV, gaenReal qW);
void from_axis_angle(gaenReal* m, const gaenVec3& axis, gaenReal angle);
void from_z_axis(gaenReal* m, gaenReal angle);

#endif // GAEN_MAT4X4_H