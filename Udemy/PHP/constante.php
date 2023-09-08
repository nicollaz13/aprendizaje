<?php

/*
Constante:
Es un contenedor de informacion
que se puede variar
*/
$web = "www.google.com.co";
define('nombre','Nico hernandez');
define('web','NH');

$web = "www.google.com.co";

echo '<h1>'. nombre .'</h1>';
echo '<h1>'. web .'</h1>';
echo '<h1>'.web.'</h1>';


 //Constante predefinida 
 function conspredefin(){
 echo PHP_EXTENSION_DIR.'<br/>';
 echo __FILE__. '<br/>';
 echo __DIR__.'<br/>';
 echo __FUNCTION__.'<br/>';
 echo __LINE__.'<br/>';
 echo __NAMESPACE__.'<br/>';
 echo __TRAIT__.'<br/>';
 echo __CLASS__.'<br/>';
 echo __METHOD__.'<br/>';

}
conspredefin();
?>