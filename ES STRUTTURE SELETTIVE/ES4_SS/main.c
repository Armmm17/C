#include <stdio.h>


int main() {
   float num1, num2, num3, temp;


   printf("Inserisci il primo numero: ");
   scanf("%f", &num1);
   printf("Inserisci il secondo numero: ");
   scanf("%f", &num2);
   printf("Inserisci il terzo numero: ");
   scanf("%f", &num3);


   if (num1 > num2) {
       temp = num1;
       num1 = num2;
       num2 = temp;
   }
   if (num1 > num3) {
       temp = num1;
       num1 = num3;
       num3 = temp;
   }
   if (num2 > num3) {
       temp = num2;
       num2 = num3;
       num3 = temp;
   }

   printf("I numeri in ordine decrescente sono: %.2f %.2f %.2f", num3, num2, num1);

   return 0;

}

