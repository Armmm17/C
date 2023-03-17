#include <stdio.h>


int main() {
   char carattere;


   printf("Inserisci un carattere: ");
   scanf("%c", &carattere);


   if(carattere >= 'a' && carattere <= 'z') {
       printf("lettera minuscola\n");
   } else if(carattere >= 'A' && carattere <= 'Z') {
       printf("lettera maiuscola\n");
   } else if(carattere == '.' || carattere == ',' || carattere == ';' || carattere == '!' || carattere == '?' || carattere == ':') {
       switch(carattere) {
           case '.':
               printf("punto\n");
               break;
           case ',':
               printf("virgola\n");
               break;
           case ';':
               printf("punto e virgola\n");
               break;
           case '!':
               printf("punto esclamativo\n");
               break;
           case '?':
               printf("punto interrogativo\n");
               break;
           case ':':
               printf("due punti\n");
               break;
       }
   } else {
       printf("altro carattere\n");
   }


   return 0;
}

