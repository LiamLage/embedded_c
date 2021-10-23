/* Author: Liam Lage
 * 23/10/2021
 *
 * Write a program to do mathematical operations
 * such as addition, subtraction, multiplication,
 * and division of integers.
 * Do all the mathematical operations in separate
 * functions in a file called math.c
 * Call the functions from the main.c to test them. */
#include <stdio.h>
#include <stdint.h>
#include "math.h"

int32_t main(int32_t argc, char *argv[]) {
    int32_t x = 0X0FFF1111;	// hexadecimal
    int32_t y = 69;			// decimal
    
    printf("x = %d & y = %d.\n", x, y);
    printf("addition result       = %7d\n", add(x, y));
    printf("subtraction result    = %7d\n", subtract(x, y));
    printf("multiplication result = %7lld\n", multiply(x, y));
    printf("division result       = %7.3f\n", divide(x, y));

    return 0;
}


