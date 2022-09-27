#include <stdio.h>
void sums(int a[], int i, int sum, int bal)
{
	int pre;
	if(i>0)
	    pre=a[i-1];
	else
	    pre=1;
	for (int k = pre; k <= sum; k++)
    {
        a[i] = k;
        if (bal > k)
        {
            sums(a, i + 1, sum, bal - k);
        }
        if (bal == k)
        {
            for (int j = 0; j <= i; j++)
            {
				printf("%d ", a[j]);
			}
			printf("\n");
		}
    }
}
int main(void)
{
	int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int a[n];
    sums(a, 0, n, n);
    return 0;
}

/*
#include <stdio.h>
 
// Utility function to print given array
void printArray(int nums[], int n)
{
    for (int i = 0; i <= n; i++) {
        printf("%d ", nums[i]);
    }
 
    printf("\n");
}
 
// Recursive function to print all combinations of positive integers
// in increasing order that sum to a given number
void printCombinations(int nums[], int i, int sum, int sum_left)
{
    // to maintain the increasing order, start the loop from the
    // previous number stored in `nums[]`
    int prev_num = (i > 0) ? nums[i - 1] : 1;
    for (int k = prev_num; k <= sum; k++)
    {
        // set the next array element to `k`
        nums[i] = k;
 
        // recur with the sum left and the next location in the array
        if (sum_left > k) {
            printCombinations(nums, i + 1, sum, sum_left - k);
        }
 
        // if the sum is found
        if (sum_left == k) {
            printArray(nums, i);
        }
    }
}
 
// Wrapper over `printCombinations()` function
void findCombinations(int sum)
{
    // create a temporary array for storing the combinations
    int nums[sum];
 
    // recur for all combinations
    int starting_index = 0;
    printCombinations(nums, starting_index, sum, sum);
}
 
int main(void)
{
    int sum = 5;
    findCombinations(sum);
 
    return 0;
}
*/