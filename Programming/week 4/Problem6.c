/*
Labs week 4
Erik Grunnér
Problem 6
*/
#include <stdio.h>

int main ()
{
    
    int input = 0;
    printf(" \n please enter a single numerical digit");
    scanf("%d",&input);
    flushall();
    
    switch (input)//switch statement
    {
        case 0:
        {
            printf("\nZero");
            break;
        }
        case 1:
        {
            printf("\nZOne");
            break;
        }
        case 2:
        {
            printf("\nTwo");
            break;
        }
        case 3:
        {
            printf("\nThree");
            break;
        }
        case 4:
        {
            printf("\nFour");
            break;
        }
        case 5:
        {
            printf("\nFive");
            break;
        }
        case 6:
        {
            printf("\nSix");
            break;
        }
        case 7:
        {
            printf("\nSeven");
            break;
        }
        case 8:
        {
            printf("\nEight");
            break;
        }
        case 9:
        {
            printf("\nNine");
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