#include <iostream>
using namespace std;

int main() {
    int numero1, numero2, numero3;
    int producto, suma;

    cout << "Ingresa el primer numero: ";
    cin >> numero1;

    cout << "Ingresa el segundo numero: ";
    cin >> numero2;

    cout << "Ingresa el tercer numero: ";
    cin >> numero3;

    if (numero1 > 0) {
        producto = numero1 * numero2 * numero3;
        cout << "El producto de los numeros es: " << producto << endl;
    } else {
        suma = numero1 + numero2 + numero3;
        cout << "La suma de los numeros es: " << suma << endl;
    }

    return 0;
}

