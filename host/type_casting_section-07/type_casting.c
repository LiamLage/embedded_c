/* Coauthor: Liam Lage
 * 24/10/2021
 *
 * Section 07 - Type Casting
 * Lecture 50 - https://www.udemy.com/course/microcontroller-embedded-c-programming/learn/lecture/16546078
 * Lecture 51 - https://www.udemy.com/course/microcontroller-embedded-c-programming/learn/lecture/16546080
 * 
 * Typecasting is a means of converting a variable
 * from one data type to another data type.
 * Data will be truncated when a higher data type
 * is converted to a lower data type. i.e., float
 * to int.
 * 
 * There are two types of casting, namely:
 * Implicit casting (compiler does this, also
 * 					called assumed casting).
 * Explicit casting (programmer does this). */

#include <stdio.h>
#include <stdint.h>

int32_t main(int32_t argc, char *argv[]) {
	unsigned char data = (unsigned char)(0x87 + 0x00FF);	// solution
/*  unsigned char data = 0x87 + 0x00FF;				 		 * Compiler explicitly considers the size of RHS
  													 		 * constants as 4 bytes (integer type). This is
  															 * also called integer promotion. A constants' type
		 											 		 * will be considered as an int unless explicitly
													 		 * declared by the programmer.
													 		 * Compiler did implicit casting twice here, namely:
													 		 * 1) It promoted the data sizes of RHS constants to
													 		 * 	  'int'
													 		 * 2) while storing the RHS into LHS, compiler again
													 		 *    implicitly casted from 'int' to 'unsigned char'
													 		 * 	  and thus triggered the warning:
													 		 *    "warning: unsigned conversion from 'int' to
													 		 *    'unsigned char' changes value from '65415' to
													 		 *    '135' [-Woverflow]"
													 		 * Essentially you are trying to fit 4 bytes of data
													 		 * into a 1 byte variable. The int is truncated into
													 		 * 1 byte of data, hence the data loss.
															 * The solution is to type cast the RHS constants to
															 * the data type of the LHS variable, note that explicit
															 * casting here doesn't prevent data loss. i.e., data =
															 * 0x87 + 0x00FF = 0x186, however our result will be
															 * 0x86. Compiler understands that you just want 1 byte
															 * out of the final result and it does not trigger a
															 * warning. */

	unsigned char data_1 = (unsigned char)(0x1FFFFFFFA0B0 + 0x1245);	/* Note that explicit casting does not
																		 * prevent data loss - data_1 will be
																		 * truncated and the result will be the last
	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 * two bits of the result. i.e.:
	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 * 0x1FFFFFFFA0B0 + 0x1245 = 1FFF FFFF B2F5,
	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 * but our result will be 0xF5. */


	float result = (float)80 / 3;							/* Here we must explicitly promote the 'int 80' on RHS to
															 * 'float' on the LHS. Then 'int 3' is implicitly promoted
															 * to a float. Integer division results in the fractional
															 * part of the result being truncated. */

	printf("Data: %x\nData_1: %x\nResult: %f\n", data, data_1, result);

	return 0;

}
