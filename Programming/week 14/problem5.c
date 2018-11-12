/*
15/02/2018
erik grunner
labs 14
problem 5
*/
#include <stdio.h>
#define SIZE 5

int sort(int *);
void inputs(int *);


int main()
{
    int nums[SIZE]={0};
    int even,odd;
    inputs(nums);
    even = sort(nums);
    odd = SIZE - even;
    printf("There are %d even numbers.\nThere are %d odd numbers",even,odd);
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




int sort(int nums[])
{
    int i,j,tmp;
    int even =0;
    for(i=0;i<SIZE;i++)
    {
        if((*(nums+i)%2)==0)
        {
            even++;
        }

    }//end for i

    return even;
}//end sort

