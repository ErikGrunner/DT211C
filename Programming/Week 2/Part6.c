/*Erik Grunnér
25/09/2017
Labs 2 */

#include <stdio.h>

int main()
{
    int a,b,c,e;
    float d;
    
    a = 15+10;
    b = 15-10;
    c = 5*10;
    d = 15.0/10.0;
    e = 15%3;
    
    printf("The answers are %d,%d,%d,%f,%d,",a,b,c,d,e);
    
    getchar();
    return 0;
}