/*
    2. Escriba una funci�n llamada al_cuadrado() que calcule el cuadrado del 
       valor que se le transmite y despliegue el resultado. La funci�n deber� 
       ser capaz de elevar al cuadrado n�meros flotantes.
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

    std::cout << "Ingrese un n�mero: "; std::cin >> numero;
    std::cout << "\n";

    return numero;
}

void alCuadrado(float numero)
{
    std::cout << numero << " al cuadrado es: " << numero * numero << "\n";
}