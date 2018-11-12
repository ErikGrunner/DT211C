/*
23/10/17
problem 1
Erik grunnér
*/

#include <stdio.h>

int main()
{
    int firstarray[5];
    int secondarray[5];
    int i;
    
    printf("please give me 5 integers\n");
    
    for(i=0;i<5;i++)
    {
        scanf("%d",&firstarray[i]);
        flushall();
    }
    
    for (i=0;i<5;i++)
    {
        secondarray[i]=firstarray[i];
        printf("%d",secondarray[i]);
    }
    getchar();
    return 0;
}