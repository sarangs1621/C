#include <stdio.h>
#include <string.h>
int main()
{
	char s[50],t[50];
	printf("Enter the first string\n");
	gets(s);
	printf("Enter the second string\n");
	gets(t);
	printf("String after concat is %s",strcat(s,t));
	return 0;
}
