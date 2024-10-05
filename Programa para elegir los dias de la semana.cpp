#include <iostream>
using namespace std;

enum DiaSemana {
    LUNES = 1,
    MARTES,
    MIERCOLES,
    JUEVES,
    VIERNES,
    SABADO,
    DOMINGO
};

int main() {
    int dia;

    do {
        cout << "Ingrese un numero del 1 al 7 para el dia de la semana: ";
        cin >> dia;

        switch (dia) {
            case LUNES:
                cout << "El dia es Lunes." << endl;
                break;
            case MARTES:
                cout << "El dia es Martes." << endl;
                break;
            case MIERCOLES:
                cout << "El dia es Miercoles." << endl;
                break;
            case JUEVES:
                cout << "El dia es Jueves." << endl;
                break;
            case VIERNES:
                cout << "El dia es Viernes." << endl;
                break;
            case SABADO:
                cout << "El dia es Sabado." << endl;
                break;
            case DOMINGO:
                cout << "El dia es Domingo." << endl;
                break;
            default:
                cout << "Numero invalido, por favor, ingrese un nu6mero del 1 al 7." << endl;
                break;
        }
    } while (dia < 1 || dia > 7); 
    
    return 0;
}
