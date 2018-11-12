/*
Lab Test 4th december,2017
Erik Grunnér
This program will ask the user about the length and fuel consumption of several trips
Then it will calculate the miles per gallon the user got from their vehicle.
This will be done using arrays and only pointer notation
*/

#include <stdio.h>
#include <stdlib.h>

#define NO_OF_TRIPS 5


int main()
{
    int i;//for the loop to use
    //initialising arrays
    float gallon[NO_OF_TRIPS];
    float miles[NO_OF_TRIPS];
    float mpg[NO_OF_TRIPS];

    //initialisng pointers
    float *ptr1;
    float *ptr2;
    float *ptr3;

    //pointing the pointers at the first address of the arrays
    ptr1 = &gallon;
    ptr2 = &miles;
    ptr3 = &mpg;


    for(i=0;i< NO_OF_TRIPS;i++)//will repeat depending on the 'NO_OF_TRIPS'
    {
        //gathering info from the user and placing it into the arrays using pointer notation
        printf("How long was trip %d in miles?",(i+1));
        scanf("%f",&*(ptr2+i));
        printf("And how many Gallons of fuel did you use on that trip?");
        scanf("%f",&*(ptr1+i));

        *(ptr3+i) = *(ptr2+i) / *(ptr1+i);//calculation the mile per gallon

        printf("Wow on that trip your Vehicle did %.2f Miles to the gallon\n\n",*(ptr3+i));//telling the user their mpg

    }//end for
    getchar();//hold the program open for the last answer to be displeyed
    return 0;
}//end main
