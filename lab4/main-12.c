/******************************************************************************

                                Esercizio 12

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#define dim 5

int main(void) {
    
    int vettore[dim],app = 0,conta = 0;

    for(int i = 0 ; i < dim ; i++){
        
        printf("Inserisci %d numero ",(i+1));
        scanf("%d",&vettore[i]);
        
    }//for
    
    printf("vettore: ");
    
    for(int i = 0 ; i < dim ; i++){
        
        printf("%d - ",vettore[i]);    
        
    }//for
    
    for(int i = 0 ; i < dim ; i++ ){
      
      for(int j = 0 ; j < dim-1 ; j++){
          
          if(vettore[j] > vettore[j+1]){
              
              app = vettore[j];
              vettore[j] = vettore[j+1];
              vettore[j+1] = app;
              conta += 1;
              
          }//if
          
      }//for
      
    }//for
    
    printf("\nVettore ordinato: ");

    for(int i = 0 ; i < dim ; i++){
        
        printf(" %d - ",vettore[i]);    
        
    }//for
    
    printf("\nCon %d scambi",conta);
    
    printf("\nN^2 / 2 = %g",(pow(dim,2)/2));
    
    return 0;
    
}//main