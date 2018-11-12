/*
Date:23/10/17
labtest1
Author:Erik Grunnér
*/

#include <stdio.h>

int main()
{
    //declaring my variables
    int terms = 0;
    int i;
    int fibonacci1 = 0;
    int fibonacci2 = 1;
    int fibonaccicurrent = 0;
    /*
        if anyone should need very large outputs 
        long integers should be used in place of the normal integers
        */
    
    //asking for user input
    printf("How many terms of the Fibonacci series would you like to see?\n");
    scanf("%d",&terms);
    flushall();
  
    switch(terms)
    {
        case 0:
        {
            break;
        }//end case
        case 1:
        {

            printf("0");
            break;

        }//end case
        case 2:
        {

            printf("0,1");
            break;
           
        }//end case
        default:
        {
            printf("0,1,");
            break;
        }//end default
    }//end switch
    
    
    
    for (i=0;i<(terms-2);i++)
    {
        fibonaccicurrent = (fibonacci1 + fibonacci2);//calculating the next number in the series
        
        if(i==(terms-3))
        {
            printf("%d",fibonaccicurrent);
        }//end if
        else
        {
            printf("%d,",fibonaccicurrent);
        }//end else
        fibonacci1 = fibonacci2;//moving figures around for the next number to be calculated
        fibonacci2 = fibonaccicurrent;
    }//end for loop
    
    getchar();
    return 0;
}//end main