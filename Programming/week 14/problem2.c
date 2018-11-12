/*
15/02/2018
erik grunner
labs 14
problem 2
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
        for(j=0;j<SIZE;j++)
        {
            if(*(nums+i) < *(nums+j))
               {
                   tmp = *(nums+i);
                   *(nums+i) = *(nums+j);
                   *(nums+j) = tmp;
               }//end if
        }//end for j
    }//end for i
}//end sort

void show(int nums[])
{
    int i;
    printf("\nHigest num: %d",*(nums+SIZE-1));

}//end show
