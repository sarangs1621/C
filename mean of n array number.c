#include <stdio.h>
int main()
{
	int n,sum=0;
	printf("Number of elements in the array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elemnts: \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("Mean :%d",sum/n);
	return 0;
}
