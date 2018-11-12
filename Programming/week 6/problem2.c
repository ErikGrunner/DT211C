/*
23/10/17
problem 2
Erik grunnér
*/

#include <stdio.h>

int main()
{
    float fahrenheit[3];
    float celsius[3];
    int i;
    
    for(i=0;i<3;i++)
    {
        printf("please input a fahrenheit tempature");
        scanf("%f",&fahrenheit[i]);
        flushall();
        celsius[i]=((fahrenheit[i]-32.0)*(5.0/9.0));
    }
    
    for(i=0;i<3;i++)
    {
        printf("\n%.1f Fahrenheit is equal to %.1f Celsius",fahrenheit[i],celsius[i]);
    }
    getchar();
    return 0;
}
    