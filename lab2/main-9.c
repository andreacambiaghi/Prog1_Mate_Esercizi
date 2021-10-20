/******************************************************************************

                                Esercizio 9

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>

int main(void) {
    
    char c;
    printf("Inserisci carattere: ");
    c = getchar();
    
    if(isdigit(c) != 0) 
        printf("Il carattere è un numero");
        
    else{
        
        if(isupper(c) != 0)
            printf("Il carattere è maiuscolo ");
        
        if(islower(c) != 0)
            printf("Il carattere è minuscolo");
        
    }//else
    
    return 0;
    
}//main
