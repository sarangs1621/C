#include <stdio.h>
#include <math.h>
int main()
{
    int n,s;
    printf("Enter the Number of digits\n:");
    scanf("%d",&n);
    printf("Enter the sum:\n");
    scanf("%d",&s);
    printf("%d digit numbers which gives the sum of %d is \n",n,s);
    for (int i = pow(10,n-1); i < pow(10,n); i++)
    {
        int a=i;
        int sum = 0;
        while (a > 0)
        {
            sum+=a%10;
            a/=10;
        }
        if (sum == s)
        {
            printf("%d ",i);
        }       
    }
    return 0;    
}

/*
#include <stdio.h>
 
// Function to find all n–digit numbers with a sum of digits equal
// to `target` in a bottom-up manner
void findNdigitNums(char result[], int index, int n, int target)
{
    // if the number is less than n–digit and its sum of digits is
    // less than the given sum
    if (index < n && target >= 0)
    {
        char d = '0';
 
        // special case: number cannot start from 0
        if (index == 0) {
            d = '1';
        }
 
        // consider every valid digit and put it in the current
        // index and recur for the next index
        while (d <= '9')
        {
            result[index] = d;
            int digit = (d - '0');
            findNdigitNums(result, index + 1, n, target - digit);
            d++;
        }
    }
 
    // if the number becomes n–digit and its sum of digits is
    // equal to the given sum, print it
    else if (index == n && target == 0) {
        printf("%s ", result);
    }
}
 
int main()
{
    int n = 3;          // n–digit
    int target = 6;        // given sum
 
    // character array to store the result
    char result[n + 1];
    result[n] = '\0';      // null terminate the array
 
    findNdigitNums(result, 0, n, target);
 
    return 0;
}
*/

