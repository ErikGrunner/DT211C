/*
erik gman
24/10/17
problem 5
*/

#include <stdio.h>

#define SIZE 5
int main()
{
    char array[SIZE];
    int i;
    
    printf("Hey dude 5 characters ASAP");
    
    for(i=0;i<SIZE;i++)
    {
        scanf("%s",&array[i]);
        flushall();
    }

    for(i=0;i<SIZE;i++)
    {
        printf("%c",array[i]);
    }
    getchar();
    return 0;
}