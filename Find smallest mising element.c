#include <stdio.h>
int main()
{
	int n;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the sorted array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
      if(a[i]>i)
      {
        printf("%d",i);
        return 0;
      }
	}
  printf("%d",n);
  return 0;
}


/*
#include <stdio.h>
 
// Function to find the smallest missing element in a sorted
// array of distinct non-negative integers
int findSmallestMissing(int nums[], int low, int high)
{
    // base condition
    if (low > high) {
        return low;
    }
 
    int mid = low + (high - low) / 2;
 
    // if the mid-index matches with its value, then the mismatch
    // lies on the right half
    if (nums[mid] == mid) {
        return findSmallestMissing(nums, mid + 1, high);
    }
    else {
        // mismatch lies on the left half
        return findSmallestMissing(nums, low, mid - 1);
    }
}
 
int main(void)
{
    int nums[] = { 0, 1, 2, 3, 4, 5, 6 };
    int n = sizeof(nums) / sizeof(nums[0]);
 
    int low = 0, high = n - 1;
 
    printf("The smallest missing element is %d", findSmallestMissing(nums, low, high));
 
    return 0;
}


// C program to find the smallest elements missing
// in a sorted array.
#include<stdio.h>

int findFirstMissing(int array[], int start, int end)
{
	if (start > end)
		return end + 1;

	if (start != array[start])
		return start;

	int mid = (start + end) / 2;

	// Left half has all elements from 0 to mid
	if (array[mid] == mid)
		return findFirstMissing(array, mid+1, end);

	return findFirstMissing(array, start, mid);
}

// driver program to test above function
int main()
{
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("Smallest missing element is %d",
		findFirstMissing(arr, 0, n-1));
	return 0;
}
*/