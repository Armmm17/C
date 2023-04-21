#include <stdio.h>

int main(){
	char vet[30] = "nelmezzodelcammindinostravita";
	int i = 0, k = 5;
	printf("%s", vet);
	for(i = 0; i < strlen(vet); i++){
		vet[i] += k;
	}
	printf("\n");
	printf("%s", vet);
	
	return 0;
}

