/******************************************************************************

                                Esercizio 13

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main(void) {
    
    double somma = 0,media,varianza,scarto,app;
    int dim;
    
    printf("Inserisci dimensione vettore: ");
    scanf("%d",&dim);
    
    double numeri[dim];
    
    for(int i = 0; i < sizeof(numeri)/sizeof(double); i++){
    
        printf("Inserisci %d numero ",(i+1));
        scanf("%lf",&numeri[i]);
        somma += numeri[i];
        
    }//for
    
    media = somma / dim;
    
    somma = 0;
    
    printf("Media: %g",media);
    
    for(int i = 0; i < sizeof(numeri)/sizeof(double); i++){
    
        somma += pow((numeri[i]-media),2);
        
    }//for
    
    varianza = somma / dim;
    
    printf("\nVarianza: %g",varianza);
    
    scarto = sqrt(varianza);
    
    printf("\nScarto: %g",scarto);
    
    somma = 0;
    
    for(int i = 0 ; i < dim ; i++ ){
      
      for(int j = 0 ; j < dim-1 ; j++){
          
          if(numeri[j] > numeri[j+1]){
              
              app = numeri[j];
              numeri[j] = numeri[j+1];
              numeri[j+1] = app;
              
          }//if
          
      }//for
      
    }//for
    
    if(dim%2 == 0)
        printf("\nMediana: %g",numeri[(dim/2)-1]);
        
    else
        printf("\nMediana: %g",numeri[((dim+1)/2)-1]);

    return 0;
    
}//main