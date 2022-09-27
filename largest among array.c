#include <stdio.h>
int main()
{
    int ar[10], max=0;
    //for user input
    for(int i=0;i<10;i++) 
    scanf("%d", &ar[i]);

    max=ar[0];

    for(int i=1;i<10;i++)
    if (ar[i]>max) 
    max=ar[i];

    printf("largest element = %d", max);
    return 0;
}
