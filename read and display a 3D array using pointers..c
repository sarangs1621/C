#include <stdio.h>
int main()
{
    int r,c,d;
    printf("Enter the number of rows\n");
    scanf("%d",&r);
    printf("Enter the number of columns\n");
    scanf("%d",&c);
    printf("Enter the number of planes to the back\n");
    scanf("%d",&d);
    int a[r][c][d];
    printf("Enter the Elements:");
    for(int k = 0; k < d; k++)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                scanf("%d", &*(*(*(a+i)+j)+k));
            }
        }
    }
   for(int k = 0; k < d; k++)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                printf("%d ",*(*(*(a+i)+j)+k));
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}