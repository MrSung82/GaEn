#ifndef GAEN_REAL_DEFS_H
#define GAEN_REAL_DEFS_H

#ifdef GAEN_REAL_IS_DOUBLE
using gaenReal = double;

#else
using gaenReal = float;
const gaenReal kGAEN_REAL_ZERO = 0.0f;
const gaenReal kGAEN_REAL_HALF = 0.5f;
const gaenReal kGAEN_REAL_ONE = 1.0f;


#endif


namespace gaen
{
    using Real = gaenReal;
    const Real kREAL_ZERO = kGAEN_REAL_ZERO;
    const Real kREAL_HALF = kGAEN_REAL_HALF;
    const Real kREAL_ONE = kGAEN_REAL_ONE;
} // eof gaen
#endif // GAEN_REAL_DEFS_H