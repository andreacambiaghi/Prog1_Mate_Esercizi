/******************************************************************************

                                Esercizio 14

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(void) {
    
    char parola[100];
    double caratteri = 0,stringhe = 0,media;
    
    printf("Inserisci parola ");
    
    fgets(parola,100,stdin);
    caratteri += (strlen(parola)-1);
    stringhe += 1;
    
    while(parola[0] != '\n'){
        
        printf("Inserisci parola ");
        
        fgets(parola,100,stdin);
        caratteri += (strlen(parola)-1);
        stringhe += 1;
        
    }//while
    
    stringhe -= 1; //per il /n
    
    media = caratteri / stringhe;
    
    printf("Tot Char: %g Tot String: %g Media: %g",caratteri,stringhe,media);

    return 0;
    
}//main
