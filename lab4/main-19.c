/******************************************************************************

                                Esercizio 19

*******************************************************************************/
#include <stdio.h>

int main(void) {
    
    char stringa[100],sottostringa[100];
    char *risultato;
    
    printf("Inserisci Stringa: ");
    scanf("%s",stringa);
    
    getchar();

    printf("Inserisci Sottostringa: ");
    scanf("%s",sottostringa);

    risultato = strstr(stringa,sottostringa);
    
    if(risultato)
        printf("SI");
        
    else
        printf("NO");

    return 0;
    
}//main