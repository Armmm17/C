#include <stdio.h>


int main() {
   float voto;
   printf("Inserisci il voto: ");
   scanf("%f", &voto);
   if(voto < 18.0){
       printf("Insufficiente");
   } else if(voto == 18.0){
       printf("Appena sufficiente");
   } else if(voto > 18.0 && voto <= 20.0){
       printf("Basso");
   } else if(voto > 20.0 && voto <= 23.0){
       printf("Medio");
   } else if(voto > 23.0 && voto <= 26.0){
       printf("Buono");
   } else if(voto > 26.0 && voto <= 29.0){
       printf("Alto");
   } else if(voto == 30.0){
       printf("Massimo");
   } else if(voto > 30.0){
       printf("Impossibile");
   }
   return 0;
}

