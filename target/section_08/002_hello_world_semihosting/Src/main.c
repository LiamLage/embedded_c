/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 Liam Lage
 26/11/2021

 Target: STM32F4-DISCO
 	 	 STM32F411VE

 Lecture: Section 8
		  54 - Testing printf over OpenOCD semihosting
		  - https://www.udemy.com/course/microcontroller-embedded-c-programming/learn/lecture/16595936#content


 */

#include <stdio.h>
#include <stdint.h>

extern void initialise_monitor_handles(void);

/*
#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif
*/

int main(void) {
	initialise_monitor_handles();

    printf("hello world!\n");
	for(;;);
}
