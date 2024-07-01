#include "mathlib/gaen_int_defs.h"
#include "mathlib/gaen_real_defs.h"

#include <limits>
#define _USE_MATH_DEFINES
#include <cmath>

namespace gaen
{
    Real deg_to_rad(Real s)
	{
		return s * M_PI / 180;
	}

} // eof gaen

gaenReal deg_to_rad(gaenReal s)
{
	return gaen::deg_to_rad(s);
}