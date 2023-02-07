// 2. Escriba una funci�n llamada al_cuadrado() que calcule el cuadrado del valor que se le transmite y despliegue el 
//    resultado. La funci�n deber� ser capaz de elevar al cuadrado n�meros flotantes.

#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;
using std::endl;

//Prototipos
void pedirDatos(float& numero);
void alCuadrado(float numero);


//Main
int main()
{
    setlocale(LC_ALL, "es_ES");
    float numero;

    pedirDatos(numero);
    alCuadrado(numero);

    return 0;
}

//Declaraciones
void pedirDatos(float& numero)
{
    cout << "Ingrese un n�mero: "; cin >> numero;
}

void alCuadrado(float numero)
{
    cout << "\n" << numero;

    numero *= numero;

    cout << " al cuadrado es: " << numero << endl;
}
