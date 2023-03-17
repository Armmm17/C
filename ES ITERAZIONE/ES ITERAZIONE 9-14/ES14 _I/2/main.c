/*
Si realizzi una variante del programma per visualizzare solo i lati del
quadrato (vedi esempio con N = 5).
*/

#include <stdio.h>

int main(){
	int numero, r = 0, c = 0;
	
	printf("Inserisci il numero: ");
	scanf("%d", &numero);
	
	for(r = 1; r <= numero; r++){
		for(c = 1; c <= numero; c++){
			 if (r == 1 || r == numero || c == 1 || c == numero)
                printf("* ");
            else
                printf("  ");
		}
		printf("\n");
	}
	
	return 0;
}
