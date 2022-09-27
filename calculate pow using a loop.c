
#include <stdio.h>
int main()
{
	int j, i, t, p = 1;
	printf("enter value of x: ");
	scanf("%d",&j);
	printf("enter value of y: ");
	scanf("%d",&t);
	for (i = 1; i<=t; i++)
	{
		p = p*j;
	}
	printf("The x^y is: %d", p);
	
}
