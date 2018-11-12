/*
labs week 9
problem 4
erik grunner
20/11/17
*/

#include <stdio.h>

int main()
{
    int num1=0;
    int num2=0;
    int i;
    int sum;

    int *ptr1;
    int *ptr2;
    int *ptr3;

    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &sum;

    printf("please enter two numbers");
    scanf("%d",&num1);
    scanf("%d",&num2);
    printf("hi");

    sum = ((*ptr1)*(*ptr2));

    printf("answer is %d",*ptr3);

    return 0;
}
