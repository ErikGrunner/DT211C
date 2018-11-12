/*
27/11/17
erik grunner
labs 10
problem 4
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

int main()
{
    float array[3] = {1.1,2.2,3.3};
    float *ptr;
    ptr = array;

    printf("before %.1f, after %.1f",*(ptr-1),*(ptr+4));
    return 0;
}//end main
