#include <cstdlib>
#include <iostream>

using namespace std;

int Suma(int a, int b, int c){
    int resultado;
    resultado = a + b + c;
    cout << "La suma de los numeros es: " << resultado << endl;
    return resultado;
}
int Multiplicacion(int numero1, int numero2, int numero3){
    int resultado;
    resultado = numero1 * numero2 * numero3;
    cout << "El producto de los numeros es: " << resultado << endl;
    return resultado;
}
int main(){
    int Numero1, Numero2, Numero3;
    int Resultado_Multiplicacion, Resultado_Suma;
    cout << "Ingrese los valores para los numeros: " << endl;
    cin >> Numero1 >> Numero2 >> Numero3;

    if(Numero1 > 0){
        Resultado_Multiplicacion = Multiplicacion(Numero1, Numero2, Numero3);
    } else {
        Resultado_Suma = Suma(Numero1, Numero2, Numero3);
    }
    return 0;
}
