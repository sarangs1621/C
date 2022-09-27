#include <stdio.h>
int fact(int);
void series(int,int);
int main()
{
    int a,b;
    printf("Enter the starting and the Ending limit\n");
    scanf("%d%d",&a,&b);
    series(a,b);
    return 0;
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
void series(int a,int b)
{
    int i,d,temp;
    for(i=a;i<=b;i++)
    {
        int sum=0;
        temp=i;
        while(temp>0)
        {
            d=temp%10;
            sum+=fact(d);
            temp=temp/10;
        }
        if(i==sum)
        {
            printf("%d ",i);
        }
    }
}