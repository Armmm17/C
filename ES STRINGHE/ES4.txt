/*
Scrivere un programma che chieda in input una stringa e calcoli da quanti
caratteri è composta (senza usare la funzione strlen ma cercando il carattere
'\0')
*/

#include <stdio.h>


int main(){
	char vet1[30] = "Buon Giorno\0";
	int i = 0;
	while(vet1[i] != '\0'){
		i++;
	}
	printf("%d", i);

	return 0;
}
