/*
15/02/2018
erik grunner
labs 14
problem 1
*/
#include <stdio.h>

#define PI 3.14

//prototypes

float circle(float *);
float square(float *);

int main()
{
    float side,radius,areac,areas;
    float *s,*r;
    s= &side;
    r= &radius;
    printf("\nPlease give me the radius of any circle");
    scanf("%f",r);
    areac=circle(r);
    printf("\nThe Area of that circle is %.1f",areac);

    printf("\nPlease enter the lenght of the side of a square");
    scanf("%f",s);
    areas=square(s);
    printf("\nThe area of that square is %.1f",areas);

    return 0;
}//end main

float circle(float *radius)
{
    float answer;
    answer = PI *  (*radius) * (*radius);
    return answer;
}

float square(float *side)
{
    float answer;
    answer = (*side) * (*side) ;

    return answer;
}
