#include <stdio.h>
int main()
{
    int r,c,s=0;
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
            s+=arr[i][j];
        }
    printf("Sum = %d\n",s);
    return 0;
}