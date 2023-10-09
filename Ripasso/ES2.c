#include <stdio.h>

char rUpper(char);
char rShift(char, int);
void mostraMenu();

int main(){
	/*
	mostraMenu();
	printf("\n%c", rUpper('a'));
	printf("\n%c", rShift('C', 16));
	*/
	
	int opzione;
	char c = 'a';
	int offset = 0;
	mostraMenu();
	printf("\nInsersci l'opzione: ");
	scanf("%d", &opzione);
	while(opzione != 0){
		switch(opzione){
			case 1:
				printf("\nInsersci il carattere: ");
				scanf("%c", &c);
				printf("\nCarattere Maiuscolo: %c", rUpper(c));
				mostraMenu();
				printf("\nInsersci l'opzione: '");
				scanf("%d", &opzione);
				
			case 2:
				printf("\nInsersci il carattere: ");
				scanf("%c", &c);
				fflush(stdin);
				printf("\nInsersci l'offset: ");
				scanf("%d", &offset);
				
				printf("\nCarattere Shiftato: %c", rShift(c, offset));
				mostraMenu();
				printf("\nInsersci l'opzione: ");
				scanf("%d", &opzione);
				
		}
		
	}
	
	return 0;
}

char rUpper(char c){
	return c - 32;	
}

char rShift(char c, int offset){
	return c + offset;
}

void mostraMenu(){
	printf("\nOpzioni:");
	printf("\n\t0) Esci; ");
	printf("\n\t1) Converti in upper; ");
	printf("\n\t2) Shifta with offset & future lol; ");
}
