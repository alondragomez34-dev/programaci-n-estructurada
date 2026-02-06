def producto_o_suma():
    numero1 = int(input("Ingresa el primer numero: "))
    numero2 = int(input("Ingresa el segundo numero: "))
    numero3 = int(input("Ingresa el tercer numero: "))

    if numero1 > 0:
        producto = numero1 * numero2 * numero3
        print("El producto de los numeros es:", producto)
    else:
        suma = numero1 + numero2 + numero3
        print("La suma de los numeros es:", suma)


producto_o_suma()





