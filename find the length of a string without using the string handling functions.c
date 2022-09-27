#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char s[100];
	printf("Enter the string\n");
	scanf("%s",s);
	for(i=0;s[i+1]!='\0';i++);
	printf("Length of the string is %d",i+1);
	printf("\nLength of the string using starlen is %d",strlen(s));
	return 0;
}
