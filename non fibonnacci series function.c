#include <stdio.h>
#include <stdlib.h>
void nfib(int n)
{
    int a=1,b=1,c,i,j;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        for(j=b+1;j<c;j++)
        {
            if(j>n)
            exit(0);
            printf("%d ",j);
        }
        a=b;
        b=c;
    }
}
int main()
{
    int n;
    printf("Enter the limit\n");
    scanf("%d",&n);
    printf("Non-Fibonacci Series upto %d :\n",n);
    nfib(n);
    return 0;
}