/*
First Assignment
Start Date : 25/10/2017
Author : Erik Grunnér
Description:
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define QUESTION_MAX 5
#define RANDOM_MAX 9


int main()
{
    int menu=0;
    int error=88;
    int questions=0;
    float answer=0;
    
    error=(scanf("%d",&menu));
    flushall();

    printf("%d",error);
    getchar();
    return 0;
}