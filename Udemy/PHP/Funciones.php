<?php

/*
Funciones 
una funcion es un conjunto de instrucciones de la agrupadasbajo un nombre
concreto y que ouedes reutilizarlo solamente llamandolo a la funcion tantas veces como queramos

function nombrefuncion($paramtro){
    Conjunto de instrucciones 
}

para llamarla:

nombrefuncion($paramtro);
nombrefuncion($paramtro);
*/
/*
function muestraNombres (){
    echo "nico<br>";
    echo "julian<br>";
}
 muestraNombres();
 PARA COLOCAR UN DATO EN LA URL DESPUES DEL .PHP SE COLOCA /?PARAMETRO=
*/



/* TABLA DE MULTIPLCAR DENTRO DE UNA FUNCION 
function tabla($numero){
    echo "<h3> tabla de multiplicar $numero </h3>";
    for ($i=1; $i <= 10; $i++) { 
        echo $numero." x $i = ".($numero*$i)."<br>";
    }
}
*/
/*
ESCRIBIR EL NUMERO EN LA URL 
if(isset($_GET["numero"])){
    tabla($_GET["numero"]);
}else{
    echo "Error no hay numero";
}

*/
/* TABLA DE MULTIPLICAR CON FUNCIONES DEL 1  AL 10
    for($i=1; $i<=10; $i++){
        tabla($i);
    }

*/
//ejemplo 3


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

// parametros opcionales 

/*
function calculadora (Negrita=false)
*/

//ejemplo 4 
function devuelveNombre($nombre){
    return  "El nombre es: ". $nombre. "<br/>";
}

$var = devuelveNombre("nico");
echo devuelveNombre("jorge");

echo 'ejem: '.$var;

?>