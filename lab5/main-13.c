/******************************************************************************

                            Esercizio 13

*******************************************************************************/
#include <stdio.h>
#include "funzioni.h"

int main(void) {

    int n,m;
    printf("Inserisci dimensione matrice quadrata ");
    scanf("%d",&n);

    int mat[n][n];
    int ris[n][n];
    int id[n][n];

    printf("\nRiempi matrice: \n");
    riempi(n,mat);
    printf("\nInserisci esponente: ");
    scanf("%d",&m);

    identita(n,id);

    for(int i = 1 ; i <= m ; i++){

        potenza(n, mat, id, ris);

    }//for

    stampa(n, id);

    return 0;

}//main
