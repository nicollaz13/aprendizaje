/*#include<stdio.h>*/

int main (){

/*1.PEdir 2 numeros al usuario
  2.Sumarlos, restarlos, multiplicar y dividir*/
int a;
int b;

printf("Ingrese dos numeros numero: ");
scanf("%i %i", &a, &b);


printf("El resultado de la suma es: %i", a+b);

printf("\nEl resultado de la resta es: %i", a-b);

printf("\nEl resultado de la multiplicacion es: %i", a*b);

printf("\nEl resultado de la division es: %i", a/b);

/*convertir de grados celsius a grados fahrenheit*/

float celsius;
float fahrenheit;

printf("\nIngrese una temperatura en grados celsius: ");
scanf("%f", &celsius);

fahrenheit = (celsius * 1.8) + 32;

printf("\nLa temperatura en grados fahrenheit es: %f", fahrenheit);


/*Sacar la hipotenusa del un triangulo rectangulo
pidiendo al usuario el valor de los 2 catetos*/

float cateto1;
float cateto2;
float hipotenusa;

printf("\nIngrese el valor del primer cateto: ");
scanf("%f", &cateto1);

printf("\nIngrese el valor del segundo cateto: ");
scanf("%f", &cateto2);
/*
para matematica mas compleja 
se agrega libreria
#include<math.h>
sqrt:se utiliza para calcular la raíz cuadrada de un número. 
Pow:se utiliza para calcular la potencia de un número.  
*/

hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));

printf("\nLa hipotenusa es: %f", hipotenusa);

return 0;

/*calcula las longitudes de una circunferencia*/

int radio;
float PI= 3.1416;
float circuferencia;

printf("\nIngrese el radio de la circunferencia: ");
scanf("%i", &radio);
circuferencia = 2 * PI * radio;
printf("\nLa circunferencia es: %f", circuferencia);


/*Calcular el area de un trapecio*/

float base;
float basem;
float altura;
float area;

printf("\nIngrese la base del trapecio: ");
scanf("%f", &base);

printf("\nIngrese la base menor del trapecio: ");
scanf("%f", &basem);

printf("\nIngrese la altura del trapecio: ");
scanf("%f", &altura);

area = ((base+ basem)* altura) / 2;

printf("\nEl area del trapecio es: %f", area);



/*Calcule la media aritmetica de 3 numeros cualquiera*/

float num1;
float num2;
float num3;
float media;

printf("\nIngrese un numero: ");
scanf("%f", &num1);

printf("\nIngrese otro numero: ");
scanf("%f", &num2);

printf("\nIngrese otro numero: ");
scanf("%f", &num3);

media = (num1 + num2 + num3) / 3;

printf("\nLa media aritmetica es: %f", media);

/*una tienda ofrece un descuento del 15% del total de la compra y un cliente
desea saber cuanto debe de pagar finalmente por su compra  */

int a,b,c,d,t,e;

printf("\nIngrese el precio del producto: ");
scanf("%i", &a);

printf("\nIngrese el descuento del producto: ");
scanf("%i", &b);

printf("\nIngrese el descuento del cliente: ");
scanf("%i", &c);

printf("\nIngrese el descuento del cliente: ");
scanf("%i", &d);
t=(a+b+c+d); 
printf("\nEl precio final sin descuento de la compra es: %i", t);
e= (t*15)/100;
printf("el descuento de la compra es: %i",e);

printf("el total a pagar es: %i",t-e);

/*Dadas las horas trabjadas de una persona calular ek valor por hora y calcular 
su salario*/

int hora;
float pagoh, salario;

printf("\nIngrese las horas trabajadas: ");
scanf("%i", &hora);

printf("Ingrese el pago por hora: ");
scanf("%f", &pagoh);

salario = hora * pagoh;

printf("\nEl salario es: %lf", salario);

/*Calcular el nuevo salario de un obresro si obtuvo un incremento del 25%
sobre su saldo anterior*/

float saldo, aumento,salariof;

printf("\nIngrese el saldo actual: ");
scanf("%f", &saldo);

aumento = saldo * 0.25;

salariof = saldo + aumento;

printf("\nEl nuevo salario es: %f", salariof);



/*
un alumno desea saber cual sera si calificacion final en la materia de 
algoritmos. Dicha calificacion se compone de los siguientes porcenatjes 
55% promedio de las tres calificacion
30% de la calificacion final del examen
15% de la calificacion final del trabajo
*/


float calificacion1, calificacion2, calificacion3,prom,exam1,exam,job1,job,resul;

printf("\nIngrese primera nota parcial: ");
scanf("%f", &calificacion1);

printf("\nIngrese segunda nota parcial: ");
scanf("%f", &calificacion2);

printf("\nIngrese tercera nota parcial: ");
scanf("%f", &calificacion3);

prom = (calificacion1 + calificacion2 + calificacion3*55)/100 ;
printf("ingrese la nota del examen:");
scanf("%f", &exam);
exam1 = (exam*30)/100;

printf("ingrese la nota del trabajo:");
scanf("%f", &job);

job1 = (job*15)/100;

resul = prom + exam1 + job1;

printf("\nLa calificacion final es: %.2f", resul);

/*
Calcular la cantidad de segundos que estan incluidos en el numero de horas, 
minutos y segundos ingresados por el usuario
*/

int horas,minutos,seg,t1,t2,t3,total;

printf("\nIngrese las horas: ");
scanf("%i", &horas);

printf("\nIngrese los minutos: ");
scanf("%i", &minutos);

printf("\nIngrese los segundos: ");
scanf("%i", &seg);

t1 = horas * 3600;

t2 = minutos * 60;

t3 = seg * 1;

total = t1 + t2 + t3;

printf("\nEl total de los segundos es: %i", total);

/*
Programa que obtenga la media geometrica de tres numeros*/

// Función para calcular la media geométrica
double mediaGeometrica(double num1, double num2, double num3){
    double producto = num1 * num2 * num3;
    double media_geometrica = pow(producto, 1.0 / 3.0); // Raíz cúbica del producto
    return media_geometrica;
}

int main() {
    double numero1, numero2, numero3;
    
    // Solicitar al usuario ingresar tres números
    printf("Ingrese el primer número: ");
    scanf("%lf", &numero1);
    
    printf("Ingrese el segundo número: ");
    scanf("%lf", &numero2);
    
    printf("Ingrese el tercer número: ");
    scanf("%lf", &numero3);
    
    // Calcular y mostrar la media geométrica
    double media_resultado = mediaGeometrica(numero1, numero2, numero3);
    printf("La media geométrica de %.2f, %.2f y %.2f es: %.2f\n", numero1, numero2, numero3, media_resultado);
    
    return 0;
}
/**/




}