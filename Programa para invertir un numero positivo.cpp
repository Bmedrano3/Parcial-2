#include <iostream>
using namespace std;

int invertirNumero(int numero) {
  
    if (numero == 0) {
        return 0;
    } else {
       
        cout << numero % 10;
        return invertirNumero(numero / 10);
    }
}

int main() {
    int n;

    cout << "Ingrese un numero entero positivo: ";
    cin >> n;

    if (n < 0) {
        cout << "Por favor, ingrese un numero entero positivo." << endl;
    } else {
        cout << "El numero invertido es: ";
        invertirNumero(n);
        cout << endl;
    }

    return 0;
}
