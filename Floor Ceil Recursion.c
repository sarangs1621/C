#include <stdio.h>
#include <math.h>
void ans (float a[],int n)
{
    static int i = 0;
    printf("Ceil of %f = %f\n",a[i],ceil(a[i]));
    printf("Floor of %f = %f\n",a[i],floor(a[i]));
    if (n > 0)
    {
        i++;
        ans(a, --n);
    }
}
int main()
{
    int n;
    printf("Enter the number of elements\n:");
    scanf("%d",&n);
    float a[n];
    printf("Enter the elements in sorted\n:");
    for (int i = 0; i < n; i++)
    {
        scanf("%f",&a[i]);
    }
    ans(a,n-1);
    return 0;    
}

