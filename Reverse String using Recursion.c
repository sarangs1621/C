/*
#include <stdio.h>
#include <string.h>
 
void reverse(char [], int, int);
int main()
{
    char str1[20];
    int size;
 
    printf("Enter a string to reverse: ");
    scanf("%s", str1);
    size = strlen(str1);
    reverse(str1, 0, size - 1);
    printf("The string after reversing is: %s\n", str1);
    return 0;
}
 
void reverse(char str1[], int index, int size)
{
    char temp;
    temp = str1[index];
    str1[index] = str1[size - index];
    str1[size - index] = temp;
    if (index == size / 2)
    {
        return;
    }
    reverse(str1, index + 1, size);
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
/*
Another Methord

#include <stdio.h>
#include <string.h>
 
// Function to swap two given characters
void swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}
 
// Recursive function to reverse a given string
void reverse(char str[], int l, int h)
{
    if (l < h)
    {
        swap(&str[l], &str[h]);
        reverse(str, l + 1, h - 1);
    }
}
 
int main()
{
    char str[] = "Techie Delight";
 
    reverse(str, 0, strlen(str) - 1);
 
    printf("Reverse of the given string is %s", str);
 
    return 0;
}
*/

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//Another Methord 

#include <stdio.h>
void reverseSentence() 
{
    char c;
    scanf("%c", &c);
    if (c != '\n') 
    {
        reverseSentence();
        printf("%c", c);
    }
}

int main() 
{
    printf("Enter a sentence: ");
    reverseSentence();
    return 0;
}