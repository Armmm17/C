#include <stdio.h>


int main() {
   float num1, num2, num3, max;


   printf("Numero 1: ");
   scanf("%f", &num1);
   printf("Numero 2: ");
   scanf("%f", &num2);
   printf("Numero 3: ");
   scanf("%f", &num3);


   if(num1 > num2){
       if(num1 > num3){
           max = num1;
       } else {
           max = num2;
       }
   } else {
       if(num2 > num3){
           max = num2;
       } else{
           max = num3;
       }
   }


   printf("Il numero maggiore tra %.2f %.2f e %.2f e' %.2f", num1, num2, num3, max);


   return 0;
}

