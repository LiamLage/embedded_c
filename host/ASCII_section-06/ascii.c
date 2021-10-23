/* Author: Liam Lage
 * 23/10/2021
 *
 * Section 06 - ASCII codes */
#include <stdio.h>
#include <stdint.h>

// refer to ASCII table for conversion
int32_t main(int32_t argc, char *argv[]) {
    char a1 = 65;   // 'A'
    char a2 = 112;  // 'p'
    char a3 = 112;  // 'p'
    char a4 = 108;  // 'l'
    char a5 = 101;  // 'e'
    char a6 = 0;	// \0 NULL terminate
    char a7 = 10;	// \n newline

    char a[] = "Apple";

    printf("The string is: %c%c%c%c%c%c%c", a1, a2, a3, a4, a5, a6, a7);
    printf("The array is:  %s\n", a);
    return 0;
}
