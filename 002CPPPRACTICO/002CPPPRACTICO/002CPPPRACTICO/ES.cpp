#include <iostream>
#include "Es.h"

int leerNumero()
{
    int valor1{};
    int valor2{};
    std::cout << "Escribe un entero: ";
    std::cin >> valor1;
    std::cout << "Escribe otro entero: ";
    std::cin >> valor2;
    return valor1 + valor2;
}

void escribirRespuesta(int valor)
{
    std::cout << "Los dos enteros que has escrito suman: " << valor;

}

