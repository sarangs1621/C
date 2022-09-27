#include <stdio.h>

int main() {
   int array[10] = {10, 11, 63, 34, 57, 99, 87, 58, 34, 6};
   int i, largest, second;

   if(array[0] > array[1]) {
      largest = array[0];
      second  = array[1];
   } else {
      largest = array[1];
      second  = array[0];
   }

   for(i = 2; i < 10; i++) {
      if( largest < array[i] ) {
         second = largest;
         largest = array[i];
      } else if( second < array[i] ) {
         second =  array[i];
      }
   }

   printf("Second largest number - %d \n", second);   

   return 0;
}
