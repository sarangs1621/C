#include <stdio.h>
int main()
{
   int ar[10], sum=0;
   /*Populating the array */
   for(int i=0;i<10;i++)
   scanf("%d", &ar[i]);
   /*Adding the array elements*/
   for(int i=0;i<10;i++) sum+=ar[i];
   printf("Average = %f", sum/(float)10);
   return 0;
}