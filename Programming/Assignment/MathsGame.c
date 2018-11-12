/*
First Assignment
Start Date : 25/10/2017
Author : Erik Grunnér
Description: Fun maths game that asks you taxing questions and corrects your answers from ages 5-7
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define QUESTION_MAX 5
#define RANDOM_MAX 9

int main()
{
    /*
    Declaring my variables
    */
    int menu=0;
    int exit=0;
    int questions=0;
    float answer=0;
    int correctanswers=0;
    int incorrectanswers=0;
    int i,j;
    int random1=0;
    int random2=0;
    
    do
    {
        menu=0;//reset the menu variable to ensure correct error checking
        clrscr();//clear the screen of previous outputs
        printf("Number of Questions(1)\nStart Quiz(2)\nShow Score(3)\nExit(4)\n");
        scanf("%d",&menu);//asking the user which menu option they would like to select
        flushall();
        
        switch(menu)//executes whichever option the user picks
        {
            case 1://asking the user 
            {
                printf("How many questions would you like in the quiz?(1-5)\n");

                do//used to let the user enter again if an invalid option is chosen
                {
                    scanf("%d",&questions);//scan in the choice
                    flushall();
                    if(questions<1 || questions>QUESTION_MAX)//making sure that the user chose a valid option
                    {
                        printf("Error Invalid input\n");
                    }//end if
                }
                while(!(questions<=QUESTION_MAX && questions>=1));
                    
                break;
            }//end case 1
            case 2://start of the quiz
            {
                if(questions>0 && questions<(QUESTION_MAX+1))//only starts when the number of questions has been chosen
                {
                    correctanswers=0;//resetthe scores
                    incorrectanswers=0;

                    for(i=0;i<questions;i++)//used to varie the amount of questions
                    {
                    
                        random1 = (rand() % RANDOM_MAX);// provides a random number from 0-9
                        random2 = (rand() % RANDOM_MAX);
                    
                    
                        printf("%d*%d\n",random1,random2);//outputs a sum to the user
                        j=0;
                        
                        while(j==0)//loop in case of invalid input
                        {
                            if(scanf("%d", &answer) != 1)//scans for an answer
                            {
                                flushall();
                                printf("Invalid Input, Try Again");
                                getchar();
                            }
                            else//if you have a valid input
                            {
                                j++;
                                if(random1*random2==answer)//checks the answer and ajusts score accordingly
                                {
                                    correctanswers++;
                                    printf("Correct\n");
                                }//end if
                                else
                                {
                                    printf("Incorrect\nThe Answer is %d\n\n",(random1*random2));
                                    incorrectanswers++;
                                }//end else
                            }
                        }
                        
                        flushall();
                    

                    }//end for
                    
                }//end if
                else
                {
                    printf("You can't do this yet\n");//error message 
                    getchar();
                }//end else                
                break;
            }//end case 2
            case 3://displays score of previous round
            {
                if(correctanswers!=0 || incorrectanswers!=0)//if the user played it will display a score
                {
                    printf("You answered %d questions correctely.\nYou answered %d questions incorrectely.\n",correctanswers,incorrectanswers);
                }
                else//if not an error will appear
                {
                    printf("You can't do this yet\n");
                }
                getchar();
                break;
                
            }//end case 3
            case 4://used to gracefully exit
            {
                exit=1;
                break;
            }//end case 4
            default://error message for odd inputs
            {
                
                printf("Error Invalid input\n");
                getchar();
                break;
            }//end default
        }//end switch
    }//end do
    while(exit==0);
    return 0;
}//end main
            