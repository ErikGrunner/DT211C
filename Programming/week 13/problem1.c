/*
labs week 13
problen 1
08/02/2018
erik grunner
*/

#include <stdio.h>
//prorottypes

int checker(int);

int main()
{
    int num,ans;
    printf("Please enter any integer to check if its odd or even\n");
    scanf("%d",&num);
    ans =  checker(num);

    if(ans == 0)
    {
        printf("%d is even",num);
    }//0end if
    else
    {
        printf("%d is odd",num);
    }//end else
    return 0;
}//end main

int checker(int num)
{
    int ans;
    ans = num % 2;
    return ans;
}//end cheker
