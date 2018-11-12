/*
27/11/17
erik grunner
labs 10
problem 1
*/

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

int main()
{
    float radius;
    float area;
    float diameter;

    float *ptr1;
    float *ptr2;
    float *ptr3;

    ptr1 = &radius;
    ptr2 = &area;
    ptr3 = &diameter;

    printf("PLease input the radius of the circle");

    scanf("%f",&*ptr1);
    *ptr2 = (PI*((*ptr1)*(*ptr1)));
    *ptr3 = (*ptr1*2);

    printf("Your circle of %.1f radius\nHas a diameter of %.1f\nAn area of %.1f^2",*ptr1,*ptr3,*ptr2);

}
