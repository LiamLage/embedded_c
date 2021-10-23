/* Liam Lage
 * 23/10/2021
 *
 * Section 07 - Functions */
#include <stdio.h>
#include <stdint.h>

int32_t function_add_numbers(int32_t a, int32_t b, int32_t c);

int32_t main(int32_t argc, char *argv[]) {
	int32_t returnValue;
	int32_t valueA = 50;
	int32_t valueB = 25;
	
	returnValue = function_add_numbers(-20, 30, 10);

	printf("sum          = %4d\n", function_add_numbers(12, 13, 14));
	printf("value        = %4d\n", function_add_numbers(valueA, valueB, 100));
	printf("Return value = %4d\n", returnValue);

	return 0;
}

int32_t function_add_numbers(int32_t a, int32_t b, int32_t c) {
	int32_t sum;
	sum = a + b + c;
	return sum;
}
