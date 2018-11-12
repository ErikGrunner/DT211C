/*
Labs week 4
Erik Grunnér
Problem 3
*/
#include <stdio.h>

int main ()
{
    
    char input = '_';
    printf(" Are you\nSingle(S)\nMArried(M)\nWindowed(W)\nSeparated(E)\nDivorced(D)\n");
    scanf("%c",&input);
    flushall();
    
    switch (input)//switch statement
    {
        case 's':
        case 'S':
        {
            printf("\nSingle");
            break;
        }
        case 'm':
        case 'M':
        {
            printf("\nMarried");
            break;
        }
        case 'w':
        case 'W':
        {
            printf("\nWindowed");
            break;
        }
        case 'e':
        case 'E':
        {
            printf("\nSeparated");
            break;
        }
        case 'd':
        case 'D':
        {
            printf("\nDivorced");
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