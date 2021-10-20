/******************************************************************************

                            Esercizio 12

*******************************************************************************/
#include <stdio.h>
#include "funzioni.h"

int main(void) {
    
    int n;
    double scal = 0;
    printf("Inserisci dimensione matrice quadrata ");
    scanf("%d",&n);
    printf("\nInserisci λ: ");
    scanf("%lf",&scal);
    
    int mat1[n][n];
    int mat2[n][n];
    int mat3[n][n];
    int ris1[n][n];
    int ris2[n][n];
    int ris3[n][n];

    printf("\nRiempi A: \n");
    riempi(n,mat1);
    printf("\nRiempi B: \n");
    riempi(n,mat2);
    printf("\nRiempi C: \n");
    riempi(n,mat3);
    
    printf("\n(1) A(B + C) = AB + AC");
    
    printf("\nA(B + C)\n");
    
    somma(n, mat2, mat3, ris1);
    prodotto(n, mat1, ris1, ris2);
    stampa(n, ris2);

    printf("\nAB + AC\n");
    prodotto(n, mat1, mat2, ris1);
    prodotto(n, mat1, mat3, ris2);
    somma(n, ris1, ris2, ris3);
    stampa(n, ris3);
    
    printf("\n(2) λ(AB) = (λA)B");
    
    printf("\nλ(AB)\n");
    prodotto(n, mat1, mat2, ris1);
    scalare(n, ris1, ris2, scal);
    stampa(n, ris2);
    
    printf("\n(λA)B\n");
    scalare(n, mat1, ris1, scal);
    prodotto(n, ris1, mat2, ris2);
    stampa(n, ris2);
    
    printf("\n(3) (AB)t = BtAt");
    
    printf("\n(AB)t\n");
    prodotto(n, mat1, mat2, ris1);
    trasposta(n, ris1, ris2);
    stampa(n, ris2);
    
    printf("\nBtAt\n");
    trasposta(n, mat2, ris1);
    trasposta(n, mat1, ris2);
    prodotto(n, ris1, ris2, ris3);
    stampa(n, ris3);
        
    return 0;
    
}//main
