#include <stdio.h>
#include <math.h>
float sum(int n)
{
    int i,f=1;
    float s;
    for(i=1;i<=n;i++)
    {
        f=f*i;
        s+=(pow(i,i)/f);
    }
    return s;
}
int main()
{
    int n;
    printf("Enter the limit\n");
    scanf("%d",&n);
    printf("Sum of the series = %f",sum(n));
    return 0;
}