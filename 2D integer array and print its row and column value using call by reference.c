#include<stdio.h>
#include<stdlib.h>
int r,c;
void s(int arr[r][c]){
    int key;
    printf("Enter element to search: ");
    scanf("%d",&key);
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)
        {
            if(key==arr[i][j])
            {
                printf("row =%d\ncolumn=%d\n",i+1,j+1);
                exit(0);
            }
        }
    printf("Not Found");
}
int main()
{
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
    s(arr);
    return 0;
}