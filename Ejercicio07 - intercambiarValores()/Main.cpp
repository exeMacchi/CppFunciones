/*
    7. Intercambiar el valor de 2 variables utilizando paso de parámetros 
       por referencia.
*/

#include <iostream>

// Prototipos
void pedirValores(int& valorUno, int& valorDos);
void intercambiarVariable(int&, int&);

// Main
int main()
{
    int valorUno{}, valorDos{};

    pedirValores(valorUno, valorDos);
    intercambiarVariable(valorUno, valorDos);

    std::cout << "El nuevo primer valor: " << valorUno << "\n";
    std::cout << "El nuevo segundo valor: " << valorDos << "\n";

    return 0;
}

// Declaraciones
void pedirValores(int& valorUno, int& valorDos) 
{
    std::cout << "Ingrese el primer valor: "; std::cin >> valorUno;
    std::cout << "Ingrese el segundo valor: "; std::cin >> valorDos;
    std::cout << "\n";
}

void intercambiarVariable(int& valorUno, int& valorDos)
{
    int aux{ valorUno };
    valorUno = valorDos;
    valorDos = aux;
}