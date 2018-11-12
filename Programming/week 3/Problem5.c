/*
Author Erik Grunnér
Date 02/10/17
problem 5
*/
#include <stdio.h>

int main()
{
    int i = 0;
    float f = 0;
    char c;
    double d = 0;
    
    printf(" enter an integer,float,double and a character");
    
    scanf("%d%f%lf",&i,&f,&d);
    flushall();
    scanf("%c",&c);
    flushall();
    
    printf("you entered \n %d\n%.2f\n%.2lf\n%c\n thats all",i,f,d,c);
    getchar();
    
    return 0;
    
}
    