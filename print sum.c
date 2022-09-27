#include<stdio.h>

int main()
{
	int n,sum;
	printf("Enter the five digit integer number: ");
	scanf("%d",&n);
	
	sum=n%10+(n/10)%10+(n/100)%10+(n/1000)%10+(n/10000); 
	
	printf("\nThe sum of the digits is: %d",sum); 
	return 0;

}
