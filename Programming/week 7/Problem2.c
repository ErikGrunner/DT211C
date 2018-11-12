/*
6/11/17
Erik Grunner
Labs Week 7
Problem 2
*/
#include <stdio.h>

#define ROW 3
#define COL 2

int main()
{
    int matrix[ROW][COL];
    int i,j;
    int sum=0;
    float avg=0;
    int smallest=matrix[0][0];
    int largest=0;
    
    printf("please enter %d integers\n",(int)( sizeof(matrix) / sizeof(matrix[0][0]) ));
    
    for(i=0;i<ROW;i++)//entering data
    {
        for(j=0;j<COL;j++)
        {
            scanf("%d",&matrix[i][j]);
            flushall();
            sum = sum+ matrix[i][j];
        }//end for
    }//end for
     for(i=0;i<ROW;i++)//printing the array
    {
        for(j=0;j<COL;j++)
        {
            printf("%d,",matrix[i][j]);
            if(matrix[i][j]>largest)//finding largest num
            {
                largest=matrix[i][j];
            }
            if(matrix[i][j]<smallest)//finding smallest num
            {
                smallest=matrix[i][j];
            }
            
        }//end for
    }  //end for 
    
    avg = (float)sum/(ROW*COL);
    printf("\nThe average number is %.1f",avg);
    printf("\nThe Largest number is %d",largest);
    printf("\nThe Smallest number is %d",smallest);
    getchar();
    return 0;
}//end main