/******************************************************************************

                                Esercizio 10

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>

int main(void) {
    
    char c,d; //d serve per l'invio dato dopo aver digitato il carattere. Ma questo invio non è quello per uscire dal programma
    
    do{
    
        printf("\nInserisci carattere: ");
        c = getchar();
        
        if(isdigit(c) != 0) 
            printf("Il carattere è un numero");
            
        if(c == '\n')
            return 0;
        d=getchar();
        if(c == '\n')
            return 0;
            
        else{
            
            if(isupper(c) != 0)
                printf("Il carattere è maiuscolo ");
            
            if(islower(c) != 0)
                printf("Il carattere è minuscolo");
            
        }//else
        
    }while(1);
    
    return 0;
    
}//main
