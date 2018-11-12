/*
Labs week 4
Erik Grunnér
Problem 1
*/
#include <stdio.h>

int main ()
{
    char input = '_';
    scanf("%c",&input);
    flushall();
    
    switch (input)//switch statement
    {
        case 'a':
        case 'A':
        {
            printf("\n you entered A");
            break;
        }
        case 'i':
        case 'I':
        {
            printf("\n you entered I");
            break;
        }
        case 'o':
        case 'O':
        {
            printf("\n you entered O");
            break;
        }
        case 'u':
        case 'U':
        {
            printf("\n you entered U");
            break;
        }
        case 'e':
        case 'E':
        {
            printf("\n you entered E");
            break;
        }
        default://not anything specified
        {
            printf("\n you entered a constanent");
            break;
        }
    }
    getchar();
    return 0;
}