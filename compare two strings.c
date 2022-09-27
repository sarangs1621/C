#include <stdio.h>
#include <string.h>
int main()
{
	char s[50],t[50];
	printf("Enter the first string\n");
	gets(s);
	printf("Enter the second string\n");
	gets(t);
	printf("Comparing two strings : %d",strcmp(s,t));
	return 0;
}
