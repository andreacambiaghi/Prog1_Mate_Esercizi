/******************************************************************************

                            Esercizio 11

*******************************************************************************/
#include <stdio.h>
#include "funzioni.h"

int main(void) {
    
    int n;
    printf("Inserisci dimensione matrice quadrata ");
    scanf("%d",&n);
    
    int bol = 0;
    int a = 0, b = 0, s = 0;
    
    int mat1[n][n];
    int mat2[n][n];
    int tras[n][n];
    int scalar[n][n];
    int som[n][n];
    int prod[n][n];
    int app[n][n];
    double scal = 0;;
    
    int sc;

    do{
        
        printf("\n1- Inserisci A");
        printf("\n2- Inserisci B");
        printf("\n3- Inserisci scalare r");
        printf("\n4- Visualizza A, B, r");
        printf("\n5- Trasposta di A");
        printf("\n6- rA");
        printf("\n7- A+B");
        printf("\n8- AB");
        printf("\n9- Scambia A e B");
        printf("\n10- Esci\n");
        
        scanf("%d",&sc);
        
        switch (sc) {
            case 1:
                riempi(n,mat1);
                break;
            case 2:
                riempi(n,mat2);
                break;
            case 3:
                printf("Inserisci Scalare: ");
                scanf("%lf",&scal);
                break;
            case 4:
                if(a == 0 || b == 0 || s == 0)
                    printf("Mancano dei paramtri");
                else{
                    printf("\nA\n");
                    stampa(n,mat1);
                    printf("\nB\n");
                    stampa(n,mat2);
                    printf("Scalare: %lf",scal);
                }//else
                break;
            case 5:
                printf("\n");
                if(a == 0)
                    printf("Prima inserisci A");
                else{
                    trasposta(n, mat1, tras);
                    stampa(n, tras);
                }//else
                break;
            case 6:
                printf("\n");
                if(a == 0 || s == 0)
                    printf("Mancano dei paramtri");
                else{
                    scalare(n, mat1, scalar, scal);
                    stampa(n, scalar);
                }//else
                break;
            case 7:
                printf("\n");
                if(a == 0 || b == 0 || s == 0)
                    printf("Mancano dei paramtri");
                else{
                    somma(n, mat1, mat2, som);
                    stampa(n, som);
                }//elese
                break;
            case 8:
                printf("\n");
               if(a == 0 || b == 0)
                   printf("Mancano dei paramtri");
               else{
                    prodotto(n, mat1, mat2, prod);
                    stampa(n, prod);
               }//else
                break;
            case 9:
               if(a == 0 || b == 0 || s == 0)
                   printf("Mancano dei paramtri");
               else{
                   scambia(n, mat1, mat2, app);
                   printf("\nFatto!!");
               }//else
                break;
            case 10:
                printf("\nCiao Ciao");
                bol = 1;
                break;
            default:
                printf("Uff.. Da 1 a 10 daii");
                break;
                
        }//switch
        
    }while(sc < 1 || sc > 10 || bol == 0);

    return 0;
    
}//main





