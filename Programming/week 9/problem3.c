/*
labs week 9
problem 3
erik grunner
20/11/17
*/

#include <stdio.h>

int problem3()
{
    float input1=0;
    float input2=0;

    float *ptr1;
    float *ptr2;

    ptr1 = &input1;
    ptr2 = &input2;

    printf("question a %p\n",&input1);
    printf("question a %p\n",&input2);

    printf("question a %p\n",&ptr1);
    printf("question a %p\n",&ptr2);

    printf("address %p\n",ptr1);
    printf("address %p\n",ptr2);

    printf("address %f\n",*ptr1);
    printf("address %f\n",*ptr2);

    return 0;
}
