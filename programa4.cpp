#include <iostream>
#include <string>

const int NUM_ESTUDIANTES = 10;

void ingresarNombres(std::string nombres[]) {
    std::cout << "Ingrese los nombres de los estudiantes:" << std::endl;
    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        std::cout << "Estudiante " << i+1 << ": ";
        std::getline(std::cin >> std::ws, nombres[i]);
    }
}

void ingresarNotas(int notas[][3]) {
    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        std::cout << "Ingrese las notas del estudiante " << i+1 << " (corte 1, corte 2, corte 3): ";
        std::cin >> notas[i][0] >> notas[i][1] >> notas[i][2];
    }
}

void calcularNotaFinal(int notas[][3], float notasFinales[]) {
    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        notasFinales[i] = (notas[i][0] + notas[i][1] + notas[i][2]) / 3.0;
    }
}

void mostrarTabla(std::string nombres[], int notas[][3], float notasFinales[]) {
    std::cout << "Estudiante\tNota 1er Corte\tNota 2do Corte\tNota 3er Corte\tNota Final" << std::endl;
    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        std::cout << nombres[i] << "\t\t" << notas[i][0] << "\t\t" << notas[i][1] << "\t\t" << notas[i][2] << "\t\t" << notasFinales[i] << std::endl;
    }
}

int main() {
    std::string nombres[NUM_ESTUDIANTES];
    int notas[NUM_ESTUDIANTES][3];
    float notasFinales[NUM_ESTUDIANTES];

    ingresarNombres(nombres);
    std::cin.ignore(); // Limpiar el buffer del teclado
    ingresarNotas(notas);
    calcularNotaFinal(notas, notasFinales);
    mostrarTabla(nombres, notas, notasFinales);

    return 0;
}