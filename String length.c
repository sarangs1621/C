
//Find the length of a string using strlen
#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int i;

    printf("enter a string:");
    scanf("%s",str);

    printf("Length of a string is: %ld",strlen(str));

    return 0;
}
/*

//Finding length of string using for loop 
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i;

    printf("enter a string:");
    scanf("%s",str);

    for (i = 0; str[i]!= '\0'; ++i);
    printf("Length of Str is %d", i);

    return 0;
}
*/