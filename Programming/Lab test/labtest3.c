/*
Erik Grunnér
22/02/2018
Lab Test 3

This program is a currency converter from euro to dollar
and from dollar to euro, The converted figures will be averaged and displayed
*/

#include <stdio.h>

#define DOLLAR 1.19//I use these for the currency conversion later on
#define EURO 0.84
#define TURNS 3 //just in case you want to alter the program

//prototypes

float change_to_Euro(float *);
float change_to_Dollar(float*);

int main()
{
    float user_vals[3];
    int option,i;
    float average;
    do
    {
        printf("\nPlease choose an option\n1.Convert Dollars to Euro\n2.Convert Euro to Dollars\n3.Exit");//menu options
        scanf("%d",&option);

        if(option == 1 || option == 2)
        {
            for(i=0;i<TURNS;i++)//here we ask for the figures that will be converted
                    {
                        printf("Please enter figure %d to be converted",(i+1));
                        scanf("%f",(user_vals+i));
                    }//end for
        }//end if

        switch(option)//switch is used to enable the menu
        {
            case 1:// THis case id for dollar to euro
                {
                    average = change_to_Euro(user_vals);//call the function also get the average back after
                    printf("\nThe Average of the %d Converted figures is %.2f\n\n",TURNS,average);
                    break;//makes sure te other options aren't executed
                }//end case 1
            case 2://this case is for euro to dollar
                {
                    average = change_to_Dollar(user_vals);//call the function also get the average back after
                    printf("\nThe Average of the %d Converted figures is %.2f\n\n",TURNS,average);
                    break;
                }//end case 2
            case 3:
                {
                    printf("Goodbye");
                    break;
                }// end case 3
            default:
                {
                    printf("Invalid input :(\nTry again");//in case someone goes the wrong way
                    break;
                }// end default
        }//end switch

    }// end do while
    while(option != 3);
}//end main

float change_to_Euro(float array[])
{
    int i;
    float average;
    float sum =0;
    float array2[3];

    for(i=0;i<TURNS;i++)
    {
        *(array2+i) = *(array+i) * EURO;//here we are converting and storing in another array
        sum += *(array2+i);//getting to sum for the later average calculation
        printf("\n%.2f Dollars is equal to %.2f Euro",*(array+i),*(array2+i));
    }
    average = sum / TURNS;
    return average;
}// end change_to_Euro

float change_to_Dollar(float array[])
{
    int i;
    float average;
    float sum =0;
    float array2[3];

    for(i=0;i<TURNS;i++)
    {
        *(array2+i) = *(array+i) * DOLLAR;//here we are converting and storing in another array
        sum += *(array2+i);//getting to sum for the later average calculation
        printf("\n%.2f Euro is equal to %.2f Dollars",*(array+i),*(array2+i));
    }// end for
    average = sum / TURNS;
    return average;
}// end change_to_Dollar
