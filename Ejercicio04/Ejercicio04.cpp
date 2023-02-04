// 4. Escriba un programa que devuelva la parte fraccionaria de cualquier n�mero introducido por el usuario.
//    Por ejemplo, si se introduce el n�mero 256.879, deber�a desplegarse el n�mero 0.879.

#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;
using std::endl;

//Prototipos
void pedirDatos(double& numero);
double parteFraccionaria(double numero);

//Main
int main()
{
    setlocale(LC_ALL, "es_ES");

    double numero, resultado = 0;

    pedirDatos(numero);
    resultado = parteFraccionaria(numero);

    cout << "\nLa parte fraccionaria del n�mero: " << resultado << endl;

    return 0;
}


//Declaraciones

void pedirDatos(double& numero)
{
    cout << "Ingrese un n�mero con decimales: "; cin >> numero;
}

double parteFraccionaria(double numero)
{
    double resultado = 0;
    int numeroSinComa = numero;

    resultado = numero - numeroSinComa;

    return resultado;
}
