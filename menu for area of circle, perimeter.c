#include <stdio.h>
float AreaC(int r)
{
    return 3.14*r*r;
}
float PerC(int r)
{
    return 2*r*3.14;
}
int AreaR(int a, int b)
{
    return a*b;
}
int PerR(int a,int b)
{
    return 2*(a+b);
}
int main()
{
    int a,b,c,r;
    printf("Enter your choice : \n1-Area of a Circle \n2-Perimeter of a Circle \n3-Area of a Rectangle \n4-Perimeter of a Rectangle \n:");
    scanf("%d",&c);
    if(c==1)
    {
        printf("Enter the radius\n");
        scanf("%d",&r);
        printf("Area of the Circle = %f",AreaC(r));
    }
    else if(c==2)
    {
        printf("Enter the radius\n");
        scanf("%d",&r);
        printf("Perimeter of the Circle= %f",PerC(r));
    }
    else if(c==3)
    {
        printf("Enter the length and breadth\n");
        scanf("%d%d",&a,&b);
        printf("Area of the Rectangle = %d",AreaR(a,b));
    }
    else if(c==4)
    {
        printf("Enter the length and breadth\n");
        scanf("%d%d",&a,&b);
        printf("Perimeter of the Rectangle = %d",PerR(a,b));
    }
    return 0;
}