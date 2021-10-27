/* Authoor: Liam Lage
 * 27/10/2021
 *
 * Section 04 - Variable Definition Exercise
 * Lecture 29 - https://www.udemy.com/course/microcontroller-embedded-c-programming/learn/lecture/16545890
 * 
 * A                                               B                    C
 * |-----------------------------------------------|--------------------|
 * <____________________160km______________________><________40km_______>
 * Exercise: Write a program to calculate & print
 * the distance from A to C. */
#include <stdio.h>

int main(int argc, char *argv[]) {
    short distance_AB = 160;
    short distance_BC = 40;
    short distance_AC = distance_AB + distance_BC;
    printf("The distance between A & C is %dkm.\n", distance_AC);
    return 0; 
}