/******************************************************************************

                            Esercizio 3

*******************************************************************************/
#include <stdio.h>

int cata(int);

int main(void) {
    
    int num = 0;
    
    do{
        
        if(num < 0)
            printf("DEVE ESSERE MAGGIORE O UGUALE A 0");
       
        printf("Inserisci un numero >= 0 ");
        scanf("%d",&num);
    
            
    }while(num < 0);
    
    printf("C(%d) = %d",num,cata(num));
    
    return 0;
    
}//main

int cata(int n){
    
    if(n == 0)
        return 1;
        
    else
        return (2*(2*n - 1)*cata(n - 1)) / (n + 1);
         
}//cata
