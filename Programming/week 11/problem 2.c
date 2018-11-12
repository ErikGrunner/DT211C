/*
labs 11
25/01/2018
erik grunner
dma
problem 2 part 9
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 8


int main()
{

    char chars[] = {'a',' ','b',' ','c',' ',' ','d'};
    int i;

    for(i=0;i<SIZE;i++)
    {
        if(*(chars+i)== ' ')
        {
           *(chars+i) = '_';
        }
    }

    for(i=0;i<SIZE;i++)
    {
        printf("%c",*(chars+i));
    }//end for

    return 0;
}//end main
