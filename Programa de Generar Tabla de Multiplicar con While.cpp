#include <iostream>
using namespace std;

int main() {
    int numero;
    int limite;
    int contador = 1;

    cout << "Ingrese un numero para generar la tabla de multiplicar: ";
    cin >> numero;
    cout << "Ingrese el limite hasta donde quiere multiplicar: ";
    cin >> limite;

    while (contador <= limite) {
        int resultado = numero * contador;
        cout << numero << " x " << contador << " = " << resultado << endl;
        contador++;
    }

    return 0;
}
