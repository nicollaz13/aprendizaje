
#include <stdio.h>





int main(){
    
//Mensajes De Operaciones.
int eleccion,operador1,operador2;
printf("CALCULADORA\n\n");
printf("1. Suma\n");
printf("2. Resta\n");
printf("3. Multiplicacion\n");
printf("4. Division\n");


scanf("%d",&eleccion);


switch(eleccion)

{
    case 1:
        printf("Introduce un numero: ");
        scanf("%d",&operador1);
        printf("Introduce otro numero: ");
        scanf("%d",&operador2);
        printf("\nResultado: %d",operador1+operador2);
        break;

    case 2:
        printf("Introduce un numero: ");
        scanf("%d",&operador1);
        printf("Introduce otro numero: ");
        scanf("%d",&operador2);
        printf("\nResultado: %d",operador1-operador2);
        break;

    case 3:
        printf("Introduce un numero: ");
        scanf("%d",&operador1);
        printf("Introduce otro numero: ");
        scanf("%d",&operador2);
        printf("\nResultado: %d",operador1*operador2);
        break;

    case 4:
        printf("Introduce un numero: ");
        scanf("%d",&operador1);
        printf("Introduce otro numero: ");
        scanf("%d",&operador2);
    
        if(operador2==0){
            printf("\nNo se puede dividir entre 0, intentalo otra  vez... ");
        }
        
        else {
            printf("\nResultado: %d",operador1/operador2);   
        }
        
        break;
        

       default: 
         printf("Valores Erroneos: "); 
         break; 
         
}      
        return 0;
        
    
}
       

    




 
 


