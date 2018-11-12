/*
08/3/18
erik grunner
lab 15
problem 1b
srtings*/

#include <stdio.h>

main()
{
    char name[] = {'R','o','b','e','r','t'};

    puts(name);
    scanf("%s",&name);
    strcpy(name,"philip");
    //name = "philip";not valid code name is an address
}
