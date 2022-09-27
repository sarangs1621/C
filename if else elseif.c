#include <stdio.h>
 
int main()
{
   int n;
 
   printf("Enter your Mark\n");
   scanf("%d",&n);

   if ( n <= 100 && n >= 90 )
   {
       printf("Grade O");
   }

   else if ( n <=80 && n >= 70)
   {
       printf("Grade A+");
   }

   else if ( n <= 60 && n>= 50)
   {
       printf("Grade A");
   }

   else
   {
       printf("Invalid Input");
   }
   
   return 0;
}