#include <stdio.h>
#include <math.h>


int main() {
   float a, b, c, delta;
   float res1, res2;
   /*
   printf("Inserisci il valore di a: ");
   scanf("%f", &a);
   printf("Inserisci il valore di b: ");
   scanf("%f", &b);
   printf("Inserisci il valore di c: ");
   scanf("%f", &c);
   */
   printf("valori");
   scanf("%f %f %f", &a, &b, &c);
   
   
   printf("L'equazione e': %fx^2 + %fx + %f = 0\n", a, b, c);
   delta = b*b-4*a*c;
   printf("Il valore di delta e': %f\n", delta);
   res1 = (-b+sqrt(delta))/(2*a);
   res2 = (-b-sqrt(delta))/(2*a);
   printf("Il primo risultato e': %f\n", res1);
   printf("Il secondo risultato e': %f", res2);


   return 0;
}

