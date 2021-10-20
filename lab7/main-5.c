/******************************************************************************

                            Esercizio 5

*******************************************************************************/
#include <stdio.h>

int dela(int, int);

int main(void) {

    int n = 0,m = 0;

    do{

        if(n < 0){
           printf("Il primo non rispetta le condizioni");
           scanf("%d",&n);
        }//if

        else if(m < 0){
           printf("Il secondo non rispetta le condizioni");
           scanf("%d",&n);
        }//if

        else{
            printf("Inserisci due numeri >= 0 ");
            scanf("%d %d",&n, &m);
        }//else

    }while(n < 0 || m < 0);

    printf("D(%d,%d) = %d",n,m,dela(n,m));

    return 0;

}//main

int dela(int n, int m){

    if(n == 0)
        return 1;

    else if(m == 0)
        return 1;

    else
        return (dela(n - 1 , m) + dela(n , m - 1) + dela(n - 1 , m - 1));

}//dela
