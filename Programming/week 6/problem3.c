/*
23/10/17
problem 3
Erik grunnér
*/

#include <stdio.h>

#define SIZE 4

int main()
{
    int array[SIZE];
    int temp=0;
    int i;
    
    printf(" please input %d integers\n",SIZE);
    
    for(i=0;i<SIZE;i++)
    {
        scanf("%d",&array[i]);
        flushall();
    }
    
    for(i=0;i<SIZE;i++)
    {
        printf("\n%d",array[i]);
    }
    
    printf("\nNewOrder");
    temp=array[1];
    array[1]=array[0];
    array[0]=temp;
    temp=array[3];
    array[3]=array[2];
    array[2]=temp;
    for(i=0;i<SIZE;i++)
    {
        printf("\n%d",array[i]);
    }
    getchar();
    return 0;
}
    