#include <stdio.h>
int main()
{
    int r,c;
    printf("Enter no of rows:");
    scanf("%d",&r);
    printf("Enter no of column:");
    scanf("%d",&c);
    int arr1[r][c];
    int arr2[r][c];
    for(int i=0;i<r;i++)
        for (int j = 0; j < c; j++)
        {
            printf("Enter the element in row %d colum %d of Mat1: ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    for(int i=0;i<r;i++)
        for (int j = 0; j < c; j++)
        {
            printf("Enter the element in row %d colum %d of Mat2: ",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        printf("%d ",arr1[i][j]+arr2[i][j]);
        printf("\n");
    }
    return 0;
}