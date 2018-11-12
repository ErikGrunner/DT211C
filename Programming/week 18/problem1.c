
/*
erik grunner
22/3/18
LAbs week 17
data structures
problem 1
*/

#include <stdio.h>

struct data
{
    int a;
    float b;
};
struct data d, *p =&d;

int main()
{
    d.a = 2;
    d.b = 2.3;
    p->a = 2;
    p->b = 2.3;
    printf("a%d,b%.1f",d.a,d.b);
    (*p).a =2;
    (*p).b = 2.3;
    printf("a%d,b%.1f",d.a,d.b);
}
