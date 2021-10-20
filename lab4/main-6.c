/******************************************************************************

                                Esercizio 6

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(void) {
    
    char nome[100];
    int ultima;
    printf("Inserisci nome: ");
    fgets(nome,100,stdin);
    
    ultima = strlen(nome);
    ultima -= 2;
    
    if(nome[ultima] == 'a' || nome[ultima] == 'e')
        printf("Femmina");
        
    if(nome[ultima] == 'i' || nome[ultima] == 'o')
        printf("Maschio");
        
    else
        printf("Non comprensibile");

    return 0;
    
}//main