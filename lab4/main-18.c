/******************************************************************************

                                Esercizio 18

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    
    char parola[100];
    
    printf("Inserisci stringa: ");
    fgets(parola,100,stdin);
    
    printf("Parola Inserita: %s",parola);
    
    for(int i = 0 ; i < strlen(parola) ; i++){
        
        if(isupper(parola[i]) == 0)
            parola[i] -= 32;
        
    }//for
    
     printf("Parola Maiuscola: %s",parola);

    return 0;
    
}//main