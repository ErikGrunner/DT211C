/*
This is a lotto game
There are six options
it will take your input ,display your guess, sort it check if you won, show you game stats and ask if you want to exit
Erik Grunner
Compiled with GNU GCC
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LOTTO_NUMS 6
//prototypes
void guesses(int *,int *);
void sort(int *);
int compare(int *, int *, int);
void rewards(int);
void show(int *);
int exit_game();
void stats(int *);

int main()
{
    int i,option;
    int matches = 0;
    int exit = 0;
    int guess[LOTTO_NUMS] = {0};
    int answers[LOTTO_NUMS] = {1,3,5,7,9,11};
    int stats_array[42] = {0};
    int bonus = 42;
    int all_guesses;

    do//to keep the menu up
    {
        if(*guess != 0)
        {
            system("CLS");
            printf("\n\nEnter Numbers (1)\nShow Guess(2)\nSort(3)\nCheck Results(4)\nDisplay Stats(5)\nExit Game(6)");
            scanf("%d",&option);
            fflush(stdin);//this prevents charcters from being entered

            switch(option)
            {
                case 1:guesses(guess,stats_array);
                break;
                case 2:show(guess);
                break;
                case 3:sort(guess);
                break;
                case 4:rewards(matches);
                break;
                case 5:stats(stats_array);
                break;
                case 6:option = exit_game();
                break;
                default:printf("Invalid Option");
                break;

            }//end switch
        }//end if
        else
        {//this is so that you have to enter numbers before other options become avaliable
                system("CLS");
                printf("\nEnter Numbers (1)\nExit Game(6)");
                scanf("%d",&option);
                fflush(stdin);//this prevents charcters from being entered

                switch(option)
                {
                    case 1:guesses(guess,stats_array);
                    break;
                    case 6:option = exit_game();
                    break;
                    default:printf("Invalid Option");
                    break;

                }//end switch
        }
        matches=compare(guess, answers, bonus);

    }//end do while
    while(option != 6);
    return 0;
}//end main

void guesses(int guess[],int stats[])
{
    int i,j;
    int exit = 0;
    printf("\nPlease enter Six unique Integers ranging from 1-42\n");
    for(i=0;i<LOTTO_NUMS;i++)
    {

        HOPOUT:scanf("%d",(guess+i));//this is where I check fro repeating numbers and that they are within range
        fflush(stdin);
        if(*(guess+i)>43 || *(guess+i)<1)
        {
            printf("invalid entry\n");
            goto HOPOUT;
        }//end if
        for(j=0;j<i;j++)
        {
            if(*(guess+i) == *(guess +j))
            {
                printf("invalid entry\n");
                goto HOPOUT;
            }//end if    rewards(matches);
        }//end for j

        stats[*(guess+i)]++;
    }//end for i

}//end guesses

void sort(int guess[])
{
    int i,j,tmp;
    for(i=0;i<LOTTO_NUMS;i++)//bubble sort because I think its the nicest sort to write.
    {
        for(j=0;j<LOTTO_NUMS;j++)
        {
            if(*(guess+i) < *(guess+j))
               {
                   tmp = *(guess+i);
                   *(guess+i) = *(guess+j);
                   *(guess+j) = tmp;
               }//end if
        }//end for j
    }//end for i
}//end sort

int compare(int guess[],int answers[], int bonus)
{
    int i,j;
    int matches = 0;
    for(i=0;i<LOTTO_NUMS;i++)
    {
        for(j=0;j<LOTTO_NUMS;j++)
        {
            if(*(guess+i) == *(answers +j))
               {
                   matches++;
               }//end if
            else if(*(guess+i) == bonus)
               {
                   matches = matches + 10;//the plus ten is used to represent the bonus in a score. it will end up adding 60
               }//end else if
        }//end for j
    }//end for i
    //printf("\nMatches: %d\n",matches);
    return matches;
    printf("\n");
    system("PAUSE");
}//end  compare

void rewards(int matches)
{
    switch(matches)//each score relates to a prize
    {
        case 63:printf("\nYou have won a Cinema Ticket");
        break;
        case 4:printf("\nYou have won a Night Out");
        break;
        case 64:printf("\nYou have won a Weekend Away");
        break;
        case 5:printf("You have won a Holiday");
        break;
        case 65:printf("You have won a New Car");
        break;
        case 6:printf("You have won the JackPot!!!!");
        break;
        default:printf("Sorry you won nothing :(");
        break;
    }//end switch
    printf("\n");
    system("PAUSE");
}//end rewards

void show(int guess[])
{
    int i;


    printf("You entered:");

    for(i=0;i<LOTTO_NUMS;i++)
    {
        printf(" %d",*(guess+i));
    }//end for
    printf("\n");
    system("PAUSE");

}//end show

int exit_game()
{
    char exit[10];
    printf("Are you sure you wish to Exit?\n(yes/no)");
    scanf("%s",exit);
    while(1==1)
    {
        if(strcmp(exit,"yes")==0)//comparing what you said to the string yes to see if you want to exit
        {
            return 6;
        }//end if
        else if(strcmp(exit,"no")==0)
        {
            return 0;
        }// end else if
    }//end while
}//end exit_game

void stats(int stats[])
{
    int i;
    printf("Here are the stats");
    for(i=0;i<42;i++)
    {
        if(stats[i] != 0)//doesn't display numbers that haven't been chosen
        {
            printf("\n%d has been guessed %d times this run",i,stats[i]);
        }//end if
    }//end for
    printf("\n");
    system("PAUSE");
}// end stats
