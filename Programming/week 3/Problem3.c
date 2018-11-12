/*
Author Erik Grunnér
Date 02/10/17
problem 3
*/
#include <stdio.h>

int main()
{
    float a,b,c;
    a=b=c=0;
    
    printf(" please enter 3 float numbesrs please\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    flushall();
    
    printf("cheers bloke you gave me\n %.4f\n%.3f\n %.0f",a,b,c);
    getchar();
    
    return 0;
}