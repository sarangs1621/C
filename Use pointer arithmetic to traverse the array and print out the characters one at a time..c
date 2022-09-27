#include <stdio.h>
#include <string.h>
int main()
{
	char a[]="Jumbo";
	char *p = a;
	for(int i=0;i<strlen(a);i++)
	{
		printf("%c\n",(char)*p);
		p+=1;
	}
	return 0;
}
	
