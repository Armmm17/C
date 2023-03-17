/*
Si realizzi una variante del programma per visualizzare un triangolo
isoscele rettangolo di lato N (vedi esempio con N = 5).
*/

#include <stdio.h>

int main(){
	int numero, r, c;
	
	printf("Inserisci il numero: ");
	scanf("%d", &numero);
	
	for (r = 1; r <= numero; r++) {
        for (c = 1; c <= r; c++) {
            if (c == 1 || r == numero || c == r)
                printf("* ");
            else if (r > 2 && c < r)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
	
	return 0;
}
