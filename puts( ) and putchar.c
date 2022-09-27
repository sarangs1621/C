#include <stdio.h>
int main()
{
  char str2[50];
  printf("\nfor str2:");
  scanf("%s", str2);
  printf("\nusing printf :%s\t", str2);
  char str[50];
  int str1[50];
  printf("\nfor str:");

  scanf("%s", str);
  puts(str);

  printf("\nfor str1:");
  scanf("%d", str1);
  putchar(str1);
  return 0;
}
