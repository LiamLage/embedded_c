/* Author: Liam Lage
 * 23/10/2021
 * */
#include <stdint.h>

// extern int mainPrivateData;  // static variables cannot be externalized (var is private to storage_classes.c).
extern int32_t mainSharedData;

// void change_system_clock(int32_t system_clock);  // this function is private to storage_classes.c.
void change_system_time(uint32_t system_time);

void file1_myFun1(void) {
    // mainPrivateData = 900;
    mainSharedData = 50;
    // change_system_clock(0);
    change_system_time(214530);
    
}
