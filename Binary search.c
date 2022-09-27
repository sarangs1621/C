#include <stdio.h>

int main()
{
	
	int i, low, high, mid, n, k, a[10];

	printf("Enter number of elements :");
	scanf("%d",&n);

	printf("Enter the elements :\n");

	for(i = 0; i < n; i++)
		scanf("%d",&a[i]);
		
	printf("Enter value to be found :");
	scanf("%d", &k);
	low = 0;
	high = n - 1;
	mid = (low+high)/2;
	while (low <= high) 
	{
		if(a[mid] < k)
			low = mid + 1;
		else if (a[mid] == k)
		 {
			printf("%d found at location %d", k, mid+1);
		    break;
		}
		else
			high = mid - 1;
			mid = (low + high)/2;
	}
	if(low > high)
		printf("Not found! %d ", k);
	return 0;
}
