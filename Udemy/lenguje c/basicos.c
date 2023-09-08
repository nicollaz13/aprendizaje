int main (){
    /*
    Declarar variable
     int var;
     int var =10;
    Imprimir variable 
    printf("%d\n", my_variable);
    + - Suma
    - - Resta
    * - Multiplicación
    / - División
    % - Resto de la división
    < - Menor que
    > - Mayor que
    <= - Menor o igual que
    >= - Mayor o igual que
    == - Igual
    != - Diferente de
    && - Y lógico
    || - O lógico
    */
   // Comparación de igualdad
int a = 10;
int b = 10;

if (a == b) {
  printf("a y b son iguales.\n");
} else {
  printf("a y b no son iguales.\n");
}

// Comparación de desigualdad
int c = 10;
int d = 20;

if (c != d) {
  printf("c y d son diferentes.\n");
} else {
  printf("c y d no son diferentes.\n");
}

// Operación lógica AND
int e = true;
int f = false;

if (e && f) {
  printf("e y f son ambos true.\n");
} else {
  printf("e o f son false.\n");
}

// Operación lógica OR
int g = true;
int h = false;

if (g || h) {
  printf("g o h es true.\n");
} else {
  printf("g y h son false.\n");
}
// Este programa pide al usuario un número y luego imprime un mensaje dependiendo del número.

//#include <stdio.h>

int main(void) {
  int numero;

  printf("Introduce un número: ");
  scanf("%d", &numero);

  // Utilizamos un if-else para imprimir un mensaje diferente dependiendo del número.
  if (numero == 1) {
    printf("El número es 1.\n");
  } else if (numero == 2) {
    printf("El número es 2.\n");
  } else {
    printf("El número no es 1 ni 2.\n");
  }

  // Utilizamos un while para imprimir los números del 1 al 10.
  int i = 1;
  while (i <= 10) {
    printf("%d\n", i);
    i++;
  }

  // Utilizamos un for para imprimir los números del 1 al 10, pero omitiendo el número 5.
  for (i = 1; i <= 10; i++) {
    if (i == 5) {
      continue;
    }

    printf("%d\n", i);
  }

  // Utilizamos un switch para imprimir un mensaje diferente dependiendo del número.
  switch (numero) {
    case 1:
      printf("El número es 1.\n");
      break;
    case 2:
      printf("El número es 2.\n");
      break;
    default:
      printf("El número no es 1 ni 2.\n");
      break;
  }

  return 0;
}

}