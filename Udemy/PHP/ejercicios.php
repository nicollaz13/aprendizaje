<?php
/*
Ejercicio numero 1
Crear dos variables "pais" y "continente" y mostrar su valor por pantalla
*/
echo "<h1> Ejercicio numero 1</h1>";
$pais = "colombia";
$continente = "america";

echo "<h2>".$pais."</h2>"; // tipo String
echo "<h2>".$continente."</h2>";// tipo String

echo "<hr/>";
/*
Ejercicio numero 2
Escribir un script en PHP que nos muestre por pantalla todos los
numeros pares
*/
echo "<h1> Ejercicio numero 2</h1>";
$numero = 0;
/*
for ($i =1; $i <= 10; $i++){
    if ($i % 2 == 0){
        echo $i "par";
    }
    == igual
    != diferente
}
*/
while ($numero <= 10) {
    if ($numero % 2 != 0) {
        echo "<h2>Los numero impares son $numero </h2>";
    }
    $numero++;
 }

 echo "<hr/>";
/*
Ejercicio numero 3
Imprima por pantalla los cuadrados es el numero multiplicado de los 40
Condicion que sea con while 
*/
echo "<h1> Ejercicio numero 3</h1>";

$i =1;

while ($i <= 10){
    $numero = $i * $i;
    echo "$i al cuadrado es: ".$numero."<br/>";
    $i++;
}

echo "<hr/>";
/*
Ejercicio numero 4 
recoger dos numeros de la url parametro GET y  hacer todas las operaciones 
basicas de la calculadora suma, resta divion y multiplicacion
*/
echo "<h1> Ejercicio numero 4</h1>";
if(isset($_GET["numero1"]) && isset($_GET["numero2"]) && isset($_GET["numero3"])) {
$numero1 = $_GET["numero1"];
$numero2 = $_GET["numero2"];

echo "El numero 1 es: ".$numero1."<br/>";
echo "El numero 2 es: ".$numero2."<br/>";

echo "<h2>$numero1+$numero2 = ".($numero1+$numero2) . "<br/> </h2>";
echo "<h2>$numero1-$numero2 = ".($numero1-$numero2) . "<br/> </h2>";
echo "<h2>$numero1*$numero2 = ".($numero1*$numero2) . "<br/> </h2>";
echo "<h2>$numero1/$numero2 = ".($numero1/$numero2) . "<br/> </h2>";
}else{
    echo "No se ha enviado los datos";
}
echo "<hr/>";
/*
Ejercicio numero 5
Program que muestre todos los numeros que lleguen por GET 
*/
echo "<h1> Ejercicio numero 5</h1>";

    $numero1 = 4;
    $numero2 = 10;
    if($numero1<=$numero2){
    for ( $i =$numero1; $i<=$numero2  ; $i++) {
        echo $i."<br/>";
    }  
    }else{
        echo "El numero 1 debe de ser menos a el 2";
    }  
    echo "<hr/>";
    /*
    Ejercicio numero 6
    Mostrar todas las tablas de multiplicar deñ 1 al 10 en un tabla html 
    */
    echo "<h1> Ejercicio numero 6</h1>";



    echo "<table border=1px>" ."<tr>";
     echo "<tr>";
     for ($cabezera = 1; $cabezera <= 10; $cabezera++) {
         echo "<td> tabla de $cabezera</td>"; 
         for ($i = 1; $i <= 10; $i++)
         {
             echo "<td>$cabezera x $i = ".($cabezera*$i)."</td>";
         }
     }
    echo "</tr>";
echo "</table>";

echo "<hr/>";
/*
Ejercicio numero 7
Mostrar todas las tablas de multip
*/
echo "<h1> Ejercicio numero 7</h1>";

    $numero3 = 4;
    $numero4 = 10;
    for($i = $numero3; $i <=$numero4; $i++) {           
    if ($i % 2 != 0) {
                echo "el numero $i es impar  </br> ";
            
      }else{
        echo "el numero $i es par</br>";
    }  
}
?>