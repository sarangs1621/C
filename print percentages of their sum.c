#include <stdio.h>

int main()
{
   int p, q, r, s, sum;
   float p1, q1, r1, s1;
 
   printf("\nEnter 4 Numbers: ");
   scanf("%d %d %d %d", &p, &q, &r, &s);
 
   sum = p + q + r + s;
   printf("\nSum:%d", sum);
 
   p1 = p*100/sum;
   q1 = q*100/sum;
   r1 = r*100/sum;
   s1 = s*100/sum;
   
   printf("\nPercentage of p:%f",p1);
   printf("\nPercentage of q:%f",q1);
   printf("\nPercentage of r:%f",r1);
   printf("\nPercentage of s:%f",s1);
 
   return (0);
}
