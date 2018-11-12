/*
Labs week 4
Erik Grunnér
Problem 7
*/
#include <stdio.h>

int main ()
{
    
    int input = 0;
    printf(" \n please enter a a digit between one and seven");
    scanf("%d",&input);
    flushall();
    
    switch (input)//switch statement
    {
        case 1:
        {
            printf("\nMonday");
            break;
        }
        case 2:
        {
            printf("\nTuesday");
            break;
        }
        case 3:
        {
            printf("\nWednesday");
            break;
        }
        case 4:
        {
            printf("\nThursday");
            break;
        }
        case 5:
        {
            printf("\nFriday");
            break;
        }
        case 6:
        {
            printf("\nSaturday");
            break;
        }
        case 7:
        {
            printf("\nSunday");
            break;
        }
        
        
        default://not anything specified
        {
            printf("\nerror:invalid code");
            break;
        }
    }
    getchar();
    return 0;
}