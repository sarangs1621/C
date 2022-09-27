#include <stdio.h>
int sum(int a)
{
    int i,sum=0;
    for(i=1;i<=a;i++)
    {
        sum+=i;
    }
    return sum;
}

int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    printf("Sum upto the number is ");
    printf("%d",sum(a));
    return 0;
}