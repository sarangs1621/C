# include <stdio.h>
void swap(int a,int b)
{
    printf("Original Numbers are : %d %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nNumbers after swapping are : %d %d",a,b);
}

void large(int num1,int num2,int num3)
{
    if (num1>num2 && num1>num3 )
    {
        printf("\nnum1 is the largest");
    }
    else if(num2>num3 && num2>num1)
    {
        printf("\nnum2 is the largest");
    }
    else
    {
        printf("\nnum3 is the largest");
    }
}
int main()
{
    int a,b,num1,num2,num3;
    printf("Enter two numbers\n");\
    scanf("%d %d",&a ,&b);
    printf("Enter three numbers:\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    swap(a,b);
    large(num1,num2,num3);
    return 0;
}