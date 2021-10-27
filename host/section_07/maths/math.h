/* Author: Liam Lage
 * 23/10/2021
 *
 * math.h contains function prototypes for
 * mathematical functions in math.c
 */

#ifndef MATH_H_
#define MATH_H_
#include <stdint.h>

/* these are also called exposed function prototypes,
 * they make these functions available to any source
 * that includes this header file. */
int32_t add(int32_t x, int32_t y);
int32_t sub(int32_t x, int32_t y);
int64_t mul(int32_t x, int32_t y);
double div(int32_t x, int32_t y);

#endif /* MATH_H_ */
