/*
Author Erik Grunnér
Date 02/10/17
problem 1
*/
#include <stdio.h>

int main()
{
    int a,b,c;
    a = b = c = 0;
    
    printf("Enter 3 integers\n");
    scanf("%d",&a);//asking for input numbers
    scanf("%d",&b);
    scanf("%d",&c);
    flushall();
    printf("You entered %d, %d\ and %d",a,b,c);
    
    getchar();
    return 0;
}