
#include "mathlib/gaen_vec3.h"

void init(gaenVec3& v, gaenReal x, gaenReal y, gaenReal z)
{
    v.x = x;
    v.y = y;
    v.z = z;
}

void fill_by_zeroes(gaenVec3& v)
{
    v.x = kGAEN_REAL_ZERO;
    v.y = kGAEN_REAL_ZERO;
    v.z = kGAEN_REAL_ZERO;
}

void sum(gaenVec3& result, const gaenVec3& v1, const gaenVec3& v2)
{
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    result.z = v1.z + v2.z;
}

void add(gaenVec3& v, const gaenVec3& oth)
{
    v.x += oth.x;
    v.y += oth.y;
    v.z += oth.z;
}

void multiply(gaenVec3& result, const gaenVec3& v, gaenReal s)
{
    result.x = v.x * s;
    result.y = v.y * s;
    result.z = v.z * s;
}

void multiply(gaenVec3& result, gaenReal s, const gaenVec3& v)
{
    multiply(result, v, s);
}

void scale(gaenVec3& v, gaenReal s)
{
    v.x *= s;
    v.y *= s;
    v.z *= s;
}

gaenReal dot(const gaenVec3& v1, const gaenVec3& v2)
{
    return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}

void cross(gaenVec3& result, const gaenVec3& v1, const gaenVec3& v2)
{
    result.x = v1.y * v2.z - v1.z * v2.y;
    result.y = v1.z * v2.x - v1.x * v2.z;
    result.z = v1.x * v2.y - v1.y * v2.x;
}

gaenReal len_squared(const gaenVec3& v)
{
    return v.x * v.x + v.y * v.y + v.z * v.z;
}