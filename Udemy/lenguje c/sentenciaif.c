



int main(){
    /*La condicion If 
    Sintaxis:
    if(condicion){
        codigo;
    }
 //prueba de divisibilidad   
    */
   int n1,n2;
   printf("digite dos numero");
   scanf("%i %i",&n1,&n2);
    if (n1 % n2 == 0)
    {
        printf("%i es divisible por %i",n1,n2);
    }else{
        printf("%i no es divisible por %i",n1,n2);
    }
    

/*
comprobar a traves de un programa si un alumno aprobo o no un 
examen (aprueba si es mas de 3.5)
*/
 float nota;
 printf("digite una nota");
 scanf("%f",&nota);
 if (nota >= 3.5)
 {
     printf("el alumno aprobo el examen");
 }else{
     printf("el alumno no aprobo el examen");
 }

/*
Comprobar si un numero digitado por el usuario es positivo o negativo
*/
 int num;
 printf("digite un numero");
 scanf("%i",&num);
 if (num >= 0)
 {
     printf("el numero es positivo");
 }else{
     printf("el numero es negativo");
 }
/*
Visualizar la tarifa de la luz segun el gasto de la corriente elecrtrica
para un gasto menor de 1.000kw la tarifa es 1.2 
entre 1.000y 1.850kw es 1.0 y 
mayor de 1.850kw 0.9 
*/

#define tarifa1 1.2;
#define tarifa2 1.0;
#define tarifa3 0.9;

int main(){
    float gasto, tasa;
    printf("digite el total de gasto:");
    scanf("%f",&gasto);
    if (gasto <= 1.000){
        tasa = tarifa1;
    }else if (gasto>1.000 && gasto<=1.850){
        tasa = tarifa2;
    }else { 
        tasa = tarifa3;
    }
    printf("la tarifa es: %f",tasa);

    /*
    Determinar si un numero es par o impar
    */
   
    int num;
    printf("digite un numero");
    scanf("%i",&num);
    if (num % 2 == 0)
    {
        printf("%i es par",num);
    }else{
        printf("%i es impar",num);
    }
 


}


    return 0;
}