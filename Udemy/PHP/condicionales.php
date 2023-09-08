<?php
/* 
Condicionales 
if (Condicion){
    Intrucciones
}else{
    Instrucciones    
}


Otras instrucciones 
operadores de comparaciones
== igual
=== identico
!= diferente
<> Diferencia 
!== no identico 
< menor que 
> mayor 
>= mayor igual
<= menor igual

*/
 
$color = "Verde";

if ($color == "rojo") {
    echo "<h1>el color es rojo</h1>";
    }else{
        echo "<h1>el color no es rojo</h1>";
    }

    echo "<br>";

$year = 2023;     
if($year == 2023){
 echo "<h1>el año es 2023</h1>";
 }else{
     echo "<h1>el año no es 2023</h1>";
 }
 echo "<br>";

 // segundo ejemplo

$nombre = "julian";
$continente = "Europa";
$ciudad = "bogota";
 $edad = 22;
 $mayor_edad = 18;
 if($edad >= $mayor_edad){
     echo "<h1>".$nombre." es mayor de edad <br></h1>";
     if($continente== "latam"){
     echo "<h1>La ciudad es de:".$ciudad."</h1>";
    }else{
        echo "<h1>No es de latam</h1>";
    }
 }else{
     echo $nombre." <h1>No es mayor de edad</h1>";
 }

 echo "<br>";
//ejemplo numero 3

$dia = 3;

if($dia == 1){
    echo "<h1>Lunes</h1>";   
    }else if($dia == 2){
        echo "<h1>Martes</h1>";
    }else if($dia == 3){
        echo "<h1>Miercoles</h1>";
    }else if($dia == 4){
        echo "<h1>Jueves</h1>";
    }else if($dia == 5){
        echo "<h1>Viernes</h1>";
    }else if($dia == 6){    
        echo "<h1>Sabado</h1>";
    }else if($dia == 7){
        echo "<h1>Domingo</h1>";
    }else{
        echo "<h1>Dia no valido</h1>";
    }  
 echo "<br>";

 $edad1 = 18;
 $edad2 = 64;
$edad_oficial = 20;
if ($edad_oficial >= $edad1 && $edad_oficial <= $edad2) {
    echo "<h1> Esta en edad de trabajar</h1>";
    }else{
        echo "<h1> No esta en edad de trabajar</h1>";
    }
    echo "<br>";
$pais = "Colombia";
    if($pais == "Mexico" || $pais == "España" || $pais == "Colombia"){
        echo "<h1>El pais es de habla española </h1>";
    }else{
        echo "<h1>no es de habla española</h1>";
    }
 // ejemplo de switch


 $dia = 4;
 switch ($dia) {
    case 1:
        echo "<h1> Lunes</h1>";
        break;
    case 2:
        echo "<h1>Martes</h1>";
        break;
    case 3:
        echo "<h1>Miercoles</h1>";
        break;
    case 4:
        echo "<h1>Jueves</h1>";
        break;
    case 5:
        echo "<h1>Viernes</h1>";
        break;
    case 6:
        echo "<h1>Sabado</h1>";
        break;
    case 7:
        echo "<h1>Domingo</h1>";
        break;
    default:
        echo "<h1>Dia no valido</h1>";
        break;

}


// ejemplo GOTO
goto  marca;
echo "<h3>Intrucciones 1 </h3>";
echo "<h3>Intrucciones 2 </h3>";    
echo "<h3>Instrucciones 3 </h3>";
echo "<h3>Instucciones 4 </h3>";

marca:
echo "<h3>Salta a esta instruccion </h3>";



?>