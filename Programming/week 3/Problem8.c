/*
Author Erik Grunnér
Date 02/10/17
problem 8
*/
#include <stdio.h>

int main()
{
    int age=0;
    int minutes=525960;
    int beats=75;
    unsigned long int life = 0;
    
    printf(" how old are you?");
    
    scanf("%d",&age);
    flushall();
    
    life = age*minutes*beats;
    
    printf("Your heart beat %uld times in your %d years",life,age);
    
    getchar();
    
    return 0;
}