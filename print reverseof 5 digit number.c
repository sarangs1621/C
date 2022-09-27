#include<stdio.h>

int main()
{
    int n,a,b,c,d,e,r=0;
    printf("Enter a 5 digit number:");
    scanf("%d",&n);
    
    e=n%10;
    r=r+e*10000;
    
    d=(n/10)%10;
    r=r+d*1000;
    
    c=(n/100)%10;
    r=r+c*100;
    
    b=(n/1000)%10;
    r=r+b*10;
    
    a=(n/10000);
    r=r+a*1;
    
    printf("The reversed number is:%d",r);
    return 0;
}
