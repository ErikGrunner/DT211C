/*
erik grunner
labs problem 2
01/02/18
*/
#include <stdio.h>
//prototype
void magic(int,char);

int main()
{

    int num;
    char letter;

    printf("Please select a number");
    scanf("%d",&num);
    printf("please select a character");
    scanf("%c",&letter);
    scanf("%c",&letter);


    magic(num,letter);
}//end main

void magic(int val,char lego)
{
    int i;
    for(i=0;i<val;i++)
    {
        printf("\n%c",lego);
    }
}//end magic
