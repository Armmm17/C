/*
Si realizzi un programma in linguaggio C che legga un numero intero N e
visualizzi un quadrato di asterischi di lato N (vedi esempio con N = 5).
*/

#include <stdio.h>

int main(){
	int numero, i = 0, j = 0;
	
	printf("Inserisci il numero: ");
	scanf("%d", &numero);
	
	for(i = 0; i < numero; i++){
        printf("\n*");
		for(j = 0; j < numero-1; j++){
			printf(" *");
		}
	}
	
	return 0;
}
