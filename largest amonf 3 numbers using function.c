#include <stdio.h>
int large(int a,int b,int c)
{
    int max;
    if(a>=b && a>=c)
    max=a;
    else if(b>=a && b>=c)
    max=b;
    else
    max=c;
    return max;
}

int main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("Largest of the numbers : ");
    printf("%d",large(a,b,c));
    return 0;
}