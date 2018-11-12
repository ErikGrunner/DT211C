/*
LAbs week 8
Erik Grunner
Problem 3
*/

#include <stdio.h>

#define ROW 3
#define COL 2

int main()
{
    int array[ROW][COL]={4,8,6,5,9,7};
    int rowsum[ROW]={0};
    int colsum[COL]={0};
    int i,j;
    int highest=0;
    
    for(i=0;i<ROW;i++)
    {
       for(j=0;j<COL;j++)
       {
           rowsum[i]=rowsum[i]+array[i][j];
       }//end inner for
       printf("Row %d sums up to be %d\n",i,rowsum[i]);
   }//end outer for
   
   for(i=0;i<COL;i++)
    {
       for(j=0;j<ROW;j++)
       {
           colsum[i]=colsum[i]+array[j][i];
       }//end inner for
       printf("Col %d sums up to be %d\n",i,colsum[i]);
   }//end outer for
   
    for(i=0;i<COL;i++)
    {
       for(j=0;j<ROW;j++)
       {
            if(array[i][j]>highest)
            {
                highest=array[i][j];
            }//end if
       }//end inner for
   }//end outer for
   
   printf("highest number is %d",highest);
   
   
   getchar();
   return 0;
   }//end main