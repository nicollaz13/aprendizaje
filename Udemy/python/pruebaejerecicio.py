#dos strings que se lean al derecho y al reves igual
def palidromo(palabra):
    palabra = palabra.lower()
    palabra = palabra.replace(' ', '')
    return palabra == palabra[::-1]
accion = input("escribe la palabra: ")


if palidromo(accion):
    print(f"la palabra {accion} se lee igual")
else:
    print(f"la palabra {accion} NO se lee igual")

