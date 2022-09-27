#include <stdio.h>
int main()
{
   int n;
   printf("enter a number:");
   scanf("%d",&n);
   
   int a[n],sum=0;
   printf("Enter the elements:");
   for (int i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
      sum+=a[i];
   }
   printf("sum is = %d",sum);
   return 0;
}