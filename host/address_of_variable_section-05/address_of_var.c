/* Author: Liam Lage
 * 23/10/2021
 *
 * Section 05 - Address of Variable */
#include <stdio.h>
#include <stdint.h>

/* Write a function that prints the address of each
 * variable in a list. */
int32_t main(int32_t argc, char *argv[]) {
    char a1 = 'V';
    char a2 = 'a';
    char a3 = 'r';
    char a4 = 'i';
    char a5 = 'a';
    char a6 = 'b';
    char a7 = 'l';
    char a8 = 'e';

    uint64_t addressOfa1 = (uint64_t)&a1;    /* to solve the compiler error "warning: initialization of
                                              * 'long unsigned int' from 'char *' makes integer from
                                              * pointer without a cast [-Wint-conversion]." use type
                                              * casting i.e. (unsigned long)&a1.
                                              * next error: "warning: cast from pointer to integer of
                                              * different size [-Wpointer-to-int-cast". change size of
                                              * type to match size of char. i.e. unsigned long long. */
    printf("The address of variable a1: %16llx\n", addressOfa1); // returns the result in decimal
    printf("The address of variable a1: %p\n", &a1);
    printf("The address of variable a2: %p\n", &a2);
    printf("The address of variable a3: %p\n", &a3);
    printf("The address of variable a4: %p\n", &a4);
    printf("The address of variable a5: %p\n", &a5);
    printf("The address of variable a7: %p\n", &a6);
    printf("The address of variable a7: %p\n", &a7);
    printf("The address of variable a7: %p\n", &a8);

    return 0;
}
