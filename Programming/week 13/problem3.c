/*
labs week 13
problen 3
08/02/2018
erik grunner
*/

#include <stdio.h>
//prorottypes

int checker(int,int,int);

int main()
{
    int num1,num2,num3,ans;
    printf("Please enter any 3 integer to find the higest one\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    ans =  checker(num1,num2,num3);
    printf("%d is the hiest one",ans);
    return 0;
}//end main

int checker(int num1,int num2,int num3)
{
    int ans;
    ans = num1;
    if(num2>ans)
    {
        ans= num2;
    }//end if
    if(num3>ans)
    {
        ans =num3;
    }
    return ans;
}//end cheker

