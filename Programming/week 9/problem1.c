/*
labs week 9
problem 1
erik grunner
20/11/17
*/

#include <stdio.h>

int problem1()
{
    int num = 0;
    char letter = 'a';

    int *ptr1;
    char *ptr2;

    ptr1 = &num;
    ptr2 = &letter;

    printf("Contents %d Address %p\n",num,&num);
    printf("Contents %c Address %p\n",letter,&letter);

    printf("pointers %p\n",ptr1);
    printf("pointers %p\n",ptr2);

    printf("dereference %d\n",*ptr1);
    printf("dereference %c\n",*ptr2);

    return 0;
}
