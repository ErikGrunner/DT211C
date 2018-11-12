/*
erik gman
24/10/17
problem 6
*/

#include <stdio.h>

#define SIZE 3
int main()
{
    int array[SIZE];
    int temp[SIZE]={0};
    int i,j,temp2;
    
    printf("Give me %d integers and I'll sort them for you\nSmallest to laregest\n",SIZE);
    for(i=0;i<SIZE;i++)
    {
        scanf("%d",&array[i]);
        flushall();
    }
    
    for(i=0;i<SIZE;i++)
    {
        for(j=0;j<SIZE;j++)
        {
            if((array[j]>temp[i]))
            {
                temp[i]=array[j];
                array[j]=0;
                break;
            }
        }
        printf("\n%d",temp[i]);
    }
    getchar();
    return 0;
}