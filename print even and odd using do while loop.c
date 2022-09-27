#include <stdio.h>
int main()
{
	int i = 1 , n;
	printf("\nPrint all the even and odd numerbes from :");
	scanf("%d",&n);
	do
	{
		if(i%2==0)
		{
			printf("even: %d\n",i);
		}
		else
		{
			printf("odd: %d\n",i);
		}
		i = i+1;
	}while (i<=n);
}
