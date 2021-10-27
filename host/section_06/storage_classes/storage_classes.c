/* Author: Liam Lage
 * 23/10/2021
 *
 * Section 06 - Storage Classes
 * Lectures:
 * 41 - https://www.udemy.com/course/microcontroller-embedded-c-programming/learn/lecture/1655191
 * 42 - https://www.udemy.com/course/microcontroller-embedded-c-programming/learn/lecture/16551922
 * 43 - https://www.udemy.com/course/microcontroller-embedded-c-programming/learn/lecture/16551924
 * 44 - https://www.udemy.com/course/microcontroller-embedded-c-programming/learn/lecture/16551926
 */
#include <stdio.h>
#include <stdint.h>

int32_t mainSharedData;			/* if a variable is not declared 'static', it can be
								 * accessed outside the scope of this source file. */
static int32_t mainPrivateData;	/* if main wants to keep this variable inside the scope
							 	 * of main, it must be declared as static, otherwise any
								 * function, even outside the scope of main, can alter
								 * the variable. */


void file1_myFun1(void);
void myFun1(void);
static void change_system_clock(uint64_t system_clock);	// change_system_clock can only be called from this source file (private to storage_classes.c).
void change_system_time(uint32_t system_time);			// change_system_time can be called from any source.

int32_t main(int32_t argc, char *argv[]) {
	mainPrivateData = 100;
	mainSharedData  = 25;
	printf("mainPrivateData: %d\n", mainPrivateData);
	printf("mainSharedData:	 %3d\n\n", mainSharedData);
	
	file1_myFun1();		// change mainSharedData and execute change_system_time

	printf("mainPrivateData: %d\n", mainPrivateData);
	printf("mainSharedData:	 %3d\n\n", mainSharedData);		// observe changes made in file1_myFun1()

	myFun1();
	myFun1();
	myFun1();
	myFun1();

	change_system_clock(32000000000);
	
	return 0;
}


// myFun1: count how many times this function is called
void myFun1(void) {
	static int32_t count = 0;	/* by declaring count as static, it does not lose its existence even if the
						  	     * execution control goes out of the scope of that variable. It is a global
								 * variable that is private to the function it is declared in.*/
	count += 1;

	printf("This function is executed %d time(s).\n", count);
}

void change_system_clock(uint64_t system_clock) {
	printf("\nsystem clock changed to: %lluHz\n", system_clock);
}

void change_system_time(uint32_t system_time) {
	printf("system time changed to: %us\n\n", system_time);
}
