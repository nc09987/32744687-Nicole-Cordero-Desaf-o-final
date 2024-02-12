#include <iostream>
#include <cstdlib>

// Función para verificar si un número es primo
bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Procedimiento para generar 20 números aleatorios entre 0 y 99 y almacenarlos en un array
void generarNumerosAleatorios(int numeros[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        numeros[i] = rand() % 100;  // Genera un número aleatorio entre 0 y 99
    }
}

int main() {
    const int TAMANO = 20;
    int numeros[TAMANO];
    int numerosPrimos[TAMANO];
    int contadorPrimos = 0;

    srand(time(nullptr));  // Inicializa la semilla para los números aleatorios

    generarNumerosAleatorios(numeros, TAMANO);  // Llamada al procedimiento para generar números aleatorios

    // Identifica y almacena los números primos en un nuevo array
    for (int i = 0; i < TAMANO; i++) {
        if (esPrimo(numeros[i])) {
            numerosPrimos[contadorPrimos] = numeros[i];
            contadorPrimos++;
        }
    }

    // Muestra los números generados y los números primos
    std::cout << "Números generados: \n";
    for (int i = 0; i < TAMANO; i++) {
        std::cout << numeros[i] << " ";
    }

    std::cout << "\n\nNúmeros primos encontrados: \n";
    for (int i = 0; i < contadorPrimos; i++) {
        std::cout << numerosPrimos[i] << " ";
    }

    return 0;
}