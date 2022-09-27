#include <stdio.h>
int main()
{
	int i = 1, j, d;
	printf("enter any 5 digit:");
	scanf("%d",&j);
	while(i<=5)
	{
		d = j%10;
		printf("%d",d);
		j = j/10;
		i+= 1;
	}
}
