/******************************************************************************

                                Esercizio 15

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(void) {
    
    char parola[100];
    int max;
    
    printf("Inserisci parola ");
    
    fgets(parola,100,stdin);
    max = strlen(parola);
    
    while(parola[0] != '\n'){
            
        printf("Inserisci parola ");
        
        fgets(parola,100,stdin);
        
        if(max < strlen(parola))
            max = strlen(parola);

    }//while
    
    printf("Lunghezza Massima: %d",(max-1));

    return 0;
    
}//main