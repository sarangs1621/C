#include <stdio.h>
int carry=1;
void ones(char*,int);
void twos(char*,int);
int main()
{
    int n;
    printf("Enter the number of bits do you want to enter :");
    scanf("%d",&n);
    char binary[n+1];
    printf("\nEnter the binary number : ");
    scanf("%s", binary);
    printf("\nThe twos complement of a binary number is : ");
    ones(binary,n);
    return 0;
}
void ones(char *binary,int n)
{
    char onescomplement[n+1];
    for(int i=0;i<n;i++)
    {
        if(binary[i]=='0')
        onescomplement[i]='1';
        else if(binary[i]=='1')
        onescomplement[i]='0';
    }
    onescomplement[n]='\0';
    twos(onescomplement,n);
}
void twos(char *onescomplement,int n)
{
    char twoscomplement[n+1];
    for(int i=n-1; i>=0; i--)
    {
        if(onescomplement[i] == '1' && carry == 1)
        {
            twoscomplement[i] = '0';
        }
        else if(onescomplement[i] == '0' && carry == 1)
        {
            twoscomplement[i] = '1';
            carry = 0;
        }
        else
        {
            twoscomplement[i] = onescomplement[i];
        }
    }
    twoscomplement[n]='\0';
    printf("%s",twoscomplement);
}