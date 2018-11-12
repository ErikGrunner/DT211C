/*
08/3/18
erik grunner
lab 15
problem 2c
srtings*/

#include <stdio.h>

main()
{
    int i;
    char name[50];
    printf("Please enter your name");
    gets(name);

    for(i=0;i<strlen(name);i++)
    {
        printf("%c ",*(name+i));
    }
}
