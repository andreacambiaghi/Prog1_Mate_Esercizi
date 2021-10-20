/******************************************************************************

                            Esercizio 7

*******************************************************************************/
#include <stdio.h>
#include "funzioni.h"

int main(void) {
    
    int n;
    printf("Inserisci dimensione matrice quadrata ");
    scanf("%d",&n);
    
    int mat[n][n];
    int tras[n][n];

    riempi(n,mat);
    printf("\nMatrice originale: \n");
    stampa(n,mat);
    trasposta(n,mat,tras);
    printf("\nMatrice Trasposta: \n");
    stampa(n,tras);
    
    return 0;
    
}//main
