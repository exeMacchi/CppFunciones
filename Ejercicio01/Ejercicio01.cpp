// 1. Escriba una función llamada mult() que acepte dos números en punto flotante como parámetros, multiplique estos 
//    dos números y despliegue el resultado.

#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;
using std::endl;

// Prototipos
void pedirDatos(float& N1, float& N2);
void mult(float N1, float N2);

// MAIN
int main()
{
    setlocale(LC_ALL, "es_ES");
    float num1, num2;

    pedirDatos(num1, num2);
    mult(num1, num2);

    return 0;
}

//Declaraciones
void pedirDatos(float& N1, float& N2)
{
    cout << "Ingrese el primer número: "; cin >> N1;
    cout << "Ingrese el segundo número: "; cin >> N2;
}

void mult(float N1, float N2)
{
    float resultado = 0;

    resultado = N1 * N2;

    cout << "\nEl resultado es: " << resultado << endl;
}
