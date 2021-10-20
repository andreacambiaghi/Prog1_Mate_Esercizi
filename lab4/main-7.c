/******************************************************************************

                                Esercizio 7

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(void) {
    
    char parola[100];
    int caratteri = 0;
    
    printf("Inserisci parola ");
    
    fgets(parola,100,stdin);
    caratteri += (strlen(parola)-1);
    
    while(parola[0] != '\n'){
        
        printf("Inserisci parola ");
        
        fgets(parola,100,stdin);
        caratteri += (strlen(parola)-1);
        
    }//while
    
    printf("Tot: %d",caratteri);

    return 0;
    
}//main
