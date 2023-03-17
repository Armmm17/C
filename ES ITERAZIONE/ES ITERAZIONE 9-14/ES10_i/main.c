/*
Progettare un algoritmo per risolvere il seguente problema: prendere in input
un numero intero, e verificare se questo è un numero primo, fornendo in
uscita il più piccolo divisore (maggiore di uno). Codificare l'algoritmo in un
programma C.
*/

#include <stdio.h>



int main(){
	int numero, minDiv, i = 1;
	
	printf("Inserisci un numero: ");
	scanf("%d", &numero);
	
	do{
		i++;
		minDiv = numero % i;
	} while(minDiv != 0);
	
	if(i == numero){
		printf("Il numero e' primo. ");
	} else {
		printf("non è primo, min div: %d", minDiv);
	}
	
	
	return 0;
}
