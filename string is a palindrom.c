#include <stdio.h>
#include <string.h>
int main ()
{
	char s[50];
	int n,count=0;
	printf("Enter the string\n");
	scanf("%s",s);
	n=strlen(s);
	if(n%2==0)
	{
		for(int i=0;i<=n/2;i++)
		{
			if(s[i]==s[n-i-1])
			continue;
			else
			count++;
			break;
		}
		if(count!=0)
		printf("Not Palindrome\n");
		else
		printf("Palindrome\n");
	}
	else
	{
		for(int i=0;i<=((n-1)/2)-1;i++)
		{
			if(s[i]==s[n-i-1])
			continue;
			else
			count++;
			break;
		}
		if(count!=0)
		printf("Not Palindrome\n");
		else
		printf("Palindrome\n");
	}
	return 0;
}
