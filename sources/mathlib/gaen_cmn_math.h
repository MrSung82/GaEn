#ifndef GAEN_CMN_MATH_H
#define GAEN_CMN_MATH_H

#include "mathlib/gaen_int_defs.h"
#include "mathlib/gaen_real_defs.h"

namespace gaen
{
    double reciprocal_sqrt(double s);
	float reciprocal_sqrt(float s);

	Real deg_to_rad(Real s);

} // eof gaen

double gaen_reciprocal_sqrt(double s);
float gaen_reciprocal_sqrt(float s);


gaenReal deg_to_rad(gaenReal s);

#endif // GAEN_CMN_MATH_H