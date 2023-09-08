<?php
  // Esto es un comentario en PHP

  // Declaración de una variable
  $mensaje = "Hola, mundo!";
  $var = 1;
  // Impresión de la variable
  echo $mensaje;
  echo "esto es un". $var;
  // Estructura condicional
  if (5 > 3) {
      echo "Cinco es mayor que tres.";
  } else {
      echo "Cinco no es mayor que tres.";
  }
  
  // Bucle for
  for ($i = 0; $i < 5; $i++) {
      echo "Número: " . $i . "<br>";
  }


  //ejemplo 3 Calculador 


function calculadora($numero1, $numero2, $Negrita=false){
    //conjunto de instrucciones a ejecutar 


    $suma = $numero1 + $numero2;
    $resta = $numero1 * $numero2;
    $division = $numero1 / $numero2;
    $multiplicacion = $numero1 * $numero2;
    echo "suma $suma <br/>";
    echo "resta $resta<br/>";
    echo "division $division<br/>";
    echo "multiplicacion $multiplicacion<br/>";
}

calculadora(5,10);
?>






