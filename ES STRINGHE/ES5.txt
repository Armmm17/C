/*
Es 1: Acquisire da tastiera una parola. Salvare la parola in
un vettore di caratteri di 50 caratteri. Stampare il numero
di vocali e di consonanti che formano la parola. 
*/
#include <stdio.h>

int contaVoc(char*);
int contaCons(char*);

int main(){
	int cons = 0;
	char str[50];
	printf("Inserisci la stringa: ");
	scanf("%s", &str);
	printf("%s", str);
	
	printf("\nVocali: %d", contaVoc(str));
	cons = strlen(str) - contaVoc(str);
	printf("\nConsonanti: %d", cons);
	
	
	return 0;
}

int contaVoc(char* str){
	int count = 0, i = 0, j = 0;
	int arrVoc[10] = {65, 69, 73, 81, 85, 97, 101, 105, 111, 117};
	for(i = 0; i < strlen(str); i++){
		for(j = 0; j < 10; j++){
			if(str[i] == arrVoc[j]){
				count++;
			}
		}
	}
	
	return count;
}

