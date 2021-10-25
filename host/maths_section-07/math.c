/* Author: Liam Lage
 * 23/10/2021
 *
 * Perform mathematical operations on integers */
#include <stdint.h>

// add: addition operation
int32_t add(int32_t x, int32_t y) {
    return x + y;
}

// sub: subtraction operation
int32_t sub(int32_t x, int32_t y) {
    return x - y;
}

// mul: multiplication operation
int64_t mul(int32_t x, int32_t y) {
    return (int64_t)x * y;		// type cast int to long long
}

// div: division operation
double div(int32_t x, int32_t y) {
    return (double)x / y;		// type cast int to double
}
