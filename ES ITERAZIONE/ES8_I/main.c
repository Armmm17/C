/*
Scrivere un programma che calcoli i primi numeri di Fibonacci minori o uguali
a N, con N introdotto dalla tastiera. Ad esempio i primi numeri di Fibonacci
minori o uguali a 10 sono: 1 1 2 3 5 8.
*/

#include <stdio.h>

int main() {
   int n, first = 1, second = 1, next, i;

   printf("Inserisci il numero di elementi della sequenza di Fibonacci: ");
   scanf("%d", &n);

   printf("I primi %d numeri di Fibonacci sono: ", n);
   i = 0;
   while (next < n) {
      if (i <= 1) {
         next = 1;
      } else {
         next = first + second;
         first = second;
         second = next;
      }
      if(next > n){
      	break;
	  } else {
      printf("%d ", next);
	  }
      i++;
   }

   return 0;
}
