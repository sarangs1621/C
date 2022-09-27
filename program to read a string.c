#include <stdio.h>
int main()
{
	int n;
	printf("Enter the length of string\n");
	scanf("%d",&n);
	int i=0;
	printf("Enter the string\n");
  char str2[n];
  do
  {
	  str2[i]=getchar();
	  i++;
  }while(i<n);
  printf("String by getchar is %s",str2);
  char str[50], str1[50];
  printf("\nfor str:");
  scanf("%s", str);

  printf("using scanf :%s\t", str);

  printf("\nfor str1:");
  scanf("%[^o]s", str1);
  printf("\nusing scanset:%s\t", str1);
  return 0;
}
