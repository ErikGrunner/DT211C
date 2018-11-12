/*
Author Erik Grunnér
Date 02/10/17
problem 2
*/
#include <stdio.h>

int main()
{
    char ch1,ch2;
    printf(" enter two characters\n");
    scanf("%1s",&ch1);
    scanf("%1s",&ch2);
    flushall();
    
    printf("you entered %d and %d",ch1,ch2);
    getchar();
    
    return 0;
}
    