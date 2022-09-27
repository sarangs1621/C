#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements\n:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the sorted array\n:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int freq = 0, i=0, p=0;
    while (i < n)
    {
        if (a[i]!=a[i+1])
        {
            freq = i+1-p;
            printf("Frequency of %d = %d\n",a[i],freq);
            p = i+1;
            i = p;
        }
        else
            i++;
    }
    return 0;   
}
//
/*
#include <stdio.h>     
int main()  
{  
    //Initialize array   
    int arr[] = {1, 2, 8, 3, 2, 2, 2, 5, 1};   
      
    //Calculate length of array arr  
    int length = sizeof(arr)/sizeof(arr[0]);  
      
    //Array fr will store frequencies of element  
    int fr[length];  
    int visited = -1;  
      
    for(int i = 0; i < length; i++){  
        int count = 1;  
        for(int j = i+1; j < length; j++){  
            if(arr[i] == arr[j]){  
                count++;  
                //To avoid counting same element again  
                fr[j] = visited;  
            }  
        }  
        if(fr[i] != visited)  
            fr[i] = count;  
    }  
      
    //Displays the frequency of each element present in array  
    printf("---------------------\n");  
    printf(" Element | Frequency\n");  
    printf("---------------------\n");  
    for(int i = 0; i < length; i++){  
        if(fr[i] != visited){  
            printf("    %d", arr[i]);  
            printf("    |  ");  
            printf("  %d\n", fr[i]);  
        }  
    }  
    printf("---------------------\n");  
    return 0;  
}  
*/