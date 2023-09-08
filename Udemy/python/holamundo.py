#de esta forma es un comentario
"""
esto es un forma de hacer un comentario
"""
print("hola mundo")
# mostrar las variables 
texto = "imprime con variable"
numero = 25522
decimal = 0.5
print(texto)
print(numero)
print(decimal)



#concatenacion
nombre = "nico"
apellido = "hernandez"
web = "http://google.com"
lista = [1,2.3,4,5,6]
listatexto = (1, "uno ",2, "dos ",3,"tres")
tupla = ("datos que ", " no pueden", " cambiar")
diccionario = {
    "nombre":  "victor",
    "apellido": "nico",
    "curso": "Curso"
}
rango =  range(9)




print(nombre+ " " + apellido + " " + web)
print(f"{nombre} {apellido} {web} ")


#tipo de variable

nada = None
print(nada)
print(lista)
print(listatexto)
print(diccionario)
print(rango)
