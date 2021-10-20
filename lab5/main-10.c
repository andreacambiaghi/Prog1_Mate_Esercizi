/******************************************************************************

                            Esercizio 10

*******************************************************************************/
#include <stdio.h>
#include "funzioni.h"

int main(void) {
    
    int n;
    printf("Inserisci dimensione matrice quadrata ");
    scanf("%d",&n);
    
    int mat1[n][n];
    int mat2[n][n];
    int ris[n][n];

    printf("\nRiempi prima matrice: \n");
    riempi(n,mat1);
    printf("\nRiempi seconda matrice: \n");
    riempi(n,mat2);
    prodotto(n,mat1,mat2,ris);
    printf("\nAllora: \n");
    stampa(n,mat1);
    printf("*\n");
    stampa(n,mat2);
    printf("=\n");
    stampa(n,ris);
    
    return 0;
    
}//main
