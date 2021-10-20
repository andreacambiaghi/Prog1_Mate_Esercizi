/******************************************************************************

                            Esercizio 9

*******************************************************************************/
#include <stdio.h>
#include "funzioni.h"

int main(void) {
    
    int n;
    double scal;
    printf("Inserisci dimensione matrice quadrata ");
    scanf("%d",&n);
    
    int mat[n][n];
    int ris[n][n];

    printf("\nRiempi matrice: \n");
    riempi(n,mat);
    printf("\nInserisci scalare: \n");
    scanf("%lf",&scal);
    scalare(n,mat,ris,scal);
    printf("\nRisultato: \n");
    stampa(n,ris);
  
    
    return 0;
    
}//main
