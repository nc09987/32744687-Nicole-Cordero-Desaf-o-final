#include <iostream>
#include <cstdlib>  // Necesario para la función rand
#include <ctime>    // Necesario para la función time

const int FILAS = 4;
const int COLUMNAS = 15;

// Función para generar números enteros aleatorios entre 0 y 9
int generarNumeroAleatorio() {
    return rand() % 10; // Genera un número aleatorio entre 0 y 9
}

// Procedimiento para llenar el array con números enteros aleatorios
void llenarArray(int array[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            array[i][j] = generarNumeroAleatorio();
        }
    }
}

// Procedimiento para imprimir el array
void imprimirArray(int array[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    // Inicializar la semilla para generar números aleatorios
    srand(time(0));

    // Declarar e inicializar el array
    int numeros[FILAS][COLUMNAS] = {0};

    // Llenar el array con números enteros aleatorios
    llenarArray(numeros);

    // Imprimir el array
    std::cout << "Array generado:" << std::endl;
    imprimirArray(numeros);

    return 0;
}