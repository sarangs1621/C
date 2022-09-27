 #include <stdio.h>
 int main()
 {
     int a = 90;

     switch (a)
     {
         case 90 ... 100: printf("Grade O");
         break;

         case 80 ... 89: printf("Grade A");
         break;
     }
     return 0;
 } 