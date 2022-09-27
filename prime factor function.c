#include <stdio.h>
void prime(int n)
{
    int c=2;
    while(n>1)
    {
        if(n%c==0)
        {
            printf("%d ",c);
            n/=c;
            c++;
        }
        else
        {
            c++;
        }
    }
}
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("The prime factors of the given numbers is ");
    prime(n);
    return 0;
}