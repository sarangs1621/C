#include <stdio.h>
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int a,b;
    printf("Enter 2 number:");
    scanf("%d%d",&a,&b);
    printf("Sum of the number:");

    printf("%d",sum(a,b));
    return 0;
}