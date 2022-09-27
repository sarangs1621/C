#include<stdio.h>
int main()
{
   int num,r;

   printf("\nEnter any number:");
   scanf("%d",&num);

   r=rf(num);
   printf("\nAfter reverse the no is :%d",r);
   return 0;
}
int sum=0,rem;
rf(int num)
{
   if(num)
   {
      rem=num%10;
      sum=sum*10+rem;
      rf(num/10);
    }
   else
      return sum;
   return sum;
}