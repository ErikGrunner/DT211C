/*
erik grunner
labs problem 3
01/02/18
*/
#include <stdio.h>
#define SIZE 5
//prototype
void sort(int*);

int main()
{
    int i;
    int num[SIZE];

    for(i=0;i<SIZE;i++)
    {
        printf("please enter an integer");
        scanf("%d",&num[i]);
    }

    sort(num);
}//end main

void sort(int num[])
{
    int large = num[0];
    int small = num[0];
    int i;

    for(i=0;i<SIZE;i++)
    {
        if(num[i]>large)
        {
            large = num[i];
        }
        if(num[i]<small)
        {
            small = num[i];
        }
    }//end for

    printf("\nLargest is %d",large);
    printf("\nSmallest is %d",small);
}// end sort
