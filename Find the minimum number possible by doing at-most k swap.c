#include <stdio.h>
#include <string.h>
int main()
{
	int k,change=0;
	char s[20],t;
	printf("Enter the number\n");
	scanf("%s",s);
	printf("Enter the value of k\n");
	scanf("%d",&k);
	for(int i=0;i<strlen(s);i++)
	{
		char small=s[i];
		int pos=i;
		for(int j=i+1;j<strlen(s);j++)
		{
			if(small>s[j])
			{
				small=s[j];
				pos=j;
				change+=1;
			}
		}
		if(k>0 && change!=0 )
		{
			t=s[pos];
			s[pos]=s[i];
			s[i]=t;
			k-=1;
			change=0;
		}
	}
	puts(s);
}