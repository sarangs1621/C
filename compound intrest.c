#include <stdio.h>
#include <math.h>
float interest(float p,float r,float t)
{
    return (p*(pow((1+(r/100)),t)))-p;
}
int main()
{
    float p,r,t;
    printf("Enter the principle Amount\n");
    scanf("%f",&p);
    printf("Enter the rate of interest\n");
    scanf("%f",&r);
    printf("Enter the number of years\n");
    scanf("%f",&t);
    printf("The compound interest = %0.3f",interest(p,r,t));
    return 0;
}