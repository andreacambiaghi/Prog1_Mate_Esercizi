/******************************************************************************

                                Esercizio 3

*******************************************************************************/
#include <stdio.h>

int main(void) {
    
    char frase[100];
    printf("Inserisci frase: ");
    fgets(frase,100,stdin);
    
    printf("Frase: %s",frase);

    return 0;
    
}//main