'use strict'

window.addEventListener('load', function(){

    function intervalo(){
    //TIMERS
    var tiempo = setInterval(function(){
    console.log('set interval se esta ejecutando');
    //cambia el tamaño a los 3 Segundos

    var encabezado = document.querySelector("h1")

    if (encabezado.style.fontSize == "50px" ) {
        encabezado.style.fontSize = "70px";
        encabezado.style.color = "#ffd700";
        encabezado.style.backgroundColor = "black";
    }else{
        encabezado.style.fontSize = '50px';
        encabezado.style.color = " #87CEEB";
        encabezado.style.backgroundColor = "black";
    }

    }, 1000);
    return tiempo;
}
var tiempo = intervalo();

var stop = document.querySelector('#stop');

stop.addEventListener('click', function(){
    alert("detener letrero");
    clearInterval(tiempo);

});

var start = document.querySelector('#start');

start.addEventListener('click', function(){
    alert("continuar letrero");
    intervalo();

});

});



