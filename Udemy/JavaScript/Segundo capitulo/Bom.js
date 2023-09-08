'use strict'




function getbom(){
console.log(window.innerHeight); //altura
console.log(window.innerWidth); //ancho
console.log(window.location); //ruta
}

function redirect(){ //redirigir a la web
    window.location.href = url;
}

//otra forma de hacerlo
function abrir(url){
    window.open(url,"","width = 400,height = 400");
}

getbom();