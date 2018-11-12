/*
LAbs week 8
Erik Grunner
Problem 2
*/

#include <stdio.h>

#define ROW 6
#define COL 4

int main()
{
    int sum=0;
    
    int data[ROW][COL] = {3,2,5,7,4,2,
                          1,4,4,8,13,1,
                          9,1,0,2,0,0,
                          0,2,6,3,1,8};
    // declare the sum
    int i, j;

    // compute the sum
    for ( i=0; i < ROW; i++)
    {
        for ( j=0; j < COL; j++) 
        {
            sum = sum + data[i][j];
        }
    }
    // display the sum
    printf("the sum of the array is %d",sum );
    
    getchar();
    return 0;
}//end main