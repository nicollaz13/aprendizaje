<!DOCTYPE html>
<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Formulario en php</title>
</head>
<body>
    <h1>formulario en php</h1>
    <form method="POST" action="recibir.php">
    <p>
    <label for="nombre">Nombre</label>
    <input type="text" name="nombre">
</p >

    <p>
    <label for="apellido">apellido</label>
    <input type="text" name="apellidos">    
    </p>
    <input type="submit" value="Enviar">

</form>
</body>
</html>