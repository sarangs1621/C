void fibo(int n)
{
    int a=1,b=1,c,i;
    printf("\n%d %d ",a,b);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}
int main()
{
    int n;
    printf("Enter the limit\n");
    scanf("%d",&n);
    printf("Fibonacci Series until %d terms :",n);
    fibo(n);
    return 0;
}