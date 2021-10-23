/* Author: Liam Lage
 * 23/10/2021
 *
 * Perform mathematical operations on integers */
#include <stdint.h>

// add: addition operation
int32_t add(int32_t x, int32_t y) {
    int32_t result = 0;
    result = x + y;
    return result;
}

// subtract: subtraction operation
int32_t subtract(int32_t x, int32_t y) {
    int32_t result = 0;
    result = x - y;
    return result;
}

// multiply: multiplication operation
int64_t multiply(int32_t x, int32_t y) {
    int64_t result = 0;
    result = x * y;
    return result;
}

// divide: division operation
double divide(double x, double y) {
    double result = 0;
    result = x / y;
    return result;
}
