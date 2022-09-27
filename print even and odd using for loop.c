#include <stdio.h>
int main()
{
	int i ,num;
	printf("print all the even and odd numerbes from: ");
	scanf("%d",&num);
	printf("even number from 1 to %d are\n",num);
	
	for (i=1;i<=num;i++)
    	if(i%2==0)
    	{
			printf("%d\n",i);
		}
	printf("all odd numbers from 1 to %d are \n ",num);
	for (i=1;i<=num;i++)
    	if(i%2!=0)
    	{
			printf("%d\n",i);
		}
	
	
	return 0;
}
