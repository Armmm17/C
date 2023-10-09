/*
ES2
Dato un carattere alfabetico minuscolo: 
• scrivere una funzione che restituisca il corrispondente carattere maiuscolo; 
• scrivere una funzione che, fornito un offset in input (valore intero), restituisca il carattere “shiftato” (con rotazione) in avanti di offset posizioni; 
• scrivere un main che chiede all’utente il carattere e il tipo di operazione a cui è interessato (maiuscolo o shifting) e, dopo aver controllato che l’input sia corretto, stampa il risultato dell’operazione richiesta.
*/

#include <stdio.h>

char toUp(char);
char shift(char, int);

int main(){
	char c = 'c';
	char carattere;
	int valShift;
	int n = 4;
	printf("\n%c", toUp(c));
	printf("\n%c", shift(c, n));
	
	int opzione;
	menu();
	printf("Op: ");
	scanf("%d", opzione);
	while(opzione!=0){
		switch(opzione){
			case 1:
				printf("\nInserisci il carattere: ");
				scanf("%c", &carattere);
				printf("\n%c", toUp(carattere));
				menu();
				printf("\nOp: ");
				scanf("%d", opzione);
				break;
			case 2:
				printf("\nInserisci il carattere: ");
				scanf("%c", &carattere);
				printf("\nInsersci valore x shift: ");
				scanf("%d", &valShift);
				printf("\n%c", shift(c, n));
				menu();
				printf("\nOp: ");
				scanf("%d", opzione);
				break;
			case 0:
				break;
		}
	}
}


char toUp(char c){
	char ret = toupper(c);
	return ret;
}

char shift(char c, int n){
	char ret;
	ret = c+n;
	return ret;
}
int menu(){
	printf("\nOpzioni:");
	printf("\n\t0) Esci");
	printf("\n\t1) Converti in maiuscolo;");
	printf("\n\t2) Shifta char;");
}
