/*
15/02/2018
erik grunner
labs 14
problem 3
*/
#include <stdio.h>
#define SIZE 5

float avg(int *);
void inputs(int *);


int main()
{
    int nums[SIZE]={0};
    float answer;
    inputs(nums);
    answer = avg(nums);
    printf("The average is: %.1f",answer);
    return 0;
}

void inputs(int nums[])
{
    int i;

    printf("please input %d numbers\n",SIZE);
    for(i=0;i<SIZE;i++)
    {
        scanf("%d",(nums+i));
    }//end for
}//end inputs




float avg(int nums[])
{
    int i,j,tmp;
    float average = 0;
    for(i=0;i<SIZE;i++)
    {
        average = average + *(nums+i);
    }//end for i
    average = average/(float)SIZE;
    return average;
}//end sort

