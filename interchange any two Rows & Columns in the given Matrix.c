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
    printf("Matrix:\n");
    for(int i=0;i<r;i++)
    {
        for (int j = 0; j < c; j++)
        printf("%d\t",arr[i][j]);
        printf("\n");
    }
    int r1,c1,r2,c2;
    printf("Enter thr 2 rows to be changed: ");
    scanf("%d %d",&r1,&r2);
    r1--;
    r2--;
    int arr2[c];for(int i=0;i<r;i++)arr2[i]=arr[r1][i];
    for(int i=0;i<r;i++){arr[r1][i]=arr[r2][i];arr[r2][i]=arr2[i];}
    printf("Row interchanged matrix: \n");
    for(int i=0;i<r;i++){for(int j=0;j<c;j++)printf("%d\t",arr[i][j]);printf("\n");}
    printf("Enter the 2 columns to be changed: ");
    scanf("%d %d",&c1,&c2);
    c1--;
    c2--;
    int arr3[r];for(int i=0;i<r;i++)arr3[i]=arr[i][c1];
    for(int i=0;i<r;i++){arr[i][c1]=arr[i][c2];arr[i][c2]=arr3[i];}
    printf("column interchanged matrix: \n");
    for(int i=0;i<r;i++){for(int j=0;j<c;j++)printf("%d\t",arr[i][j]);printf("\n");}
    return 0;
}