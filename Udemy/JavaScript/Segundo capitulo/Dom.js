'use strict'
//Dom documentation object models

//edicion de estilo desde la consola

function cambiacolor(color){
    caja.style.background = color;
}

//edicion de estilos desde JS
//var caja = document.getElementById('cajita');
var caja = document.querySelector("#Titulo");

caja.innerHTML = '<h1>Pagina Principal</h1>';
caja.style.background = "black";
caja.style.padding = "5px";
caja.style.color = "#efb810";
caja.style.fontSize = "30px";
caja.style.textAlign = "center";
/*

//conseguir elementos por la etiqueta div
var totaldiv = document.getElementsByTagName('div'); 
/*var contendiv = totaldiv[2]; //ayuda a seleccionar el div depende del numero
contendiv.innerHTML = "<h2>submemu</h2>";//edicion del div en este caso 2
contendiv.style.color = "#efb810";*//*
var valor;
for (valor in totaldiv) { //recorre cada elemnto del totaldiv
    if (typeof totaldiv[valor].textContent == 'string') { //verifica si valor es tipo texto
        var parrafo = document.createElement("p"); //crea elemento tipo parrafo
        var texto = document.createTextNode(totaldiv[valor].textContent);/*
        Extrae el contenido de texto del elemento actual en "totaldiv" y 
        lo convierte en un nodo de texto.
        */ /*
        parrafo.appendChild(texto);
        document.querySelector("#miseccion").appendChild(parrafo);/*
        Busca en el documento HTML un elemento con el id "miseccion" y 
        agrega el párrafo creado anteriormente como su hijo.
        */ 
    
/*console.log(valor);*/

//conseguir elementos por su clase 
var submenu1 = document.getElementsByClassName("mp");

submenu1[0].style.background = "#191970";
submenu1[0].style.color = "#efb810";
submenu1[0].style.width = "200px";
submenu1[0].style.padding = "10px";
submenu1[0].style.border = "15px solid";

var submenu = document.getElementsByClassName("sm");

submenu[0].style.background = "#191970";
submenu[0].style.color = "#efb810";
submenu[0].style.width = "200px";
submenu[0].style.padding = "10px";
submenu[0].style.border = "5px solid";

console.log(submenu);
console.log(caja);