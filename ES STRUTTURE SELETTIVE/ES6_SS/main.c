#include <stdio.h>
int main() {
   float voto;
   printf("Inserisci il voto: ");
   scanf("%f", &voto);
   switch(voto) {
       case 30:
           printf("Massimo");
           break;
       case 29:
       case 28:
       case 27:
       case 26:
           printf("Alto");
           break;
       case 25:
       case 24:
       case 23:
       case 22:
       case 21:
       case 20:
           printf("Buono");
           break;
       case 19:
       case 18:
           printf("Appena sufficiente");
           break;
       case 17:
       case 16:
       case 15:
       case 14:
       case 13:
       case 12:
       case 11:
       case 10:
       case 9:
       case 8:
       case 7:
       case 6:
       case 5:
       case 4:
       case 3:
       case 2:
       case 1:
       case 0:
           printf("Insufficiente");
           break;
       default:
           printf("Impossibile");
           break;
   }
   return 0;
}

