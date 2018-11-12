/*
Author Erik Grunnér
Date 02/10/17
problem 9
*/
#include <stdio.h>

int main()
{
    float f=0;
    float c=0;
    
    printf("enter your tempature in fahrenheit to be converted");
    
    scanf("f%",&f);
    flushall();

    c=(f-32)*(5/9);
    
    printf("Tempature is %.2f in celsius",c);
    getchar();
    
    return 0;
}
    