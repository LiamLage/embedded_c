/* Author: Liam Lage
 * 23/10/2021
 *
 * Section 07 - Functions Exercise
 * Lecture 49 - https://www.udemy.com/course/microcontroller-embedded-c-programming/learn/lecture/16546076
 * 
 * Write a program to do mathematical operations
 * such as addition, subtraction, multiplication,
 * and division of integers.
 * Do all the mathematical operations in separate
 * functions in a file called math.c
 * Expose the function prototypes in a header file 
 * called math.h
 * Call the functions from the main.c to test them. */
#include <stdio.h>
#include <stdint.h>
#include "math.h"	// user defined header file in double quotes.

int32_t main(int32_t argc, char *argv[]) {
	// the values we want to perform arithmetic operations on:
    int32_t x = 0X0FFF1111;
    int32_t y = 0X0FFF1111;
    int32_t i = 0x000000ff;
    
    // print the results:
    printf("x = 0X0FFF1111\ny = 0X0FFF1111\ni = 0x000000ff\n");
    printf("addition(x,y)       = %x\n", add(x, y));
    printf("subtraction(x,i)    = %x\n", sub(x, i));
    printf("multiplication(x,y) = %llx\n", mul(x, y));
    printf("division(x,i)       = %0.3f\n\n", div(x, i));

    // wait for user prompt before exiting.
    printf("Press 'Enter' to exit.\n");
    getchar();

    return 0;
}
