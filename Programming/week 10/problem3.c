/*
27/11/17
erik grunner
labs 10
problem 3
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

int main()
{
    int num[SIZE];
    int num2[SIZE];
    int i;

    int *ptr1;
    int *ptr2;


    ptr1 = num;
    ptr2 = num2;

    printf("input %d numbers",SIZE);

    //read in the integers
    for(i=0;i<SIZE;i++)
    {
        scanf("%d",&*(ptr1+i));
        *(ptr2+i)=*(ptr1+i);
    }//end for

    for(i=0;i<SIZE;i++)
    {
        printf("array1 %d, array2 %d,\n",*(ptr1+i),*(ptr2+i));
    }//end for
    return 0;
}//end main

