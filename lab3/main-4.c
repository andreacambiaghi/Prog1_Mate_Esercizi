/******************************************************************************

                                Esercizio 4

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main(void) {
    
    double a,b,c,d,x1,x2;
    
    printf("Inserisci i tre coefficenti\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("%gx^2 + %gx + %g\n",a,b,c);
    
    if(a == 0){
     
        do{
            
            printf("a deve essere diverso da 0 \n");
            scanf("%lf",&a);
            
        }while(a == 0);
        
    }//if
    
    d = pow(b,2) - 4*a*c;
    
    if(d > 0){
        
       printf("Ci sono due soluzioni reali distinte ");
       
       x1 = ((-1)*b + sqrt(d) / 2*a)*(-1);
       x2 = ((-1)*b - sqrt(d) / 2*a)*(-1);
       
       printf("x1 = %g e x2 = %g",x1,x2);
       
    
    }//if
    
    else if(d == 0){
        
        printf("Ci sono due soluzioni reali coincidenti ");
        
        x1 = ((-1)*b / 2*a)*(-1);

        printf("x1 = x2 = %g",x1);
        
    }//if
    
    else{
        
        printf("Non ci sono soluzioni reali");
        
    }//else
    
    return 0;
    
}//main
