/*
Es 2: Acquisire da tastiera una parola. Salvare la parola in
un vettore di 50 caratteri e stampare a video una nuova
stringa ottenuta trasformando i caratteri maiuscoli in
minuscoli e viceversa i caratteri minuscoli in maiuscoli.
*/

#include <stdio.h>
#include <ctype.h>

char* conv(char* str);

int main(){
	char prova[50] = "PrOvA"; // pRoVa PrOvA
	char ret[50];
	int i = 0;
	printf("\n%s", prova);
	printf("\n%s", conv(prova));
	
	
	printf("\n%s", ret);
	
	
	
	return 0;
}

char* conv(char* str){
	char ret[50] = "";
	int i = 0;
	for(i = 0; i < strlen(str); i++){
		if(str[i] >= 65 || str[i] <= 90){
			ret[i] = str[i] + 32;
		} else if(!(str[i] >= 65 || str[i] <= 90)) {
			ret[i] = str[i] - 32;
		}
	}
	
	return ret;
}

