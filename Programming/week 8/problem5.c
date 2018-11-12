/*
LAbs week 8
Erik Grunner
Problem 4
*/

#include <stdio.h>

int main()
{
    int var1;
    int *ptr;
    var1 = 1;
    ptr = F176BA2;

    printf("the address of var1 is %d", &var1);

    printf("ptr contains %p", ptr);

    printf("*ptr contains %d", ptr);

    getchar();
    return 0;
}