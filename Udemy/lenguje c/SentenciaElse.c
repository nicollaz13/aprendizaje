/*
sentenciaif-else
    if (condition)
    accion
    else
    accion
*/



int main() {

    float nota;
    printf("Digite la nota de examen");
    scanf("%f", &nota);
    if (nota >= 10.5) {
        printf("Estudiante aprobado");
    } else {
        printf("Estudiante no aprobado");
    }



     /*Calcular el mayor de dos numeros leidos del teclado y visualizarlo 
    en pantalla*/
    int num1, num2;
    printf("Escriba los dos numeros numero: ");
    scanf("%i %i",&num1,&num2);
    if(num1>num2){
        printf("%i Es mayor que: %i",num1,num2);
    }else if(num1==num2){
        printf("%i Es igual a: %i",num1,num2);
    }else{
        printf("%i Es mayor que: %i",num2,num1);
    }

    /*ingrese un numero y calcule e imprima su raiz cuadrada, Si el numero es negativo
    imprima el numero y un mensaje que diga tiene raiz imaginaria*/
    int numero;
    float resultado;
    printf("Ingrese un numero: ");
    scanf("%i", &numero);
    resultado = sqrt(numero);
    if(resultado<0){
        printf("%i tiene raiz imaginaria: %2f ",numero, resultado);
    }else{
        printf("%i tiene raiz cuadrada: %2f",numero,resultado);
    }

    /*ingresa por teclado el nombre y el signo de cualquier persona e imprima el 
    nombre solo si la persona es signo aries, de lo contrario que elimine no es
    signo aries*/
  char nombre[100];
    char signo[10];
    printf("Ingrese su nombre: ");
    gets(nombre);
    printf("Ingrese su signo: ");
    gets(signo);
    if(strcmp(signo, "Aries") ==0 || strcmp(signo, "aries") ==0){
        printf("%s es signo aries",nombre);
    }else{
        printf("%s no es signo aries",nombre);
    }
    /*gets sirve para guardar strings o char*/


/*ingresar por teclado el nombre la edad y el sexo de cualquier persona e 
imprima, solo si la persoina es de sexo masculino el nombre de la persona*/

char nombre [100];
char genero [100];
int edad;

    printf("Ingrese su nombre: ");
    gets(nombre);
    printf("Ingrese su genero: ");
    gets(genero);
    printf("Ingrese su edad: ");
    scanf("%i", &edad);
    
    if(strcmp(genero,  "masculino")==0 ){
        printf("%s es de sexo masculino y tiene: %i",nombre);
    } else if(strcmp(genero, "Masculino")==0){
        printf("%s es de sexo masculino y tiene: %i",nombre);
    }else{
        printf("%s es de %s y tiene: %i",nombre,genero,edad);
    }

/*
pida al usuaro que escriba dos numeros y diga cual es el mayor*/

int num1;
printf("escriba un numero: ");
scanf("%f",&num1);
if (num1/2 == 0)
{
    printf("el numero es par %i",num1);
}else{
    printf("el numero es impar %i",num1);
}

/*ejercicio borrado en pantalla al pulsar 1
libreria= #include<stdio.h>

*/

char tecla;
printf("----------------------------------------");
printf("----------------------------------------");
printf("----------------------------------------");
printf("----------------------------------------");
printf("----------------------------------------");
printf("----------------------------------------");
printf("----------------------------------------");
printf("----------------------------------------");
printf("----------------------------------------");

printf("Ingrese la tecla: 1 ");
scanf("%c",&tecla);
if (tecla == 1)
{
    system("cls");
    printf("usted a limpiado la pantalla");
}else{
    printf("usted no a limpiado la pantalla");
}










    