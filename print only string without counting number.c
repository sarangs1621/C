// Count only string without counting the number
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,count = 0;
    
    printf("Enter a String:");
    scanf("%s",str);
    
    for(i = 0; str[i] != '\0'; i++)
    {
        if( isdigit(str[i]))
        {
            count++;
        }
    }
    
    printf("%d",strlen(str) - count);
    
    return 0;
}