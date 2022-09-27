#include <stdio.h>
int maxi(int a)
{
    int d,max=0;
    while(a>0)
    {
        d=a%10;
        if(d>=max)
        {
            max=d;
        }
        a=a/10;
    }
    return max;
}

int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    printf("Maximum digit in the number is ");
    printf("%d",maxi(a));
    return 0;
}