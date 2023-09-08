// premedio de tres notas 
//#include <stdio.h>
 
 int main (){
    float notas1,nota2,nota3, promedio, resultado;

    printf(" cual es la primera nota \n ");
    scanf("%f", &notas1);

    printf("Cual es la segunda nota \n ");
    scanf("%f", &nota2);

    printf("Cual es la tercera nota \n ");
    scanf("%f", &nota3);

    promedio = (notas1 + nota2 + nota3)/3;

    if(promedio == 5){
        printf("el estudiante es excelente: %f ",promedio);
    }else if (promedio >= 4 && promedio <5){ 
        printf("el estudiante es sobresaliente: %f ",promedio);
    }else if (promedio >= 3 && promedio <4){
        printf("el estudiante es aceptable e: %f ",promedio);
    }else if (promedio >= 2 && promedio <3){
        printf("el estudiante es es insuficiente: %f ",promedio);
    }else if (promedio >= 1 && promedio <2){
        printf("el estudiante a reprobado: %f",promedio);    
    }else if(promedio >= 0 && promedio <1){
        printf("el estudiante a reprobado: %f",promedio);
    }else{
        printf("la nota es invalida : %f",promedio);
    }     


 }