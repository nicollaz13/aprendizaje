<?php
//operadores aritmeticos

$variable1 = 55;
$variable2 = 33;

echo ' <h1>suma entre 55 y 33 = '.($variable1 + $variable2).'</h1>';
echo ' <h1>la resta entre 55 y 33 = '.($variable1 - $variable2).'</h1>';   
echo ' <h1>la multiplicacion entre 55 y 33 ='.($variable1 * $variable2).'</h1>';  
echo ' <h1>la division entre 55 y 33 ='.($variable1 / $variable2).'</h1>'; 
echo ' <h1>resto de la division entre 55 y 33 = '.($variable1 % $variable2).'</h1>' ;

echo '<hr>';


// operadores de incremento


$year = 2019;

echo'<h1>el año actual es: '. $year.'</h1>';


$year++;

echo'<h1>el año incrementado es: '. $year.'</h1>';

$year--;

echo'<h1>el año decrementado es: '. $year.'</h1>';




// operadores de asignacion

$edad = 55; 

echo '<h2>'.$edad.'<h2/>'.'<br>';
echo '<h2>'.($edad+=5).'<h2/>'; //suma con el resultado
echo '<h2>'.($edad*=2).'<h2/>';
echo '<h2>'.($edad/=2).'<h2/>'; // guarda el ultimo resultado



?>