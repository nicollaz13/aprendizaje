
//#include <stdio.h>
//#include<math.h>


void rectangulo(){
    int altura =0;
    int base =0;
    int area =0;
    int continuar = 0;
    printf("Ingrese la altura del rectangulo: ");
    scanf("%i",&altura);
    printf("Ingrese la base del rectangulo: ");
    scanf("%i",&base);
      if (altura < 0 || base < 0) {
        printf("Solo se admiten números positivos.\n");
        rectangulo();
        }else{
    area = base * altura;
    printf("El area del rectangulo es: %i\n", area);
    /*una vez finalice preguntar si quiere contiunuar o no */
        while (continuar != 1 )
    {
      printf("\nSi desea sacar nuevamente el area del rectangulo presione el numero 1 \n");
      printf("Si desea regresar al menu presione el numero 2");
      printf("\nSi desea salir presione el numero 3 \n");
      scanf("%i", &continuar);
      if (continuar == 1){
        rectangulo();
      }else if (continuar == 2)
      {
        main();
      }else if (continuar == 3){
        exit(0);
      }
      
    }
        }
}

void triangulo(){
    int altura =0;
    int base =0;
    int area =0;
    int continuar = 0;
    printf("Ingrese la altura del triangulo: ");
    scanf("%i",&altura);
    printf("Ingrese la base del triangulo: ");
    scanf("%i",&base);
      if (altura < 0 || base < 0) {
        printf("Solo se admiten números positivos.\n");
        triangulo();
        }else{
    area = (base * altura) / 2;
    printf("El area del triangulo es: %i\n", area);
     while (continuar != 1 )
    {
      printf("\nSi desea sacar nuevamente el area del triangulo presione el numero 1 \n");
      printf("Si desea regresar al menu presione el numero 2");
      printf("\nSi desea salir presione el numero 3 \n");
      scanf("%i", &continuar);
      if (continuar == 1){
        triangulo();
      }else if (continuar == 2)
      {
        main();
      }else if (continuar == 3){
        exit(0);
      }
      
    }
}
}
void circulo(){
    int radio =0;
    float area =0;
    int continuar = 0;
    printf("Ingrese el radio del circulo: ");
    scanf("%i",&radio);
      if (radio < 0 ) {
        printf("Solo se admiten números positivos.\n");
        circulo();
      }else{
    area = (radio * radio) * 3.14;
    printf("El area del circulo es: %.2f\n", area);
     while (continuar != 1 )
    {
      printf("\nSi desea sacar nuevamente el area del circulo precione el numero 1 \n");
      printf("Si desea regresar al menu presione el numero 2");
      printf("\nSi desea salir presione el numero 3 \n");
      scanf("%i", &continuar);
      if (continuar == 1){
        circulo();
      }else if (continuar == 2)
      {
        main();
      }else if (continuar == 3){
        exit(0);
      }
      
    }
}
}

void salir() {
  printf("Saliendo del programa\n");
  exit(0);
}
int main(){
/*realiza un menu con tres opciones*/
    int opcion;
    printf("Bienvenido al menu\n\n");
    printf("1. Desea saber el area del cuadrado\n");
    printf("2. Desea saber el area del triangulo\n");
    printf("3. Desea saber el area del circulo\n\n");
    printf("4. Salir\n\n");
    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);
    switch(opcion){
        case 1:
            /*area del rectangulo*/
            rectangulo();
            return 0;
            break;
        case 2:
            /*area del triangulo*/
            triangulo();
            return 0;
            break;
        case 3:
            circulo();
            return 0;
            break;
        case 4:
            salir();
            return 0;
            break;
        default:
            printf("Opcion incorrecta\n");
                if (opcion != 4) {
        printf("¿Desea continuar? (S/N) : ");
        char respuesta[1];
        scanf("%s", respuesta);
    if (respuesta[0] == 's') {
        printf("¿Desea calcular el area de otra figura? (S/N): ");
        scanf("%s", respuesta);
    if (respuesta[0] == 's') {
        main();
      } else {
        salir();
      }
    }else {
      salir();
    }
  }
  return 0;
            break;
    
}

}