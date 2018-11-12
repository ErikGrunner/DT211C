/*
23/10/17
problem 4
Erik grunnér
*/

#include <stdio.h>

#define SIZE 5

int main()
{
    int array[SIZE];
    int array2[SIZE];
    int i;
    
    printf("please input %d integers\n",SIZE);
    for(i=0;i<SIZE;i++) //read in the figures
    {
        scanf("%d",&array[i]);
        flushall();
    }
    
    for(i=0;i<SIZE;i++) //transfer the arrays
    {
        array2[(SIZE-i-1)]=array[i];
    }

    printf("\nNew array\n");
    for(i=0;i<SIZE;i++)//print the new array
    {
        printf("%d",array2[i]);
    }
    
    getchar();
    return 0;
}//end main