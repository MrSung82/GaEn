#ifndef GAEN_INT_DEFS_H
#define GAEN_INT_DEFS_H

#ifdef __GNUC__
#include <cstdint>
#endif

#include <limits>

#ifdef __GNUC__

// signed integers
using gaenInt8 = int8_t;
using gaenInt16 = int16_t;
using gaenInt32 = int32_t;

// unsigned integers
using gaenUInt8 = uint8_t;
using gaenUInt16 = uint16_t;
using gaenUInt32 = uint32_t;
#elif defined (_MSC_VER)
// signed integers
using gaenInt8 = __int8;
using gaenInt16 = __int16;
using gaenInt32 = __int32;

// unsigned integers
using gaenUInt8 = unsigned __int8;
using gaenUInt16 = unsigned __int16;
using gaenUInt32 = unsigned __int32;
#endif // compiler detection for int end

const gaenUInt32 kGAEN_UINT32_MAX = std::numeric_limits<gaenUInt32>::max();

using gaenSize = gaenUInt32;
using gaenUIndex = gaenUInt32;
const gaenUIndex kGAEN_INVALID_INDEX = kGAEN_UINT32_MAX;

// to simplify things like code typing and analysing
namespace gaen
{
    using Int8 = gaenInt8;
    using Int16 = gaenInt16;
    using Int32 = gaenInt32;
    
    using UInt8 = gaenUInt8;
    using UInt16 = gaenUInt16;
    using UInt32 = gaenUInt32;

    const UInt32 kUINT32_MAX = kGAEN_UINT32_MAX;

    using Size = gaenSize;
    using UIndex = gaenUIndex;
    const UIndex kINVALID_INDEX = kGAEN_INVALID_INDEX;

} // eof gaen



#endif // GAEN_INT_DEFS_H