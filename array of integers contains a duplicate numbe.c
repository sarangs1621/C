#include <stdio.h>
int main()    
{    
       
    int a[10];
    printf("Enter the elemnts :");
    
    for (int i=0;i<10;i++)
			scanf("%d",&a[i]);
        
      
    int l = sizeof(a)/sizeof(a[0]);    
        
    printf(" Position of duplicate elements in given array: \n");    
     
    for(int i = 0; i < l; i++) {    
        for(int j = i + 1; j < l; j++) {    
            if(a[i] == a[j])    
                printf("%d\n", j);    
        }    
    }    
    return 0;    
}  
