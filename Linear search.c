#include <stdio.h>
int search(int a[], int n, int x) 
{
 
  for (int i = 0; i < n; i++)
  {
    if (a[i] == x)
      return i;
  else
     return -1;
 }
}

int main() {
  int array[10],i;
  printf("Enter the elements :");
  for (i=0;i<10;i++){
	scanf("%d",&array[i]);}
  int x ;
  printf("Enter the value of x :");
  scanf("%d",&x);
  
  int n = sizeof(array) / sizeof(array[0]);

  int result = search(array, n, x);

  if (result == -1) 
       printf("Element not found") ;
  else
       printf("Element found at index: %d", result);
       
   return 0;    
}
