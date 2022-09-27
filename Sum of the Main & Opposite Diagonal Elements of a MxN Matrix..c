#include <stdio.h>
int main()
{
  int m, n, i, j, sum;
  printf("enter no .of rows of matrix:");
  scanf("%d", & m);
  printf("enter no .of columns of matrix:");
  scanf("%d", & n);
  int arr[m][n];
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("element arr[%d][%d]:", i, j);
      scanf("%d", & arr[i][j]);
    }
  }
  printf("given matrix:\n");
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("%d\t", arr[i][j]);
    }
    printf("\n");
  }
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (i == j)
      sum += arr[i][j];
    }
  }
  printf("sum of diagonal elements is %d", sum);
  sum = 0;
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (i + j == n - 1)
      sum += arr[i][j];
    }

  }

  printf("\nsum of opp diagonal elements is %d", sum);

  return 0;
}
