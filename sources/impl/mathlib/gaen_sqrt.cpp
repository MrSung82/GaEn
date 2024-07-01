#include "mathlib/gaen_int_defs.h"
#include "mathlib/gaen_real_defs.h"

#include <limits>
#include <cmath>

namespace gaen
{
    double reciprocal_sqrt(double s)
	{
        if (fabs(s) < std::numeric_limits<double>::epsilon())
            return std::numeric_limits<double>::max();
		return 1.0 / sqrt(s);
	}

	// calculates 1 / suare root of input value
	float reciprocal_sqrt(float s)
	{
        if (fabs(s) < std::numeric_limits<float>::epsilon())
            return std::numeric_limits<float>::max();

#if defined (GAEN_FAST_MATH)
	#if defined(_MSC_VER) && !defined(_WIN64)
		float result{};
		__asm rsqrtss xmm0, s           // xmm0 = rsqrtss(s)
		__asm movss result, xmm0       // return xmm0
		return result;
	#else
		return 1.f / sqrtf(s);
	#endif
#else // !GAEN_FAST_MATH
		return 1.0f / sqrtf(s);
#endif
	}

} // eof gaen

double gaen_reciprocal_sqrt(double s)
{
    return gaen::reciprocal_sqrt(s);
}

float gaen_reciprocal_sqrt(float s)
{
    return gaen::reciprocal_sqrt(s);
}