/* Author: Liam Lage
 * 23/10/2021
 *
 * Section 2 - Creating a Project for the Host
 * Lecture 14 - https://www.udemy.com/course/microcontroller-embedded-c-programming/learn/lecture/16541396
 */
#include <stdio.h>

int main(void) {
	printf("%s\n", "hello world!");
	printf("Press 'Enter' to exit application.\n");
	getchar();
	return 0;
}

