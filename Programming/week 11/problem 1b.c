/*
labs 11
25/01/2018
erik grunner
dma
*/

#include <stdio.h>
#include <stdlib.h>



int main()
{
   int num_of_nums = 0;
   int num_of_bytes;
   int *ptr;
   int i;
   int sum = 0;

   printf("HOw many numbers would you like to enter?");
   scanf("%d",&num_of_nums);

   num_of_bytes = num_of_nums * sizeof(int);

   //using malloc
   ptr = malloc(num_of_bytes);

   if(ptr == NULL)
   {
       printf("Allocation failed");
   }//end if
   else
   {
       printf("please enter your numbers\n");
      //put the numbers in now
      for(i=0;i<num_of_nums;i++)
      {
          scanf("%d",&*(ptr+i));
          sum = sum + (*(ptr+i));
      }//end for
      for(i=0;i<num_of_nums;i++)
      {
          printf("%d,",*(ptr+i));
      }//end for

      printf("\nthe sum is %d",sum);

   }//end else

   return 0;
}
