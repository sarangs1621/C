#include <stdio.h>

int main()
{
	int a, b;
	int add, sub, multi, div, rem;
	
	printf("\nEnter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	
	add = a+b;
	sub = a-b;
	multi = a*b;
	div = a/b;
	rem = a%b;
    
    printf("\nAddition: %d",add);
	printf("\nSubstraction: %d",sub);
	printf("\nMultiplication: %d",multi);
	printf("\nDivision: %d",div);
	printf("\nReminder: %d",rem);
	return (0);
	
}
