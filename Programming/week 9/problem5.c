/*
labs week 9
problem 5
erik grunner
20/11/17
*/

#include <stdio.h>
#define SIZE 3

int problem5()
{
    float a[SIZE] = {2,4,5};
    float b[SIZE] = {0};
    int i;

    float *ptr1;
    float *ptr2;

    ptr1 = &a;
    ptr2 = &b;


    for(i=0;i<SIZE;i++)
    {
        *(ptr2+i) = *(ptr1+i);
    }
    for(i=0;i<SIZE;i++)
    {
        printf("%.1f\n",*(ptr2+i));
    }
    return 0;
}
