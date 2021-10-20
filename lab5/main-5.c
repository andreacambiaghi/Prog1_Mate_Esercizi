/******************************************************************************

                                Esercizio 5

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(void) {
    
    char nome[] = "Andrea", cognome[] = "Cambiaghi";
    char *px,*py, *app;
    
    px = &nome[0];
    py = &cognome[0];
    
    printf("Prima di scambio: ");
    for(int i = 0 ; i < strlen(nome) ; i++){
        printf("%c",*(px+i));
    }//for
    
    for(int i = 0 ; i < strlen(cognome) ; i++){
        printf("%c",*(cognome+i));
    }//for
    
    app = px;
    px = py;
    py = app;
    
    printf("\nDopo scambio: ");
     for(int i = 0 ; i < strlen(cognome) ; i++){
        printf("%c",*(px+i));
    }//for
    
    for(int i = 0 ; i < strlen(nome) ; i++){
        printf("%c",*(nome+i));
    }//for

    return 0;
    
}//main
