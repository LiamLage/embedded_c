/* Author: Liam Lage
 * Date:   29/11/2021
 *
 * Description:
 * Create a program that uses scanf to get three numbers from
 * the user, then print the average of those numbers.
 */
#include <stdio.h>
#include <stdint.h>

int main(int argc, char *argv[]) {
    float number_1, number_2, number_3;    // the user's input is stored here
    float average;

    printf("Enter the first number: ");   // prompt user
    fflush(stdout);
    scanf("%f", &number_1);

    printf("\nEnter the second number: ");   // prompt user
    fflush(stdout);
    scanf("%f", &number_2);

    printf("\nEnter the third number: ");   // prompt user
    fflush(stdout);
    scanf("%f", &number_3);

    average = (number_1 + number_2 + number_3) / 3;     // find the average

    printf("The average of the input numbers is: %f\n", average);
    fflush(stdout);

    printf("Press enter to exit.\n");
    while(getchar() != '\n');
    getchar();

    return 0;
}
