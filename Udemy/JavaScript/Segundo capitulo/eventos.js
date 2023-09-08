'use strict'

//eventos de raton 

var boton = document.querySelector("#press");

//cambio de color 
function color(){
    
    var boto = boton.style.background;
    
    console.log(boto);
    if (boto === 'rgb(239, 184, 16)' || boto === '#efb810'){
    boton.style.background = "#191970";
    window.open("https://www.apple.com/co/", "width = 400,height = 400");
    }else{
    boton.style.background = "#efb810";
    window.open ("https://store.google.com/", "width = 400,height = 400");
    }
    return true;
}
//metodo que permite capturar cualquier evento captura el evento click
boton.addEventListener('click', function() {
    color();
});

//mouse out cambia si no esta sobre algo 
boton.addEventListener('mouseout', function() {

    boton.style.background = "#ccc";
});
//mouse over cambia si se para sobre algo 
boton.addEventListener('mouseover', function() {

    boton.style.background = "white";
});







