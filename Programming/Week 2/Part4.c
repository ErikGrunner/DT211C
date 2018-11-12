/*Erik Grunnér
25/09/2017
Labs 2 */

#include <stdio.h>

int main ()
{
    int a,b,c,d,e,f;
    
    a = 2%2;
    b = 3%2;
    c = 5%2;
    d = 7%3;
    e = 100%33;
    f = 100%7;
    
    printf("The remainders are %d,%d,%d,%d,%d,%d,",a,b,c,d,e,f);
    
    getchar();
    return 0;
}