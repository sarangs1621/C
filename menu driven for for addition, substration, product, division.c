#include <stdio.h>
int add(int a,int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int mul(int a, int b)
{
    return a*b;
}
float div(int a,int b)
{
    return (float)a/b;
}
int main()
{
    int a,b,c;
    printf("Enter your choice : \n1-Add \n2-Difference \n3-Product \n4-Division \n:");
    scanf("%d",&c);
    printf("Enter the two numbers\n");
    scanf("%d%d",&a,&b);
    if(c==1)
    {
        printf("Sum = %d",add(a,b));
    }
    else if(c==2)
    {
        printf("Difference = %d",sub(a,b));
    }
    else if(c==3)
    {
        printf("Product = %d",mul(a,b));
    }
    else if(c==4)
    {
        printf("Quotient = %f",div(a,b));
    }
    return 0;
}