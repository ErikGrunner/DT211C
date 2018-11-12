/*
LAbs week 8
Erik Grunner
Problem 1
*/

#include <stdio.h>

#define ROW 3
#define COL 4

int main()
{
    int array1[ROW][COL]={1,3,3,
                          5,6,6,
                          4,6,8,
                          7,9,5};
    int array2[ROW][COL]={1,3,3,
                          5,6,6,
                          4,6,8,
                          7,9,5};
    int array3[ROW][COL]={0};
    int i,j;
    
    for(i=0;i<ROW;i++)
    { 
        for(j=0;j<COL;j++)
        {
            array3[i][j]=array1[i][j]*array2[i][j];
        }//end inner for
    }//end outer for
    
    
    for(i=0;i<ROW;i++)
    { 
        for(j=0;j<COL;j++)
        {
            printf("%d*%d=%d\n",array1[i][j],array2[i][j],array3[i][j]);
        }//end inner for
    }//end outer for
    
    getchar();
    return 0;
}//end main