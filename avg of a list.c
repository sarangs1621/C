#include <stdio.h>
float average(int a[],int n)
{
  float avg=0;
  int sum=0;
  for (int i=0;i<n;i++)
  {
    sum+=a[i];
  }
  avg = sum/n;
  return avg;
}

int main()
{
  int arr[100];
  int n;
  float avg;
  printf("Enter the number of elements in the array:");
  scanf("%d",&n);

  for (int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  avg=average(arr,n);
  printf("Average is :%f",avg);
  return 0;
}
