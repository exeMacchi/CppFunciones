/*
    2. Escriba una función llamada al_cuadrado() que calcule el cuadrado del 
       valor que se le transmite y despliegue el resultado. La función deberá 
       ser capaz de elevar al cuadrado números flotantes.
*/

#include <iostream>
#include <locale>

// Prototipos
float pedirNumero();
void alCuadrado(float numero);

// Main
int main()
{
    setlocale(LC_ALL, "es_ES");

    float numero{ pedirNumero() };

    alCuadrado(numero);

    return 0;
}

// Declaraciones
float pedirNumero()
{
    float numero{};

    std::cout << "Ingrese un número: "; std::cin >> numero;
    std::cout << "\n";

    return numero;
}

void alCuadrado(float numero)
{
    std::cout << numero << " al cuadrado es: " << numero * numero << "\n";
}