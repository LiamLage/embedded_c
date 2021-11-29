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

    printf("Enter six characters:\n");  // prompt user
    scanf("%c %c %c %c %c %c", &a1, &a2, &a3, &a4, &a5, &a6);

    printf("ASCII: %u, %u, %u, %u, %u, %u\n", a1, a2, a3, a4, a5, a6);

    printf("Press Enter to exit.\n");
    while(getchar() != '\n');
    getchar();
    
    return 0;
}
