<?php   
/*ejemplo de funcion sobre otra funcion*/

function getNombre($nombre){
$texto = "el nombre es: $nombre";
return $texto;
}

function getNombre($apellidos){
$texto = "el nombre es: $apellidos";
return $texto;
}


function devuelvenombre($nombre, $apellidos){
   $texto = getNombre($nombre)
   ."<br/>".
   getApellidos($apellidos);
return $texto;
}

echo devuelvenombre("victor", "robles");







?>