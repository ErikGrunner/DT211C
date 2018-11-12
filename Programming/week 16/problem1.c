/*
08/3/18
erik grunner
lab 16
problem 1
more srtings*/

#include <stdio.h>

main()
{
    char name[50];
    char *check;
    char namelist[] = "johnstevejoepaullogandaviderik";




    printf("Excuse me name please");
    gets(name);

    check = strstr(namelist,name);
    *(check+strlen(name)) = '\0';

    if(strcmp(check,name) ==0 )
    {
        printf("Come on in Sorry I didn't recognise you %s",name);

    }
    else
    {
        printf("Not tonight buddy");
    }
}
