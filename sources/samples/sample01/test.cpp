#include "mathlib/gaen_math.h"

#include <iostream>

void test1()
{
    gaen::Vec3 v1;
    init(v1, 5.0f, 2.0f, 3.5f);
    gaen::Vec3 v2;
    gaen::Real m[16];
    gaen::from_z_axis(m, gaen::deg_to_rad(45.0f));
    gaen::transform(v2, v1, m);

    std::cout << v2.x << ", " << v2.y << ", " << v2.z << std::endl;
}