#include <stdio.h>
void maxmin(int a[], int n, int max, int min)
{
    if (a[n] > max)
    {
        max = a[n];
    }
    if (a[n] < min)
    {
        min = a[n];
    }
    n > 0 ? maxmin(a, n-1, max, min) : printf("Maximum of the array is %d\nMinimum of the array is %d",max,min);    
}
int main()
{
    int n;
    printf("Enter the number of elements\n: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements\n: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    maxmin(a, n-1, a[0], a[0]);
    return 0;    
}
