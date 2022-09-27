//call by reference
#include <stdio.h>
void increment(int*i)
{
    *i = *i+1;
}
int main()
{
    int num = 20;
    increment(&num);
    printf("%d",num);
    return 0;
}