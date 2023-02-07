// 1. Escriba una funci�n llamada mult() que acepte dos n�meros en punto flotante como par�metros, multiplique estos 
//    dos n�meros y despliegue el resultado.

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
    cout << "Ingrese el primer n�mero: "; cin >> N1;
    cout << "Ingrese el segundo n�mero: "; cin >> N2;
}

void mult(float N1, float N2)
{
    float resultado = 0;

    resultado = N1 * N2;

    cout << "\nEl resultado es: " << resultado << endl;
}
