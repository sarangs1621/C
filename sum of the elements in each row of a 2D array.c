#include <stdio.h>
int main()
{
    int r,c;
    printf("Enter no of rows:");
    scanf("%d",&r);
    printf("Enter no of column:");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++)
        for (int j = 0; j < c; j++)
        {
            printf("Enter the element in row %d colum %d: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }

    for(int i=0;i<r;i++)
    {
        int s=0;
        for (int j = 0; j < c; j++)s+=arr[i][j];
        printf("sum of row %d = %d\n", i+1,s);
    }
    return 0;
}