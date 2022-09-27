#include <stdio.h>
void main()
{
    int num1, num2, a, b = 1;
    printf( " Enter any two positive numbers to get the LCM \n ");
    scanf(" %d %d", &num1, &num2);
    a = (num1 > num2) ? num1 : num2;
    while (b)
    {
        if (a % num1 == 0 && a % num2 == 0)
        {
            printf( " The LCM of %d and %d is %d. ", num1, num2, a);
            break;
        }
        ++a;
    }
}