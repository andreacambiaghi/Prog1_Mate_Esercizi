/******************************************************************************

                            Esercizio 1

*******************************************************************************/
#include <stdio.h>

int lung(char *);

int main(void) {
    
    char str[BUFSIZ];
    
    printf("Inserisci stringa: ");
    fgets(str,BUFSIZ,stdin);
    
    printf("Lunghezza: %d",lung(str));
    
    return 0;
    
}//main

int lung(char *s){
    
    if(s == NULL)
        return -1;
        
    else if(*s == '\0')
        return 0;
        
    else if(*s == '\n')
            return 0;
            
        else
            return lung(s + 1) + 1;
    
}//lung
