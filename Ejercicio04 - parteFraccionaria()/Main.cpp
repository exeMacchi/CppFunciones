/*
    4. Escriba un programa que devuelva la parte fraccionaria de cualquier 
       número introducido por el usuario. Por ejemplo, si se introduce el 
       número 256.879, debería desplegarse el número 0.879.
*/

#include <iostream>
#include <locale>

// Prototipos
double pedirNumero();
double parteFraccionaria(double numero);

// Main
int main()
{
    setlocale(LC_ALL, "es_ES");

    double numero{ pedirNumero() };

    double resultado{ parteFraccionaria(numero) };

    std::cout << "\nLa parte fraccionaria de " << numero << " es: " 
              << resultado << "\n";

    return 0;
}


// Declaraciones
double pedirNumero()
{
    double numero{};
    std::cout << "Ingrese un número con decimales: "; std::cin >> numero;
    return numero;
}

double parteFraccionaria(double numero)
{
    int numeroSinComa{ static_cast<int>(numero) };

    return numero - numeroSinComa;
}