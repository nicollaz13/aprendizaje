<?php

/* bucle while 
Estructura de control que repite la ejecucion de una serie de instrucciones 
tantas veces sea necesario, en base a la condicion
 
while= mientras
while (condicion){
    instrucciones
    otra instruccion
}
*/


/*

*/
$numero = 0; // Inicializa la variable $numero en 0.

while ($numero <= 10 ) { // Mientras $numero sea menor o igual a 10, ejecuta el siguiente código.
    echo $numero; // Imprime $numero.
    if ($numero != 10){ // Si $numero no es igual a 10, imprime una coma.
        echo " , " ; 
    }
    $numero++; // Incrementa $numero en 1.
}


// ejemplo 

if (isset($get["numero"])){
   $numero = $get["numero"]; 
} else {
    $numero =1;  // Inicializa la variable $numero en 1.
}

$contador =1;
echo "<h1> Tabla de multiplicar del $numero </h1>"; 
while ($contador <= 10){ // Mientras $numero sea menor o igual a 10, ejecuta el siguiente código.
    echo "<h1> $numero x $contador = ". ($numero * $contador)  ."</h1>"; // Imprime la multiplicación de $numero por 1.
    $contador++;// Incrementa $numero en 1.
}

//BUCLE DO WHILE
/*
    DO{
        instrucciones
    }while(Condicion);
    EL codigo del DO se ejecutara una vez sin importar si es falso o verdadero
    pero el while verifica si la condicion es correcta pra que se ejecute 
    la cantidad de veces necesarias
*/

$edad = 17;
$contador = 1; 

do{
  echo "Tienes permiso de entrar a estos lugares ".$contador."<br>";  
  $contador++;
}while($edad >= 18 && $contador <= 10); 




?>