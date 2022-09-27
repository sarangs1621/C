#include <stdio.h>
int main()
{
	int n,max=0,maxi,mini,temp;
	printf("Enter the number of elements :");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements :\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int min=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			maxi=i;
		}
		if(a[i]<min)
		{
			min=a[i];
			mini=i;
		}
	}
	temp=a[maxi];
	a[maxi]=a[mini];
	a[mini]=temp;
	printf("New Array is \n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
