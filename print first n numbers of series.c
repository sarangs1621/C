#include <stdio.h>
void series(int n)
{
    int i,a=1,d,temp=1,temp1;
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        temp1=a;
        while(temp1>0)
        {
            d=temp1%10;
            if(d!=0)
            temp*=d;
            temp1/=10;
        }
        a+=temp;
        temp=1;
    }
}
int main()
{
    int n;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    series(n);
    return 0;
}