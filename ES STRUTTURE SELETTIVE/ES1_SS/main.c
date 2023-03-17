#include <stdio.h>


int main() {
   float num1, num2;
   printf("Inserisci il primo numero: ");
   scanf("%f", &num1);
   printf("Inserisci il secondo numero: ");
   scanf("%f", &num2);
   if(num1>num2){
       printf("%f",num1);
   } else{
       printf("%d", num2);
   }
   return 0;
}

