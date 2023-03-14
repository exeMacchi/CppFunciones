/*
    1. Escriba una función llamada mult() que acepte dos números en punto 
       flotante como parámetros, multiplique estos dos números y despliegue 
       el resultado.
*/

#include <iostream>
#include <locale>

// Prototipos
void pedirNumeros(float& N1, float& N2);
void mult(float N1, float N2);

// Main
int main()
{
    setlocale(LC_ALL, "es_ES");
    float num1{}, num2{};

    pedirNumeros(num1, num2);
    mult(num1, num2);
    
    return 0;
}

//Declaraciones
void pedirNumeros(float& N1, float& N2)
{
    std::cout << "Ingrese el primer número: "; std::cin >> N1;
    std::cout << "Ingrese el segundo número: "; std::cin >> N2;
    std::cout << "\n";
}

void mult(float N1, float N2)
{
    std::cout << "Resultado multiplicación: " << N1 * N2 << "\n";
}