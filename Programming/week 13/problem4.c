/*
labs week 13
problen 4
08/02/2018
erik grunner
*/

#include <stdio.h>
#define SIZE 3
//prorottypes

char scott(char[]);

int main()
{
    char chars[SIZE];
    char ans;
    int i;
    printf("Please enter 3 characters I will return the most used one if there is one");

    for(i=0;i<SIZE;i++)
    {
        scanf("%s",(chars+i));
        fflush(stdin);
    }

    ans = scott(chars);
    printf("Most used character was %c",ans);
}//end main

char scott(char chars[])
{
    char ans;
    if(chars[0]==chars[1] || chars[0]==chars[2])
    {
        ans = chars[0];
    }
    else if(chars[0]==chars[1] || chars[1]==chars[2])
    {
        ans = chars[1];
    }
    else if(chars[2]==chars[1] || chars[1]==chars[2])
    {
        ans = chars[2];
    }

    return ans;
}
