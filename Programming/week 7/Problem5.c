/*
6/11/17
Erik Grunner
Labs Week 7
Problem 5
*/

#include <stdio.h>

#define ROW 4
#define COLL 5

int main()
{
    int matrix[ROW][COLL];
    int i,j;
    
    printf("please enter %d intergers\n",(int)( sizeof(matrix) / sizeof(matrix[0][0]) ));
    
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COLL;j++)
        {
            scanf("%d",&matrix[i][j]);
            flushall();
        }//end for
    }//end for
    
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COLL;j++)
        {
            if(matrix[i][j]<0)
            {
                printf("\n%d is located in ROW%d COLUMN%d",matrix[i][j],(i+1),(j+1));
            }
                
        }//end for
    }//end for
    getchar();
    return 0;
}