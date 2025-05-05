#ifndef MACROS_H
#define MACROS_H

#include <cstddef>

/*
*
* Function __ARRAY_SIZE__: calculates and returns the sizeof an array
* Params : An array
* Returns : size_t
*
*/

#define array_size(arr) __ARRAY_SIZE__(arr)

template<typename T, size_t N>
constexpr size_t __ARRAY_SIZE__(T (&)[N]) {
    return N;
}

#endif
