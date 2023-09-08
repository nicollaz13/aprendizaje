/*estructura general en c*/
/*libreria 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

Macro libreria 
#define (define) */ 
#define Pi 3.1416
int y= 5;// variable global 

int main(){
//para imprimir en la consola 
/* para hacer un salto de linea es es \n para hacer el slash invertido  
es con alt+ 92* \n */
printf("hola mundo :D \n como estas");

/*para definir variables local*/

int x =10;

float suma =0;

suma = Pi+x;

/*este es el orden de imprimir el comentario
 para separa el comentario se coloca dentro de las comillas 
 %i luego una , y el resultado de la variable
 printf("lo que desea que aparezca en pantalla: %(depende del resulato)", (resultado)))"
 %i = resultado de variable entera
 %f = resultado de variable float
 %c = resultado de variable char
 %s = resultado de variable string
 %d = resultado de variable int
 %o = resultado de variable octal
 %x = resultado de variable hexadecimal

 */
printf("este fue el resultado; %f",suma,"\n");

//para acortar el decimal 2decimales

printf("este fue el resultado; %.2f",suma);
 char a = "l"; //tamaño de 1byte
 short b= -15; //tanmaño de 2bytes
 int c = 1000000000; //tamaño de 4bytes
 unsigned int d = 128; // solo puede ser positivo
 long e = 10000000000000000000; //tamaño de 8bytes
 float f = 0.0f; //los numeros reales, tamaño de 4bytes
 double g = 0.0; //los numeros reales, tamaño de 8bytes 
 printf("Este es el resultado de char: %c",a);
 printf("Este es el resultado de short: %d",b);
 printf("Este es el resultado de int: %i",c);
 printf("Este es el resultado de unsigned int: %u",d);
 printf("Este es el resultado de long: %ld",e);   
 printf("Este es el resultado de float: %f",f);
 printf("Este es el resultado de double: %f",g);

//entradas y salidas (solicitud de dato)


int ab= 10;
float bc = 15.55;
char cd ='e';

printf("el resultado de int: %i \n el restultado de float es: %f \n el resultado de char: %c",ab, bc,cd);

//para guardar el valor que digite el usuario (tipo de valo, &variable)
int h;
int i;
char j[50];

printf("digite su nombre:");
gets(j);

printf("digite su edad: ");
scanf("%i",&h);


printf("digite el numero de identidad ");
scanf("%i",&i);

printf("el nombre suyo es: %s \n La edad es: %i \n el numeor de identidad es: %i",j,h,i);


int a,b,c;

a=10;
a=a+10; // es lo miimso que a+=10; 
a -= 5;
a*=2;
a/=2;
printf("digite el numero de identidad %i",a);



return 0;   
}
