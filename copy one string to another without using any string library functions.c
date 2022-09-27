#include <stdio.h>
#include <string.h>
int main()
{
	char s[50],s1[50];
	printf("Enter a string\n");
	scanf("%s",s);
	for(int i=0;s[i]!='\0';i++)
	{
		s1[i]=s[i];
	}
	printf("String s1 after copying from s is %s",s1);
	strcpy(s,s1);
	printf("\nString s1 after copying from s using strcpy is %s",s1);
	return 0;
}
