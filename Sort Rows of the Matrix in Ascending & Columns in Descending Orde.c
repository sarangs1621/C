#include <stdio.h>
int main()
{
  int m, n, i, j, x, temp;
  printf("enter no .of rows of matrix:");
  scanf("%d", & m);
  printf("enter no .of columns of matrix:");
  scanf("%d", & n);
  int arr[m][n];
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      printf("element arr[%d][%d]:", i, j);
      scanf("%d", & arr[i][j]);
    }
  }
  printf("given matrix:\n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      printf("%d\t", arr[i][j]);
    }
    printf("\n");
  }
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      for (x = 0; x < n - 1; x++) {
        if (arr[i][x] > arr[i][x + 1]) {
          temp = arr[i][x];
          arr[i][x] = arr[i][x + 1];
          arr[i][x + 1] = temp;
        }
      }
    }
  }
  printf("array in ascending oreder\n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      printf("%d\t", arr[i][j]);
    }

    printf("\n");
  }
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      for (x = 0; x < n - 1; x++) {
        if (arr[i][x] < arr[i][x + 1]) {
          temp = arr[i][x];
          arr[i][x] = arr[i][x + 1];
          arr[i][x + 1] = temp;
        }
      }
    }
  }
  printf("array in descending oreder\n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      printf("%d\t", arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}
