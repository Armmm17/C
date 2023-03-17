/*
Scrivere un programma che calcola i primi N numeri di Fibonacci, con N
introdotto dalla tastiera. I numeri di Fibonacci sono una sequenza di valori
interi che inizia con i due valori fissi 1 e 1 e ogni successivo valore è la
somma dei due precedenti. Ad esempio i primi 10 numeri di Fibonacci sono:
1 1 2 3 5 8 13 21 34 55.
*/

#include <stdio.h>

int main() {
   int n, first = 1, second = 1, next, i;

   printf("Inserisci il numero di elementi della sequenza di Fibonacci: ");
   scanf("%d", &n);

   printf("I primi %d numeri di Fibonacci sono: ", n);

   for (i = 0; i < n; i++) {
      if (i <= 1) {
         next = 1;
      } else {
         next = first + second;
         first = second;
         second = next;
      }
      printf("%d ", next);
   }

   return 0;
}
