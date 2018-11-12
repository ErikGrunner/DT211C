/*
Author Erik Grunnér
Date 02/10/17
problem 4
*/
#include <stdio.h>

int main()
{
    char ch1,ch2;
    printf(" enter two characters\n");
    ch1 = getchar();
    flushall();
    ch2 = getchar();
    flushall();

    printf("you entered\n");
    putchar(ch1);
    printf("  and  ");
    putchar(ch2);
    getchar();
    
    return 0;
}
    