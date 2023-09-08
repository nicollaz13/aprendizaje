<?php
/*
Variable locales: Son las que definene dentro de una funcion y no puede ser
usada fuera de la otra funcion, solo estan disponibles dentro. a no ser
se use el return  

varibles Globales: Son las que se declaraciones fuera de una funcion y estan 
disponibles dentro y fuera de las funciones 

*/
$frase = "Pinche el que lo lea ";

echo $frase;
function holamundo() {
    /*En un principio da error debido a que no se llama a la variable global */
    global $frase;

    echo"<h1> esta frase es dentro de la funcion con la variable global $frase </h1>";

    $year =2019;
    echo"<h2> esta fecha es de la funcion interna $year </h2>";

        return $year;
}

holamundo();
?>