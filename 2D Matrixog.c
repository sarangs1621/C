#include<stdio.h>
int main()
{
    int m,n;
    int a[2][2] = {{1,2},{2,0},{3,2},{1,0}};
    printf("\nPrinting the Array\n");

    for (int m = 0; m < 2; m++)
    {
        for (int n = 0; n < 2; n++)
        {
            printf("%d ", a[m][n]);
        }
        printf("\n");
    }
    return 0;
    
}