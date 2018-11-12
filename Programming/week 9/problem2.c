/*
labs week 9
problem 2
erik grunner
20/11/17
*/

#include <stdio.h>

int problem2()
{
    int num = 0;
    char letter = 'a';

    int *ptr1;
    char *ptr2;
    int *ptr3;

    ptr1 = &num;
    ptr2 = &letter;
    ptr3 = &letter;

    printf("%d",*ptr3);
    printf("%c",*ptr3);




    return 0;
}
