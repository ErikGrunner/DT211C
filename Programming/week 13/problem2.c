/*
labs week 13
problen 2
08/02/2018
erik grunner
*/

#include <stdio.h>
//prorottypes

int checker(int,int,int);

int main()
{
    int num1,num2,num3,ans;
    printf("Please enter any 3 integer to get their average\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    ans =  checker(num1,num2,num3);
    printf("%d is the average",ans);
    return 0;
}//end main

int checker(int num1,int num2,int num3)
{
    int ans;
    ans = (num1 + num2 + num3)/3;
    return ans;
}//end cheker
