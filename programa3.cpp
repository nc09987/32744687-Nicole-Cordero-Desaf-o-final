#include <iostream>
using namespace std;

void calcularMedias(int numeros[]) {
    int sumaPositivos = 0;
    int cantidadPositivos = 0;
    int sumaNegativos = 0;
    int cantidadNegativos = 0;

    for (int i = 0; i < 10; i++) {
        if (numeros[i] > 0) {
            sumaPositivos += numeros[i];
            cantidadPositivos++;
        } else if (numeros[i] < 0) {
            sumaNegativos += numeros[i];
            cantidadNegativos++;
        }
    }

    if (cantidadPositivos > 0) {
        double mediaPositivos = static_cast<double>(sumaPositivos) / cantidadPositivos;
        cout << "La media de los valores positivos es: " << mediaPositivos << endl;
    } else {
        cout << "No hay valores positivos." << endl;
    }

    if (cantidadNegativos > 0) {
        double mediaNegativos = static_cast<double>(sumaNegativos) / cantidadNegativos;
        cout << "La media de los valores negativos es: " << mediaNegativos << endl;
    } else {
        cout << "No hay valores negativos." << endl;
    }
}

int main() {
    int numeros[10];

    cout << "Ingrese 10 numeros enteros:" << endl;

    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];
    }

    calcularMedias(numeros);

    return 0;
}