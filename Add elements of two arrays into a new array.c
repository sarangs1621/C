#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n], b[n], c[n];
    printf("Enter the elements for the first array\n: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        printf("Enter the elements for the second array\n: ");
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
        printf("Array after summation:\n ");
    }
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
        printf("%d",c[i]);
    }
    return 0;   
}