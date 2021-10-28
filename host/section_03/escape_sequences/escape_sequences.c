/* Author: Liam Lage 
 * 27/10/2021
 *
 * Section 1 - Escape Sequences
 * Lectures:
 * 22 - https://www.udemy.com/course/microcontroller-embedded-c-programming/learn/lecture/16545842
 * 23 - https://www.udemy.com/course/microcontroller-embedded-c-programming/learn/lecture/16545866
 * 24 - https://www.udemy.com/course/microcontroller-embedded-c-programming/learn/lecture/16545868
 * 
 * Exercise: Print the following in the terminal:
 * David says, "Programming is fun!"
 * **Conditions apply, "Offers valid until tomorrow"
 * C:\My computer\My folder
 * D:/My documents/My file
 * \\\\Today is a holiday\\\\
 * This is a triple quoted string """This month has 30 days"""*/
#include <stdio.h>

int main(void) {
    printf("David says, \"Programming is fun!\"\n");
    printf("**Conditions apply, \"Offers valid until tomorrow\"\n");
    printf("C:\\My Computer\\My folder\n");
    printf("D:/My Documents/My file\n");
    printf("\\\\\\\\Today is a holiday\\\\\\\\\n");
    printf("This is a triple quoted string \"\"\"This month has 30 days\"\"\"\n");
    return 0;
}
