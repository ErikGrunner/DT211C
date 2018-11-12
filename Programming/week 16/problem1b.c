/*
08/3/18
erik grunner
lab 16
problem 1b
more srtings*/

#include <stdio.h>

main()
{
    char country[50];
    char *check;
    char country1[] = "australia";
    char country2[] = "belgium";
    char country3[] = "china";
    char country4[] = "denmark";
    char country5[] = "england";
    char country6[] = "france";
    char country7[] = "greece";
    char country8[] = "ireland";
    char country9[] = "scotland";
    char country10[] = "wales";






    printf("Excuse me Country please");
    gets(country);

    if(strcmp(country1,country) == 0 )
    {
        printf("Canberra");

    }
    else if(strcmp(country2,country) == 0 )
    {
        printf("");
    }

}
