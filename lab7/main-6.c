/******************************************************************************

                            Esercizio 6

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
    
    }while(n < 0 && m < 0);
    
    for(int i = 0 ; i <= n ; i++){
    
        for(int j = 0 ; j <= m ; j++){
            
            printf("%d \t",dela(i,j));
            
        }//for j
        
        printf("\n");
    
    }//for i
    
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
