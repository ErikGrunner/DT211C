/*
Labs week 4
Erik Grunnér
Problem 2
*/
#include <stdio.h>

int main ()
{
    int input=0;
    int calc=0;
    printf("pls input a number between 1 and 100\n");
    scanf("%d",&input);
    flushall();
    calc = input%2;
    
    switch (calc)//switch statement
    {
        case 1:
        {
            printf("\n%d is an odd number",input);
            break;
        }
        
        case 0:
        {
            printf("\n%d in an even number",input);
            break;
        }
        default:
        {
            printf("\nErik you fucked up",input);
            break;
        }
    }
    getchar();
    return 0;
}
    
            
        