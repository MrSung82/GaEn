#ifndef GAEN_VEC3_H
#define GAEN_VEC3_H

#include "mathlib/gaen_int_defs.h"
#include "mathlib/gaen_real_defs.h"

struct gaenVec3
{
    gaenReal x, y, z; 
};

namespace gaen
{
    using Vec3 = gaenVec3;
} // eof gaen

void init(gaenVec3& v, gaenReal x, gaenReal y, gaenReal z);
void fill_by_zeroes(gaenVec3& v);
void sum(gaenVec3& result, const gaenVec3& v1, const gaenVec3& v2);
void add(gaenVec3& v, const gaenVec3& oth);
void multiply(gaenVec3& result, const gaenVec3& v, gaenReal s);
void multiply(gaenVec3& result, gaenReal s, const gaenVec3& v);
void scale(gaenVec3& v, gaenReal s);
gaenReal dot(const gaenVec3& v1, const gaenVec3& v2);
void cross(gaenVec3& result, const gaenVec3& v1, const gaenVec3& v2);
gaenReal len_squared(const gaenVec3& v);

#endif // GAEN_VEC3_H