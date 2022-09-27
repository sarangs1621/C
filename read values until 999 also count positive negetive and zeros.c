#include <stdio.h>
int main()
{
	int j = 0, t = 0, d = 0, e = 0;
	while(j!=999)
	{
		printf("input number: ");
		scanf("%d",&j);
		if (j<0)
		{
			t = t+1;
		}
		else if (j > 0)
		{
			d = d+1;
		}
		else if (j == 0)
		{
			e = e+1;
		}
	}
	printf("\nNegetive: %d",t);
	printf("\nPositive: %d",d);
	printf("\nZero: %d",e);
	
}
