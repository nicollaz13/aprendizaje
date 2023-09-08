'use strict'

/*

1. pida 6 numero por pantalla y que los meta en un array
2. mostrar el array entero (todos sus elementos) en el cuerpo de la pagina y en la consola 
3. Ordenarlo y mostrarlo 
4. invertir su orden y mostrarlo
5. mostrar cuantos elementos tiene el array 
6. busqueda de un valor introducido por el usuario, diga si esta en el arrary y su indice 
 */ 
//1. pida 6 numero por pantalla y que los meta en un array
 

function mostrararray(elementos, textCustom = "") {

        
    document.write("<h1>Contenido del array"+textCustom+"</h1>");
    document.write("<ul>");
    numeros.forEach((elemento, index) =>{
        document.write("<strong>"+elemento+"</strong><br/>");
    
    });
    document.write("<ul>");
}

//pedir los numeros
var numeros = new Array(6);
for(var i =0; i<= 5; i++) {
    numeros[i] = parseInt(prompt("Introduce un numero",0));
}


//mostrar en el cuerpo de la pagina
mostrararray(numeros);

//mostrar array por consola 
console.log(numeros);

//ordenar el array con la funcion sort la primera 
numeros.sort(function(a, b){return a-b}); 
mostrararray(numeros, ' ordenados');

//invvertir numeros y mostrar
numeros.reverse();
mostrararray(numeros, ' desordenados');

// cuantos elementos tiene un array 
document.write("<h2>el array tiene "+numeros.length+" elementos </h2>");
 

// busqueda 
var busqueda = parseInt(prompt("Busca un numero",0));
var posicion = numeros.findIndex(numero => numero == busqueda);

if(posicion && posicion != -1) {
document.write("<h2>ENCONTRADO</h2>");
document.write("<h2>posicion de la busqueda: "+posicion+"</h2>");
}else{
document.write("<h2> NO ENCONTRADO</h2>");
    
}



