def operacion_suma(a, b, c):
    Resultado_Suma = a + b + c
    print("El resultado de la suma es :", Resultado_Suma)
    return Resultado_Suma


def operacion_multiplicacion(aa, bb, cc):
    Resultado_Producto = aa * bb * cc
    print("El resultado de la multiplicacion es :", Resultado_Producto)
    return Resultado_Producto


def main():
    Numero1 = int(input("Ingrese Numero 1:\n"))
    Numero2 = int(input("Ingrese Numero 2:\n"))
    Numero3 = int(input("Ingrese Numero 3:\n"))

    if (Numero1 > 0):
        resulMul = operacion_multiplicacion(Numero1, Numero2, Numero3)
    else:
        resulSum = operacion_suma(Numero1, Numero2, Numero3)


if __name__ == "__main__":
    main()