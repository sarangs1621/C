#include <stdio.h>
int main()
{
	int x,y;
	printf("Enter the size of the first array\n");
	scanf("%d",&x);
	printf("Enter the size of the second array\n");
	scanf("%d",&y);
	int a[x],b[y],c[x+y];
	printf("Enter the elements of the first array\n");
	for(int i=0;i<x;i++)
	scanf("%d",&a[i]);
	printf("Enter the elements of the second array\n");
	for(int i=0;i<y;i++)
	scanf("%d",&b[i]);
	for(int i=0;i<x;i++)
	{
		c[i]=a[i];
	}
	for(int i=0,j=x;i<y;i++,j++)
	{
		c[j]=b[i];
	}
	printf("Elements in the third array :\n");
	for(int i=0;i<x+y;i++)
	printf("%d ",c[i]);
	return 0;
}

/*
#include <stdio.h>
int findproduct (int arr[], int n, int left, int i)
{
    if(i==n)
    {
        return 1;
    }
    int curr = arr[i];
    int right = findproduct(arr,n,left*arr[i],i+1);
    arr[i] = left*right;
    return curr*right;
}
int main(void)
{
    int arr[] = {2, 3, 3, 5, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    findproduct (arr,n,1,0);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;    
}

#include <stdio.h>
int main()
{
    int n,p=1,a[50];
    scanf("%a",&n);
    printf("Enter the elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("After CHanging");
    for (int i = 0; i < n; i++)
    {
        p=1;
        for (int j = 0; j < n; j++)
        {
            if (i!=j)
            {
                p = p*a[j];
            }
            
        }
        printf("%d",p);
        
    }
    
}
*/