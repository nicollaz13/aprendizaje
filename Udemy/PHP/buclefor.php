<?php

/*
BUCLE FOR

for(inicializar un contador, condicio, incrememta el valor de contador){
    bloque de instrucciones 
}
*/
 
$resultado =0;

for($i = 0; $i <= 10; $i++){ 
    $resultado += $i; //$resultado = $resultado+ $i; 
    echo $resultado;
    }
echo $resultado;

 echo "<br>";

 //tabla de multiplicar con for
$numero = 2;

for($contador = 1; $contador <= 10; $contador++){
    echo "$numero x $contador = ".($numero*$contador)."<br/>";
}    
/* intruccion de break
Salir de la ejecucion del bucle
*/

?>