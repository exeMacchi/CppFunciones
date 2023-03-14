/*
    11. Realice una función que tome como parámetros un vector de números 
        enteros y devuelva la suma de sus elementos.
*/

#include <iostream>

// Prototipos
int sumarVector(int vNumeros[], int limite);

// Main
int main()
{
    int vNumeros[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
    int limite = sizeof(vNumeros) / sizeof(int);

    std::cout << "La suma total: " << sumarVector(vNumeros, limite) << "\n";

    return 0;
}

// Declaraciones
int sumarVector(int vNumeros[], int limite)
{
    int suma{ 0 };

    for (int i{ 0 }; i < limite; i++)
    {
        suma += vNumeros[i];
    }

    return suma;
}