// 5. Escriba una plantilla de funci�n llamada despliegue() que despliegue el valor del argumento �nico que se le 
//    transmite cuando es invocada la funci�n.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//Prototipos
template <class tipoD>
void despliegue(tipoD dato);
void pedirDatos(int& numEntero, float& numFlotante, double& numDouble, char& caracter);


//Main
int main()
{
    setlocale(LC_ALL, "es_ES");

    int numEntero = 0;
    float numFlotante = 0;
    double numDouble = 0;
    char caracter = '?';

    pedirDatos(numEntero, numFlotante, numDouble, caracter);
    cout << endl;
    despliegue(numEntero);
    despliegue(numFlotante);
    despliegue(numDouble);
    despliegue(caracter);


    return 0;
}

//Declaraciones
template <class tipoD>
void despliegue(tipoD dato)
{
    cout << "El dato es: " << dato << endl;
}


void pedirDatos(int& numEntero, float& numFlotante, double& numDouble, char& caracter)
{
    cout << "Ingrese un n�mero entero: "; cin >> numEntero;
    cout << "Ingrese un n�mero real (float): "; cin >> numFlotante;
    cout << "Ingrese un n�mero real (double): "; cin >> numDouble;
    cout << "Ingrese un caracter: "; cin >> caracter;
}

