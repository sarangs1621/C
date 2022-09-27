#include <stdio.h>
int main()
{
    int r,c,i,j,k;
    printf("Enter no of rows:");
    scanf("%d",&r);
    printf("Enter no of column:");
    scanf("%d",&c);
    int a[r][c],b[r][c],res[r][c];
    printf("Enter the first matrix element: \n");
    for(int i=0;i<r;i++)
    {
        for (int j = 0; j < c; j++)
        scanf("%d",&a[i][j]);
    }
    printf("Enter the second matrix element: \n");
    for(int i=0;i<r;i++)
    {
        for (int j = 0; j < c; j++)
        scanf("%d",&b[i][j]);
    }
    printf("Result: \n");
    for(i=0;i<r;i++)for(j=0;j<c;j++){
        res[i][j]=0;
        for(k=0;k<c;k++)
        res[i][j]+=a[i][k]*b[k][j];
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)printf("%d ",res[i][j]);
        printf("\n");
    }
    return 0;
}
