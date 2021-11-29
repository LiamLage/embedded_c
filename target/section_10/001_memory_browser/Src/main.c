/* Liam Lage
 * 27/11/2021
 *
 * Target: STM32F4-DISCO
 * 		   STM32F411VE
 *
 * Lecture: Section 10 - Analyzing Embedded C Code
 * 			62 - Code & Data of the Program using Memory Browser
 * 			- https://www.udemy.com/course/microcontroller-embedded-c-programming/learn/lecture/16551832#content
 *
 * Examining the FLASH & SRAM Memory of the STM32 using the Memory Browser.
 * */

#include <stdio.h>
#include <stdint.h>

// global variables
int g_data1 = -4000;
int g_data2 = 200;
int result  = 0;

int main(void)
{
	result = g_data1 + g_data2;

	printf("Result = %d\n", result);

	for(;;);
}
