/*
08/3/18
erik grunner
lab 15
problem 2b
srtings*/

#include <stdio.h>

main()
{
    char *text = "abcd";
    char *p = text;
    p+= strlen(p)-1;
    while(text)
    {
        puts(p--);
    }
}
