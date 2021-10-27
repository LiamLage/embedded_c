/* Authoor: Liam Lage
 * 27/10/2021
 *
 * Section 04 - Variable Definition Exercise
 * Lecture 33 - Sizeof
 */
#include <stdio.h>
#include <stdint.h>

/* sizeof() returns the size of memory for
 * the given data type in bytes. */
int main(int argc, char *argv[]) {
    // determine Size by computation
    printf("%s\n%s\n", "Size of Data Types by Computation", "================================================");
    // char & unsigned char
    printf("Size of char:\t       %llu byte\n", sizeof(char));
    printf("Size of unsigned char: %llu byte\n\n", sizeof(unsigned char));

    // short & unsigned short
    printf("Size of short:\t\t%llu bytes\n", sizeof(short));
    printf("Size of unsigned short: %llu bytes\n\n", sizeof(unsigned short));

    // int & unsigned int
    printf("Size of int:\t      %llu bytes\n", sizeof(int));
    printf("Size of unsigned int: %llu bytes\n\n", sizeof(unsigned int));

    // int8_t & uint8_t
    printf("Size of int8_t:  %llu byte\n", sizeof(int8_t));
    printf("Size of uint8_t: %llu byte\n\n", sizeof(uint8_t));

    // int16_t & uint16_t
    printf("Size of int16_t:  %llu bytes\n", sizeof(int16_t));
    printf("Size of uint16_t: %llu bytes\n\n", sizeof(uint16_t));

    // int32_t & uint32_t
    printf("Size of int32_t:  %llu bytes\n", sizeof(int32_t));
    printf("Size of uint32_t: %llu bytes\n\n", sizeof(uint32_t));

    // int64_t & uint64_t
    printf("Size of int64_t:  %llu bytes\n", sizeof(int64_t));
    printf("Size of uint64_t: %llu bytes\n\n", sizeof(uint64_t));

    // long & unsigned long
    printf("Size of long:\t       %llu bytes\n", sizeof(long));
    printf("Size of unsigned long: %llu bytes\n\n", sizeof(unsigned long));

    // long long & unsigned long long
    printf("Size of long long:\t    %llu bytes\n", sizeof(long long));
    printf("Size of unsigned long long: %llu bytes\n\n", sizeof(unsigned long long));

    // double & unsigned double
    printf("Size of double: %llu bytes\n\n", sizeof(double));

    // long double
    printf("Size of long double: %llu bytes\n\n", sizeof(long double));

    // float & unsigned float
    printf("Size of float: %llu bytes\n", sizeof(float));
    return 0;
}


