/*
Labs week 4
Erik Grunnér
Problem 5
*/
#include <stdio.h>

int main ()
{
    float side1=0;
    float side2=0;
    float side3=0;
    printf("pls the lenghts of all the sides\n");
    scanf("%f",&side1);
    scanf("%f",&side2);
    scanf("%f",&side3);
    flushall();
    
    if ( (side1+side2>side3) && (side3+side2>side1) && (side1+side3>side2) )
        printf("Your triangle is valid");
    else
        printf("Your trianlge is invalid");
    
    getchar();
    return 0;
}