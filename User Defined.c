//functions user define
#include <stdio.h>
int add(int,int); //function prototype
int sub(int,int);
int multi(int,int);
int div(float,float);
int main()
{
   int a,b,c,res;
   printf("Enter Two numbers:");
   scanf("%d %d",&a,&b);
   printf("CHOICES ARE ---->");
   printf("\n0 - Sum");
   printf("\n1 - Difference");
   printf("\n2 - Multiplication");
   printf("\n3 - Division");

   printf("\nEnter your choice: ");
   scanf("%d",&c);
   if(c == 0)
   {
      res = add(a,b);
      printf("Sum : %d",res);
   }
   else if(c == 1)
   {
      res = sub(a,b);
      printf("\nDifference : %d",res);
   }
   else if(c == 2)
   {
      res = multi(a,b);
      printf("\nMultiplication : %d",res);
   }
   else if(c == 3)
   {
      res = div(a,b);
      printf("\nDivision : %d",res);
   }
}
int add(int c, int d)
{
   int r = c+d;
   return r;
}
int sub(int f, int g)
{
   int s = f-g;
   return s;
}
int multi(int r, int t)
{
   int o = r*t;
   return o;
}
int div(float p, float y)
{
   float u = p/y;
   return u;
}
