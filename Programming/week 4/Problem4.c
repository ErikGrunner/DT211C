/*
Labs week 4
Erik Grunnér
Problem 4
*/
#include <stdio.h>

int main ()
{
    int input1=0;
    int input2=0;
    int calc1=0;
    int calc2=0;
    printf("pls input two integers\n");
    scanf("%d",&input1);
    scanf("%d",&input2);
    flushall();
    calc1 = input1%input2;
        
    switch (calc1)//switch statement
    {
        case 0:
        {
            printf("\n%d is evenly divisable by %d",input1,input2);
            break;
        }
        
        default:
        {
            printf("\n%d is not evenly divisable by %d",input1,input2);
            break;
        }
    }
    getchar();
    return 0;
}