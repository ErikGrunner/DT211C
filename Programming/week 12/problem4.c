/*
erik grunner
labs problem 4
01/02/18
*/
#include <stdio.h>
#define SIZE 5
//prototype
void sum(int*);
void average(int);

int main()
{
    int i;
    int num[SIZE];

    for(i=0;i<SIZE;i++)
    {
        printf("please enter an integer");
        scanf("%d",&num[i]);
    }

    sum(num);
}//end main

void sum(int num[])
{
    int i;
    int sum = 0;

    for(i=0;i<SIZE;i++)
    {
        sum = sum + *(num+i);
    }
    printf("The sum is %d",sum);
    average(sum);
}

void average(int sum)
{
    float average=0;
    average = (float)sum/SIZE;
    printf("\nTHe average is %.1f",average);

}

