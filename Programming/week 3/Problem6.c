/*
Author Erik Grunn�r
Date 02/10/17
problem 6
*/
#include <stdio.h>

int main()
{
    int a,b,c,d;
    a=b=c=d=0;
    
    printf(" enter 4 integeres plzz");
    scanf("%d%d%d%d",&a,&b,&c,&d);//getting four integers at once
    flushall();
    printf("%d%d%d%d",d,c,b,a);
    
    getchar();
    return 0;
}