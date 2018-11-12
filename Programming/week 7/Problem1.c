/*
6/11/17
Erik Grunner
Labs Week 7
Problem 1
*/
#include <stdio.h>

#define SIZE 10

int main()
{
    int i;
    int a[SIZE];
    
    for (i = 0; i < 10; i++)
    {
        a[i] = 9 -i;
        printf("\ntrace%d arrayis %d",i,a[i]);
    }
    for (i = 0; i < 10; i++)
    {
    a[i] = a[ a[i] ];
    printf("\ntrace%d arrayis %d",i,a[i]);
    }
    
    printf("\na[8] contains %d",a[8]);
    getchar();
    return 0;
}//end main