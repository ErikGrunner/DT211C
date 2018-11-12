/*
08/3/18
erik grunner
lab 15
problem 1c
srtings*/

#include <stdio.h>

main()
{
    char *text = "some text";

    printf("%s\n",text);
    printf("%c\n",*text);
    printf("%c\n",*"more text");
    printf("%c\n",*(text+1));
    printf("%s\n",text+1);
    printf(text);
    *(text+4) = '\0'; printf("\n%s\n",text);
    printf("%c","text[2]");
    printf("%s","text"+2);

}
