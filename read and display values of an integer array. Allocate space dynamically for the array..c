#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int *a = (int *)malloc(n*sizeof(int));
    for(int i = 0 ; i < n; i++)
    {
		scanf("%d",&*(a+i));
	}
    for (int i = 0; i < n; i++)
    {
		printf("%d ",*(a+i));
	}
    free(a);
    return 0;    
}