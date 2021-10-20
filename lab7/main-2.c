/******************************************************************************

                            Esercizio 2

*******************************************************************************/
#include <stdio.h>

int occ(char *, char);

int main(void) {
    
    char str[BUFSIZ], car;
    
    printf("Inserisci stringa: ");
    fgets(str,BUFSIZ,stdin);
    
    printf("Inserisci carattere: ");
    car = getchar();
    
    printf("Occorrenze: %d",occ(str, car));
    
    return 0;
    
}//main

int occ(char *s, char c){
    
    if(s == NULL)
        return -1;
        
    else if(*s == '\0')
        return 0;
        
    else if(*s == '\n')
            return 0;
            
        else if(*s == c)
                return occ(s + 1, c) + 1;
                
            else
                return occ(s + 1, c);
            
}//occ
