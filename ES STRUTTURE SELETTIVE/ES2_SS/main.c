#include <stdio.h>


int main() {
   float numero, resto;
   printf("Inserisci il numero: ");
   scanf("%f", &numero);


   resto = ( ( numero / 2.0 ) - ( (int) ( numero / 2.0 ) ) ) * 2;
   if(numero/2==0){
       printf("Il numero e' pari");
   } else{
       printf("Il numero e' dispari");
   }


   printf("\nResto: %f",resto);


   return 0;
}

