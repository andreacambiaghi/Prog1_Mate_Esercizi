/******************************************************************************

                            Esercizio 7

*******************************************************************************/
#include <stdio.h>

int bell(int);
int bin(int, int);
int fatt(int);

int main(void) {
    
    int num = 0, ris = 0;
    
    do{
        
        if(num < 0)
            printf("DEVE ESSERE MAGGIORE O UGUALE A 0");
       
        printf("Inserisci un numero >= 0 ");
        scanf("%d",&num);
    
    }while(num < 0);
    
    printf("B(%d) = %d",num,bell(num));

    return 0;
    
}//main

int bell(int n){
    
    int app = 0;
    
    if(n == 0)
        return 1;
        
    else{
        
        for(int i = 0 ; i < n ; i++){
            
            app += (bin(n - 1, i) * bell(i));

        }//for
        
        return app;

    }//else
         
}//bell

int bin(int n, int k){
    
    int ris = 0;
    
    ris = fatt(n) / (fatt(k) * fatt(n-k));
    
    return ris;
    
}//bin

int fatt(int n){
    
    if(n == 0)
        return 1;
        
    else if(n == 1)
        return 1;
        
    else
        return n * fatt(n-1);
    
}//fatt
