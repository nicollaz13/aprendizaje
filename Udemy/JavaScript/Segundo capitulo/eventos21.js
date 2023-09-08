'use strict'
//sirve para cuando se carga el scrip en html en el head 
window.addEventListener('load', function () {

    var boton_formulario = document.querySelector('#boton_formu');

    boton_formulario.addEventListener ('mouseout', function() {
    boton_formulario.style.backgroundColor = "#ccc"
    });

    boton_formulario.addEventListener('mouseover', function() {
    boton_formulario.style.backgroundColor = "white";
    });

    //focus estas dentro del foco 
    var input = document.querySelector("#campo_nombre");


    input.addEventListener('focus', function() {
        console.log("[focus] estas encima del input ");
    });

    //blur sales del foco 
    input.addEventListener('blur', function() {
        console.log("[blur] estas fuera del input ");
    });

    //keydown sucede cuando escribes 
    input.addEventListener('keydown', function(event) {
        console.log("[keydown]estas pulsado la teclado", String.fromCharCode(event.keyCode));
        //String.fromCharCode(event.keyCode) sirve para capturar lo que se escribe en el teclado 
    });

    //keypress teclada precionada
    input.addEventListener('keypress', function(event) {
        console.log("[keypress]estas pulsado la teclado", String.fromCharCode(event.keyCode));
        //String.fromCharCode(event.keyCode) sirve para capturar lo que se escribe en el teclado 
    });
    //keyup LO MISMO QUE LOS ANTERIORES CUANDO SE SUELTA LA TECLA

});
