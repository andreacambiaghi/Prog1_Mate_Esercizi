/******************************************************************************

                                Esercizio 2

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main(void) {
    
    int n,somma1 = 0,somma2 = 0;
    
    printf("Inserisci un numero >=1 ");
    scanf("%d",&n);
    
    while(n < 1){
        
        printf("IL NUMERO DEVE ESSERE MAGGIORE O UGUALE DI 1 ");
        scanf("%d",&n);
        
    }//while
    
    for(int i = 1; i <= n; i++ ){
     
        somma1 += pow(i,2);

    }//for
    
    somma2 = n*(n+1)*(2*n+1)/6;
    
    
    printf("%d %d",somma1,somma2);
    
    return 0;
    
}//main
