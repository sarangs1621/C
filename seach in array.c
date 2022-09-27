#include <stdio.h>
int search (int arr[],int n, int x)
{
    flag=0;
    for (int i=0;i<n;i++)
    {
        if(x==arr[i])
        {
            flag=1;
            break;
        }
    }
    return 0;
}

int main()
{
    int arr[100];
    int n;
    int index;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);

    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    index=seacrh(arr,n);
    print("Searched is: %d",index)
    return 0;
}