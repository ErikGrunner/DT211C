/*
15/02/2018
erik grunner
labs 14
problem 4
*/
#include <stdio.h>
#define SIZE 5

void sort(int *);
void inputs(int *);


int main()
{
    int nums[SIZE]={0};
    inputs(nums);
    sort(nums);
    show(nums);
    return 0;
}

void inputs(int nums[])
{
    int i;

    printf("please input %d numbers",SIZE);
    for(i=0;i<SIZE;i++)
    {
        scanf("%d",(nums+i));
    }//end for
}//end inputs




void sort(int nums[])
{
    int i,j,tmp;
    for(i=0;i<SIZE;i++)
    {
        *(nums+i) *= 2;
    }//end for i
}//end sort

void show(int nums[])
{
    int i;
    printf("\nAfter the multiplication\n")
    for(i=0;i<SIZE;i++)
    {
        printf(" %d,",*(nums+i));
    }//end for i

}//end show

