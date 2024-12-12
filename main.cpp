#include <iostream>
#include <fstream>
#include "matematicas/matematicas.h"
#include "geometria/Geometria.h"
#include "ciencias/Ciencias.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Por favor, proporciona un argumento de texto.\n";
        return 1;
    }

    // Abrir archivo para escritura
    std::ofstream file("ejemplo.txt");
    if (!file.is_open()) {
        std::cerr << "Error al abrir el archivo para escritura.\n";
        return 1;
    }

    int num;
    std::cout << "Ingresa un numero: ";
    std::cin >> num;
    file << "El número ingresado es: " << num << std::endl;

    matematicas::Matematica m;
    file << "Parte Ejercicio 1" << std::endl;
    file << "Suma: " << m.suma(2, 3) << std::endl;
    file << "Resta: " << m.resta(2, 3) << std::endl;

    file << "Área círculo: " << Geometria::calculocirculoarea(2) << std::endl;
    file << "Área triángulo: " << Geometria::calculocirculoarea(3) << std::endl;
    file << "Área cuadrado: " << Geometria::calculocuadradoarea(4) << std::endl;
    file << "Perímetro círculo: " << Geometria::calculocirculoperimetro(3) << std::endl;
    file << "Perímetro triángulo: " << Geometria::calculotrianguloperimetro(4, 3, 5) << std::endl;
    file << "Perímetro cuadrado: " << Geometria::calculocuadradoperimetro(4) << std::endl;

    file << "Energía calculada: " << Ciencias::Fisica::calculoenergia(3) << std::endl;

    file.close();
    std::cout << "Resultados guardados en el archivo ejemplo.txt.\n";
    return 0;
}
