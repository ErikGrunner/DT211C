/*
labs 11
25/01/2018
erik grunner
dma
problem 2 part 9
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5


int main()
{
    float litre[] = {11.3,15,10.6,16.33,9.6};
    float miles[] = {465,963,163,166,226};
    int mpl[5];
    int i;

    for(i=0;i<SIZE;i++)
    {
        (*(mpl+i)) = (*(miles+i))/(*(litre+i));
        printf("%d Miles per Litre\n",*(mpl+i));
    }// end for

    return 0;
}
