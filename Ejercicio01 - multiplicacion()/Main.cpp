/*
    1. Escriba una funci�n llamada mult() que acepte dos n�meros en punto 
       flotante como par�metros, multiplique estos dos n�meros y despliegue 
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
    std::cout << "Ingrese el primer n�mero: "; std::cin >> N1;
    std::cout << "Ingrese el segundo n�mero: "; std::cin >> N2;
    std::cout << "\n";
}

void mult(float N1, float N2)
{
    std::cout << "Resultado multiplicaci�n: " << N1 * N2 << "\n";
}