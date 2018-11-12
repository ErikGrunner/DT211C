/*
6/11/17
Erik Grunner
Labs Week 7
Problem 4
*/
#include <stdio.h>

#define SIZE 5

int main()
{
    int i;
    int a[SIZE];
    int b[SIZE];
    
    printf("please enter %d intergers for the first array\n",(int)( sizeof(a) / sizeof(a[0]) ));
    
    for (i = 0; i < SIZE; i++)//scanning in arrays
    {
       scanf("%d",&a[i]);
        flushall();       
    }
    printf("please enter %d intergers for the second array\n",(int)( sizeof(b) / sizeof(b[0]) ));
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d",&b[i]);
        flushall();
    }
    for (i = 0; i < SIZE; i++)//prints and multiplying the arrays
    {
        
        printf("\nelement %d is %d",(i+1),(a[i]*b[i]));
    }
    getchar();
    return 0;
}//end main