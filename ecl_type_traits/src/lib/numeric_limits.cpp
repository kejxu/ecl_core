/**
 * @file /ecl_type_traits/src/lib/numeric_limits.cpp
 *
 * @brief Implementation of the extended numeric limit specialisations.
 *
 * @date February 2011
 **/
/*****************************************************************************
** Includes
*****************************************************************************/

#include <limits>
#include "../../include/ecl/type_traits/numeric_limits.hpp"

/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace ecl {

/*****************************************************************************
** Static Variables
*****************************************************************************/
/**
 * @cond DO_NOT_DOXYGEN
 */

const char numeric_limits<char>::one;
const uint16 numeric_limits<char>::bits;
const uint16 numeric_limits<char>::bytes;
const char numeric_limits<char>::minimum;
const char numeric_limits<char>::maximum;

const unsigned char numeric_limits<unsigned char>::one;
const uint16 numeric_limits<unsigned char>::bits;
const uint16 numeric_limits<unsigned char>::bytes;
const unsigned char numeric_limits<unsigned char>::minimum;
const unsigned char numeric_limits<unsigned char>::maximum;


const int16 numeric_limits<int16>::one;
const uint16 numeric_limits<int16>::bits;
const uint16 numeric_limits<int16>::bytes;
const int16 numeric_limits<int16>::minimum;
const int16 numeric_limits<int16>::maximum;

const uint16 numeric_limits<uint16>::one;
const uint16 numeric_limits<uint16>::bits;
const uint16 numeric_limits<uint16>::bytes;
const uint16 numeric_limits<uint16>::minimum;
const uint16 numeric_limits<uint16>::maximum;

const int32 numeric_limits<int32>::one;
const uint16 numeric_limits<int32>::bits;
const uint16 numeric_limits<int32>::bytes;
const int32 numeric_limits<int32>::minimum;
const int32 numeric_limits<int32>::maximum;

const uint32 numeric_limits<uint32>::one;
const uint16 numeric_limits<uint32>::bits;
const uint16 numeric_limits<uint32>::bytes;
const uint32 numeric_limits<uint32>::minimum;
const uint32 numeric_limits<uint32>::maximum;

const int64 numeric_limits<int64>::one;
const uint16 numeric_limits<int64>::bits;
const uint16 numeric_limits<int64>::bytes;
const int64 numeric_limits<int64>::minimum;
const int64 numeric_limits<int64>::maximum;

const uint64 numeric_limits<uint64>::one;
const uint16 numeric_limits<uint64>::bits;
const uint16 numeric_limits<uint64>::bytes;
const uint64 numeric_limits<uint64>::minimum;
const uint64 numeric_limits<uint64>::maximum;

const float numeric_limits<float>::minimum = -std::numeric_limits<float>::max();
const float numeric_limits<float>::maximum = std::numeric_limits<float>::max();

const double numeric_limits<double>::minimum = -std::numeric_limits<double>::max();
const double numeric_limits<double>::maximum = std::numeric_limits<double>::max();

const long double numeric_limits<long double>::minimum = -std::numeric_limits<long double>::max();
const long double numeric_limits<long double>::maximum = std::numeric_limits<long double>::max();
/**
 * @endcond
 */
}  // namespace ecl
