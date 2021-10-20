/******************************************************************************

                                Esercizio 3

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int palindroma(char*);

int main(void) {
    
    char str[BUFSIZ];
    
    printf("Inserisci parola ");
    
    if(fgets(str,BUFSIZ,stdin) == NULL)
        return -1;
    
    else
        printf("Parola Inserita\n");
        
    int pal = palindroma(str);
    
    if(pal == 0)
        printf("No palindroma");
        
    else
        printf("Si palindroma");

        
    return 0;
    
}//main

int palindroma(char *s){
    
    int pal = 1;
    
    for(int i = 0, j = strlen(s)-2 ; s[i] != '\n' ; i++, j--){
        
        if(s[i] != s[j])
            pal = 0;
        
    }//for
    
    return pal;
    
}//palindroma