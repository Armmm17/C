#include <stdio.h>
#include <string.h>

int main() {
    char stringa[100] = "bierwikiupthanknoddyblottershammerrefrainmanacoolthgrounder";
    char k = 'k';
    int pos_k = k - 'a'; 
    int scelta;
    int i = 0;

    
    /*
    printf("Inserisci una stringa di massimo 50 caratteri: ");
    gets(stringa);
	printf("Inserisci il carattere k: ");
    scanf(" %c", &k);
	*/
	
	printf("%s\n", stringa);
    printf("1. Cifratura\n");
    for(i=0; i<strlen(stringa); i++) {
        if(stringa[i] >= 'a' && stringa[i] <= 'z') { 
            stringa[i] += pos_k;
        }
    }
    printf("%s", stringa);
    
    printf("\n2. Decifratura\n");
    for(i=0; i<strlen(stringa); i++) {
        if(stringa[i] >= 'a' && stringa[i] <= 'z') { 
            stringa[i] -= pos_k; 
        }
    }
    printf("%s", stringa);
    
    return 0;
}
