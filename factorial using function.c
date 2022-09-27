#include <stdio.h>
int fact(int n)
{
    int i,f;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n;
    printf("Enter a Integer number\n");
    scanf("%d",&n);
    printf("Factorial of the given number =");
    printf("%d",fact(n));
    return 0;
}