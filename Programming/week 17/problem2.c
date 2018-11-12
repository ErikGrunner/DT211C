/*
labs week 17
15/3/18
problem 2
structs
*/

#include <stdio.h>

struct current_time
{
    int hour;
    int minute;
    int seconds;
};

struct current_time current_time;

main()
{
    printf("Please enter the current hour then minute the second");
    scanf("%d%d%d",&current_time.hour,&current_time.minute,&current_time.seconds);
    current_time.seconds++;
    printf("TIme  %d:%d;%d",current_time.hour,current_time.minute,current_time.seconds);
}
