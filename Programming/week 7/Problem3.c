/*
6/11/17
Erik Grunner
Labs Week 7
Problem 3
*/
#include <stdio.h>

#define SIZE 15

int main()
{
    int i;
    int array[SIZE];
    
    printf("please enter %d integers\n",(int)( sizeof(array) / sizeof(array[0]) ));
    
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nPart A");
    getchar();
    for (i = 0; i < SIZE; i++)//on separate lines
    {
    printf("\n%d",array[i]);
    }
    printf("\nPart B ");
    for (i = 0; i < SIZE; i++)//on same lines with spaces
    {
    printf("%d ",array[i]);
    }
    printf("\nPart C");
        for (i = SIZE-1; i >-1; i--)//on same lines backwards
    {
    printf("\n%d",array[i]);
    }
    getchar();
    return 0;
}//end main