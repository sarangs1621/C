#include <stdio.h>

int main()
{
	float v,r,sa;
	
	printf("enter radius of the sphere: ");
	scanf("%f",&r);
	
	sa = 4*(22/7)*r*r;
	v=(4.0/3)*(22/7)*r*r*r;
	
	printf("Volume: %f\n",v);
	printf("Surface Area: %f",sa);
	
	return 0;
}
