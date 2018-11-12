/*
LAbs week 8
Erik Grunner
Problem 4
*/

#include <stdio.h>

#define ROW 3
#define COL 2

int main()
{
    int var1;
    int *ptr;
    var1 = 1;
    ptr = &var1;

    printf("the address of var1 is %d", &var1);
    // the %d should be %p
    printf("ptr contains %p", ptr);
    /* 
    there is a missing & and should be
    &ptr
    */
    printf("*ptr contains %d", ptr);
    /* 
    there is a missing * (indirection
    operator) and therefore 
    should be
    *ptr
    */
    getchar();
    return 0;
}