int main()
{
    int n;
    printf("Enter the order of the Square matrix\n");
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                a[i][j]=0;
            }
            else if(i<j)
            {
                a[i][j]=1;
            }
            else
            a[i][j]=-1;
        }
    }
    printf("Matrix is \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

