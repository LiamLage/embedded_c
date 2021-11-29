/* Author: Liam Lage
 * Date:   30/11/2021
 *
 * Description:
 * Write a program that prints the ASCII
 * equivalent of the six given input
 * characters.
 */
#include <stdio.h>
#include <stdint.h>

int main(int argc, char *argv[]) {
    char a1, a2, a3, a4, a5, a6;

    printf("Enter six consecutive characters without spaces or newlines:\n");  // prompt user
    a1 = getchar();
    a2 = getchar();
    a3 = getchar();
    a4 = getchar();
    a5 = getchar();
    a6 = getchar();

    printf("ASCII: %u, %u, %u, %u, %u, %u\n", a1, a2, a3, a4, a5, a6);

    printf("Press Enter to exit.\n");
    while(getchar() != '\n');
    getchar();
    
    return 0;
}
