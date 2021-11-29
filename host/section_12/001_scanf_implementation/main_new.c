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
    double number_1, number_2, number_3;    // the user's input is stored here
    double average;

    printf("Enter three numbers:\n");   // prompt user
    fflush(stdout);
    scanf("%lf %lf %lf", &number_1, &number_2, &number_3);


    average = (number_1 + number_2 + number_3) / 3.0;     // find the average

    printf("The average of the input numbers is: %0.6lf\n", average);
    fflush(stdout);

    printf("Press enter to exit.\n");
    while(getchar() != '\n');
    getchar();

    return 0;
}
